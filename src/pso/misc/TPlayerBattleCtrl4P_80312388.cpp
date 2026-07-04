#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TPlayerBattleCtrl4P__vt8(void *arg0);
M2C_UNK TPlayerBattleCtrl4P__sub_803112A4(void *, M2C_UNK);
u8 fn_801D7064(M2C_UNK *);

extern M2C_UNK lbl_8050EA40[];

void TPlayerBattleCtrl4P__vt8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x240) - 1;
    M2C_FIELD(arg0, s32 *, 0x240) = temp_r0;
    if (temp_r0 <= 0) {
        if (fn_801D7064(lbl_8050EA40) == 1) {
            TPlayerBattleCtrl4P__sub_803112A4(arg0, 3);
            return;
        }
        TPlayerBattleCtrl4P__sub_803112A4(arg0, 5);
    }
}

}
