#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8037F1C8(M2C_UNK);
extern s32 lbl_805D6CE0;
extern s32 lbl_805D6CE4;
extern s32 lbl_805D6CE8;
extern s32 lbl_805D6CEC;
extern s32 lbl_805D6CF0;

void fn_8032D1A4(void) {
    lbl_805D6CE4 = 0x80000;
    lbl_805D6CE0 = fn_8037F1C8(0x80000);
    lbl_805D6CEC = 0;
    lbl_805D6CE8 = 0;
    lbl_805D6CF0 = 0;
}

}
