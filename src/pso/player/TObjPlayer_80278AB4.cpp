#include "types.h"

extern "C" {

void build_shop_item_list__10TObjPlayerFPv(u8 *arg0);
u32 get_usable_action_flags__5TItemFPvUiUi(s32, s32, s32);
s32 find_item_by_id(s32);
s32 calc_list_content_extent(void *);
u8 get_field_ec__12TOSwitchItemFv();
s32 get_field_d8__10TObjPlayerFv();
s32 get_item_info__10TObjPlayerFllPs(s32, void *, s32 *);
u32 test_item_flags__10TObjPlayerFUl(s32, s32);
s32 get_slot_value__10TObjPlayerFPvi(void *, s32);
u32 run_and_get_result__10TObjPlayerFi(s32, s32 *);
u8 *get_player_by_client_id(s16);
s32 add_list_entry__23TShopJudgmentItemWindowFll(void *, s32, s32);
s32 add_list_entry__20TWindowSubStatusDispFl(void *, s32);

void build_shop_item_list__10TObjPlayerFPv(u8 *arg0) {
    s32 spC[30];
    s32 sp8;
    s32 temp_r5;
    u32 temp_r30;
    s32 temp_r3_3;
    u8 *temp_r3;
    s32 temp_r3_2;
    u32 i;

    temp_r3 = get_player_by_client_id(*(s16 *)((s8 *)arg0 + 0x20));
    if (temp_r3 != NULL) {
        temp_r30 = run_and_get_result__10TObjPlayerFi(*(s32 *)((s8 *)temp_r3 + 0xD00), spC);
        for (i = 0; i < temp_r30; i++) {
            temp_r3_2 = find_item_by_id(spC[i]);
            if ((temp_r3_2 != 0) && (get_field_ec__12TOSwitchItemFv() == 0) && (get_item_info__10TObjPlayerFllPs(temp_r3_2, temp_r3, &sp8) != 0) && (test_item_flags__10TObjPlayerFUl(temp_r3_2, 8) == 0U) && (get_usable_action_flags__5TItemFPvUiUi(temp_r3_2, 8, 0) != 0U)) {
                add_list_entry__23TShopJudgmentItemWindowFll(arg0, temp_r3_2, spC[i]);
            }
        }
        temp_r3_3 = get_slot_value__10TObjPlayerFPvi(temp_r3 + 0xD04, 6);
        if (temp_r3_3 != 0) {
            temp_r5 = get_field_d8__10TObjPlayerFv();
            add_list_entry__23TShopJudgmentItemWindowFll(arg0, temp_r3_3, temp_r5);
        }
        if (*(s16 *)((s8 *)arg0 + 0x72) <= 0) {
            add_list_entry__20TWindowSubStatusDispFl(arg0, -1);
        }
        calc_list_content_extent(arg0);
    }
}

}
