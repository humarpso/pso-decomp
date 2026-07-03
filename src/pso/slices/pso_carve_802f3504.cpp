#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 get_enemy_entity();
M2C_UNK fn_802F3C84(u32, s32);
extern u32 lbl_805D6978;

s32 fn_802F3504(void) {
    s32 var_r31;

    if ((u32) lbl_805D6978 == 0U) {
        return 0;
    }
    var_r31 = 1;
loop_3:
    fn_802F3C84(lbl_805D6978, var_r31);
    if (get_enemy_entity() != 0U) {
        return 1;
    }
    var_r31 += 1;
    if (var_r31 >= 6) {
        return 0;
    }
    goto loop_3;
}

}
