#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800F8144(M2C_UNK *);
M2C_UNK TPlayerBattleCtrl4P__sub_803112A4(s32, M2C_UNK);
M2C_UNK TPlayerBattleCtrl4P__sub_80311380();
extern M2C_UNK TPlayerBattleCtrl4P__sub_803105AC[];
extern s32 lbl_805D6AAC;

void TPlayerBattleCtrl4P__vt32(s32 arg0) {
    if ((s32) lbl_805D6AAC != 0) {
        TPlayerBattleCtrl4P__sub_80311380();
        fn_800F8144(TPlayerBattleCtrl4P__sub_803105AC);
        TPlayerBattleCtrl4P__sub_803112A4(arg0, 3);
    }
}

}
