#include "pso/ui/TChallenge4PItemSelect.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TUnk_804CDFE8.h"
#include "pso/misc/TWindowSubComCardList.h"
#include "pso/misc/TWindowMenu.h"

#include "types.h"

#include <stddef.h>
struct Stack_8034B158 {
    s8 sp8;
    s8 sp9;
    s8 spA;
    u8 trailing_storage[0x11];
};

struct RecoveredGlobal_8034B158_lbl_804F00C8 {
    s32 value;
    u8 remaining[0x5C];
};

extern "C" {
void init__9TItemDataFv(void *);
s32 get_selected_menu_value(void *);
extern RecoveredGlobal_8034B158_lbl_804F00C8 TChallenge4PItemSelect__item_table;
}

extern "C" {
void TWindow__close(void*);
}

#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/ui/TChallenge4PResult.h"

extern "C" {

u32 create_window_menu(s32, s32, s32);
s32 get_text_collection(s32);
s32 TWindowSubComCard__sub_80265500(u32);
s32 get_window_layout_position(s32);
s32 fn_8034BE30(TChallenge4PResult *);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(u32, s32, s32, s32);
void queue_destruction__7TObjectFv(void *);

}
void TChallenge4PItemSelect::close_with_callback() {
    void (*temp_r12)(void *);

    temp_r12 = onClosed;
    if (temp_r12 != NULL) {
        temp_r12(result);
    }
    queue_destruction__7TObjectFv(this);
}
extern "C" {

extern s32 challenge4p_item_select_text_ids[];
extern const f32 lbl_805DFD98;
extern const f32 lbl_805DFD9C;
extern const f32 lbl_805DFDA0;
extern const f32 lbl_805DFDA4;

typedef char RecoveredGlobal_8034B158_lbl_804F00C8_size[sizeof(RecoveredGlobal_8034B158_lbl_804F00C8) == 0x60 ? 1 : -1];
}
void TChallenge4PItemSelect::submit_selected_item() {
    typedef char sp8_offset[(offsetof(Stack_8034B158, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_8034B158, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_8034B158, spA) == 0x2) ? 1 : -1];
    Stack_8034B158 stack;
    u32 temp_r3_2;
    u8 *temp_r31;
    u8 *temp_r3;
    temp_r3 = (u8 *)((u8 *)menu_window);
    if ((temp_r3 != NULL) && (((TWindowMenu *)temp_r3)->is_visible() != 0)) {
        temp_r31 = (u8 *)&TChallenge4PItemSelect__item_table.value + (get_selected_menu_value((u8 *)menu_window) * 0xC);
        init__9TItemDataFv(&stack.sp8);
        stack.sp8 = (s8) *(s32 *)((s8 *)temp_r31 + 0);
        stack.sp9 = (s8) *(s32 *)((s8 *)temp_r31 + 4);
        stack.spA = (s8) *(s32 *)((s8 *)temp_r31 + 8);
        temp_r3_2 = (u32)result;
        if (temp_r3_2 != 0U) {
            ((TChallenge4PResult *)temp_r3_2)->set_entry_item((void *)((s32) &stack.sp8), (s32)2);
        }
        state = 2;
    }
}
void TChallenge4PItemSelect::open_menu() {
    s32 temp_r0;
    u16 temp_r30;
    s32 var_r29;

    temp_r0 = waitFrames - 1;
    waitFrames = temp_r0;
    if (temp_r0 <= 0) {
        temp_r30 = fn_8034BE30(result);
        (u32 &)menu_window = create_window_menu(get_window_layout_position(0x42), 8, temp_r30);
        if ((u32) (u32 &)menu_window != 0U) {
            var_r29 = 0;
            do {
                forward_trade_action_default__16TObjCityMainWarpFPviii((u32 &)menu_window, get_text_collection(challenge4p_item_select_text_ids[var_r29]), 6, var_r29);
                var_r29 += 1;
            } while (var_r29 < 8);
            ((TWindowSubComCardList *)((u32 &)menu_window))->set_scroll_target(lbl_805DFD98, lbl_805DFD9C);
            TWindowSubComCard__sub_80265500((u32 &)menu_window);
            ((TLobby *)((u32 &)menu_window))->set_field_1c(lbl_805DFDA0);
            if (TCameraCtrl::get_instance() > 2) {
                ((TUnk_804CDFE8 *)((u32 &)menu_window))->set_position_xy(lbl_805DFDA4, lbl_805DFDA4);
            }
            state = 1;
        }
    }
}
extern "C" {

extern void *lbl_805D433C;

}
void TChallenge4PItemSelect::run_task() {
    s32 temp_r0;
    temp_r0 = state;
    switch (temp_r0) {
    case 0:
        open_menu();
        return;
    case 1:
        submit_selected_item();
        return;
    case 2:
        close_with_callback();
        return;
    }
}
extern "C" {

TChallenge4PItemSelect::~TChallenge4PItemSelect() {
    if (menu_window != nullptr) { TWindow__close(menu_window); menu_window = nullptr; }
}
 }
TChallenge4PItemSelect::TChallenge4PItemSelect(TObject *parent, TChallenge4PResult *resultOwner) : TObject(parent) {
    m_name = (const char *)lbl_805D433C;
    result = resultOwner;
    state = 0;
    onClosed = 0;
    menu_window = 0;
    waitFrames = 90;
    if (result == NULL) {
        queue_destruction__7TObjectFv(this);
    }
}
