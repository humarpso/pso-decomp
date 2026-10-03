#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_main_phase();
s32 is_quest_active();
int set_keyboard_mode__6TLobbyFi(int);
void TLobby__sub_800F8BD8(void);
void reset_keyboard_input__6TLobbyFv();
void shutdown_keyboard_control__6TLobbyFv();
void init_chr_select__6TLobbyFv();
void reset_to_chr_select__6TLobbyFv();
void apply_phase_keyboard_mode(void);
}

extern "C" {

void TLobby__sub_800F8BD8(void);
void invoke_callback__6TLobbyFv(void);
extern M2C_UNK (*lbl_805D5350)();
int TKeyBoardControl__sub_8000F92C(void);
void clear_callback_and_reset_keyboard__6TLobbyFv(void);
int reset__16TKeyBoardControlFv(void);
int set_keyboard_mode__6TLobbyFi(int);

void apply_phase_keyboard_mode(void) {
    switch (get_main_phase()) {
    case 15:
        if (is_quest_active() != 0) {
            set_keyboard_mode__6TLobbyFi((int)(init_chr_select__6TLobbyFv));
        } else {
            set_keyboard_mode__6TLobbyFi((int)(reset_to_chr_select__6TLobbyFv));
        }
        break;
    case 14:
        if (is_quest_active() != 0) {
            set_keyboard_mode__6TLobbyFi((int)(shutdown_keyboard_control__6TLobbyFv));
        } else {
            set_keyboard_mode__6TLobbyFi((int)(reset_keyboard_input__6TLobbyFv));
        }
        break;
    case 1:
    case 2:
        set_keyboard_mode__6TLobbyFi((int)(TLobby__sub_800F8BD8));
        break;
    default:
        set_keyboard_mode__6TLobbyFi((int)(0));
        break;
    }
}

void TLobby__sub_800F8BD8(void) { reset__16TKeyBoardControlFv(); TKeyBoardControl__sub_8000F92C(); }

void invoke_callback__6TLobbyFv(void) {
    if (((M2C_UNK (*)()) lbl_805D5350) != NULL) {
        lbl_805D5350();
    }
}

}
