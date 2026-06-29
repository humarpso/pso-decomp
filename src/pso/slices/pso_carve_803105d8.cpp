#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_80102AB0();
M2C_UNK fn_801B09A4();
extern s32 lbl_805D6AAC;

void TPlayerBattleCtrl4P__sub_803105D8(void) {
    fn_801B09A4();
    fn_80102AB0();
    lbl_805D6AAC = 1;
}

}
