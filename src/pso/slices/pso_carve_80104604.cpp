#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019248();
s32 obj_isState3_324(s32);
s32 fn_801058F8(s32);
M2C_UNK fn_801B849C(s32, void *);
M2C_UNK fn_801BA0F0(s32, s32, M2C_UNK);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;

void fn_80104604(int arg0, void *arg1) {
    s32 temp_r3;

    if (arg1 != NULL) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
        if ((temp_r3 != 0) && ((TObjPlayer__sub_80019248() == 1) || ((obj_isState3_324(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)) || ((fn_801058F8(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)))) {
            fn_801B849C(temp_r3, arg1);
            fn_801BA0F0(temp_r3, M2C_FIELD(arg1, s32 *, 0xC), 0);
        }
    }
}

}
