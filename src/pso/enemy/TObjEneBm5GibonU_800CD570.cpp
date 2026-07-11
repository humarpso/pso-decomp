#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5GibonU__sub_800CD570(void);
M2C_UNK fn_803D9214(M2C_UNK, s32);

extern s32 lbl_805D51D4;
extern s32 lbl_805D51D8;

void TObjEneBm5GibonU__sub_800CD570(void) {
    if (((s32) lbl_805D51D4 >= 0x30) && ((s32) lbl_805D51D4 < 0x32)) {
        fn_803D9214(0, lbl_805D51D8);
    }
    lbl_805D51D4 += 1;
}

}
