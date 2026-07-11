#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801C39C8(s32 arg0, s32 arg1);
u32 TPlayerBattleCtrl__ct(u32, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

M2C_UNK strncpy(s32, s32, M2C_UNK);
extern u32 TLobby__data_805D5D98;
extern s32 TLobby__data_805D5DA0;
extern s32 tl_00;

void TLobby__sub_801C39C8(s32 arg0, s32 arg1) {
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

}
