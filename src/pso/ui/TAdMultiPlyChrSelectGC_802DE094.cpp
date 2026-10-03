#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802DE7D0 {
    s32 sp8;
    s32 spC;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK, s32);
M2C_UNK load_tables(s32);
u32 TAdSinglePlyChrSelectGC__sub_801FE4BC(s32);
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi(s32);
u32 check_flag__23TAdSinglePlyChrSelectGCFi(M2C_UNK);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK TWindow__close(void *);
M2C_UNK close__17TWindowSubComCardFPv(void *);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C561C(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5688(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5BCC(M2C_UNK, s32 *, s32 *);
M2C_UNK init__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C64D0(s32);
s32 count_ready__22TAdMultiPlyChrSelectGCFv();
s32 TAdMultiPlyChrSelectGC__sub_802C6558();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C65C0(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6848(s32);
s32 TAdMultiPlyChrSelectGC__sub_802C6920();
M2C_UNK get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
u32 __ct__9TAdFadeGCFv(u32, s32, M2C_UNK);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
u32 TAdMultiPlyChrSelectGC__sub_802DBF3C(void *);
s32 TAdMultiPlyChrSelectGC__sub_802DC294(void *, s32);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
s32 get_cursor__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802E0024(s32, s32);
s32 get_selection__22TAdMultiPlyChrSelectGCFPv(s32);
int set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(void*, void*);
M2C_UNK restore_selection__22TAdMultiPlyChrSelectGCFv(s32);
M2C_UNK update_field_4E8__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_field_0x530__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_chr_select_state__22TAdMultiPlyChrSelectGCFv();
s32 TAdChrSelASlotGC__sub_8030C3C0(u32, s32);
u32 open_yes_no_window__16TAdChrSelASlotGCFiii(u32, M2C_UNK *, s32);
u32 TAdChrSelASlotGC__sub_8030CA84(u32, M2C_UNK *);
extern M2C_UNK lbl_80472850[];
extern M2C_UNK lbl_80472858[];
extern M2C_UNK lbl_8050E3B8[];
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
M2C_UNK TAdGameStartGC__sub_802E6380(s32);
M2C_UNK set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, M2C_UNK, M2C_UNK *);
s32 TAdMultiPlyChrSelectGC__sub_802DBCE8(void *);
s32 is_visible__17TWindowSubComCardFPv(s32);
s32 get_status_flag__17TWindowSubComCardFPv(s32);
s32 get_selected_menu_value(s32);
M2C_UNK close__17TWindowSubComCardFPv(void *);
s32 get_card_data__17TWindowSubComCardFPv(s32);
s32 TWindowSubComCard__sub_802A57FC(s32);
M2C_UNK TWindow__close(void *);
M2C_UNK clear_flag_and_release__17TWindowSubComCardFPv(u32);
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE2D0();
M2C_UNK TAdSinglePlyChrSelectGC__sub_801FE338(s32);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK clear_transition_flag__17TWindowSubComCardFPv(u32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C561C(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C5688(s32);
M2C_UNK TAdMultiPlyChrSelectGC__sub_802C6A10();
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 TAdMultiPlyChrSelectGC__sub_802DFFE8(s32);
int set_state_ready__22TAdMultiPlyChrSelectGCFPv(void*);
M2C_UNK set_state__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
M2C_UNK set_select_mode__22TAdMultiPlyChrSelectGCFii(s32, M2C_UNK);
int set_field_4ec__22TAdMultiPlyChrSelectGCFPvi(void*, void*);
int TAdMultiPlyChrSelectGC__sub_802E006C(void*, void*, void*);
M2C_UNK restore_selection__22TAdMultiPlyChrSelectGCFv(s32);
M2C_UNK update_field_4E8__22TAdMultiPlyChrSelectGCFPv(s32);
M2C_UNK set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(s32, M2C_UNK);
s32 TAdMultiPlyChrSelectGC__sub_8030E2E4(void *, M2C_UNK);
s32 create__16TAdChrSelBSlotGCFPv(void *);
M2C_UNK get_clamped_cursor__22TAdMultiPlyChrSelectGCFv();
s32 get_slot_or_neg1__17TWindowSubComCardFPv(s32);
M2C_UNK open__17TWindowOptionCtrlFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern M2C_UNK TAdMultiPlyChrSelectGC__data_805DE898;

void open_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    TAdGameStartGC__sub_802E6380(M2C_FIELD(arg0, s32 *, 0x78));
    set_select_mode__22TAdMultiPlyChrSelectGCFii(M2C_FIELD(arg0, s32 *, 0x5C), 1);
    set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
    M2C_FIELD(arg0, s32 *, 0x68) = TAdMultiPlyChrSelectGC__sub_8030E2E4(arg0, 2);
    M2C_FIELD(arg0, s32 *, 0x6C) = create__16TAdChrSelBSlotGCFPv(arg0);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 0, &TAdMultiPlyChrSelectGC__data_805DE898);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(M2C_FIELD(arg0, s32 *, 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
    M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
}

void init_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    TAdMultiPlyChrSelectGC__sub_802E006C((void*)(M2C_FIELD(arg0, s32 *, 0x5C)), (void*)(2), (void*)(2));
    set_field_4ec__22TAdMultiPlyChrSelectGCFPvi((void*)(M2C_FIELD(arg0, s32 *, 0x5C)), (void*)(2));
    set_state__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x5C), 1);
    set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
    M2C_FIELD(arg0, s32 *, 0x50) = 1;
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    open_windows__22TAdMultiPlyChrSelectGCFPv((void *)(arg0));
}

void open_char_select__22TAdMultiPlyChrSelectGCFPv(void* p) { set_field_4ec__22TAdMultiPlyChrSelectGCFPvi((void*)(*(void**)((char*)p + 0x5c)), (void*)((void*)2)); TAdMultiPlyChrSelectGC__sub_802E006C((void*)(*(void**)((char*)p + 0x5c)), (void*)((void*)2), (void*)((void*)2)); set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(*(void**)((char*)p + 0x5c))); open_windows__22TAdMultiPlyChrSelectGCFPv((void *)(p)); }

