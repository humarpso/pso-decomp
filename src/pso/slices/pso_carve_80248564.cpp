#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80077480(s32);
M2C_UNK TWindowSubSymbolChat__sub_80248534(s32, s32);

void TWindowSubSymbolChat__sub_80248564(s32 arg0, s32 arg1) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)fn_80077480(arg1);
    TWindowSubSymbolChat__sub_80248534(arg0, (s32)tmp);
}

}
