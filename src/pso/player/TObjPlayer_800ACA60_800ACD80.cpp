#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_ground_effect__10TObjPlayerFPv(u8 *arg0);
M2C_UNK advance_animation_playback();
M2C_UNK TBoss3Volopt__sub_8022675C(void *, void *, int, int);
M2C_UNK apply_actor_gravity(void *, int, f32);
void * copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK play_effect_if_v2__10TObjPlayerFi(int);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);

extern const f32 lbl_805D9BD8;

void update_ground_effect__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r4;

    advance_animation_playback();
    if (objInBand__FP7GameObjf((void *) (arg0), (f32) (lbl_805D9BD8)) != 0) {
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3A807)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        play_effect_if_v2__10TObjPlayerFi((int) (-0x300));
    }
    M2C_FIELD(arg0, f32 *, 0x310) = (f32) lbl_805D9BD8;
    M2C_FIELD(arg0, f32 *, 0x308) = (f32) lbl_805D9BD8;
    apply_actor_gravity((void *) (arg0), (int) (0), (f32) (lbl_805D9BD8));
    update_collisions__10TObjPlayerFPv((void *) (arg0));
    if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFF9FF);
        temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0xA4));
        M2C_FIELD(temp_r4, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r4, s32 *, 0x18) & 0xFBFFFFFF);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x388) = 0;
    }
}

}
