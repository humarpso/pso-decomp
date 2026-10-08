#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V_802D5478 { s32 a; s32 b; s32 c; };

struct P_802D5478 { f32 x; f32 y; f32 z; };

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
void TObjPlayer__sub_802D551C(M2C_UNK arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_802D5B78(void *, void *);
void TObjPlayer__sub_802D5558(M2C_UNK arg0, s32 arg1, s32 arg2);
extern const f64 lbl_804725B8[];
extern const f32 lbl_805DE794;
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
void set_position_xy__10TObjPlayerFPvff(f32, f32);
void create_timed_particle_emitter(s32, s32, s32, s32);
u32 create_timed_particle_emitter_with_angles(s32, void *, s32, s32, s32, s32);
void spawn_hit_particles__10TObjPlayerFiPv(s32 arg0, const P_802D5478 *arg1);
}

extern "C" {

void* init_needle_effect__10TObjPlayerFPv(void* a0);
void set_radar_marker_flag__10TObjPlayerFPvPv(void *arg0, void *arg1);
int init_state_445__10TObjPlayerFPv(void);
M2C_UNK set_radar_marker_params__10TObjPlayerFPvPv();

void set_radar_marker_flag__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    set_radar_marker_params__10TObjPlayerFPvPv();
    M2C_FIELD(arg1, s32 *, 0x50) = 0x8000;
}

    extern unsigned char fn_80109974[];
    extern unsigned char create_needle_effect[];
    extern unsigned char lbl_804E20FC[];
    extern const float lbl_805DE78C;
void* init_needle_effect__10TObjPlayerFPv(void* a0) { init_state_445__10TObjPlayerFPv(); *(int*)((char*)a0 + 0x18) = (int)lbl_804E20FC; *(float*)((char*)a0 + 0x200) = lbl_805DE78C; *(int*)((char*)a0 + 0x204) = (int)fn_80109974; *(int*)((char*)a0 + 0x208) = (int)create_needle_effect; return a0; }

void spawn_hit_particles__10TObjPlayerFiPv(s32 arg0, const P_802D5478 *arg1) {
    s32 v[3];
    create_timed_particle_emitter(arg0, 0x1EF, 0, 0xF);
    v[0] = 0;
    v[1] = (s32)(lbl_804725B8[0] * get_ad_end_text_start__10TObjPlayerFv(arg1->x, arg1->z));
    v[2] = 0;
    if (create_timed_particle_emitter_with_angles(arg0, v, 0x1B8, 0, 0xF, 4) != 0U) {
        set_position_xy__10TObjPlayerFPvff(lbl_805DE794, lbl_805DE794);
    }
}

void TObjPlayer__sub_802D551C(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK sp8;
    VecCopy__FP3VecPC3Vec((void *) (&sp8));
    spawn_hit_particles__10TObjPlayerFiPv((s32)((void *) (&sp8)), (const P_802D5478 *)((void *) (arg2)));
}
void TObjPlayer__sub_802D5558(M2C_UNK arg0, s32 arg1, s32 arg2) {
    M2C_UNK sp8;
    TObjPlayer__sub_802D5B78((void *) (arg1), (void *) (&sp8));
    spawn_hit_particles__10TObjPlayerFiPv((s32)((void *) (&sp8)), (const P_802D5478 *)((void *) (arg2)));
}

}
