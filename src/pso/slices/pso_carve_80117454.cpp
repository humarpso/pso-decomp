#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

void fn_80117454(void *arg0) {
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

}
