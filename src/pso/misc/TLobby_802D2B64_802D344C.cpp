#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_music_state__6TLobbyFPv(void *arg0);
void update_flag_by_state__6TLobbyFPv(void *arg0);
M2C_UNK notify_child_if_present__19TWindowSubTradeMainFPvi(u32, s32);

extern u16 lbl_805D6888;
extern u32 TLobby__data_805D6898;

void update_music_state__6TLobbyFPv(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 5);
    switch ((s32) temp_r0) {
    case 0:
        lbl_805D6888 |= 0x200;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 2);
        }
        break;
    case 4:
        lbl_805D6888 &= 0xFFFFFDFF;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 1);
        }
        break;
    }
}

extern u16 lbl_805D6888;
extern u32 TLobby__data_805D6898;

void update_flag_by_state__6TLobbyFPv(void *arg0) {
    u8 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u8 *, 5);
    switch ((s32) temp_r0) {
    case 0:
        lbl_805D6888 |= 0x40;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 1);
        }
        break;
    case 4:
        lbl_805D6888 &= 0xFFFFFFBF;
        if (TLobby__data_805D6898 != 0U) {
            notify_child_if_present__19TWindowSubTradeMainFPvi(TLobby__data_805D6898, 0);
        }
        break;
    }
}

}
