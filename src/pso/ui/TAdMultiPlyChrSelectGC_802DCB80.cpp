#include "types.h"

struct Obj_802DCCA4 { u8 pad[0x2C]; s32 f2C; };

extern "C" {
void TKeyBoardControl__sub_8000F9CC(s32);
s32 get_field_118__22TAdEnterSerialAccessGCFv();
void begin_transition__21TAdMultiChgGameModeGCFv();
void set_opening_movie_purpose(s32);
void collect_player_slots__22TAdMultiPlyChrSelectGCFv(void *);
extern s32 lbl_805D68CC;
void TAdMultiPlyChrSelectGC__sub_802DCCA4(Obj_802DCCA4 *arg0);
}

extern "C" {

void close_and_reset__22TAdMultiPlyChrSelectGCFPv(void *arg0);
s32 set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(s32, s32, s32 *);
s32 TWindowShortListCtrl__check_controller_button(char *, s32);
s32 close__17TWindowSubComCardFPv(void *);
s32 TWindow__close(void *);
s32 disallow_rendering__7TObjectFv(void *);
s32 play_sound_effect(s32, s32, s32, s32);
s32 reset_cursor_state__22TAdMultiPlyChrSelectGCFPv(s32);
s32 get_player_index__22TAdMultiPlyChrSelectGCFPv(s32);
s32 set_field_100__22TAdMultiPlyChrSelectGCFPvi(s32, s32);
s32 get_mode__22TAdMultiPlyChrSelectGCFPv(s32);
s32 is_state_closing__22TAdMultiPlyChrSelectGCFPv(s32);

extern char controller_physical_port_bank[];
extern s32 TAdMultiPlyChrSelectGC__data_805DE898;

void close_and_reset__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x80) != 0U) {
        TWindow__close(*(void **)((s8 *)arg0 + 0x80));
        *(u32 *)((s8 *)arg0 + 0x80) = 0U;
    }
    if ((u32) *(u32 *)((s8 *)arg0 + 0x94) != 0U) {
        close__17TWindowSubComCardFPv(*(void **)((s8 *)arg0 + 0x94));
        *(u32 *)((s8 *)arg0 + 0x94) = 0U;
    }
    reset_cursor_state__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x5C));
    if ((u32) *(u32 *)((s8 *)arg0 + 0x70) != 0U) {
        disallow_rendering__7TObjectFv(*(void **)((s8 *)arg0 + 0x70));
    }
    set_field_100__22TAdMultiPlyChrSelectGCFPvi(*(s32 *)((s8 *)arg0 + 0x60), 1);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(*(s32 *)((s8 *)arg0 + 0x64), 0, &TAdMultiPlyChrSelectGC__data_805DE898);
    set_entry_value__22TAdMultiPlyChrSelectGCFiiUi(*(s32 *)((s8 *)arg0 + 0x64), 1, &TAdMultiPlyChrSelectGC__data_805DE898);
    *(s32 *)((s8 *)arg0 + 0x30) = -1;
    if ((is_state_closing__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) == 0) && (TWindowShortListCtrl__check_controller_button(controller_physical_port_bank + 0x20, 2) != 0)) {
        play_sound_effect(0x52F16, 0, 0, 0);
        *(s32 *)((s8 *)arg0 + 0x28) = 0x1B;
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1A;
        return;
    }
    if ((get_player_index__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x68)) == 0xE) && (get_mode__22TAdMultiPlyChrSelectGCFPv(*(s32 *)((s8 *)arg0 + 0x6C)) == 0x14)) {
        *(s32 *)((s8 *)arg0 + 0x20) = 0x1E;
    }
}
void TAdMultiPlyChrSelectGC__sub_802DCCA4(Obj_802DCCA4 *arg0) {
    lbl_805D68CC = get_field_118__22TAdEnterSerialAccessGCFv();
    switch (arg0->f2C) {
    case 2:
        break;
    case 0:
        set_opening_movie_purpose(1);
        TKeyBoardControl__sub_8000F9CC(3);
        break;
    case 1:
        collect_player_slots__22TAdMultiPlyChrSelectGCFv(arg0);
        begin_transition__21TAdMultiChgGameModeGCFv();
        break;
    }
}

}
