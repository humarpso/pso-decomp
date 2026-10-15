#include "types.h"

struct RecoveredGlobal_802DCA20_TAdMultiPlyChrSelectGC__data_804727B0 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802DCA20_lbl_804727E8 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_802DCA20_lbl_8050E3B8 {
    s32 value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_802DCA20_TAdMultiPlyChrSelectGC__data_804727B0;
struct Ent_802DC8A0 { u8 d[0x50]; };

struct Pair_802DC8A0 { u8 d[8]; };

extern "C" {
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 reset_cursor_state__22TAdMultiPlyChrSelectGCFPv(int);
s32 TAdMultiPlyChrSelectGC__sub_802C5A44(int, void *, int);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi(int, int);
extern RecoveredGlobal_802DCA20_TAdMultiPlyChrSelectGC__data_804727B0 TAdMultiPlyChrSelectGC__character_slot_positions;
extern RecoveredGlobal_802DCA20_lbl_804727E8 multi_chr_select_item_rect_table;
extern s32 controller_physical_port_bank[];
void TAdMultiPlyChrSelectGC__sub_802DCA20(u8 *arg0);
s32 allow_rendering__7TObjectFv(void *);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 load_tables(s32);
s32 is_slot_active__23TAdSinglePlyChrSelectGCFUi(s32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 TWindow__close(void *);
s32 reset_input_state__22TAdEnterSerialAccessGCFPv(u32);
s32 add_item_rect__12TLevelSelectFPvPv(u32, void *);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 TAdMultiPlyChrSelectGC__sub_802DBD64(void *);
s32 get_instance__22TAdMultiPlyChrSelectGCFv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 set_active__22TAdEnterSerialAccessGCFPv(u32);
extern RecoveredGlobal_802DCA20_TAdMultiPlyChrSelectGC__data_804727B0 TAdMultiPlyChrSelectGC__character_slot_positions;
extern s32 controller_physical_port_bank[];
void TAdMultiPlyChrSelectGC__sub_802DC8A0(void *arg0);
}

extern "C" {

void update_input_state__22TAdMultiPlyChrSelectGCFPv(void *arg0);
s32 TWindowShortListCtrl__check_controller_button(void *, s32);
s32 close__17TWindowSubComCardFPv(void *);
s32 is_child_visible__17TWindowSubComCardFPv(u32);
s32 play_sound_effect(s32, s32, s32, s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_slot_or_neg1__17TWindowSubComCardFPv(u32);

extern s32 controller_physical_port_bank[];

void update_input_state__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    s32 temp_r3;

    if (TWindowShortListCtrl__check_controller_button((s8 *)controller_physical_port_bank + 0x20, 2) != 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        if ((u32) *(u32 *)((s8 *)arg0 + 0x94) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x94));
            *(u32 *)((s8 *)arg0 + 0x94) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x58) = (s32) (*(s32 *)((s8 *)arg0 + 0x58) + 1);
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1F;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x68)) < 0xE) {
            *(s32 *)((s8 *)arg0 + 0x58) = 0;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x94) != 0U) {
            close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x94));
            *(u32 *)((s8 *)arg0 + 0x94) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1D;
        return;
    }
    if (is_child_visible__17TWindowSubComCardFPv(*(u32 *)((s8 *)arg0 + 0x94)) != 0) {
        temp_r3 = get_slot_or_neg1__17TWindowSubComCardFPv(*(u32 *)((s8 *)arg0 + 0x94));
        switch (temp_r3) {
        case 0:
            *(s32 *)((s8 *)arg0 + 0x20) = 0x21;
            return;
        case 1:
            if ((u32) *(u32 *)((s8 *)arg0 + 0x94) != 0U) {
                close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x94));
                *(u32 *)((s8 *)arg0 + 0x94) = 0U;
            }
            *(s32 *)((s8 *)arg0 + 0x58) = (s32) (*(s32 *)((s8 *)arg0 + 0x58) + 1);
            *(s32 *)((s8 *)arg0 + 0x20) = 0x1F;
            break;
        }
    }
}
typedef char RecoveredGlobal_802DCA20_TAdMultiPlyChrSelectGC__data_804727B0_size[sizeof(RecoveredGlobal_802DCA20_TAdMultiPlyChrSelectGC__data_804727B0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802DCA20_lbl_804727E8_size[sizeof(RecoveredGlobal_802DCA20_lbl_804727E8) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_802DCA20_lbl_8050E3B8_size[sizeof(RecoveredGlobal_802DCA20_lbl_8050E3B8) == 0x1B0 ? 1 : -1];

void TAdMultiPlyChrSelectGC__sub_802DC8A0(void *arg0) {
    u32 i;
    s32 k;
    if (*(u32 *)((s8 *)arg0 + 0x80) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x80));
        *(u32 *)((s8 *)arg0 + 0x80) = 0U;
    }
    if (*(u32 *)((s8 *)arg0 + 0x84) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x84));
        *(u32 *)((s8 *)arg0 + 0x84) = 0U;
    }
    if (TWindowShortListCtrl__check_controller_button(((Ent_802DC8A0 *)controller_physical_port_bank)[get_instance__22TAdMultiPlyChrSelectGCFv(*(s32 *)((s8 *)arg0 + 0x5C))].d + 0x20, 2) != 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(s32 *)((s8 *)arg0 + 0x28) = 0x1B;
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1A;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x68)) < 0xE) {
            *(u32 *)((s8 *)arg0 + 0x58) = 0U;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1D;
        return;
    }
    for (i = *(u32 *)((s8 *)arg0 + 0x58); i < 3; i++) {
        k = i + 4;
        *(s32 *)((s8 *)arg0 + 0x38) = k;
        load_tables(k);
        if (is_slot_active__23TAdSinglePlyChrSelectGCFUi(k) != 0) {
            set_field_100__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x60), 2);
            if (*(u32 *)((s8 *)arg0 + 0x70) != 0U) {
                allow_rendering__7TObjectFv(*(void **)((s8 *)arg0 + 0x70));
            }
            reset_input_state__22TAdEnterSerialAccessGCFPv(*(u32 *)((s8 *)arg0 + 0x70));
            add_item_rect__12TLevelSelectFPvPv(*(u32 *)((s8 *)arg0 + 0x70), &((Pair_802DC8A0 *)&TAdMultiPlyChrSelectGC__character_slot_positions)[i]);
            set_active__22TAdEnterSerialAccessGCFPv(*(u32 *)((s8 *)arg0 + 0x70));
            *(u32 *)((s8 *)arg0 + 0x58) = i;
            *(s32 *)((s8 *)arg0 + 0x94) = TAdMultiPlyChrSelectGC__sub_802DBD64(arg0);
            *(s32 *)((s8 *)arg0 + 0x20) = 0x20;
            return;
        }
    }
    *(s32 *)((s8 *)arg0 + 0x20) = 0x26;
}

