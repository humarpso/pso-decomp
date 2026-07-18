#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void tick_lifetime__13TItemProArmorFPv(void *arg0);
void *dt__13TItemProArmorFPvs(void *arg0, s16 arg1);
M2C_UNK TItemTimerEvent__sub_8011E068(u16);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

void tick_lifetime__13TItemProArmorFPv(void *arg0) {
    s32 temp_r3;

    if (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x1C)) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    temp_r3 = M2C_FIELD(arg0, s16 *, 0x1E);
    if (temp_r3 == 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (temp_r3 - 1);
}

extern M2C_UNK lbl_8049FEB8[];

void *dt__13TItemProArmorFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8049FEB8;
        TItemTimerEvent__sub_8011E068(M2C_FIELD(arg0, u16 *, 0x1C));
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
