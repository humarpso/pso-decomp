#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D6300;
extern s32 lbl_805D631C;

void fn_80227220(s32 arg0) {
    if ((s32) lbl_805D6300 == 4) {
        lbl_805D631C = arg0;
    }
}

extern s32 lbl_805D6300;
extern s32 lbl_805D631C;

void fn_80227234(s32 arg0) {
    if ((s32) lbl_805D6300 != 4) {
        lbl_805D631C = arg0;
    }
}

}
