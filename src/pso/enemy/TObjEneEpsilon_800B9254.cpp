#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneEpsilon__vt81(void *arg0);

M2C_UNK fn_800B98C0(void *);
s32 TObjEneDD__sub_800BA828(u16);
M2C_UNK TObjEneDD__vt81(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

void TObjEneEpsilon__vt81(void *arg0) {
    if ((TObjEneDD__sub_800BA828(M2C_FIELD(arg0, u16 *, 0x38C)) != 0) && (TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, u16 *, 0x38C)) == 0U)) {
        fn_800B98C0(arg0);
    }
    TObjEneDD__vt81(arg0);
}

}
