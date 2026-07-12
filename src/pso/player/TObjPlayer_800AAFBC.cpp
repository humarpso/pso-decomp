#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800AAFBC(void *arg0, s32 arg1);

extern void *lbl_805D5090;
extern s32 lbl_805D5098;

void TObjPlayer__sub_800AAFBC(void *arg0, s32 arg1) {
    s32 var_r0;

    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(lbl_805D5090, void **, 0x42C), s32 *, 8);
    if (arg1 == 0) {
        var_r0 = M2C_FIELD(M2C_FIELD(lbl_805D5090, void **, 0x42C), s32 *, 0xC);
    } else {
        var_r0 = lbl_805D5098;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0;
}

}
