#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 window_request_show(void * a0 = 0);
s32 clear_flag60_bit200__16TKeyBoardControlFPv(void * a0 = 0);
s32 set_flag60_bit200__16TKeyBoardControlFPv(void *);
s32 TWindowSubTradeMain__sub_80244A4C(void *);
int set_keyboard_flag62_bit2__15TWindowMakeTeamFPv(void* p);
int get_lobby_field_20__15TWindowMakeTeamFPv(void* p);
int set_flag62_bit2__16TKeyBoardControlFPv(void*);
int set_field_1c__6TLobbyFPvf(void*);

void TWindowSubShortMail__sub_80131998(void *arg0) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0x1C);
    if (!(temp_r3 & 4)) {
        M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (temp_r3 | 4);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            set_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, void **, 0x24));
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
            TWindowSubTradeMain__sub_80244A4C(M2C_FIELD(arg0, void **, 0x28));
        }
    }
}
void hide_window__19TWindowSubShortMailFPv(void *arg0) {
    u16 temp_r3;

    temp_r3 = M2C_FIELD(arg0, u16 *, 0x1C);
    if (temp_r3 & 4) {
        M2C_FIELD(arg0, u16 *, 0x1C) = (u16) (temp_r3 & 0xFFFFFFFB);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
            clear_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, void **, 0x24));
        }
        if (!(M2C_FIELD(arg0, u16 *, 0x1C) & 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U)) {
            window_request_show(M2C_FIELD(arg0, void **, 0x28));
        }
    }
}

}
