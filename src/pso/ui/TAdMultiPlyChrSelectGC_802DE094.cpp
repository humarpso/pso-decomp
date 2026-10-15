#include "types.h"

struct Stack_802DE7D0 {
    s32 sp8;
    s32 spC;
};

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, s32, s32);
s32 load_tables(s32);
u32 TAdSinglePlyChrSelectGC__sub_801FE4BC(s32);
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi(s32);
u32 check_flag__23TAdSinglePlyChrSelectGCFi(s32);
s32 play_sound_effect(s32, s32, s32, s32);
u32 __nw__7TObjectFUl(s32);
s32 TWindow__close(void *);
s32 close__17TWindowSubComCardFPv(void *);
s32 TAdMultiPlyChrSelectGC__sub_802C561C(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C5688(s32);
s32 split_slot_index__22TAdMultiPlyChrSelectGCFiPvPv(s32, s32 *, s32 *);
s32 init__22TAdMultiPlyChrSelectGCFv();
s32 is_multiplayer_character_slot_selected(s32);
s32 count_ready__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
s32 TAdMultiPlyChrSelectGC__sub_802C65C0(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6920();
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
s32 reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
u32 __ct__9TAdFadeGCFv(u32, s32, s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
u32 create_choice_menu__22TAdMultiPlyChrSelectGCFv(void *);
s32 TAdMultiPlyChrSelectGC__sub_802DC294(void *, s32);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(s32);
s32 TAdMultiPlyChrSelectGC__sub_802E0024(s32, s32);
s32 get_selection__22TAdMultiPlyChrSelectGCFPv(s32);
int set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(void*, void*);
s32 restore_selection__22TAdMultiPlyChrSelectGCFv(s32);
s32 update_field_4E8__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_field_0x530__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_chr_select_state__22TAdMultiPlyChrSelectGCFv();
s32 TAdChrSelASlotGC__sub_8030C3C0(u32, s32);
u32 open_yes_no_window__16TAdChrSelASlotGCFiii(u32, s32 *, s32);
u32 TAdChrSelASlotGC__sub_8030CA84(u32, s32 *);
extern s32 lbl_80472850[];
extern s32 lbl_80472858[];
extern s32 controller_physical_port_bank[];
extern s32 tl_fade;
void TAdMultiPlyChrSelectGC__sub_802DE7D0(void *arg0);
}

extern "C" {

void open_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void init_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void open_char_select__22TAdMultiPlyChrSelectGCFPv(void* p);
void close_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update_card_select__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update_state_option__22TAdMultiPlyChrSelectGCFPv(void *arg0);
void update_card_confirm__22TAdMultiPlyChrSelectGCFPv(void *arg0);
s32 destroy_windows__14TAdGameStartGCFPv(s32);
s32 set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, s32, s32 *);
s32 TAdMultiPlyChrSelectGC__sub_802DBCE8(void *);
s32 is_visible__17TWindowSubComCardFPv(s32);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
s32 get_selected_menu_value(s32);
s32 close__17TWindowSubComCardFPv(void *);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 is_child_visible__17TWindowSubComCardFPv(s32);
s32 TWindow__close(void *);
s32 clear_flag_and_release__17TWindowSubComCardFPv(u32);
s32 clear_entry__23TAdSinglePlyChrSelectGCFi();
s32 clear_slot_body__23TAdSinglePlyChrSelectGCFi(s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 clear_transition_flag__17TWindowSubComCardFPv(u32);
s32 TAdMultiPlyChrSelectGC__sub_802C561C(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C5688(s32);
s32 reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
int set_state_ready__22TAdMultiPlyChrSelectGCFPv(void*);
s32 set_state__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 set_select_mode__22TAdMultiPlyChrSelectGCFii(s32, s32);
int set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(void*, void*);
int TAdMultiPlyChrSelectGC__sub_802E006C(void*, void*, void*);
s32 restore_selection__22TAdMultiPlyChrSelectGCFv(s32);
s32 update_field_4E8__22TAdMultiPlyChrSelectGCFPv(s32);
s32 set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 get_or_create_slot_window__22TAdMultiPlyChrSelectGCFii(void *, s32);
s32 create__16TAdChrSelBSlotGCFPv(void *);
s32 get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
s32 open__17TWindowOptionCtrlFPv(s32);
s32 queue_destruction__7TObjectFv(void *);

extern s32 TAdMultiPlyChrSelectGC__data_805DE898;

void open_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    destroy_windows__14TAdGameStartGCFPv(*(s32 *)((s8 *)arg0 + 0x78));
    set_select_mode__22TAdMultiPlyChrSelectGCFii(*(s32 *)((s8 *)arg0 + 0x5C), 1);
    set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x60), 1);
    *(s32 *)((s8 *)arg0 + 0x68) = get_or_create_slot_window__22TAdMultiPlyChrSelectGCFii(arg0, 2);
    *(s32 *)((s8 *)arg0 + 0x6C) = create__16TAdChrSelBSlotGCFPv(arg0);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(*(s32 *)((s8 *)arg0 + 0x64), 0, &TAdMultiPlyChrSelectGC__data_805DE898);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(*(s32 *)((s8 *)arg0 + 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
    *(s32 *)((s8 *)arg0 + 0x20) = 0xC;
}

void init_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x7C));
        *(u32 *)((s8 *)arg0 + 0x7C) = 0U;
    }
    TAdMultiPlyChrSelectGC__sub_802E006C((void*)(*(s32 *)((s8 *)arg0 + 0x5C)), (void*)(2), (void*)(2));
    set_field_4ec__22TAdMultiPlyChrSelectGCFPvi((void*)(*(s32 *)((s8 *)arg0 + 0x5C)), (void*)(2));
    set_state__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x5C), 1);
    set_field_100__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x60), 1);
    *(s32 *)((s8 *)arg0 + 0x50) = 1;
    *(s32 *)((s8 *)arg0 + 0x54) = 0;
    open_windows__22TAdMultiPlyChrSelectGCFPv((void *)(arg0));
}

