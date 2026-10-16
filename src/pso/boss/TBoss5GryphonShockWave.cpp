#include "types.h"
#include "pso/boss/TBoss5GryphonShockWave.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/misc/TNowLoading.h"

extern "C" {
s32 TBoss8Dragon__sub_8005D700(void *self);
extern u8 lbl_80437F40[];
extern void *gryphon_shockwave_particle_ids_ptr;
void queue_destruction__7TObjectFv(void *);
s32 get_bml_motion(s32, s32);
s32 get_bml_model(s32, s32);
s32 TBoss8Dragon__sub_80064114(s32, void *);
s32 attach_particle_model(s32, s32, s32, s32, s32, f32);
s32 spawn_particle_effect_with_flags(void *, s32, s32);
u32 spawn_continuous_particle_effect_with_flags(void *, s32, s32);
s32 play_sound_effect(s32, void *, s32, s32);
s32 eval_bezier_curve__12TBoss8DragonFPviiPvf(void *, s32, s32, void *, f32);
s32 spawn_gryphon_tornado(s32, s32, void *, u16);
extern s32 boss5_gryphon_bml_resource;
extern s32 boss5_gryphon_texture_list;
extern void *gryphon_shockwave_particle_ids_ptr;
extern const f32 lbl_805D8EE8;
}

extern "C" {

u8 *TBoss5GryphonShockWave__ct(u8 *arg0, u8 *arg1_parent, s32 arg2, u8 *arg3, u8 *arg4, s32 arg5, s16 arg6);
void TBoss8Dragon__sub_80066A4C(void);
void *__dt__22TBoss5GryphonShockWaveFv(void *arg0, s16 arg1);
s32 vec3_add_to(void *, s32);
s32 subtract_vector(void *, void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void TBoss5GryphonShockWave::render() {  }

extern s32 __vt__22TBoss5GryphonShockWave[];

void TBoss5GryphonShockWave::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r30;
    s32 temp_r3;
    s32 particle_effect_with_flags;
    if (((TBoss8Dragon *)(*(s32 *)&this->m_38))->get_flag_bit6() != 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r0 = *(s32 *)&this->m_1c;
    switch (temp_r0) {
    case 0:
        *(s32 *)&this->m_1c = 1;
    case 1:
        eval_bezier_curve__12TBoss8DragonFPviiPvf(arg0 + 0x40, 3, 0, arg0 + 0x2C, (f32) *(s32 *)&this->m_20 / (f32) *(s32 *)&this->m_24);
        if ((u32) this->m_3c == 0U) {
            this->m_3c = spawn_continuous_particle_effect_with_flags(arg0 + 0x2C, *(s32 *)((s8 *)(*(u8 * *)&gryphon_shockwave_particle_ids_ptr) + 0), 0x40);
        }
        if ((u32) this->m_3c != 0U) {
            ((TNowLoading *)(this->m_3c))->copy_pos(arg0 + 0x2C);
        }
        temp_r3 = *(s32 *)&this->m_20;
        *(s32 *)&this->m_20 = (s32) (temp_r3 + 1);
        if (temp_r3 > (s32) *(s32 *)&this->m_24) {
            *(s32 *)&this->m_20 = 0;
            *(s32 *)&this->m_1c = 2;
        }
        break;
    case 2:
        particle_effect_with_flags = spawn_particle_effect_with_flags(arg0 + 0x2C, *(s32 *)((s8 *)(*(u8 * *)&gryphon_shockwave_particle_ids_ptr) + 4), 0x40);
        if (particle_effect_with_flags != 0) {
            attach_particle_model(particle_effect_with_flags, get_bml_model(boss5_gryphon_bml_resource, 0), boss5_gryphon_texture_list, get_bml_motion(boss5_gryphon_bml_resource, 0), 0, lbl_805D8EE8);
        }
        spawn_particle_effect_with_flags(arg0 + 0x2C, *(s32 *)((s8 *)(*(u8 * *)&gryphon_shockwave_particle_ids_ptr) + 8), 0x40);
        play_sound_effect(0x40033C13, arg0 + 0x2C, 0, 0);
        TBoss8Dragon__sub_80064114(TBoss8Dragon::get_instance_count(), arg0 + 0x2C);
        spawn_gryphon_tornado(*(s32 *)&this->m_up, *(s32 *)&this->m_38, arg0 + 0x2C, this->m_28);
        *(s32 *)&this->m_1c = 3;
        queue_destruction__7TObjectFv(arg0);
        break;
    case 3:
        break;
    }
}

void *__dt__22TBoss5GryphonShockWaveFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TBoss5GryphonShockWave;
        if (*(void **)((s8 *)arg0 + 0x3C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x3C)); *(s32 *)((s8 *)arg0 + 0x3C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__22TBoss5GryphonShockWave[];
extern s32 lbl_805D2818;
extern const f32 lbl_805D8EEC;
extern const f32 lbl_805D8EF0;

u8 *TBoss5GryphonShockWave__ct(u8 *arg0, u8 *arg1_parent, s32 arg2, u8 *arg3, u8 *arg4, s32 arg5, s16 arg6) {
    s32 sp8[4];

    __ct__7TObjectFP7TObject(arg0, arg1_parent);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__22TBoss5GryphonShockWave;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2818;
    VecCopy__FP3VecPC3Vec(arg0 + 0x40, arg3);
    VecCopy__FP3VecPC3Vec(arg0 + 0x50, arg3);
    vec3_add_to(arg0 + 0x50, arg5);
    VecCopy__FP3VecPC3Vec(arg0 + 0x60, arg4);
    *(f32 *)((s8 *)arg0 + 0x64) = (f32) lbl_805D8EEC;
    VecCopy__FP3VecPC3Vec(arg0 + 0x2C, arg0 + 0x40);
    *(s16 *)((s8 *)arg0 + 0x28) = arg6;
    *(s32 *)((s8 *)arg0 + 0x38) = arg2;
    *(s32 *)((s8 *)arg0 + 0x3C) = 0;
    VecCopy__FP3VecPC3Vec(sp8, arg0 + 0x2C);
    subtract_vector(sp8, arg4);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) (lbl_805D8EF0 * ((TObjBoss2Tunnel *)sp8)->update_scale());
    if ((s32) *(s32 *)((s8 *)arg0 + 0x24) < 0x1E) {
        *(s32 *)((s8 *)arg0 + 0x24) = 0x1E;
    }
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(s32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

void TBoss8Dragon__sub_80066A4C(void) {  }
void TBoss8Dragon::set_default_on_state0() {
    switch (TBoss8Dragon__sub_8005D700(this)) {
    case 0:
        gryphon_shockwave_particle_ids_ptr = lbl_80437F40;
        break;
    }
}

}