void close_windows__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x8C));
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
}

void update__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()) == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, s32 *, 0x8C))) != 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC((s32)(M2C_FIELD(arg0, s32 *, 0x8C))) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, s32 *, 0x8C)));
        switch (temp_r3) {
        case 1:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        case 0:
            TAdMultiPlyChrSelectGC__sub_802DFFE8((s32)(M2C_FIELD(arg0, s32 *, 0x5C)));
            TAdSinglePlyChrSelectGC__sub_801FE2D0();
            set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x68), 0xF);
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 8;
            break;
        }
    }
}

void update_card_select__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
            M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
        }
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()) == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, u32 *, 0x98))) != 0) {
        clear_transition_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x7C));
        clear_flag_and_release__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x7C));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
            close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x98));
            M2C_FIELD(arg0, u32 *, 0x98) = 0U;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 5;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC((s32)(M2C_FIELD(arg0, u32 *, 0x98))) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, u32 *, 0x98)));
        switch (temp_r3) {
        case 1:
            clear_transition_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x7C));
            clear_flag_and_release__17TWindowSubComCardFPv(M2C_FIELD(arg0, u32 *, 0x7C));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
                close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x98));
                M2C_FIELD(arg0, u32 *, 0x98) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 5;
            return;
        case 0:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
                close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x98));
                M2C_FIELD(arg0, u32 *, 0x98) = 0U;
            }
            TAdSinglePlyChrSelectGC__sub_801FE338(TAdMultiPlyChrSelectGC__sub_802DFFE8((s32)(M2C_FIELD(arg0, s32 *, 0x5C))) + 4);
            set_cursor_index__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x68), 0xF);
            M2C_FIELD(arg0, s32 *, 0x20) = 8;
            break;
        }
    }
}

void update_state_option__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, u32 *, 0x68))) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()) == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (get_status_flag__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x7C)) != 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (is_visible__17TWindowSubComCardFPv(M2C_FIELD(arg0, s32 *, 0x7C)) != 0) {
        temp_r3 = get_selected_menu_value(M2C_FIELD(arg0, s32 *, 0x7C));
        switch (temp_r3) {
        case 0:
            play_sound_effect(0x52D01, 0, 0, 0);
            TAdMultiPlyChrSelectGC__sub_802C561C(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdMultiPlyChrSelectGC__sub_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x20) = 0x19;
            return;
        case 1:
            play_sound_effect(0x52D01, 0, 0, 0);
            update_field_4E8__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
            restore_selection__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdMultiPlyChrSelectGC__sub_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                M2C_FIELD(arg0, u32 *, 0x68) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0xA;
            return;
        case 2:
            open__17TWindowOptionCtrlFPv(M2C_FIELD(arg0, s32 *, 0x7C));
            M2C_FIELD(arg0, s32 *, 0x98) = TAdMultiPlyChrSelectGC__sub_802DBCE8(arg0);
            M2C_FIELD(arg0, s32 *, 0x20) = 6;
            return;
        case 3:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            break;
        }
    }
}

