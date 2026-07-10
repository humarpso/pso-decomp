#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_displayed_item__15TWindowSubEquipFPv(void *arg0);
void update__15TWindowSubEquipFPv(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 fn_80099EF8();
u32 fn_801C675C(s32, s32);
M2C_UNK TWindowHelpItem__set_displayed_item_by_id(s32, s32);
M2C_UNK fn_802558D0(s32, s32);
s32 fn_80266E0C(s32);

void update_displayed_item__15TWindowSubEquipFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = fn_80266E0C(M2C_FIELD(arg0, s32 *, 0x38));
    if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x24)) {
        M2C_FIELD(arg0, s32 *, 0x24) = temp_r3;
        TWindowHelpItem__set_displayed_item_by_id(M2C_FIELD(arg0, s32 *, 0x30), temp_r3);
    }
}

void update__15TWindowSubEquipFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r3;
    s32 temp_r0;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s32 *, 0x28));
    if (temp_r3 != 0) {
        temp_r0 = fn_80266E0C(M2C_FIELD(arg0, s32 *, 0x34));
        if (fn_801C675C(temp_r3 + 0xD04, temp_r0) == 0U) {
            var_r3 = -1;
        } else {
            var_r3 = fn_80099EF8();
        }
        if (var_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x20)) {
            M2C_FIELD(arg0, s32 *, 0x20) = var_r3;
            fn_802558D0(M2C_FIELD(arg0, s32 *, 0x30), var_r3);
        }
    }
}

}
