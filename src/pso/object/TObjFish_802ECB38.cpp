#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void set_effect_target_position__8TObjFishFPvPvPv(void *, void *, void *);
void TObjFish__sub_802ECB38(u8 *arg0);
void set_effect_target_position__8TObjFishFPvPvPv(void *, void *, void *);
extern const f32 lbl_805DEA14;
void TObjFish__sub_802ECB70(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjFish__sub_802ECB38(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x628) = (s32) (M2C_FIELD(arg0, s32 *, 0x628) | 0x88);
    set_effect_target_position__8TObjFishFPvPvPv(arg0, (void *)0x3A312, arg0 + 0x38);
}
void TObjFish__sub_802ECB70(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x6FC) = (s32) (M2C_FIELD(arg0, s32 *, 0x6FC) - (s32) (lbl_805DEA14 * (f32) arg1));
    set_effect_target_position__8TObjFishFPvPvPv(arg0, (void *)0x3B213, arg0 + 0x38);
}

}
