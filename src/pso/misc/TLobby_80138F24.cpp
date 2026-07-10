#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_create_game_window__6TLobbyFv(void);
M2C_UNK destroy_lobby_ui__6TLobbyFv();
M2C_UNK close_all_windows__6TLobbyFv();
s32 TWindowMakeTeam__sub_80264AE0(u32);
s32 TWindowMakeTeam__sub_80264B24(u32);
s32 TWindowMakeTeam__sub_80264B38(u32);
s32 fn_8013AD50(u32);
s32 fn_8013AD5C(u32);
s8 fn_8013AD64(u32);
s8 fn_8013AD6C(u32);
s32 fn_8013AD74(u32);
M2C_UNK send_create_game__9TProtocolFPcPcUcUcUcUc(s32, s32, s32, u8, u8, u8, s32);

extern s32 lbl_805D5580;
extern u32 lbl_805D55EC;

void handle_create_game_window__6TLobbyFv(void) {
    s32 temp_r3;
    s32 temp_r30;
    u8 temp_r29;
    u8 temp_r28;
    u8 temp_r27;
    s32 temp_r0;

    if ((u32) lbl_805D55EC != 0U) {
        if (fn_8013AD74(lbl_805D55EC) != 0) {
            temp_r3 = TWindowMakeTeam__sub_80264B38(lbl_805D55EC);
            if (temp_r3 != 0) {
                temp_r30 = TWindowMakeTeam__sub_80264B24(lbl_805D55EC);
                temp_r29 = fn_8013AD6C(lbl_805D55EC) == 2;
                temp_r28 = TWindowMakeTeam__sub_80264AE0(lbl_805D55EC);
                temp_r27 = fn_8013AD64(lbl_805D55EC) == 1;
                temp_r0 = fn_8013AD5C(lbl_805D55EC);
                send_create_game__9TProtocolFPcPcUcUcUcUc(lbl_805D5580, temp_r3, temp_r30, temp_r28, temp_r29, temp_r27, temp_r0);
                destroy_lobby_ui__6TLobbyFv();
                return;
            }
            close_all_windows__6TLobbyFv();
            return;
        }
        if (fn_8013AD50(lbl_805D55EC) != 0) {
            close_all_windows__6TLobbyFv();
        }
    }
}

}
