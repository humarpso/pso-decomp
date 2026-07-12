#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_displayed_item__13TWindowSubMagFPv(void *arg0);
s32 count_slots__13TWindowSubMagFPv(void *arg0);
void set_mag_mode__13TWindowSubMagFPvi(void *arg0, s32 arg1);
M2C_UNK fn_80105984(M2C_UNK *);
M2C_UNK TItemData__sub_8010D614(s32, M2C_UNK *);
s32 fn_801143E8(M2C_UNK *, s32);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(s32, s32);
s32 TLobby__sub_80266E0C(s32);

void update_displayed_item__13TWindowSubMagFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = TLobby__sub_80266E0C(M2C_FIELD(arg0, s32 *, 0x34));
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        M2C_FIELD(arg0, s32 *, 0x24) = temp_r3;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, s32 *, 0x40), temp_r3);
    }
}

s32 count_slots__13TWindowSubMagFPv(void *arg0) {
    M2C_UNK sp8;
    s32 var_r31;

    fn_80105984(&sp8);
    TItemData__sub_8010D614(M2C_FIELD(arg0, s32 *, 0x2C), &sp8);
    var_r31 = 0;
loop_1:
    if (fn_801143E8(&sp8, var_r31) == -1) {
        return var_r31;
    }
    var_r31 += 1;
    if (var_r31 >= 3) {
        return var_r31;
    }
    goto loop_1;
}

void set_mag_mode__13TWindowSubMagFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 1:
        M2C_FIELD(arg0, s8 *, 0x1C) = 5;
        return;
    case 0:
        M2C_FIELD(arg0, s8 *, 0x1C) = 0xE;
        return;
    }
}

}
