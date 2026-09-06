#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_801C3CFC {
    M2C_UNK sp8;
    s8 spC;
    s8 spD;
    u8 pad_E[0x2];
    s32 sp10;
    s32 sp14;
};

extern "C" {
M2C_UNK send_set_battle_mode_data__6TLobbyFPv(void *);
M2C_UNK build_6x7D_set_battle_mode_data(void *);
void TLobby__sub_801C3CFC(s8 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void init_battle_ctrl__6TLobbyFii(s32 arg0, s32 arg1);
u32 TPlayerBattleCtrl__ct(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

M2C_UNK strncpy(s32, s32, M2C_UNK);
extern u32 TLobby__data_805D5D98;
extern s32 TLobby__data_805D5DA0;
extern s32 tl_00;

void init_battle_ctrl__6TLobbyFii(s32 arg0, s32 arg1) {
    u32 var_r3;

    if ((u32) TLobby__data_805D5D98 == 0U) {
        var_r3 = __nw__7TObjectFUl(0x278);
        if (var_r3 != 0U) {
            var_r3 = TPlayerBattleCtrl__ct(var_r3, tl_00);
        }
        TLobby__data_805D5D98 = var_r3;
    }
    if ((u32) TLobby__data_805D5D98 != 0U) {
        strncpy(TLobby__data_805D5D98 + 0x68, arg1, 0x200);
        TLobby__data_805D5DA0 = arg0;
    }
}
void TLobby__sub_801C3CFC(s8 arg0, s32 arg1, s32 arg2) {
    Stack_801C3CFC stack;
    build_6x7D_set_battle_mode_data(&stack.sp8);
    stack.spD = arg0;
    stack.spC = 0;
    stack.sp10 = arg1;
    stack.sp14 = arg2;
    send_set_battle_mode_data__6TLobbyFPv(&stack.sp8);
}

}
