#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TKeyBoardControl__sub_80131F64(s32);
M2C_UNK TObjPlayer__sub_801B56A4(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK fn_80247534(void *);
s32 fn_80247DF0(void *);
M2C_UNK fn_80247DFC(void *);
M2C_UNK fn_80247E50(void *);
s32 fn_80247EB4();
M2C_UNK fn_8024AD30(s32);
s32 TWindowCtrl__sub_8024AF74(s32);
M2C_UNK fn_8025CB70(s32);
extern s32 lbl_805D53A0;

void fn_802472A8(void *arg0) {
    s32 temp_r3;

    if (fn_80247EB4() == 0) {
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 1);
        fn_80247E50(arg0);
        fn_80247DFC(arg0);
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
        if ((temp_r3 != 0) && !(M2C_FIELD(arg0, u16 *, 0x1E) & 2) && (fn_80247DF0(arg0) != 0)) {
            if (TWindowCtrl__sub_8024AF74(lbl_805D53A0) == 0) {
                TObjPlayer__sub_801B56A4(temp_r3);
            }
            fn_8024AD30(lbl_805D53A0);
        }
        fn_8025CB70(M2C_FIELD(arg0, s32 *, 0x20));
        fn_80247534(arg0);
        TKeyBoardControl__sub_80131F64(M2C_FIELD(arg0, s32 *, 0x28));
    }
}

}
