#include "pso/boss/TObjDFRecover.h"

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, const void *);
s32 queue_destruction__7TObjectFv(void *);
s32 is_state_ready__14TBoss4DarkFalzFv();
s32 create__13TObjDFRecBallFPvPvPv(int, void *, void *);
void request_destroy__11TBoss4Type2FUi(void *);
u32 create_particle_emitter(void *, int);
s32 set_flags__11TBoss4Type2FPvUi(int, int);
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
s32 get_player_by_client_id(u16);
s32 play_sound_effect(int, int, int, int);
s32 spawn_effect__11TBoss4Type3Fsss(int, int, int);
}

#pragma push
#pragma fp_contract on
void TObjDFRecover::run_task() {
    f32 position[3];
    s32 current_phase;
    s32 target_address;
    u32 effect_address;
    u16 id;
    if (is_state_ready__14TBoss4DarkFalzFv() == 0) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    id = target_id;
    if ((id == 0xFFFF) || ((target_address = get_player_by_client_id(id)) == 0)) {
        queue_destruction__7TObjectFv(this);
        return;
    }
    VecCopy__FP3VecPC3Vec(position, (void *) (target_address + 0x2FC));
    countdown = countdown - 1;
    current_phase = phase;
    switch (current_phase) {
    case 0:
        if (countdown <= 0) {
            effect_address = create_particle_emitter(position, 0xEB);
            effect = (void*)effect_address;
            if (effect_address == 0U) {
                queue_destruction__7TObjectFv(this);
                return;
            }
            set_flags__11TBoss4Type2FPvUi((int) (effect), 0x40);
            countdown = 0xA;
            phase = 1;
        }
        break;
    case 1:
        copy_pos__11TNowLoadingFPvPv((int) (effect), position);
        if (countdown <= 0) {
            request_destroy__11TBoss4Type2FUi(effect);
            effect = NULL;
            spawn_effect__11TBoss4Type3Fsss(0xC0, 0xF, (int) ((s16) target_id));
            countdown = 0xB;
            phase = 2;
            return;
        }
        break;
    case 2:
        if ((countdown % 5) == 0) {
            play_sound_effect(0x4003AD19, 0, 0, 0);
            create__13TObjDFRecBallFPvPvPv((int)m_up, position, cached_position);
        }
        if (countdown <= 0) {
            queue_destruction__7TObjectFv(this);
        }
        break;
    }
}
#pragma pop

TObjDFRecover::~TObjDFRecover() {
    if (effect != 0) request_destroy__11TBoss4Type2FUi((void*)effect);
}

extern "C" {
extern const char *lbl_805D27B8;
s32 VecCopy__FP3VecPC3Vec(void *, const void *);
}
TObjDFRecover::TObjDFRecover(TObject *parent, u16 id, const f32 *position) : TObject(parent) {
    m_name = lbl_805D27B8;
    target_id = id;
    effect = NULL;
    VecCopy__FP3VecPC3Vec(cached_position, position);
    phase = 0;
    countdown = 5;
}
