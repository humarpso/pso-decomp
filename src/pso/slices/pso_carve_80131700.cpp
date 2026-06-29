#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8013168C();
extern s32 lbl_805D5520;
extern s32 lbl_805D5524;
extern s32 lbl_805D5528;

s32 fn_80131700(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        return 0;
    }
    lbl_805D5524 = arg1;
    lbl_805D5520 = 0;
    lbl_805D5528 = 0;
    fn_8013168C();
    return lbl_805D5528;
}

}
