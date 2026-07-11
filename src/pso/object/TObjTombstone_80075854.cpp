#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjTombstone__sub_80075854(void);
s32 TObjTombstone__sub_800758C8(void *arg0);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowCtrlMain__sub_8024CE58();

s32 obj_testFlags30(u32, M2C_UNK);

s32 TObjTombstone__sub_80075854(void) {
    s32 var_r31;
    u32 temp_r3;

    if (TWindowCtrlMain__sub_8024CE58() == 0) {
        return 0;
    }
    var_r31 = 0;
loop_3:
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
    if ((temp_r3 != 0U) && (obj_testFlags30(temp_r3, 0x02000000) != 0)) {
        return 0;
    }
    var_r31 += 1;
    if (var_r31 >= 4) {
        return 1;
    }
    goto loop_3;
}

extern f32 lbl_805D91A4;

s32 TObjTombstone__sub_800758C8(void *arg0) {
    if (TObjTombstone__sub_80075854() == 0) {
        return 0;
    }
    return (u32)__cntlzw(M2C_FIELD(arg0, f32 *, 0xB0) > lbl_805D91A4) >> 5;
}

}
