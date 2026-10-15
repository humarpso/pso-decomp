#include "types.h"

extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 TWindow__close(void *);
s32 load_tables(s32);
s32 swap_characters__23TAdSinglePlyChrSelectGCFii(u32, s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 close__17TWindowSubComCardFPv(void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
u32 TAdMultiPlyChrSelectGC__sub_802DBE4C(void *, s32 *);
s32 TAdMultiPlyChrSelectGC__sub_802DBEC4(void *, s32 *);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 set_status_value__22TAdMultiPlyChrSelectGCFPvi(s32, u32);
s32 setup_move_effect_params__18TAdChrMoveEffectGCFPvii(u32, s32, s32);
extern s8 lbl_80472880[];
extern s8 lbl_80472888[];
extern s8 controller_physical_port_bank[];
void TAdMultiPlyChrSelectGC__sub_802DC5CC(void *arg0);
}

extern "C" {

void check_cancel_input__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void TAdMultiPlyChrSelectGC__sub_802DC440(void *arg0);
void handle_input__22TAdMultiPlyChrSelectGCFPv(void *arg0);
s32 clear_entries__18TAdChrMoveEffectGCFPv();
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 close__17TWindowSubComCardFPv(void *);
s32 set_state__15TAdPlayerLoadGCFi(s32);
s32 reset_cursor_state__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 set_field_1c__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
u32 get_global_state__22TAdMultiPlyChrSelectGCFv();
s32 queue_destruction__7TObjectFv(void *);

extern s8 controller_physical_port_bank[];

void check_cancel_input__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((get_mode__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) < 0x14) || (TWindowShortListCtrl__check_controller_button(controller_physical_port_bank + 0x20, 2) != 0)) {
        set_state__15TAdPlayerLoadGCFi(1);
        *(s32 *)((s8 *)arg0 + 0x58) = 0;
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1D;
    }
}

void TAdMultiPlyChrSelectGC__sub_802DC440(void *arg0) {
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x68)) < 0xE) {
            *(s32 *)((s8 *)arg0 + 0x58) = 0;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            clear_entries__18TAdChrMoveEffectGCFPv();
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1D;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x68)) == 0x14) {
        set_field_1c__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x6C), 0x1B);
        *(s32 *)((s8 *)arg0 + 0x20) = 0x25;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x68)) == 0x13) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x80));
            *(u32 *)((s8 *)arg0 + 0x80) = 0U;
        }
        if (get_global_state__22TAdMultiPlyChrSelectGCFv() != 0U) {
            clear_entries__18TAdChrMoveEffectGCFPv();
        }
        reset_cursor_state__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
        *(s32 *)((s8 *)arg0 + 0x20) = 0x24;
    }
}

extern s8 controller_physical_port_bank[];

void handle_input__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    void *temp_r31;

    if ((u32) *(u32 *)((s8 *)arg0 + 0x94) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x94));
        *(u32 *)((s8 *)arg0 + 0x94) = 0U;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x68)) < 0xE) {
            *(s32 *)((s8 *)arg0 + 0x58) = 0;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1D;
        return;
    }
    temp_r31 = controller_physical_port_bank + 0x20;
    if ((TWindowShortListCtrl__check_controller_button(temp_r31, 4) != 0) || (TWindowShortListCtrl__check_controller_button(temp_r31, 2) != 0)) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1F;
    }
}
void TAdMultiPlyChrSelectGC__sub_802DC5CC(void *arg0) {
    u32 var_r30;
    u32 gs;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x94) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x94));
        *(u32 *)((s8 *)arg0 + 0x94) = 0U;
    }
    if (TWindowShortListCtrl__check_controller_button((void *)(controller_physical_port_bank + 0x20), (s32)(2)) != 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(s32 *)((s8 *)arg0 + 0x28) = 0x1B;
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1A;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x68)) < 0xE) {
            *(s32 *)((s8 *)arg0 + 0x58) = 0;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1D;
        return;
    }
    var_r30 = 0U;
loop_9:
    if (swap_characters__23TAdSinglePlyChrSelectGCFii(var_r30, *(s32 *)((s8 *)arg0 + 0x38)) != 0) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x84) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x84));
            *(u32 *)((s8 *)arg0 + 0x84) = 0U;
        }
        gs = get_global_state__22TAdMultiPlyChrSelectGCFv();
        if (gs != 0U) {
            setup_move_effect_params__18TAdChrMoveEffectGCFPvii(gs, *(s32 *)((s8 *)arg0 + 0x38) - 4, var_r30 + 3);
        }
        load_tables(*(s32 *)((s8 *)arg0 + 0x38));
        set_status_value__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x60), var_r30);
        *(s32 *)((s8 *)arg0 + 0x80) = TAdMultiPlyChrSelectGC__sub_802DBEC4(arg0, (s32*)lbl_80472880);
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x60), 1);
        set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x68), 0x11);
        *(s32 *)((s8 *)arg0 + 0x20) = 0x23;
        return;
    }
    var_r30 += 1;
    if (var_r30 >= 4U) {
        set_field_100__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x60), 1);
        if ((u32) *(u32 *)((s8 *)arg0 + 0x84) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x84) = TAdMultiPlyChrSelectGC__sub_802DBE4C(arg0, (s32*)lbl_80472888);
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0x22;
        return;
    }
    goto loop_9;
}

}
