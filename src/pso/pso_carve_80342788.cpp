#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8034330C(void *);
M2C_UNK fn_803435A0(void *);
M2C_UNK fn_80347B70(void *);
M2C_UNK fn_80347C50();
M2C_UNK fn_80348248();
M2C_UNK fn_8034827C();
s32 fn_803482B0(void *);
s32 fn_80348304(void *);

void fn_80342788(void *arg0) {
    fn_80347C50();
    fn_80347B70(arg0);
    if (fn_80348304(arg0) != 0) {
        fn_8034827C();
        M2C_FIELD(arg0, s32 *, 0xB4) = 0xF;
        fn_803435A0(arg0);
        return;
    }
    if (fn_803482B0(arg0) != 0) {
        fn_80348248();
        fn_8034330C(arg0);
    }
}

}
