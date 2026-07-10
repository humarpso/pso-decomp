#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
s32 fn_80070DA8();
M2C_UNK fn_80072B70(void *);
M2C_UNK fn_80072C38(void *);
M2C_UNK fn_80072C78(void *);
M2C_UNK fn_80072D48(void *);
M2C_UNK fn_80072DA0(void *);
M2C_UNK fn_80072DD8(void *);
M2C_UNK fn_80072E10();
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK fn_8022727C(M2C_UNK *);
extern M2C_UNK lbl_804385D4[];

void handle_loss_sequence(void *arg0) {
    s32 temp_r3;

    fn_80072E10();
    temp_r3 = fn_80070DA8();
    switch (temp_r3) {
    case 0:
        fn_8022727C(lbl_804385D4);
        fn_80072D48(arg0);
        fn_80072C38(arg0);
        fn_80072B70(arg0);
        queue_destruction__7TObjectFv(arg0);
        return;
    case 1:
        fn_8022675C(0x52812, 0, 0, 0);
        fn_80072D48(arg0);
        fn_80072DD8(arg0);
        fn_80072B70(arg0);
        fn_80072C38(arg0);
        M2C_FIELD(arg0, s32 *, 0x28) = 0x1E;
        M2C_FIELD(arg0, s32 *, 0x1C) = 4;
        return;
    default:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x20) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x24) == 0)) {
            fn_80072D48(arg0);
            fn_80072DA0(arg0);
            fn_80072B70(arg0);
            fn_80072C78(arg0);
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        }
        return;
    }
}

}
