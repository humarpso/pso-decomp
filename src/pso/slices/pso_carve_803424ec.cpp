#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8034330C(s32);
M2C_UNK fn_80347B70();
M2C_UNK TWindowDD__sub_80348248();
M2C_UNK fn_8034827C();
s32 fn_803482B0(s32);
s32 fn_80348304(s32);
M2C_UNK fn_803484C4(s32);

void fn_803424EC(s32 arg0) {
    fn_80347B70();
    if (fn_80348304(arg0) != 0) {
        fn_8034827C();
        fn_803484C4(arg0);
        return;
    }
    if (fn_803482B0(arg0) != 0) {
        TWindowDD__sub_80348248();
        fn_8034330C(arg0);
    }
}

}
