#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019248();
M2C_UNK fn_80101E7C(void *, u16);
s32 fn_8011AF58(u16);
M2C_UNK TPlayerBattleCtrl4P__sub_801BA74C(int);

void fn_80101ED4(void *arg0, u16 arg1) {
    TPlayerBattleCtrl4P__sub_801BA74C(arg1);
    if (fn_80019248() != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC) == -1) {
            M2C_FIELD(arg0, s32 *, 0xC) = fn_8011AF58(arg1);
        }
        fn_80101E7C(arg0, arg1);
    }
}

}
