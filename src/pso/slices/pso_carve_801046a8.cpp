#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjPlayer__sub_80019248();
s32 obj_isState3_324(s32);
u32 TObjPlayer__sub_80019704(s32);
s32 fn_80099EF8();
u32 fn_80102C90(s32, s32);
s32 fn_801058F8(s32);
u32 fn_8010590C(s32);
u32 fn_80105934(s32);
u32 fn_8010595C(s32);
M2C_UNK fn_801B9EDC(s32, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
extern s32 lbl_805D53A0;
extern s32 TLobby__data_805D53AC;

void fn_801046A8(s32 arg0, s32 arg1) {
    s32 temp_r3;
    u32 var_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u16)arg0);
    if ((temp_r3 != 0) && ((TObjPlayer__sub_80019248() == 1) || ((obj_isState3_324(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)) || ((fn_801058F8(temp_r3) == 1) && ((s32) lbl_805D53A0 == (s32) TLobby__data_805D53AC)))) {
        var_r3 = 0U;
        switch (arg1) {
        case 0:
            var_r3 = TObjPlayer__sub_80019704(temp_r3);
            break;
        case 1:
            var_r3 = fn_8010595C(temp_r3);
            break;
        case 2:
            var_r3 = fn_80105934(temp_r3);
            break;
        case 3:
            var_r3 = fn_8010590C(temp_r3);
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            var_r3 = fn_80102C90(temp_r3, arg1 + 5);
            break;
        default:
            break;
        }
        if (var_r3 != 0U) {
            fn_801B9EDC(temp_r3, fn_80099EF8());
        }
    }
}

}
