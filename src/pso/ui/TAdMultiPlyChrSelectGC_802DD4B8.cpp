#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_card_select_state__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update_state__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK clear_entries__18TAdChrMoveEffectGCFPv();
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
M2C_UNK reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE304();
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_child_visible__17TWindowSubComCardFPv(s32);
s32 get_card_data__17TWindowSubComCardFPv(s32);
M2C_UNK get_card_instance__22TAdMultiPlyChrSelectGCFv();
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
M2C_UNK get_instance__22TAdMultiPlyChrSelectGCFv();
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(u32, M2C_UNK);
M2C_UNK set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);

void update_state__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x88) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x88));
        M2C_FIELD(arg0, u32 *, 0x88) = 0U;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        }
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        play_sound_effect(0x52F16, 0, 0, 0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
            M2C_FIELD(arg0, u32 *, 0x68) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x19) {
        set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, u32 *, 0x68), 0xF);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x13;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) == 0x18) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x80));
            M2C_FIELD(arg0, u32 *, 0x80) = 0U;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            clear_entries__18TAdChrMoveEffectGCFPv();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x12;
    }
}

void update_card_select_state__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        play_sound_effect(0x52F16, 0, 0, 0);
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, u32 *, 0x68)) == 1) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xB;
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    get_card_instance__22TAdMultiPlyChrSelectGCFv();
    get_instance__22TAdMultiPlyChrSelectGCFv();
    if (TAdMultiPlyChrSelectGC__sub_802C6848() == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xE;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x8C)) != 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xE;
        return;
    }
    if (is_child_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x8C)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x8C));
        switch (temp_r3) {
        case 1:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 0xE;
            return;
        case 0:
            TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdSinglePlyChrSelectGC__sub_801FE304();
            set_field_1c__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x6C), 0x16);
            M2C_FIELD(arg0, s32 *, 0x20) = 0x14;
            break;
        }
    }
}

}
