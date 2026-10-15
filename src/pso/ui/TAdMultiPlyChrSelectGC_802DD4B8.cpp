#include "types.h"

extern "C" {

void update_card_select_state__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update_state__22TAdMultiPlyChrSelectGCFPv(void *arg0);
s32 clear_entries__18TAdChrMoveEffectGCFPv();
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
s32 reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
s32 clear_slot_entry__23TAdSinglePlyChrSelectGCFi();
s32 play_sound_effect(s32, s32, s32, s32);
s32 is_child_visible__17TWindowSubComCardFPv(s32);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 get_card_instance__22TAdMultiPlyChrSelectGCFv();
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 get_instance__22TAdMultiPlyChrSelectGCFv();
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
s32 queue_destruction__7TObjectFv(void *);
s32 set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(u32, s32);
s32 set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);

void update_state__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x88) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x88));
        *(u32 *)((s8 *)arg0 + 0x88) = 0U;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) <= 1) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(u32 *)((s8 *)arg0 + 0x68)) == 1) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        }
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
        play_sound_effect(0x52F16, 0, 0, 0);
        if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
            *(u32 *)((s8 *)arg0 + 0x68) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) == 0x19) {
        set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(*(u32 *)((s8 *)arg0 + 0x68), 0xF);
        *(s32 *)((s8 *)arg0 + 0x20) = 0x13;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) == 0x18) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x80));
            *(u32 *)((s8 *)arg0 + 0x80) = 0U;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            clear_entries__18TAdChrMoveEffectGCFPv();
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0x12;
    }
}

void update_card_select_state__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_mode__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) <= 1) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
        play_sound_effect(0x52F16, 0, 0, 0);
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(u32 *)((s8 *)arg0 + 0x68)) == 1) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
            if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
                queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
                *(u32 *)((s8 *)arg0 + 0x68) = 0U;
            }
            *(s32 *)((s8 *)arg0 + 0x20) = 0xB;
            return;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0xC;
        return;
    }
    get_card_instance__22TAdMultiPlyChrSelectGCFv();
    get_instance__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
        *(s32 *)((s8 *)arg0 + 0x20) = 0xE;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x8C)) != 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
        *(s32 *)((s8 *)arg0 + 0x20) = 0xE;
        return;
    }
    if (is_child_visible__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x8C)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x8C));
        switch (temp_r3) {
        case 1:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
            *(s32 *)((s8 *)arg0 + 0x20) = 0xE;
            return;
        case 0:
            TAdMultiPlyChrSelectGC__sub_802DFFE8(*(s32 *)((s8 *)arg0 + 0x5C));
            clear_slot_entry__23TAdSinglePlyChrSelectGCFi();
            set_field_1c__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x6C), 0x16);
            *(s32 *)((s8 *)arg0 + 0x20) = 0x14;
            break;
        }
    }
}

}
