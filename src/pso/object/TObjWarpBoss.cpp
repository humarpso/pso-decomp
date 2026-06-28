#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjWarpBoss__sub_8019F22C(void *arg0);
M2C_UNK fn_8019E308();
M2C_UNK fn_8019E798(void *);
M2C_UNK fn_8019E81C(void *);
M2C_UNK fn_8019E97C(void *);
M2C_UNK fn_8019EA7C(void *);
M2C_UNK fn_8019EB94(void *);

void TObjWarpBoss__sub_8019F22C(void *arg0) {
    s16 temp_r0;

    fn_8019E308();
    temp_r0 = M2C_FIELD(arg0, s16 *, 0xDE);
    switch (temp_r0) {
    case 0:
        fn_8019EB94(arg0);
        return;
    case 1:
        fn_8019EA7C(arg0);
        return;
    case 2:
        fn_8019E97C(arg0);
        return;
    case 3:
        fn_8019E81C(arg0);
        return;
    case 4:
        fn_8019E798(arg0);
        return;
    }
}

}
