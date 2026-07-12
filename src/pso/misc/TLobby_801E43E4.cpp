#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void send_command__6TLobbyFPvUi(void *arg0, u32 arg1);
M2C_UNK bswap_32__FPUl(s32 *);
M2C_UNK TLobby__sub_801E3FA4(void *);
M2C_UNK send_pso_data_long2__9TProtocolFcR17long_game_commandUl(void*, u32, void *, s32);

extern u32 lbl_805D53A0;
extern u32 TLobby__data_805D5580;
extern s32 lbl_805D5E50;

void send_command__6TLobbyFPvUi(void *arg0, u32 arg1) {
    s32 sp8;

    sp8 = M2C_FIELD(arg0, s32 *, 4);
    bswap_32__FPUl(&sp8);
    if ((u32) lbl_805D53A0 == arg1) {
        lbl_805D5E50 = 1;
        TLobby__sub_801E3FA4(arg0);
        lbl_805D5E50 = 0;
        return;
    }
    if ((u32) TLobby__data_805D5580 != 0U) {
        send_pso_data_long2__9TProtocolFcR17long_game_commandUl((void*)TLobby__data_805D5580, arg1, arg0, sp8);
    }
}

}
