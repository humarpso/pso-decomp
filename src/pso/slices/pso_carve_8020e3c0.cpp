#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8037F1C8(M2C_UNK);
extern s32 lbl_805D612C;
extern s32 lbl_805D6130;

void fn_8020E3C0(void) {
    lbl_805D6130 = 0x100000;
    lbl_805D612C = fn_8037F1C8(0x100000);
}

}
