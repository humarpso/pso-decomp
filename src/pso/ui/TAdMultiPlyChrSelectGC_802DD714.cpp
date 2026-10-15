#include "types.h"

extern "C" {

void update_state_wait_card__22TAdMultiPlyChrSelectGCFPv(void *arg0);
s32 setup_move_effect_params__18TAdChrMoveEffectGCFPvii(u32, s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(void *, s32 *);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 is_child_visible__17TWindowSubComCardFPv(s32);
s32 try_move_char__23TAdSinglePlyChrSelectGCFii(s32, s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
s32 get_instance__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
s32 set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_card_index__22TAdMultiPlyChrSelectGCFPv(s32, s32);
s32 get_card_instance__22TAdMultiPlyChrSelectGCFv();
s32 set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
s32 queue_destruction__7TObjectFv(void *);

extern s32 lbl_80472868[];

void update_state_wait_card__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;

    if (get_mode__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) <= 1) {
        play_sound_effect(0x52F16, 0, 0, 0);
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
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
        *(s32 *)((s8 *)arg0 + 0x20) = 0xC;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x88)) != 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
        *(s32 *)((s8 *)arg0 + 0x20) = 0xC;
        return;
    }
    if (is_child_visible__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x88)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x88));
        switch (temp_r3) {
        case 1:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
            *(s32 *)((s8 *)arg0 + 0x20) = 0xC;
            return;
        case 0:
            temp_r31 = TAdMultiPlyChrSelectGC__sub_802DFFE8(*(s32 *)((s8 *)arg0 + 0x5C));
            temp_r3_2 = get_card_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C), 1);
            if (try_move_char__23TAdSinglePlyChrSelectGCFii(temp_r3_2 + 4, temp_r31) != 0) {
                {
                    u32 temp_u0 = get_global_state__22TAdMultiPlyChrSelectGCFv();
                    if (temp_u0 != 0U) {
                        setup_move_effect_params__18TAdChrMoveEffectGCFPvii(temp_u0, temp_r31 + 3, temp_r3_2);
                    }
                }
                *(s32 *)((s8 *)arg0 + 0x80) = TAdMultiPlyChrSelectGC__sub_802DBEC4(arg0, lbl_80472868);
                set_field_1c__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x6C), 0x15);
                *(s32 *)((s8 *)arg0 + 0x20) = 0x11;
                return;
            }
            set_state_ready__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
            *(s32 *)((s8 *)arg0 + 0x20) = 0xC;
            break;
        }
    }
}

}
