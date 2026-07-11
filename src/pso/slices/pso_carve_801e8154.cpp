#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TObjPlayer__sub_801B8DE8(u32, s32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 lbl_80512220[];
extern s32 lbl_805D53A0;

void TLobby__sub_801E8154(void) {
    s32 temp_r31;
    u32 ret;

    temp_r31 = lbl_80512220[0];
    ret = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (ret != 0U) {
        TObjPlayer__sub_801B8DE8(ret, temp_r31, 1);
    }
}

}
