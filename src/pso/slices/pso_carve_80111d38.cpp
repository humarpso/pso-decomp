#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80105348(void *, M2C_UNK);
M2C_UNK fn_80110B50(void *, M2C_UNK);
s32 TItemMag__sub_80111828();
s16 fn_80113DA0(void *);
s16 fn_80113DC4(void *);
s16 fn_80113DE8(void *, void *);
s16 fn_80113E0C(void *);

void TItemMag__sub_80111D38(void *arg0) {
    s16 temp_r26;
    s16 temp_r29;
    s16 temp_r30;
    s16 temp_r31;
    s32 temp_r25;
    s8 temp_r28;
    void *temp_r4;

    if ((void *) M2C_FIELD(arg0, void **, 0xF0) != NULL) {
        temp_r25 = TItemMag__sub_80111828();
        temp_r4 = M2C_FIELD(arg0, void **, 0xF0);
        temp_r28 = (s8) M2C_FIELD(temp_r4, u8 *, 0x88C);
        temp_r29 = fn_80113DE8(arg0, temp_r4);
        temp_r30 = fn_80113DC4(arg0);
        temp_r31 = fn_80113DA0(arg0);
        temp_r26 = fn_80113E0C(arg0);
        if (fn_80105348(M2C_FIELD(arg0, void **, 0xF0), 0xF9) != 0) {
            if (temp_r25 & 0x108) {
                if (!(temp_r28 & 1)) {
                    if (temp_r31 <= temp_r30) {
                        fn_80110B50(arg0, 5);
                        return;
                    }
                    fn_80110B50(arg0, 0xC);
                    return;
                }
                if (temp_r31 <= temp_r30) {
                    fn_80110B50(arg0, 6);
                    return;
                }
                fn_80110B50(arg0, 8);
                return;
            }
            if (temp_r25 & 0x10) {
                if (!(temp_r28 & 1)) {
                    if (temp_r29 <= temp_r31) {
                        fn_80110B50(arg0, 0x13);
                        return;
                    }
                    fn_80110B50(arg0, 0x17);
                    return;
                }
                if (temp_r29 <= temp_r31) {
                    fn_80110B50(arg0, 0x10);
                    return;
                }
                fn_80110B50(arg0, 0x12);
                return;
            }
            if (temp_r25 & 0x20) {
                if (!(temp_r28 & 1)) {
                    if (temp_r30 <= temp_r29) {
                        fn_80110B50(arg0, 0x1E);
                        return;
                    }
                    fn_80110B50(arg0, 7);
                    return;
                }
                if (temp_r30 <= temp_r29) {
                    fn_80110B50(arg0, 0x24);
                    return;
                }
                fn_80110B50(arg0, 0x16);
            }
        } else if (fn_80105348(M2C_FIELD(arg0, void **, 0xF0), 0xFA) != 0) {
            if (temp_r25 & 0x110) {
                if (!(temp_r28 & 1)) {
                    if (temp_r29 <= temp_r31) {
                        fn_80110B50(arg0, 6);
                        return;
                    }
                    fn_80110B50(arg0, 0xC);
                    return;
                }
                if (temp_r29 <= temp_r31) {
                    fn_80110B50(arg0, 5);
                    return;
                }
                fn_80110B50(arg0, 0xA);
                return;
            }
            if (temp_r25 & 8) {
                if (!(temp_r28 & 1)) {
                    if (temp_r31 <= temp_r30) {
                        fn_80110B50(arg0, 6);
                        return;
                    }
                    fn_80110B50(arg0, 0xC);
                    return;
                }
                if (temp_r31 <= temp_r30) {
                    fn_80110B50(arg0, 0x26);
                    return;
                }
                fn_80110B50(arg0, 0xA);
                return;
            }
            if (temp_r25 & 0x20) {
                if (!(temp_r28 & 1)) {
                    if (temp_r30 <= temp_r29) {
                        fn_80110B50(arg0, 5);
                        return;
                    }
                    fn_80110B50(arg0, 8);
                    return;
                }
                if (temp_r30 <= temp_r29) {
                    fn_80110B50(arg0, 0x1E);
                    return;
                }
                fn_80110B50(arg0, 0x18);
            }
        } else if (fn_80105348(M2C_FIELD(arg0, void **, 0xF0), 0xFC) != 0) {
            if (temp_r25 & 0x120) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r30 <= temp_r29) {
                            fn_80110B50(arg0, 0x1C);
                            return;
                        }
                        fn_80110B50(arg0, 0x1E);
                        return;
                    }
                    if (temp_r30 <= temp_r29) {
                        fn_80110B50(arg0, 9);
                        return;
                    }
                    fn_80110B50(arg0, 0x17);
                    return;
                }
                fn_80110B50(arg0, 0x24);
                return;
            }
            if (temp_r25 & 8) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r31 <= temp_r30) {
                            fn_80110B50(arg0, 0x25);
                            return;
                        }
                        fn_80110B50(arg0, 0x1F);
                        return;
                    }
                    if (temp_r31 <= temp_r30) {
                        fn_80110B50(arg0, 0x20);
                        return;
                    }
                    fn_80110B50(arg0, 0x1C);
                    return;
                }
                fn_80110B50(arg0, 0x23);
                return;
            }
            if (temp_r25 & 0x10) {
                if (temp_r26 <= 0x2C) {
                    if (!(temp_r28 & 1)) {
                        if (temp_r29 <= temp_r31) {
                            fn_80110B50(arg0, 0x11);
                            return;
                        }
                        fn_80110B50(arg0, 0x15);
                        return;
                    }
                    if (temp_r29 <= temp_r31) {
                        fn_80110B50(arg0, 0xC);
                        return;
                    }
                    fn_80110B50(arg0, 0x12);
                    return;
                }
                fn_80110B50(arg0, 0x24);
            }
        }
    }
}

}
