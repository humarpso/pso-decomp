#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8034330C(void *);
M2C_UNK fn_803435A0(void *);
M2C_UNK fn_80347B70();
M2C_UNK TWindowDD__sub_80348248();
M2C_UNK fn_8034827C();
s32 fn_803482B0(void *);
s32 fn_80348304(void *);
M2C_UNK fn_803484C4(void *);

void fn_80342E40(void *arg0) {
    fn_80347B70();
    if (fn_80348304(arg0) != 0) {
        fn_8034827C();
        if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) == 1) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 0x14;
            M2C_FIELD(arg0, s32 *, 0x8C) = -0x3C;
            fn_803435A0(arg0);
            return;
        }
        fn_803484C4(arg0);
        return;
    }
    if (fn_803482B0(arg0) != 0) {
        TWindowDD__sub_80348248();
        fn_8034330C(arg0);
    }
}

}
