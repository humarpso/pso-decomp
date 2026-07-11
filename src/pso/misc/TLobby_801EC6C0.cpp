#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801EC6C0(void);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK fn_80211CE0();

extern s32 lbl_805D53A0;

void TLobby__sub_801EC6C0(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        fn_80211CE0();
    }
}

}