void open_char_select__22TAdMultiPlyChrSelectGCFPv(void* p) { set_field_4ec__22TAdMultiPlyChrSelectGCFPvi((void*)(*(void**)((char*)p + 0x5c)), (void*)((void*)2)); TAdMultiPlyChrSelectGC__sub_802E006C((void*)(*(void**)((char*)p + 0x5c)), (void*)((void*)2), (void*)((void*)2)); set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(void**)((char*)p + 0x5c))); open_windows__22TAdMultiPlyChrSelectGCFPv((void *)(p)); }

void close_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x7C));
        *(u32 *)((s8 *)arg0 + 0x7C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x8C) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x8C));
        *(u32 *)((s8 *)arg0 + 0x8C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x74) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x74));
        *(u32 *)((s8 *)arg0 + 0x74) = 0U;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(*(s32 *)((s8 *)arg0 + 0x68))) == 1) {
        reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(*(s32 *)((s8 *)arg0 + 0x68))) == 1) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
    }
}

void update__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(*(s32 *)((s8 *)arg0 + 0x68))) == 1) {
        reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()) == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(s32 *)((s8 *)arg0 + 0x5C)));
        *(s32 *)((s8 *)arg0 + 0x20) = 3;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv((s32)(*(s32 *)((s8 *)arg0 + 0x8C))) != 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(s32 *)((s8 *)arg0 + 0x5C)));
        *(s32 *)((s8 *)arg0 + 0x20) = 3;
        return;
    }
    if (is_child_visible__17TWindowSubComCardFPv((s32)(*(s32 *)((s8 *)arg0 + 0x8C))) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv((s32)(*(s32 *)((s8 *)arg0 + 0x8C)));
        switch (temp_r3) {
        case 1:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(s32 *)((s8 *)arg0 + 0x5C)));
            *(s32 *)((s8 *)arg0 + 0x20) = 3;
            return;
        case 0:
            TAdMultiPlyChrSelectGC__sub_802DFFE8((s32)(*(s32 *)((s8 *)arg0 + 0x5C)));
            clear_entry__23TAdSinglePlyChrSelectGCFi();
            set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x68), 0xF);
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(s32 *)((s8 *)arg0 + 0x5C)));
            *(s32 *)((s8 *)arg0 + 0x20) = 8;
            break;
        }
    }
}

