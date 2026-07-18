#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_angle__14TObjEneEpsilonFPvi(void *arg0, s32 arg1);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s16 TObjPlayer__sub_801423A4(s32, s32, s32);

extern const f64 lbl_8043B698;

void update_angle__14TObjEneEpsilonFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), (s32) (lbl_8043B698 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))), arg1);
}

}
