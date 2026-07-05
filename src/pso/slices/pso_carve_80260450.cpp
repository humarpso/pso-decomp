#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_802627D8(s32);
s32 fn_802627E4(s32);
s32 fn_802627F0(s32);
s32 fn_802627FC();
extern s32 lbl_805D5544;

void fn_80260450(s32 arg0, s32 *arg1, s32 *arg2) {
    switch ((s32) lbl_805D5544) {
    case 0:
        if ((fn_802627FC() != 0) || (fn_802627F0(arg0) != 0) || (fn_802627E4(arg0) != 0)) {
            *arg1 = 4;
            *arg2 = 4;
            return;
        }
        if (fn_802627D8(arg0) != 0) {
            *arg1 = 4;
            *arg2 = 5;
            return;
        }
        *arg1 = 0;
        *arg2 = 5;
        return;
    case 1:
        if ((fn_802627FC() != 0) || (fn_802627F0(arg0) != 0) || (fn_802627E4(arg0) != 0)) {
            *arg1 = 0;
            *arg2 = 0;
            return;
        }
        *arg1 = 0;
        *arg2 = 1;
        return;
    case 2:
    case 3:
    case 4:
        if ((fn_802627FC() != 0) || (fn_802627F0(arg0) != 0) || (fn_802627E4(arg0) != 0)) {
            *arg1 = 0;
            *arg2 = 0;
            return;
        }
        if (fn_802627D8(arg0) != 0) {
            *arg1 = 0;
            *arg2 = 1;
            return;
        }
        *arg1 = 0;
        *arg2 = 2;
        return;
    }
}

}
