#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TAdRicoRing__sub_8001BEE8(void *, M2C_UNK);

s32 fn_8010FAB4(u8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        M2C_FIELD(arg0, s32 *, 0x20) = arg1;
        TAdRicoRing__sub_8001BEE8(arg0 + 0x1C, 2);
        M2C_FIELD(arg0, s32 *, 0x18) = 1;
        return 1;
    }
    return 0;
}

}
