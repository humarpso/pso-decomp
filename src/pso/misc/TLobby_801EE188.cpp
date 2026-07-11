#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801EE188(void);
void TLobby__sub_801EE1B8(void);
void TLobby__sub_801EE1E8(void);
M2C_UNK TCameraCtrl__sub_8006A410(M2C_UNK, M2C_UNK);
M2C_UNK TCameraCtrl__sub_8006B398();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK fn_801B3188();
M2C_UNK fn_801B3468();

extern s32 lbl_805D53A0;

void TLobby__sub_801EE188(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        fn_801B3468();
    }
}

extern s32 lbl_805D53A0;

void TLobby__sub_801EE1B8(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        fn_801B3188();
    }
}

extern s32 lbl_805D53A0;

void TLobby__sub_801EE1E8(void) {
    u32 temp_r3;
    TCameraCtrl__sub_8006B398();
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0U) {
        TCameraCtrl__sub_8006A410(temp_r3, 0);
    }
}

}
