#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void build_shop_item_list__10TObjPlayerFPv(u8 *arg0);
u32 TItem__sub_8010147C(s32, M2C_UNK, M2C_UNK);
s32 TLobby__sub_80101AB0(s32);
M2C_UNK TLobby__sub_80266E34(void *);
u8 get_field_ec__12TOSwitchItemFPv();
s32 get_field_d8__10TObjPlayerFPv();
s32 get_item_info__10TObjPlayerFiiPv(s32, void *, M2C_UNK *);
u32 test_item_flags__10TObjPlayerFPvUi(s32, M2C_UNK);
s32 get_slot_value__10TObjPlayerFPvi(void *, M2C_UNK);
u32 run_and_get_result__10TObjPlayerFPvi(s32, M2C_UNK *);
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s16);
M2C_UNK add_list_entry__23TShopJudgmentItemWindowFPvii(void *, s32, s32);
M2C_UNK add_list_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);

void build_shop_item_list__10TObjPlayerFPv(u8 *arg0) {
    M2C_UNK spC[30];
    M2C_UNK sp8;
    s32 temp_r5;
    u32 temp_r30;
    s32 temp_r3_3;
    u8 *temp_r3;
    s32 temp_r3_2;
    u32 i;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
    if (temp_r3 != NULL) {
        temp_r30 = run_and_get_result__10TObjPlayerFPvi(M2C_FIELD(temp_r3, s32 *, 0xD00), spC);
        for (i = 0; i < temp_r30; i++) {
            temp_r3_2 = TLobby__sub_80101AB0(spC[i]);
            if ((temp_r3_2 != 0) && (get_field_ec__12TOSwitchItemFPv() == 0) && (get_item_info__10TObjPlayerFiiPv(temp_r3_2, temp_r3, &sp8) != 0) && (test_item_flags__10TObjPlayerFPvUi(temp_r3_2, 8) == 0U) && (TItem__sub_8010147C(temp_r3_2, 8, 0) != 0U)) {
                add_list_entry__23TShopJudgmentItemWindowFPvii(arg0, temp_r3_2, spC[i]);
            }
        }
        temp_r3_3 = get_slot_value__10TObjPlayerFPvi(temp_r3 + 0xD04, 6);
        if (temp_r3_3 != 0) {
            temp_r5 = get_field_d8__10TObjPlayerFPv();
            add_list_entry__23TShopJudgmentItemWindowFPvii(arg0, temp_r3_3, temp_r5);
        }
        if (M2C_FIELD(arg0, s16 *, 0x72) <= 0) {
            add_list_entry__20TWindowSubStatusDispFPvi(arg0, -1);
        }
        TLobby__sub_80266E34(arg0);
    }
}

}
