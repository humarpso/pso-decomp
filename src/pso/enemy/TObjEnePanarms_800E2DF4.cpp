#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TObjEnePanarms__sub_800E2DF4(void *arg0);
u8 TObjEnePanarms__sub_800E2E08(void *arg0);
u8 TObjEnePanarms__sub_800E2E54(void *arg0);
u8 TObjEnePanarms__sub_800E2E68(void *arg0);
u8 TObjEnePanarms__sub_800E2E7C(void *arg0);
s32 TObjEnePanarms__sub_800DFB44(s32);

u8 TObjEnePanarms__sub_800E2DF4(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xC);
}

u8 TObjEnePanarms__sub_800E2E08(void *arg0) {
    int var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x3C4) == 0) && (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) != 0)) {
        var_r31 = 1;
    }
    return (u8) var_r31;
}

u8 TObjEnePanarms__sub_800E2E54(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xD);
}

u8 TObjEnePanarms__sub_800E2E68(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s32 *, 0x378) == 0xE);
}

u8 TObjEnePanarms__sub_800E2E7C(void *arg0) {
    s32 var_r31;

    var_r31 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x380) == 0) && (TObjEnePanarms__sub_800DFB44(M2C_FIELD(arg0, s32 *, 0x3A0)) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C0) == 0) && ((s16) M2C_FIELD(arg0, s16 *, 0x32C) <= (s32) ((s32) M2C_FIELD(arg0, s32 *, 0x3BC) / 2))) {
        var_r31 = 1;
    }
    return var_r31;
}

}
