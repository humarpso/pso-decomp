#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern const f32 lbl_805E00F8;
extern const f32 lbl_805E00FC;
void TBoss7LaserPtcl__sub_8035AA58(u8 *arg0, u8 *arg1, u8 *arg2);
}

extern "C" {

void init_laser__15TBoss7LaserPtclFPv(u8 *arg0);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK destroy_particles__15TBoss7LaserPtclFi();
s32 spawn_continuous_particle_effect_with_flags(void *, int, int);
M2C_UNK spawn_particle_effect_with_flags(void *, int, int);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK clamp_velocity__15TObjBoss2TunnelFPv(void *);

extern const f64 lbl_804796D8;
extern const f32 lbl_805E00F4;

void init_laser__15TBoss7LaserPtclFPv(u8 *arg0) {
    destroy_particles__15TBoss7LaserPtclFi();
    subtract_vector((void *) (arg0 + 0x2C), (void *) (arg0 + 0x20));
    clamp_velocity__15TObjBoss2TunnelFPv((void *) (arg0 + 0x2C));
    M2C_FIELD(arg0, f32 *, 0x30) = (f32) lbl_805E00F4;
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) (lbl_804796D8 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 0x2C)), (f32) (M2C_FIELD(arg0, f32 *, 0x34))));
    spawn_particle_effect_with_flags((void *) (arg0 + 0x20), (int) (0x20A), (int) (0x40));
    M2C_FIELD(arg0, s32 *, 0x44) = spawn_continuous_particle_effect_with_flags((void *) (arg0 + 0x20), (int) (0x177), (int) (0x40));
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
}
#pragma push
#pragma fp_contract on
void TBoss7LaserPtcl__sub_8035AA58(u8 *arg0, u8 *arg1, u8 *arg2) {
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((lbl_805E00F8 * (lbl_805E00FC * M2C_FIELD(arg2, f32 *, 0))) + M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((lbl_805E00FC * M2C_FIELD(arg2, f32 *, 4)) + M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) ((lbl_805E00FC * M2C_FIELD(arg2, f32 *, 8)) + M2C_FIELD(arg1, f32 *, 8));
}
#pragma pop

}
