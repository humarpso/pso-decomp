#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80077464();
u8 *TWindowSubStatusDisp__sub_80077760(M2C_UNK);

u8 *fn_80077408(u8 *arg0) {
    if (fn_80077464() == 0) {
        return TWindowSubStatusDisp__sub_80077760(0xCC);
    }
    if ((s8) M2C_FIELD(arg0, u8 *, 4) == 0) {
        return TWindowSubStatusDisp__sub_80077760(0xCD);
    }
    return arg0 + 4;
}

}
