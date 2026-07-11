#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __dl__FPv(s32);
M2C_UNK fn_803966F8(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
extern M2C_UNK TAdSinglePlyChrSelectGC__sub_801FC8B4[];

s32 register_callback__23TAdSinglePlyChrSelectGCFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        fn_803966F8(arg0 + 4, TAdSinglePlyChrSelectGC__sub_801FC8B4, 0x2798, 7);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

}
