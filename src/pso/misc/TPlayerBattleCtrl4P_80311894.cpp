#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__vt32(s32 arg0);
M2C_UNK TPlayerBattleCtrl4P__sub_803112A4(s32, M2C_UNK);
M2C_UNK TPlayerBattleCtrl4P__sub_80311380();
M2C_UNK set_fade_params__6TLobbyFi(M2C_UNK *);

extern M2C_UNK reset_ctrl_to_default__19TPlayerBattleCtrl4PFv[];
extern s32 lbl_805D6AAC;

void TPlayerBattleCtrl4P__vt32(s32 arg0) {
    if ((s32) lbl_805D6AAC != 0) {
        TPlayerBattleCtrl4P__sub_80311380();
        set_fade_params__6TLobbyFi(reset_ctrl_to_default__19TPlayerBattleCtrl4PFv);
        TPlayerBattleCtrl4P__sub_803112A4(arg0, 3);
    }
}

}
