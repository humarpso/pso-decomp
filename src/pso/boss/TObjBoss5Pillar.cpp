#include "types.h"
#include "pso/boss/TObjBoss5Pillar.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8028B60C___vt__15TObjBoss5Pillar {
    s32 value;
    u8 remaining[0x14];
};

struct Info_8028B488 { u8 pad[4]; u32 frames; };

struct Pillar_8028B488 {
    u8 pad[0x1C];
    s32 state;
    f32 frame;
    f32 speed;
    s32 timer;
    u8 pad2[0x38 - 0x2C];
    void *smokeParent;
    u8 pad3[0x40 - 0x3C];
    Info_8028B488 *info;
    u8 pad4[0x48 - 0x44];
    void *smoke;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__15TObjBoss5Pillar[];
extern s32 lbl_805D3B40;
extern u8 *lbl_805D4DD8;
extern const f32 lbl_805DD918;
extern const f32 lbl_805DD91C;
u8 *TObjBoss5Pillar__ct(u8 *arg0, u8 *arg1, u8 *arg2);
void queue_destruction__7TObjectFv(void *);
void fn_8028AE1C(void *);
void *__dt__15TObjBoss5PillarFv(void *arg0, s16 arg1);
s32 post_translate_matrix(void *);
s32 TObjBoss5PillarDemo__sub_8028ADB0(int);
s32 draw_ginja_model_with_motion(int, int, f32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
s32 fn_8028ADDC(int);

extern s32 boss5_common_texture_list;

void TObjBoss5Pillar::render() {
    u8 *arg0 = (u8 *)this;
    if (TObjPlayer::is_any_teammate_in_state() == 0) {
        push_matrix();
        TObjFish::set_global_param((s32)((void *) (boss5_common_texture_list)));
        post_translate_matrix((void *) (arg0 + 0x2C));
        if ((s32) *(s32 *)&this->m_1c != 3) {
            fn_8028ADDC((int) (*(s32 *)&this->m_48));
            draw_ginja_model_with_motion((int) (*(s32 *)&this->m_38), (int) (*(s32 *)&this->m_40), (f32) (*(f32 *)((s8 *)arg0 + 0x20)));
            TObjBoss5PillarDemo__sub_8028ADB0((int) (*(s32 *)&this->m_48));
        }
        draw_ginja_model_with_motion((int) (*(s32 *)&this->m_3c), (int) (*(s32 *)&this->m_44), (f32) (*(f32 *)((s8 *)arg0 + 0x20)));
        pop_matrix();
    }
}

void TObjBoss5Pillar::run_task() {
    Pillar_8028B488 *arg0 = (Pillar_8028B488 *)this;
    u32 last;
    switch (arg0->state) {
    case 0:
        break;
    case 1:
        if (arg0->smoke == NULL) {
            arg0->smoke = TObjBoss5Pillar::create_smoke(arg0, arg0->smokeParent);
        }
        arg0->frame += arg0->speed;
        last = arg0->info->frames - 1;
        if ((f32)last <= arg0->frame) {
            arg0->frame = (f32)last;
            arg0->state = 2;
        }
        break;
    case 2:
        if (arg0->smoke != NULL) {
            fn_8028AE1C(arg0->smoke);
        }
        if (arg0->timer++ > 0x1E) {
            if (arg0->smoke != NULL) {
                queue_destruction__7TObjectFv(arg0->smoke);
                arg0->smoke = NULL;
            }
            arg0->state = 3;
        }
        break;
    case 3:
        break;
    }
}

void *__dt__15TObjBoss5PillarFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TObjBoss5Pillar;
        if (*(void **)((s8 *)arg0 + 0x48) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x48)); *(s32 *)((s8 *)arg0 + 0x48) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8028B60C___vt__15TObjBoss5Pillar_size[sizeof(RecoveredGlobal_8028B60C___vt__15TObjBoss5Pillar) == 0x18 ? 1 : -1];
u8 *TObjBoss5Pillar__ct(u8 *arg0, u8 *arg1, u8 *arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8028B60C___vt__15TObjBoss5Pillar *)&__vt__15TObjBoss5Pillar).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D3B40;
    VecCopy__FP3VecPC3Vec(arg0 + 0x2C, arg2);
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    *(f32 *)((s8 *)arg0 + 0x20) = (f32) lbl_805DD918;
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) lbl_805DD91C;
    *(s32 *)((s8 *)arg0 + 0x28) = 0;
    *(s32 *)((s8 *)arg0 + 0x48) = 0;
    *(s32 *)((s8 *)arg0 + 0x38) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)lbl_805D4DD8 + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x3C) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)lbl_805D4DD8 + 0x42C)) + 0x18);
    *(s32 *)((s8 *)arg0 + 0x40) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)lbl_805D4DD8 + 0x430)) + 0x14);
    *(s32 *)((s8 *)arg0 + 0x44) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)lbl_805D4DD8 + 0x430)) + 0x1C);
    return arg0;
}

}
