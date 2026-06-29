#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801B3468();
u32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
extern s32 lbl_805D53A0;

void fn_801EE188(void) {
    if (TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0) != 0U) {
        fn_801B3468();
    }
}

}
