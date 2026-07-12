#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void apply_player_count__6TLobbyFv(void);
u32 TWindowSubStatusDisp__sub_8006F094(M2C_UNK);
M2C_UNK TLobby__sub_80071500(u32);
M2C_UNK TLobby__sub_80292950(u32);

s32 is_split_screen();
extern u32 TLobby__data_80512220[];

void apply_player_count__6TLobbyFv(void) {
    u32 temp_r30;
    u32 temp_r31;

    temp_r30 = TLobby__data_80512220[0];
    temp_r31 = TWindowSubStatusDisp__sub_8006F094(-1);
    if (is_split_screen() == 1) {
        if (temp_r30 < temp_r31) {
            TLobby__sub_80292950(temp_r30);
            return;
        }
        TLobby__sub_80292950(0U);
        return;
    }
    if (temp_r30 < temp_r31) {
        TLobby__sub_80071500(temp_r30);
        return;
    }
    TLobby__sub_80071500(0U);
}

}
