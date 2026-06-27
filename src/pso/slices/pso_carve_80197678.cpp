#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8019750C(void *);
M2C_UNK fn_801975DC(void *);
M2C_UNK fn_801F9C54(s16);
s32 TRaderMapCore__sub_8030A808();

void TObjRaderCol__vt1(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x98);
    switch (temp_r0) {
    case 0:
        fn_801F9C54((s16) M2C_FIELD(arg0, s32 *, 0x94));
        M2C_FIELD(arg0, s32 *, 0x98) = 1;
        return;
    case 1:
        if (TRaderMapCore__sub_8030A808() == 1) {
            fn_8019750C(arg0);
            return;
        }
        fn_801975DC(arg0);
        return;
    }
}

}
