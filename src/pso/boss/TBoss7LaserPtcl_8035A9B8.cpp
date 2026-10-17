#include "types.h"
#include "pso/boss/TBoss7LaserPtcl.h"
#include "pso/boss/TObjBoss2Tunnel.h"

extern const f32 lbl_805E00F8;
extern const f32 lbl_805E00FC;

extern "C" {

s32 subtract_vector(void *, void *);
s32 destroy_particles__15TBoss7LaserPtclFv();
s32 spawn_continuous_particle_effect_with_flags(void *, int, int);
s32 spawn_particle_effect_with_flags(void *, int, int);
f64 atan2_float(f32, f32);

extern const f64 lbl_804796D8;
extern const f32 lbl_805E00F4;

void TBoss7LaserPtcl::init_laser() {
    u8 *arg0 = (u8 *)this;
    destroy_particles__15TBoss7LaserPtclFv();
    subtract_vector((void *) (arg0 + 0x2C), (void *) (arg0 + 0x20));
    ((TObjBoss2Tunnel *)(arg0 + 0x2C))->clamp_velocity();
    *(f32 *)((s8 *)arg0 + 0x30) = (f32) lbl_805E00F4;
    *(s32 *)&this->m_54 = (s32) (lbl_804796D8 * atan2_float((f32) (*(f32 *)((s8 *)arg0 + 0x2C)), (f32) (*(f32 *)((s8 *)arg0 + 0x34))));
    spawn_particle_effect_with_flags((void *) (arg0 + 0x20), (int) (0x20A), (int) (0x40));
    *(s32 *)((s8 *)arg0 + 0x44) = spawn_continuous_particle_effect_with_flags((void *) (arg0 + 0x20), (int) (0x177), (int) (0x40));
    this->state = 1;
}
#pragma push
#pragma fp_contract on
void TBoss7LaserPtcl::calc_position(u8 *arg1, u8 *arg2) {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg0 + 0x20) = (f32) ((lbl_805E00F8 * (lbl_805E00FC * *(f32 *)((s8 *)arg2 + 0))) + *(f32 *)((s8 *)arg1 + 0));
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) ((lbl_805E00FC * *(f32 *)((s8 *)arg2 + 4)) + *(f32 *)((s8 *)arg1 + 4));
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) ((lbl_805E00FC * *(f32 *)((s8 *)arg2 + 8)) + *(f32 *)((s8 *)arg1 + 8));
}
#pragma pop

}
