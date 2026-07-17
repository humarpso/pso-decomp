#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init__19TPlayerBattleCtrl4PFv(void);
M2C_UNK inc_player_count__10TObjPlayerFv();
M2C_UNK TLobby__sub_801B09A4();

extern s32 lbl_805D6AAC;

void init__19TPlayerBattleCtrl4PFv(void) {
    TLobby__sub_801B09A4();
    inc_player_count__10TObjPlayerFv();
    lbl_805D6AAC = 1;
}

}
