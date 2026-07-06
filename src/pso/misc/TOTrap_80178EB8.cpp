#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOTrap__sub_80178EB8(s32 arg0);
M2C_UNK fn_80087350(s32, M2C_UNK);

void TOTrap__sub_80178EB8(s32 arg0) {
    fn_80087350(arg0 + 0x2FC, 0x45);
    fn_80087350(arg0 + 0x2FC, 0x46);
}

}
