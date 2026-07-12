#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80121D88(void *arg0);
u32 TObjPlayer__sub_80121DD0(void *arg0, s32 arg1, s32 arg2, f32 farg0);
M2C_UNK TItemShootParticle__sub_8011B704(u32, M2C_UNK, M2C_UNK);
u32 spawn_shoot_particle__10TObjPlayerFUiiif(void *, s32, s32, f32);
u32 TObjPlayer__sub_8011BA54();
M2C_UNK set_parent__7TObjectFP7TObject(u32, u32);

void TObjPlayer__sub_80121D88(void *arg0) {
    s32 *temp_r3;
    s32 temp_r4_2;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0xF4);
    if (temp_r4 != NULL) {
        temp_r3 = M2C_FIELD(temp_r4, s32 **, 0x2C);
        temp_r4_2 = *temp_r3;
        if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) == 1) {
            if (temp_r4_2 & 8) {
                *temp_r3 = temp_r4_2 & 0xFFFFFFF7;
            }
        } else if (!(temp_r4_2 & 8)) {
            *temp_r3 = temp_r4_2 | 8;
        }
    }
}

u32 TObjPlayer__sub_80121DD0(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 temp_r3;
    u32 temp_r31;
    u32 temp_r30;
    void *temp_r5;

    temp_r31 = TObjPlayer__sub_8011BA54();
    temp_r30 = spawn_shoot_particle__10TObjPlayerFUiiif(arg0, arg1, arg2, farg0);
    if ((temp_r31 != 0U) && (temp_r30 != 0U)) {
        temp_r5 = M2C_FIELD(arg0, void **, 0x188);
        if (temp_r5 != NULL) {
            temp_r3 = M2C_FIELD(temp_r5, s32 *, 0);
            if ((u32) (temp_r3 & 7) == 7) {
                M2C_FIELD(temp_r5, s32 *, 0) = (s32) (temp_r3 & 0xFFFFFFFD);
                M2C_FIELD(temp_r5, s32 *, 0x14) = -0x4000;
                M2C_FIELD(temp_r5, s32 *, 0x1C) = 0x8000;
            }
        }
        TItemShootParticle__sub_8011B704(temp_r30, 0xDD, 0);
        set_parent__7TObjectFP7TObject(temp_r30, temp_r31);
    }
    return temp_r31;
}

}
