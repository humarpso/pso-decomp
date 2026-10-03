#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s8 lbl_805D535A;
bool is_area_transfer_pending(void);
}

extern "C" {

void TLobby__sub_800F8AD0(void);
void clear_callback_and_reset_keyboard__6TLobbyFv(void);
int TKeyBoardControl__sub_8000F92C(void);
void TLobby__sub_800F8BD8(void);
int reset__16TKeyBoardControlFv(void);
int set_keyboard_mode__6TLobbyFi(int);

extern u32 lbl_805D5350;
extern s8 lbl_805D535A;

void TLobby__sub_800F8AD0(void) {
    if ((u32) lbl_805D5350 != 0U) {
        lbl_805D535A = 1;
    }
}

bool is_area_transfer_pending(void) {
    return (*(u8 *)&lbl_805D535A) != 0;
}

void clear_callback_and_reset_keyboard__6TLobbyFv(void) { set_keyboard_mode__6TLobbyFi(0); reset__16TKeyBoardControlFv(); }

}
