#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv();
s8 func_801A5E54__Fv();
M2C_UNK fn_80328480(void *, s32);
s32 fn_803284F8(void *);
M2C_UNK fn_803286AC(void *);

void fn_80328360(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0xA0);
        M2C_FIELD(arg0, s32 *, 0xA0) = temp_r4 + 1;
        if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) > 0x5A) {
            fn_80328480(arg0, temp_r4);
            fn_803286AC(arg0);
            M2C_FIELD(arg0, s32 *, 0xA0) = 0;
            M2C_FIELD(arg0, s32 *, 0x20) = 1;
        }
        return;
    case 2:
        if (func_801A5E54__Fv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (M2C_FIELD(arg0, s32 *, 0xA0) + 1);
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x9C);
        switch (temp_r0_2) {
        case 16:
        case 0:
            if ((s32) M2C_FIELD(arg0, s32 *, 0xA0) > 0x5A) {
                M2C_FIELD(arg0, s32 *, 0x20) = 3;
                return;
            }
            break;
        case 17:
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        default:
            fn_803286AC(arg0);
            if (fn_803284F8(arg0) != 0) {
                M2C_FIELD(arg0, s32 *, 0x20) = 3;
                return;
            }
            break;
        }
        break;
    case 3:
        queue_destruction__7TObjectFv();
        break;
    }
}

}
