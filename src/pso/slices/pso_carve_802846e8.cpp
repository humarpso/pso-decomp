#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800FC400();
M2C_UNK fn_8028429C(void *, void *);
M2C_UNK fn_802844C8(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_802845EC(void *, void *, M2C_UNK, M2C_UNK);
M2C_UNK fn_803DA798(s32);
M2C_UNK fn_803DEE6C(M2C_UNK);
M2C_UNK fn_803DEEAC();
M2C_UNK fn_803DF160(M2C_UNK, M2C_UNK);
extern s32 lbl_805D63F0;

void fn_802846E8(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg1, s32 *, 0x30) >= 0) {
        fn_803DEE6C(1);
        fn_803DA798(lbl_805D63F0);
        fn_803DF160(2, -1);
        fn_802845EC(arg0, arg1, 0, -1);
        fn_802845EC(arg0, arg1, 1, -1);
        if (M2C_FIELD(arg0, u8 *, 0x60) & 1) {
            fn_802845EC(arg0, arg1, 2, -1);
        } else {
            fn_802845EC(arg0, arg1, 2, 0xFF808080);
        }
        if (M2C_FIELD(arg0, u8 *, 0x60) & 2) {
            fn_802845EC(arg0, arg1, 3, -1);
        } else {
            fn_802845EC(arg0, arg1, 3, 0xFF808080);
        }
        if (M2C_FIELD(arg0, u8 *, 0x60) & 4) {
            fn_802845EC(arg0, arg1, 4, -1);
            fn_802845EC(arg0, arg1, 5, -1);
        } else {
            fn_802845EC(arg0, arg1, 4, 0xFF808080);
            fn_802845EC(arg0, arg1, 5, 0xFF808080);
        }
        fn_8028429C(arg0, arg1);
        fn_803DEEAC();
        fn_803DEE6C(1);
        fn_800FC400();
        fn_803DF160(1, -1);
        fn_802844C8(arg0, arg1, 0, -1);
        fn_802844C8(arg0, arg1, 1, -1);
        if (M2C_FIELD(arg0, u8 *, 0x60) & 1) {
            fn_802844C8(arg0, arg1, 2, -1);
        } else {
            fn_802844C8(arg0, arg1, 2, 0xFF808080);
        }
        if (M2C_FIELD(arg0, u8 *, 0x60) & 2) {
            fn_802844C8(arg0, arg1, 3, -1);
        } else {
            fn_802844C8(arg0, arg1, 3, 0xFF808080);
        }
        if (M2C_FIELD(arg0, u8 *, 0x60) & 4) {
            fn_802844C8(arg0, arg1, 4, -1);
            fn_802844C8(arg0, arg1, 5, -1);
        } else {
            fn_802844C8(arg0, arg1, 4, 0xFF808080);
            fn_802844C8(arg0, arg1, 5, 0xFF808080);
        }
        fn_803DEEAC();
    }
}

}
