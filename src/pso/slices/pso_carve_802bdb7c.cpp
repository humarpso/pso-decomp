#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TPlayerBattleCtrl4P__sub_801BA74C(u16);
s32 fn_802AB0BC();
s32 fn_802AC18C();
u16 fn_802BB694(void *);
M2C_UNK TBoss6Type2__sub_802BD938(void *, M2C_UNK *);
M2C_UNK fn_802BDD6C(void *, s32, M2C_UNK *);

void fn_802BDB7C(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    u16 temp_r31;
    u16 temp_r3;
    u16 var_r30;

    var_r3 = 0x21;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x424) != 0) {
        var_r3 = 0x1F;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x374);
    var_r31 = var_r3;
    switch (temp_r0) {
    case 0x1D:
        return;
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x21:
        temp_r31 = M2C_FIELD(arg0, u16 *, 0x466);
        temp_r3 = fn_802BB694(arg0);
        var_r30 = temp_r3;
        if ((u16) temp_r3 == 0xFFFF) {
            TPlayerBattleCtrl4P__sub_801BA74C(temp_r31);
            if (fn_802AB0BC() != 0) {
                var_r30 = temp_r31;
            }
        }
        M2C_FIELD(arg0, u16 *, 0x466) = var_r30;
        if ((fn_802AC18C() == 0) && (M2C_FIELD(arg0, s32 *, 0x374) & 1)) {
            M2C_FIELD(arg0, u16 *, 0x466) = 0xFFFFU;
        }
        var_r31 = M2C_FIELD(arg0, s32 *, 0x374) - 1;
        break;
    }
    TBoss6Type2__sub_802BD938(arg0, &sp8);
    fn_802BDD6C(arg0, var_r31, &sp8);
}

}
