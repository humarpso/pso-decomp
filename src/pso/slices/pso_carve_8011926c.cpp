#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_800F5874(u32, M2C_UNK);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u16);

void fn_8011926C(int arg0) {
    u32 temp = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp != 0U) {
        fn_800F5874(temp, 0x20);
    }
}

}