void TAdMultiPlyChrSelectGC__sub_802DCA20(u8 *arg0) {
    set_index_and_close_status__22TAdMultiPlyChrSelectGCFPvi((int) (*(s32 *)((s8 *)arg0 + 0x60)), (int) (2));
    if (TWindowShortListCtrl__check_controller_button((void *)((void *) ((u8 *)&(*(RecoveredGlobal_802DCA20_lbl_8050E3B8 *)&controller_physical_port_bank).value + 0x20)), (s32)((int) (2))) != 0) {
        play_sound_effect((s32)((int) (0x52F16)), (s32)((int) (0)), (s32)((int) (0)), (s32)((int) (0)));
        *(s32 *)((s8 *)arg0 + 0x28) = 0x1B;
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1A;
        return;
    }
    if (get_mode__22TAdMultiPlyChrSelectGCFPv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x6C)))) < 0x14) {
        if (get_player_index__22TAdMultiPlyChrSelectGCFPv((s32)((int) (*(s32 *)((s8 *)arg0 + 0x68)))) < 0xE) {
            *(s32 *)((s8 *)arg0 + 0x58) = 0;
        }
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1D;
        return;
    }
    reset_cursor_state__22TAdMultiPlyChrSelectGCFPv((int) (*(s32 *)((s8 *)arg0 + 0x5C)));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) (&TAdMultiPlyChrSelectGC__character_slot_positions.value), (int) (1));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__character_slot_positions.value + 8), (int) (1));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&TAdMultiPlyChrSelectGC__character_slot_positions.value + 0x10), (int) (1));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) (&multi_chr_select_item_rect_table.value), (int) (2));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&multi_chr_select_item_rect_table.value + 8), (int) (2));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&multi_chr_select_item_rect_table.value + 0x10), (int) (2));
    TAdMultiPlyChrSelectGC__sub_802C5A44((int) (*(s32 *)((s8 *)arg0 + 0x5C)), (void *) ((u8 *)&multi_chr_select_item_rect_table.value + 0x18), (int) (2));
    *(s32 *)((s8 *)arg0 + 0x20) = 0x1F;
}

}
