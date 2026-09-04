#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void assign_shortcut__20TWindowShortListCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 get_field_d8__10TObjPlayerFPv(u32);
u32 TLobby__sub_80101AB0(s32);
u32 test_item_flags__10TObjPlayerFPvUi(s32, s32);
M2C_UNK TObjPlayer__sub_801B9EDC(s32, s32);
M2C_UNK TObjPlayer__sub_801BA0F0(s32, s32, s32);
u32 get_slot_value__10TObjPlayerFPvi(s32, s32);

void assign_shortcut__20TWindowShortListCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r31;
    s32 temp_r3;
    s32 temp_r0;
    u32 temp_r3b;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg2);
    if (temp_r3 != 0) {
        temp_r31 = get_slot_value__10TObjPlayerFPvi(temp_r3 + 0xD04, arg0);
        temp_r3b = TLobby__sub_80101AB0(arg1);
        if (temp_r31 == temp_r3b) {
            TObjPlayer__sub_801B9EDC(temp_r3, arg1);
            return;
        }
        if (test_item_flags__10TObjPlayerFPvUi(temp_r3b, 8) != 0U) {
            TObjPlayer__sub_801B9EDC(temp_r3, arg1);
        }
        if (temp_r31 != 0U) {
            temp_r0 = get_field_d8__10TObjPlayerFPv(temp_r31);
            TObjPlayer__sub_801B9EDC(temp_r3, temp_r0);
        }
        TObjPlayer__sub_801BA0F0(temp_r3, arg1, arg0);
    }
}

}
