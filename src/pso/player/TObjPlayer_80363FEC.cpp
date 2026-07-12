#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void warn_if_gauge_low__10TObjPlayerFv(void);
M2C_UNK TObjPlayer__sub_803640C8();
M2C_UNK TObjPlayer__sub_803E38FC(M2C_UNK);

extern void *lbl_805D6FB8;
extern const f32 lbl_805E0288;

void warn_if_gauge_low__10TObjPlayerFv(void) {
    if (M2C_FIELD(lbl_805D6FB8, f32 *, 0x2C) < lbl_805E0288) {
        TObjPlayer__sub_803E38FC(0x2500);
        TObjPlayer__sub_803640C8();
    }
}

}
