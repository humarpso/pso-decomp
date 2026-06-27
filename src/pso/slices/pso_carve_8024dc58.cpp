#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowSubTradeMain__sub_80244A4C(u32);
M2C_UNK fn_80244B64(u32);
s32 fn_8024C804();
s32 fn_8024D960(void *);
M2C_UNK fn_80269FB0(u32, s32);
s32 fn_8026CBB8(M2C_UNK);

void fn_8024DC58(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        if (fn_8024C804() != 0) {
            TWindowSubTradeMain__sub_80244A4C(M2C_FIELD(arg0, u32 *, 0x2C));
            return;
        }
        fn_80244B64(M2C_FIELD(arg0, u32 *, 0x2C));
        if (fn_8024D960(arg0) != 0) {
            fn_80269FB0(M2C_FIELD(arg0, u32 *, 0x2C), fn_8026CBB8(0x21));
            return;
        }
        fn_80269FB0(M2C_FIELD(arg0, u32 *, 0x2C), fn_8026CBB8(0x20));
    }
}

}
