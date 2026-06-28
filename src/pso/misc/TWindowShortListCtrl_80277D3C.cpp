#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowShortListCtrl__sub_80277D3C(s32 arg0, s32 arg1, s32 arg2);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 fn_80099EF8(u32);
u32 fn_80101AB0(s32);
u32 fn_80102BE0(s32, s32);
M2C_UNK fn_801B9EDC(s32, s32);
M2C_UNK fn_801BA0F0(s32, s32, s32);
u32 fn_801C675C(s32, s32);

void TWindowShortListCtrl__sub_80277D3C(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r31;
    s32 temp_r3;
    s32 temp_r0;
    u32 temp_r3b;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg2);
    if (temp_r3 != 0) {
        temp_r31 = fn_801C675C(temp_r3 + 0xD04, arg0);
        temp_r3b = fn_80101AB0(arg1);
        if (temp_r31 == temp_r3b) {
            fn_801B9EDC(temp_r3, arg1);
            return;
        }
        if (fn_80102BE0(temp_r3b, 8) != 0U) {
            fn_801B9EDC(temp_r3, arg1);
        }
        if (temp_r31 != 0U) {
            temp_r0 = fn_80099EF8(temp_r31);
            fn_801B9EDC(temp_r3, temp_r0);
        }
        fn_801BA0F0(temp_r3, arg1, arg0);
    }
}

}
