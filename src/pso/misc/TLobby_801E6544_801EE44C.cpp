#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void attach_battle_ctrl__6TLobbyFv(void);
s32 get_player_by_client_id(s32);
M2C_UNK attach_battle_ctrl_sub__10TObjPlayerFPv(s32);
M2C_UNK TObjPlayer__sub_801B4044();

extern s32 lbl_805D53A0;

void attach_battle_ctrl__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = get_player_by_client_id(lbl_805D53A0);
    if (temp_r3 != 0) {
        TObjPlayer__sub_801B4044();
        attach_battle_ctrl_sub__10TObjPlayerFPv(temp_r3);
    }
}

}
