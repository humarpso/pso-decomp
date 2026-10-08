#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_204a81 { char pad[0x18]; };

struct VObj_18_204a81 : VBase_18_204a81 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual M2C_UNK m7();
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
s32 realloc_buffer__17TWindowSubComCardFPv(int);
s32 is_keyboard_active__17TWindowSubComCardFPv(int);
s32 update_keyboard__17TWindowSubComCardFPv(int);
M2C_UNK free__11TOBoss4RockFUi(int);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
M2C_UNK clear_flag_and_release__17TWindowSubComCardFPv(int);
M2C_UNK play_sound_effect(int, int, int, int);
void TWindow__close(void *);
s32 get_selected_menu_value(int);
s32 get_cursor_pos__20TWindowShortListCtrlFPv(int);
u32 TLobby__sub_8034C1FC();
void clear_if_current__26TWindowSubInformationBoardFUi(void *);
M2C_UNK init_once_data__6TLobbyFUi(void *);
M2C_UNK flush_pending_send__6TLobbyFv();
M2C_UNK set_info_board_text__6TLobbyFi();
M2C_UNK set_page__26TWindowSubInformationBoardFPvi(void *, int);
M2C_UNK set_message_index__26TWindowSubInformationBoardFPvi(void *, s16);
u32 open_keyboard__26TWindowSubInformationBoardFi(void *);
u32 show_card_a7__26TWindowSubInformationBoardFPv(void *);
u32 open_card_info_window__17TWindowSubComCardFPv(void *);
u32 TWindowSubComCard__sub_8034CDE0(void *);
u32 create_info_board_menu(void *);
extern M2C_UNK lbl_8050E208[];
void run_task__26TWindowSubInformationBoardFv(u8 *arg0);
}

extern "C" {

void *TWindowSubInformationBoard__ct(void *arg0, void *arg1, void *arg2);
void *__dt__26TWindowSubInformationBoardFv(void *arg0, s16 arg1);
void render__26TWindowSubInformationBoardFv(void);
void TWindow__close(void *);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void clear_if_current__26TWindowSubInformationBoardFUi(void *);
void close__17TWindowSubComCardFPv(void *);
void queue_destruction__7TObjectFv(void *);

void render__26TWindowSubInformationBoardFv(void) {  }

extern M2C_UNK __vt__26TWindowSubInformationBoard[];

void run_task__26TWindowSubInformationBoardFv(u8 *arg0) {
    s32 temp_r30;
    u8 temp_r0;
    u8 *temp_r3;
    switch (M2C_FIELD(arg0, u8 *, 0x1C)) {
    case 0:
    case 1:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x2C) = create_info_board_menu((void *) (arg0));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x34) = open_card_info_window__17TWindowSubComCardFPv((void *) (arg0));
        }
        clear_flag_and_release__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x2C)));
        M2C_FIELD(arg0, u8 *, 0x1C) = 2U;
    case 2:
        set_message_index__26TWindowSubInformationBoardFPvi((void *) (arg0), (get_cursor_pos__20TWindowShortListCtrlFPv((int) (M2C_FIELD(arg0, u32 *, 0x2C)))));
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x2C))) != 0) {
            temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x28));
            ((VObj_18_204a81 *)(temp_r3))->m7();
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xCU;
        } else if (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x2C))) != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
                TWindow__close(M2C_FIELD(arg0, void **, 0x34));
                M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            }
            M2C_FIELD(arg0, u8 *, 0x1C) = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x2C)));
        }
        break;
    case 3:
        init_once_data__6TLobbyFUi((void *) ((u8 *)(arg0) + 0x40));
        M2C_FIELD(arg0, u8 *, 0x1C) = 4U;
    case 4:
        if ((TWindowShortListCtrl__check_controller_button((void *) ((u8 *)(lbl_8050E208) + 0x20), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)(lbl_8050E208) + 0x160), (int) (2)) != 0)) {
            play_sound_effect((int) (0x52F16), (int) (0), (int) (0), (int) (0));
            M2C_FIELD(arg0, u8 *, 0x1C) = 5U;
        }
        if (TLobby__sub_8034C1FC() != 0U) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 6U;
            break;
        }
        break;
    case 5:
        clear_if_current__26TWindowSubInformationBoardFUi((void *) ((u8 *)(arg0) + 0x40));
        M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
        break;
    case 6:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x30) = TWindowSubComCard__sub_8034CDE0(arg0);
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x34) = show_card_a7__26TWindowSubInformationBoardFPv((void *) (arg0));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 7U;
    case 7:
        set_page__26TWindowSubInformationBoardFPvi((void *) (arg0), (int) (get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x30)))));
        if (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x30))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 8U;
            break;
        }
        break;
    case 8:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 5U;
        break;
    case 9:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
            M2C_FIELD(arg0, u32 *, 0x3C) = open_keyboard__26TWindowSubInformationBoardFi((void *) (arg0));
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0xAU;
    case 10:
        if (is_keyboard_active__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xBU;
            break;
        }
        if (update_keyboard__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C))) != 0) {
            temp_r30 = realloc_buffer__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            set_info_board_text__6TLobbyFi();
            flush_pending_send__6TLobbyFv();
            free__11TOBoss4RockFUi((int) (temp_r30));
            M2C_FIELD(arg0, u8 *, 0x1C) = 0xBU;
            break;
        }
        break;
    case 11:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 1U;
        break;
    case 12:
        break;
    }
}

void *__dt__26TWindowSubInformationBoardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__26TWindowSubInformationBoard;
        if (M2C_FIELD(arg0, void **, 0x3C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x3C)); M2C_FIELD(arg0, M2C_UNK *, 0x3C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x38) != NULL) { close__17TWindowSubComCardFPv(M2C_FIELD(arg0, void **, 0x38)); M2C_FIELD(arg0, M2C_UNK *, 0x38) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        clear_if_current__26TWindowSubInformationBoardFUi((s8 *)arg0 + 0x40);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__26TWindowSubInformationBoard[];
extern void *lbl_805D4348;

void *TWindowSubInformationBoard__ct(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__26TWindowSubInformationBoard;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4348;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    M2C_FIELD(arg0, u32 *, 0x24) = -1;
    M2C_FIELD(arg0, void **, 0x28) = arg1;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    return arg0;
}

}
