#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D5520;
extern s32 lbl_805D5524;
extern void *lbl_805D5528;

void fn_8013168C(void *arg0) {
    if ((s32) lbl_805D5520 == (s32) lbl_805D5524) {
        lbl_805D5528 = arg0;
    }
    lbl_805D5520 += 1;
    if ((void *) lbl_805D5528 == NULL) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            fn_8013168C(M2C_FIELD(arg0, void **, 0x2C));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            fn_8013168C(M2C_FIELD(arg0, void **, 0x30));
        }
    }
}

}
