#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_action__10TNpcPlayerFPvi(void *arg0, s32 arg1);
void handle_action__10TNpcPlayerFPvi(void *arg0, s32 arg1);
void quick_sort__10TNpcPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
M2C_UNK TNpcPlayer__sub_8014E33C(void *, M2C_UNK);
s32 TNpcPlayer__sub_8014F28C();
M2C_UNK TNpcPlayer__sub_80150A34(void *, M2C_UNK);
s32 fn_801B7C78(s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_801B7F4C(s32, s32, void *);
s32 get_condition__10TNpcPlayerFPv(s32);

void dispatch_action__10TNpcPlayerFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 0:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi((void *)(arg0), (s32)(arg1));
        } else {
            TNpcPlayer__sub_80150A34(arg0, 0xF);
        }
        if (M2C_FIELD(arg0, s32 *, 0x80) & 0x200) {
            TNpcPlayer__sub_8014E33C(arg0, 0x13);
        }
        return;
    case 1:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi((void *)(arg0), (s32)(arg1));
            return;
        }
        break;
    case 2:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi((void *)(arg0), (s32)(arg1));
            return;
        }
        TNpcPlayer__sub_80150A34(arg0, 0x10);
        return;
    case 3:
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78)) & 0x20) {
            handle_action__10TNpcPlayerFPvi((void *)(arg0), (s32)(arg1));
            return;
        }
        TNpcPlayer__sub_80150A34(arg0, 0x11);
        break;
    }
}

void handle_action__10TNpcPlayerFPvi(void *arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r5_3;

    switch (arg1) {
    case 0:
        temp_r3 = fn_801B7C78(M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94), 3, 0);
        if (temp_r3 != -1) {
            temp_r5 = M2C_FIELD(arg0, void **, 0x78);
            fn_801B7F4C(M2C_FIELD(temp_r5, s32 *, 0x94), temp_r3, temp_r5);
            M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) | 0x10000);
        }
        break;
    case 1:
        temp_r3_2 = fn_801B7C78(M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94), 3, 1);
        if (temp_r3_2 != -1) {
            temp_r5_2 = M2C_FIELD(arg0, void **, 0x78);
            fn_801B7F4C(M2C_FIELD(temp_r5_2, s32 *, 0x94), temp_r3_2, temp_r5_2);
            return;
        }
        break;
    case 2:
        temp_r3_3 = fn_801B7C78(M2C_FIELD(M2C_FIELD(arg0, void **, 0x78), s32 *, 0x94), 3, 6);
        if (temp_r3_3 != -1) {
            temp_r5_3 = M2C_FIELD(arg0, void **, 0x78);
            fn_801B7F4C(M2C_FIELD(temp_r5_3, s32 *, 0x94), temp_r3_3, temp_r5_3);
        }
        break;
    }
}

void quick_sort__10TNpcPlayerFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 < arg3) {
        temp_r3 = TNpcPlayer__sub_8014F28C();
        quick_sort__10TNpcPlayerFiiii((s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(temp_r3 - 1));
        quick_sort__10TNpcPlayerFiiii((s32)(arg0), (s32)(arg1), (s32)(temp_r3 + 1), (s32)(arg3));
    }
}

}
