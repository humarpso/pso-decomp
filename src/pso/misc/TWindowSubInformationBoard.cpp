#include "types.h"
#include "pso/misc/TWindowSubInformationBoard.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TWindowSubComCard.h"

struct VBase_18_204a81 { char pad[0x18]; };

struct VObj_18_204a81 : VBase_18_204a81 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual s32 m7();
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 mem_free(int);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 play_sound_effect(int, int, int, int);
void TWindow__close(void *);
s32 get_selected_menu_value(int);
s32 get_cursor_pos__20TWindowShortListCtrlFv(int);
s32 set_info_board_text__6TLobbyFv();
s32 set_message_index__26TWindowSubInformationBoardFl(void *, s16);
u32 show_card_a7__26TWindowSubInformationBoardFv(void *);
u32 open_card_info_window__17TWindowSubComCardFv(void *);
u32 TWindowSubComCard__sub_8034CDE0(void *);
u32 create_info_board_menu(void *);
extern s32 controller_input_state[];
}

extern "C" {

void *TWindowSubInformationBoard__ct(void *arg0, void *arg1, void *arg2);
void *__dt__26TWindowSubInformationBoardFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void TWindowSubInformationBoard::render() {  }

extern s32 __vt__26TWindowSubInformationBoard[];

void TWindowSubInformationBoard::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r30;
    u8 temp_r0;
    u8 *temp_r3;
    switch (*(u8 *)((s8 *)arg0 + 0x1C)) {
    case 0:
    case 1:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x2C) = create_info_board_menu((void *) (arg0));
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x34) = open_card_info_window__17TWindowSubComCardFv((void *) (arg0));
        }
        ((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x2C)))->clear_flag_and_release();
        *(u8 *)((s8 *)arg0 + 0x1C) = 2U;
    case 2:
        set_message_index__26TWindowSubInformationBoardFl((void *) (arg0), (get_cursor_pos__20TWindowShortListCtrlFv((int) (*(u32 *)((s8 *)arg0 + 0x2C)))));
        if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x2C)))->get_status_flag() != 0) {
            temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x28));
            ((VObj_18_204a81 *)(temp_r3))->m7();
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xCU;
        } else if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x2C)))->is_visible() != 0) {
            if ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U) {
                TWindow__close(*(void **)((s8 *)arg0 + 0x34));
                *(u32 *)((s8 *)arg0 + 0x34) = 0U;
            }
            *(u8 *)((s8 *)arg0 + 0x1C) = get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x2C)));
        }
        break;
    case 3:
        TLobby::init_once_data((u32)((void *) ((u8 *)(arg0) + 0x40)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 4U;
    case 4:
        if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(controller_input_state) + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFv((void *) ((u8 *)(controller_input_state) + 0x160), (int) (2)) != 0)) {
            play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
            *(u8 *)((s8 *)arg0 + 0x1C) = 5U;
        }
        if (TLobby::get_info_board_ptr() != 0U) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 6U;
            break;
        }
        break;
    case 5:
        TWindowSubInformationBoard::clear_if_current((u32)((void *) ((u8 *)(arg0) + 0x40)));
        *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
        break;
    case 6:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x30) = TWindowSubComCard__sub_8034CDE0(arg0);
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x34) = show_card_a7__26TWindowSubInformationBoardFv((void *) (arg0));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 7U;
    case 7:
        ((TWindowSubInformationBoard *)arg0)->set_page((int) (get_selected_menu_value((int) (*(u32 *)((s8 *)arg0 + 0x30)))));
        if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x30)))->get_status_flag() != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 8U;
            break;
        }
        break;
    case 8:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x30));
            *(u32 *)((s8 *)arg0 + 0x30) = 0U;
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 5U;
        break;
    case 9:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x2C));
            *(u32 *)((s8 *)arg0 + 0x2C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) == 0U) {
            *(u32 *)((s8 *)arg0 + 0x3C) = TWindowSubInformationBoard::open_keyboard((s32)((void *) (arg0)));
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 0xAU;
    case 10:
        if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x3C)))->is_keyboard_active() != 0) {
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xBU;
            break;
        }
        if (((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x3C)))->update_keyboard() != 0) {
            temp_r30 = ((TWindowSubComCard *)(*(u32 *)((s8 *)arg0 + 0x3C)))->realloc_buffer();
            set_info_board_text__6TLobbyFv();
            TLobby::flush_pending_send();
            mem_free((int) (temp_r30));
            *(u8 *)((s8 *)arg0 + 0x1C) = 0xBU;
            break;
        }
        break;
    case 11:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x3C) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x3C));
            *(u32 *)((s8 *)arg0 + 0x3C) = 0U;
        }
        *(u8 *)((s8 *)arg0 + 0x1C) = 1U;
        break;
    case 12:
        break;
    }
}

void *__dt__26TWindowSubInformationBoardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__26TWindowSubInformationBoard;
        if (*(void **)((s8 *)arg0 + 0x3C) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x3C)); *(s32 *)((s8 *)arg0 + 0x3C) = 0; }
        if (*(void **)((s8 *)arg0 + 0x38) != NULL) { ((TWindowSubComCard *)(*(void **)((s8 *)arg0 + 0x38)))->close(); *(s32 *)((s8 *)arg0 + 0x38) = 0; }
        if (*(void **)((s8 *)arg0 + 0x34) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x34)); *(s32 *)((s8 *)arg0 + 0x34) = 0; }
        if (*(void **)((s8 *)arg0 + 0x30) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x30)); *(s32 *)((s8 *)arg0 + 0x30) = 0; }
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x2C)); *(s32 *)((s8 *)arg0 + 0x2C) = 0; }
        TWindowSubInformationBoard::clear_if_current((u32)((s8 *)arg0 + 0x40));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__26TWindowSubInformationBoard[];
extern void *lbl_805D4348;

void *TWindowSubInformationBoard__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__26TWindowSubInformationBoard;
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D4348;
    *(void **)((s8 *)arg0 + 0x20) = arg2;
    *(u32 *)((s8 *)arg0 + 0x24) = -1;
    *(void **)((s8 *)arg0 + 0x28) = arg1;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(u32 *)((s8 *)arg0 + 0x30) = 0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    *(u32 *)((s8 *)arg0 + 0x38) = 0;
    *(u32 *)((s8 *)arg0 + 0x3C) = 0;
    *(u8 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

}