void update_card_select__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(*(s32 *)((s8 *)arg0 + 0x68))) == 1) {
        if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x7C));
            *(u32 *)((s8 *)arg0 + 0x7C) = 0U;
        }
        reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()) == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(s32 *)((s8 *)arg0 + 0x5C)));
        *(s32 *)((s8 *)arg0 + 0x20) = 3;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv((s32)(*(u32 *)((s8 *)arg0 + 0x98))) != 0) {
        clear_transition_flag__17TWindowSubComCardFPv(*(u32 *)((s8 *)arg0 + 0x7C));
        clear_flag_and_release__17TWindowSubComCardFPv(*(u32 *)((s8 *)arg0 + 0x7C));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x98) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x98));
            *(u32 *)((s8 *)arg0 + 0x98) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 5;
        return;
    }
    if (is_child_visible__17TWindowSubComCardFPv((s32)(*(u32 *)((s8 *)arg0 + 0x98))) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv((s32)(*(u32 *)((s8 *)arg0 + 0x98)));
        switch (temp_r3) {
        case 1:
            clear_transition_flag__17TWindowSubComCardFPv(*(u32 *)((s8 *)arg0 + 0x7C));
            clear_flag_and_release__17TWindowSubComCardFPv(*(u32 *)((s8 *)arg0 + 0x7C));
            if ((u32) *(u32 *)((s8 *)arg0 + 0x98) != 0U) {
                close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x98));
                *(u32 *)((s8 *)arg0 + 0x98) = 0U;
            }
            *(s32 *)((s8 *)arg0 + 0x20) = 5;
            return;
        case 0:
            if ((u32) *(u32 *)((s8 *)arg0 + 0x98) != 0U) {
                close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x98));
                *(u32 *)((s8 *)arg0 + 0x98) = 0U;
            }
            clear_slot_body__23TAdSinglePlyChrSelectGCFi(TAdMultiPlyChrSelectGC__sub_802DFFE8((s32)(*(s32 *)((s8 *)arg0 + 0x5C))) + 4);
            set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x68), 0xF);
            *(s32 *)((s8 *)arg0 + 0x20) = 8;
            break;
        }
    }
}

void update_state_option__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(*(u32 *)((s8 *)arg0 + 0x68))) == 1) {
        reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()) == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(s32 *)((s8 *)arg0 + 0x5C)));
        *(s32 *)((s8 *)arg0 + 0x20) = 3;
        return;
    }
    if (get_status_flag__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x7C)) != 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(s32 *)((s8 *)arg0 + 0x5C)));
        *(s32 *)((s8 *)arg0 + 0x20) = 3;
        return;
    }
    if (is_visible__17TWindowSubComCardFPv(*(s32 *)((s8 *)arg0 + 0x7C)) != 0) {
        temp_r3 = get_selected_menu_value(*(s32 *)((s8 *)arg0 + 0x7C));
        switch (temp_r3) {
        case 0:
            play_sound_effect(0x52D01, 0, 0, 0);
            TAdMultiPlyChrSelectGC__sub_802C561C(*(s32 *)((s8 *)arg0 + 0x5C));
            TAdMultiPlyChrSelectGC__sub_802C5688(*(s32 *)((s8 *)arg0 + 0x5C));
            *(s32 *)((s8 *)arg0 + 0x20) = 0x19;
            return;
        case 1:
            play_sound_effect(0x52D01, 0, 0, 0);
            update_field_4E8__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
            restore_selection__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)arg0 + 0x5C));
            TAdMultiPlyChrSelectGC__sub_802C5688(*(s32 *)((s8 *)arg0 + 0x5C));
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(s32 *)((s8 *)arg0 + 0x5C)));
            if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
                queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
                *(u32 *)((s8 *)arg0 + 0x68) = 0U;
            }
            *(s32 *)((s8 *)arg0 + 0x20) = 0xA;
            return;
        case 2:
            open__17TWindowOptionCtrlFPv(*(s32 *)((s8 *)arg0 + 0x7C));
            *(s32 *)((s8 *)arg0 + 0x98) = TAdMultiPlyChrSelectGC__sub_802DBCE8(arg0);
            *(s32 *)((s8 *)arg0 + 0x20) = 6;
            return;
        case 3:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(s32 *)((s8 *)arg0 + 0x5C)));
            *(s32 *)((s8 *)arg0 + 0x20) = 3;
            break;
        }
    }
}

extern s32 lbl_805D68C8;

