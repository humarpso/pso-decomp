#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state_wait_card__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK setup_move_effect_params__18TAdChrMoveEffectGCFPvii(u32, s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848();
s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(void *, M2C_UNK *);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 is_child_visible__17TWindowSubComCardFPv(s32);
s32 try_move_char__23TAdSinglePlyChrSelectGCFii(s32, s32);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(u32);
M2C_UNK get_instance__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
M2C_UNK set_state_ready__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_card_index__22TAdMultiPlyChrSelectGCFPv(s32, M2C_UNK);
M2C_UNK get_card_instance__22TAdMultiPlyChrSelectGCFv();
M2C_UNK set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_80472868[];

void update_state_wait_card__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    s32 temp_r3_2;

    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) <= 1) {
        play_sound_effect(0x52F16, 0, 0, 0);
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
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
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x88)) != 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
        return;
    }
    if (is_child_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x88)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x88));
        switch (temp_r3) {
        case 1:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            return;
        case 0:
            temp_r31 = TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C));
            temp_r3_2 = get_card_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C), 1);
            if (try_move_char__23TAdSinglePlyChrSelectGCFii(temp_r3_2 + 4, temp_r31) != 0) {
                {
                    u32 temp_u0 = get_global_state__22TAdMultiPlyChrSelectGCFv();
                    if (temp_u0 != 0U) {
                        setup_move_effect_params__18TAdChrMoveEffectGCFPvii(temp_u0, temp_r31 + 3, temp_r3_2);
                    }
                }
                M2C_FIELD(arg0, s32 *, 0x80) = TAdMultiPlyChrSelectGC__sub_802DBEC4(arg0, lbl_80472868);
                set_field_1c__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x6C), 0x15);
                M2C_FIELD(arg0, s32 *, 0x20) = 0x11;
                return;
            }
            set_state_ready__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
            break;
        }
    }
}

}
