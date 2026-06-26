#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80342F84();
s32 fn_803430BC(void *);
M2C_UNK fn_8034330C(void *);
M2C_UNK fn_803435A0(void *);
M2C_UNK fn_80347B70(void *);
M2C_UNK fn_80347C50();
M2C_UNK fn_80348248();
M2C_UNK fn_8034827C();
s32 fn_803482B0(void *);
s32 fn_80348304(void *);

void fn_80342610(void *arg0) {
    s32 temp_r0;
    s32 var_r31;

    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB8);
    switch (temp_r0) {
    case 0:
        fn_80347C50();
        fn_80347B70(arg0);
        if (fn_80348304(arg0) != 0) {
            fn_8034827C();
            var_r31 = fn_803430BC(arg0) == 0;
        } else if (fn_803482B0(arg0) != 0) {
            fn_80348248();
            fn_8034330C(arg0);
        }
        break;
    case 1:
        var_r31 = fn_80342F84();
        break;
    }
    if ((s32) var_r31 != 0) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0x12;
        fn_803435A0(arg0);
    }
}

}