void update_card_confirm__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(*(s32 *)((s8 *)arg0 + 0x68))) == 1) {
        reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
        *(s32 *)((s8 *)arg0 + 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()) == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(s32 *)((s8 *)arg0 + 0x5C)));
        *(s32 *)((s8 *)arg0 + 0x20) = 3;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv((s32)(*(u32 *)((s8 *)arg0 + 0x90))) != 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(s32 *)((s8 *)arg0 + 0x5C)));
        *(s32 *)((s8 *)arg0 + 0x20) = 3;
        return;
    }
    if (is_child_visible__17TWindowSubComCardFPv((s32)(*(u32 *)((s8 *)arg0 + 0x90))) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv((s32)(*(u32 *)((s8 *)arg0 + 0x90)));
        switch (temp_r3) {
        case 1:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(s32 *)((s8 *)arg0 + 0x5C)));
            *(s32 *)((s8 *)arg0 + 0x20) = 3;
            return;
        case 0:
            play_sound_effect(0x52D01, 0, 0, 0);
            TAdMultiPlyChrSelectGC__sub_802C561C(*(s32 *)((s8 *)arg0 + 0x5C));
            TAdMultiPlyChrSelectGC__sub_802C5688(*(s32 *)((s8 *)arg0 + 0x5C));
            lbl_805D68C8 = 1;
            if ((u32) *(u32 *)((s8 *)arg0 + 0x90) != 0U) {
                close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x90));
                *(u32 *)((s8 *)arg0 + 0x90) = 0U;
            }
            *(s32 *)((s8 *)arg0 + 0x28) = 0x1C;
            *(s32 *)((s8 *)arg0 + 0x20) = 0x1A;
            *(s32 *)((s8 *)arg0 + 0x2C) = 0;
            break;
        }
    }
}
void TAdMultiPlyChrSelectGC__sub_802DE7D0(void *arg0) {
    Stack_802DE7D0 stack;
    s32 temp_r30;
    s32 temp_r30_2;
    s32 temp_r5;
    s32 temp_r5_2;
    s32 var_r30;
    s32 var_r3;
    u32 var_r0;
    if ((u32) *(u32 *)((s8 *)arg0 + 0x90) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x90));
        *(u32 *)((s8 *)arg0 + 0x90) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x8C) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x8C));
        *(u32 *)((s8 *)arg0 + 0x8C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x7C) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x7C));
        *(u32 *)((s8 *)arg0 + 0x7C) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x98) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x98));
        *(u32 *)((s8 *)arg0 + 0x98) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x74) != 0U) {
        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x74));
        *(u32 *)((s8 *)arg0 + 0x74) = 0U;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
        temp_r5 = TAdMultiPlyChrSelectGC__sub_802C6920() * 0x50;
        var_r3 = TWindowShortListCtrl__check_controller_button((s8 *)controller_physical_port_bank + temp_r5 + 0x20, 2, temp_r5);
    } else {
        temp_r5_2 = ((s32)get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()) * 0x50;
        var_r3 = TWindowShortListCtrl__check_controller_button((s8 *)controller_physical_port_bank + temp_r5_2 + 0x20, 2, temp_r5_2);
    }
    if (var_r3 != 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        if (TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
            split_slot_index__22TAdMultiPlyChrSelectGCFiPvPv(TAdMultiPlyChrSelectGC__sub_802C6920(), &stack.spC, &stack.sp8);
            init__22TAdMultiPlyChrSelectGCFv();
            set_field_4ec__22TAdMultiPlyChrSelectGCFPvi((void*)(*(s32 *)((s8 *)arg0 + 0x5C)), (void*)(stack.spC));
            TAdMultiPlyChrSelectGC__sub_802E0024(*(s32 *)((s8 *)arg0 + 0x5C), stack.sp8);
            return;
        }
        if (get_chr_select_state__22TAdMultiPlyChrSelectGCFv() == 0) {
            *(s32 *)((s8 *)arg0 + 0x20) = 0x1B;
        }
    } else {
        var_r30 = 0;
        do {
            if ((is_multiplayer_character_slot_selected(var_r30) != 0) && (TAdMultiPlyChrSelectGC__sub_802C6848((s32)(var_r30)) == 0)) {
                TAdMultiPlyChrSelectGC__sub_802C65C0(var_r30);
            }
            var_r30 += 1;
        } while (var_r30 < 4);
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(*(u32 *)((s8 *)arg0 + 0x68))) == 1) {
            reset_slot_selections__22TAdMultiPlyChrSelectGCFv();
            *(s32 *)((s8 *)arg0 + 0x20) = 0;
            return;
        }
        temp_r30 = TAdMultiPlyChrSelectGC__sub_802DC294(arg0, get_cursor__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C)));
        if (((s32) *(s32 *)((s8 *)arg0 + 0x30) != TAdMultiPlyChrSelectGC__sub_802DFFE8(*(s32 *)((s8 *)arg0 + 0x5C))) || ((s32) *(s32 *)((s8 *)arg0 + 0x34) != get_cursor__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C)))) {
            set_field_100__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x60), 1);
            *(s32 *)((s8 *)arg0 + 0x40) = 0;
            if (TAdSinglePlyChrSelectGC__sub_801FE4BC(temp_r30) != 0U) {
                load_tables(temp_r30);
                set_field_100__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x60), 2);
                if ((check_flag__23TAdSinglePlyChrSelectGCFi(1) != 0U) && ((s32) *(s32 *)((s8 *)arg0 + 0x3C) != 0)) {
                    *(s32 *)((s8 *)arg0 + 0x40) = 1;
                }
            }
            *(s32 *)((s8 *)arg0 + 0x30) = TAdMultiPlyChrSelectGC__sub_802DFFE8(*(s32 *)((s8 *)arg0 + 0x5C));
            *(s32 *)((s8 *)arg0 + 0x34) = get_cursor__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
        }
        if (get_selection__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C)) != 0) {
            load_tables(temp_r30);
            if (get_cursor__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C)) == 1) {
                if (is_slot_active__23TAdSinglePlyChrSelectGCFUi(temp_r30) == 0) {
                    play_sound_effect(0x52D01, 0, 0, 0);
                    update_field_4E8__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
                    restore_selection__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)arg0 + 0x5C));
                    TAdMultiPlyChrSelectGC__sub_802C5688(*(s32 *)((s8 *)arg0 + 0x5C));
                    if ((u32) *(u32 *)((s8 *)arg0 + 0x68) != 0U) {
                        queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x68));
                        *(u32 *)((s8 *)arg0 + 0x68) = 0U;
                    }
                    *(s32 *)((s8 *)arg0 + 0x20) = 9;
                    return;
                }
                *(u32 *)((s8 *)arg0 + 0x7C) = create_choice_menu__22TAdMultiPlyChrSelectGCFv(arg0);
                *(s32 *)((s8 *)arg0 + 0x20) = 5;
                return;
            }
            if (is_slot_active__23TAdSinglePlyChrSelectGCFUi(temp_r30) != 0) {
                if (TAdChrSelASlotGC__sub_8030C3C0(*(u32 *)((s8 *)arg0 + 0x68), TAdMultiPlyChrSelectGC__sub_802DFFE8(*(s32 *)((s8 *)arg0 + 0x5C))) != 0) {
                    var_r0 = __nw__7TObjectFUl(0x38);
                    if (var_r0 != 0U) {
                        var_r0 = __ct__9TAdFadeGCFv(var_r0, tl_fade, 0);
                    }
                    *(u32 *)((s8 *)arg0 + 0x74) = var_r0;
                    *(u32 *)((s8 *)arg0 + 0x8C) = open_yes_no_window__16TAdChrSelASlotGCFiii(*(u32 *)((s8 *)arg0 + 0x68), (s32 *)&lbl_80472850, ((s32)get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()));
                    *(s32 *)((s8 *)arg0 + 0x20) = 7;
                    return;
                }
                play_sound_effect(0x52D01, 0, 0, 0);
                TAdMultiPlyChrSelectGC__sub_802C561C(*(s32 *)((s8 *)arg0 + 0x5C));
                TAdMultiPlyChrSelectGC__sub_802C5688(*(s32 *)((s8 *)arg0 + 0x5C));
                *(s32 *)((s8 *)arg0 + 0x20) = 0x19;
                return;
            }
            *(u32 *)((s8 *)arg0 + 0x90) = TAdChrSelASlotGC__sub_8030CA84(*(u32 *)((s8 *)arg0 + 0x68), lbl_80472858);
            *(s32 *)((s8 *)arg0 + 0x20) = 4;
            return;
        }
        if ((get_field_0x530__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C)) != 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() > 1) && (is_multiplayer_character_slot_selected(0) != 0)) {
            *(s32 *)((s8 *)arg0 + 0x28) = 0x1C;
            *(s32 *)((s8 *)arg0 + 0x20) = 0x1A;
            *(s32 *)((s8 *)arg0 + 0x2C) = 1;
            return;
        }
        if ((count_ready__22TAdMultiPlyChrSelectGCFv() == TAdMultiPlyChrSelectGC__sub_802C6558()) && (is_multiplayer_character_slot_selected(0) != 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() > 1)) {
            *(s32 *)((s8 *)arg0 + 0x28) = 0x1C;
            *(s32 *)((s8 *)arg0 + 0x20) = 0x1A;
            *(s32 *)((s8 *)arg0 + 0x2C) = 1;
        }
    }
}

}
