#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK TWindow__close(void *);
M2C_UNK load_tables(s32);
s32 swap_characters__23TAdSinglePlyChrSelectGCFii(u32, s32);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
u32 TAdMultiPlyChrSelectGC__sub_802DBE4C(void *, M2C_UNK *);
s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(void *, M2C_UNK *);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
M2C_UNK set_status_value__22TAdMultiPlyChrSelectGCFPvi(s32, u32);
M2C_UNK TAdChrMoveEffectGC__sub_803490D8(u32, s32, s32);
extern s8 lbl_80472880[];
extern s8 lbl_80472888[];
extern s8 lbl_8050E3B8[];
void TAdMultiPlyChrSelectGC__sub_802DC5CC(void *arg0);
}

extern "C" {

void check_cancel_input__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void TAdMultiPlyChrSelectGC__sub_802DC440(void *arg0);
void handle_input__22TAdMultiPlyChrSelectGCFPv(void *arg0);
M2C_UNK clear_entries__18TAdChrMoveEffectGCFPv();
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK set_state__15TAdPlayerLoadGCFi(M2C_UNK);
M2C_UNK reset_cursor_state__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s8 lbl_8050E3B8[];

void check_cancel_input__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) || (TWindowShortListCtrl__check_controller_button(lbl_8050E3B8 + 0x20, 2) != 0)) {
        set_state__15TAdPlayerLoadGCFi(1);
        M2C_FIELD(arg0, s32 *, 0x58) = 0;
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
    }
}

void TAdMultiPlyChrSelectGC__sub_802DC440(void *arg0) {
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            clear_entries__18TAdChrMoveEffectGCFPv();
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) == 0x14) {
        set_field_1c__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x6C), 0x1B);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x25;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) == 0x13) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x80));
            M2C_FIELD(arg0, u32 *, 0x80) = 0U;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            clear_entries__18TAdChrMoveEffectGCFPv();
        }
        reset_cursor_state__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0x24;
    }
}

extern s8 lbl_8050E3B8[];

void handle_input__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    void *temp_r31;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x94));
        M2C_FIELD(arg0, u32 *, 0x94) = 0U;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    temp_r31 = lbl_8050E3B8 + 0x20;
    if ((TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) || (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0)) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1F;
    }
}
void TAdMultiPlyChrSelectGC__sub_802DC5CC(void *arg0) {
    u32 var_r30;
    u32 gs;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x94) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x94));
        M2C_FIELD(arg0, u32 *, 0x94) = 0U;
    }
    if (TWindowShortListCtrl__check_controller_button((void *)(lbl_8050E3B8 + 0x20), (M2C_UNK)(2)) != 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, s32 *, 0x28) = 0x1B;
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1A;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x68)) < 0xE) {
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x1D;
        return;
    }
    var_r30 = 0U;
loop_9:
    if (swap_characters__23TAdSinglePlyChrSelectGCFii(var_r30, M2C_FIELD(arg0, s32 *, 0x38)) != 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x84));
            M2C_FIELD(arg0, u32 *, 0x84) = 0U;
        }
        gs = get_global_state__22TAdMultiPlyChrSelectGCFv();
        if (gs != 0U) {
            TAdChrMoveEffectGC__sub_803490D8(gs, M2C_FIELD(arg0, s32 *, 0x38) - 4, var_r30 + 3);
        }
        load_tables(M2C_FIELD(arg0, s32 *, 0x38));
        set_status_value__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), var_r30);
        M2C_FIELD(arg0, s32 *, 0x80) = TAdMultiPlyChrSelectGC__sub_802DBEC4(arg0, (M2C_UNK*)lbl_80472880);
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
        set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x68), 0x11);
        M2C_FIELD(arg0, s32 *, 0x20) = 0x23;
        return;
    }
    var_r30 += 1;
    if (var_r30 >= 4U) {
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x84) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x84) = TAdMultiPlyChrSelectGC__sub_802DBE4C(arg0, (M2C_UNK*)lbl_80472888);
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0x22;
        return;
    }
    goto loop_9;
}

}