extern s32 lbl_805D68C8;

void update_card_confirm__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, s32 *, 0x68))) == 1) {
        TAdMultiPlyChrSelectGC__sub_802C6A10();
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
        return;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6848(get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()) == 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (get_card_data__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, u32 *, 0x90))) != 0) {
        set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
        M2C_FIELD(arg0, s32 *, 0x20) = 3;
        return;
    }
    if (TWindowSubComCard__sub_802A57FC((s32)(M2C_FIELD(arg0, u32 *, 0x90))) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv((s32)(M2C_FIELD(arg0, u32 *, 0x90)));
        switch (temp_r3) {
        case 1:
            set_state_ready__22TAdMultiPlyChrSelectGCFPv((void*)(M2C_FIELD(arg0, s32 *, 0x5C)));
            M2C_FIELD(arg0, s32 *, 0x20) = 3;
            return;
        case 0:
            play_sound_effect(0x52D01, 0, 0, 0);
            TAdMultiPlyChrSelectGC__sub_802C561C(M2C_FIELD(arg0, s32 *, 0x5C));
            TAdMultiPlyChrSelectGC__sub_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
            lbl_805D68C8 = 1;
            if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
                close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x90));
                M2C_FIELD(arg0, u32 *, 0x90) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x28) = 0x1C;
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1A;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
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
    if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x90));
        M2C_FIELD(arg0, u32 *, 0x90) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x8C) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x8C));
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x7C));
        M2C_FIELD(arg0, u32 *, 0x7C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x98) != 0U) {
        close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x98));
        M2C_FIELD(arg0, u32 *, 0x98) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x74) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x74));
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    if (TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
        temp_r5 = TAdMultiPlyChrSelectGC__sub_802C6920() * 0x50;
        var_r3 = TWindowShortListCtrl__check_controller_button((s8 *)lbl_8050E3B8 + temp_r5 + 0x20, 2, temp_r5);
    } else {
        temp_r5_2 = ((s32)get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()) * 0x50;
        var_r3 = TWindowShortListCtrl__check_controller_button((s8 *)lbl_8050E3B8 + temp_r5_2 + 0x20, 2, temp_r5_2);
    }
    if (var_r3 != 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        if (TAdMultiPlyChrSelectGC__sub_802C6558() > 0) {
            TAdMultiPlyChrSelectGC__sub_802C5BCC(TAdMultiPlyChrSelectGC__sub_802C6920(), &stack.spC, &stack.sp8);
            init__22TAdMultiPlyChrSelectGCFv();
            set_field_4ec__22TAdMultiPlyChrSelectGCFPvi((void*)(M2C_FIELD(arg0, s32 *, 0x5C)), (void*)(stack.spC));
            TAdMultiPlyChrSelectGC__sub_802E0024(M2C_FIELD(arg0, s32 *, 0x5C), stack.sp8);
            return;
        }
        if (get_chr_select_state__22TAdMultiPlyChrSelectGCFv() == 0) {
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1B;
        }
    } else {
        var_r30 = 0;
        do {
            if ((TAdMultiPlyChrSelectGC__sub_802C64D0(var_r30) != 0) && (TAdMultiPlyChrSelectGC__sub_802C6848((s32)(var_r30)) == 0)) {
                TAdMultiPlyChrSelectGC__sub_802C65C0(var_r30);
            }
            var_r30 += 1;
        } while (var_r30 < 4);
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)(M2C_FIELD(arg0, u32 *, 0x68))) == 1) {
            TAdMultiPlyChrSelectGC__sub_802C6A10();
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
            return;
        }
        temp_r30 = TAdMultiPlyChrSelectGC__sub_802DC294(arg0, get_cursor__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C)));
        if (((s32) M2C_FIELD(arg0, s32 *, 0x30) != TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C))) || ((s32) M2C_FIELD(arg0, s32 *, 0x34) != get_cursor__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C)))) {
            set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 1);
            M2C_FIELD(arg0, s32 *, 0x40) = 0;
            if (TAdSinglePlyChrSelectGC__sub_801FE4BC(temp_r30) != 0U) {
                load_tables(temp_r30);
                set_field_100__22TAdMultiPlyChrSelectGCFPvi(M2C_FIELD(arg0, s32 *, 0x60), 2);
                if ((check_flag__23TAdSinglePlyChrSelectGCFi(1) != 0U) && ((s32) M2C_FIELD(arg0, s32 *, 0x3C) != 0)) {
                    M2C_FIELD(arg0, s32 *, 0x40) = 1;
                }
            }
            M2C_FIELD(arg0, s32 *, 0x30) = TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x34) = get_cursor__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
        }
        if (get_selection__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C)) != 0) {
            load_tables(temp_r30);
            if (get_cursor__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C)) == 1) {
                if (is_slot_active__23TAdSinglePlyChrSelectGCFUi(temp_r30) == 0) {
                    play_sound_effect(0x52D01, 0, 0, 0);
                    update_field_4E8__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C));
                    restore_selection__22TAdMultiPlyChrSelectGCFv(M2C_FIELD(arg0, s32 *, 0x5C));
                    TAdMultiPlyChrSelectGC__sub_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
                    if ((u32) M2C_FIELD(arg0, u32 *, 0x68) != 0U) {
                        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x68));
                        M2C_FIELD(arg0, u32 *, 0x68) = 0U;
                    }
                    M2C_FIELD(arg0, s32 *, 0x20) = 9;
                    return;
                }
                M2C_FIELD(arg0, u32 *, 0x7C) = TAdMultiPlyChrSelectGC__sub_802DBF3C(arg0);
                M2C_FIELD(arg0, s32 *, 0x20) = 5;
                return;
            }
            if (is_slot_active__23TAdSinglePlyChrSelectGCFUi(temp_r30) != 0) {
                if (TAdChrSelASlotGC__sub_8030C3C0(M2C_FIELD(arg0, u32 *, 0x68), TAdMultiPlyChrSelectGC__sub_802DFFE8(M2C_FIELD(arg0, s32 *, 0x5C))) != 0) {
                    var_r0 = __nw__7TObjectFUl(0x38);
                    if (var_r0 != 0U) {
                        var_r0 = __ct__9TAdFadeGCFv(var_r0, tl_fade, 0);
                    }
                    M2C_FIELD(arg0, u32 *, 0x74) = var_r0;
                    M2C_FIELD(arg0, u32 *, 0x8C) = open_yes_no_window__16TAdChrSelASlotGCFiii(M2C_FIELD(arg0, u32 *, 0x68), (M2C_UNK *)&lbl_80472850, ((s32)get_clamped_cursor__22TAdMultiPlyChrSelectGCFv()));
                    M2C_FIELD(arg0, s32 *, 0x20) = 7;
                    return;
                }
                play_sound_effect(0x52D01, 0, 0, 0);
                TAdMultiPlyChrSelectGC__sub_802C561C(M2C_FIELD(arg0, s32 *, 0x5C));
                TAdMultiPlyChrSelectGC__sub_802C5688(M2C_FIELD(arg0, s32 *, 0x5C));
                M2C_FIELD(arg0, s32 *, 0x20) = 0x19;
                return;
            }
            M2C_FIELD(arg0, u32 *, 0x90) = TAdChrSelASlotGC__sub_8030CA84(M2C_FIELD(arg0, u32 *, 0x68), lbl_80472858);
            M2C_FIELD(arg0, s32 *, 0x20) = 4;
            return;
        }
        if ((get_field_0x530__22TAdMultiPlyChrSelectGCFPv(M2C_FIELD(arg0, s32 *, 0x5C)) != 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() > 1) && (TAdMultiPlyChrSelectGC__sub_802C64D0(0) != 0)) {
            M2C_FIELD(arg0, s32 *, 0x28) = 0x1C;
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1A;
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
            return;
        }
        if ((count_ready__22TAdMultiPlyChrSelectGCFv() == TAdMultiPlyChrSelectGC__sub_802C6558()) && (TAdMultiPlyChrSelectGC__sub_802C64D0(0) != 0) && (TAdMultiPlyChrSelectGC__sub_802C6558() > 1)) {
            M2C_FIELD(arg0, s32 *, 0x28) = 0x1C;
            M2C_FIELD(arg0, s32 *, 0x20) = 0x1A;
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
        }
    }
}

}
