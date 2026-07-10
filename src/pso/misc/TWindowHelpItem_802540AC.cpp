#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_stat_disp__15TWindowHelpItemFPv(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 TWindowHelpItem__sub_80104FCC(s32, M2C_UNK, M2C_UNK *);
M2C_UNK TWindowHelpItem__sub_8025A238(s32, M2C_UNK);
s32 TWindowSubStatusDisp__sub_80223B88(void *, M2C_UNK);

void update_stat_disp__15TWindowHelpItemFPv(void *arg0) {
    M2C_UNK sp8;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
    if (temp_r3 != 0) {
        a = TWindowSubStatusDisp__sub_80223B88(arg0, 0);
        b = TWindowSubStatusDisp__sub_80223B88(arg0, 1);
        c = TWindowSubStatusDisp__sub_80223B88(arg0, 2);
        d = TWindowSubStatusDisp__sub_80223B88(arg0, 3);
        e = TWindowSubStatusDisp__sub_80223B88(arg0, 4);
        if (M2C_FIELD(arg0, u32 *, 0x70) != 0) {
            if (TWindowHelpItem__sub_80104FCC(temp_r3, M2C_FIELD(arg0, u32 *, 0x70), &sp8) != 0) {
                TWindowHelpItem__sub_8025A238(a, 1);
                TWindowHelpItem__sub_8025A238(b, 1);
                TWindowHelpItem__sub_8025A238(c, 1);
                TWindowHelpItem__sub_8025A238(d, 1);
                TWindowHelpItem__sub_8025A238(e, 1);
                return;
            }
            TWindowHelpItem__sub_8025A238(a, 0);
            TWindowHelpItem__sub_8025A238(b, 0);
            TWindowHelpItem__sub_8025A238(c, 0);
            TWindowHelpItem__sub_8025A238(d, 0);
            TWindowHelpItem__sub_8025A238(e, 0);
        }
    }
}

}
