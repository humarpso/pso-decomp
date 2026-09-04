#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void move_cursor_prev__11TWindowMenuFPv(void *arg0);
void select_next_item__11TWindowMenuFPv(void *arg0);
void set_active_flag__11TWindowMenuFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 is_visible__17TWindowSubComCardFPv();

void set_active_flag__11TWindowMenuFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 8) && (is_visible__17TWindowSubComCardFPv() == 0)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x400)) {
            TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        }
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 4);
    }
}

void select_next_item__11TWindowMenuFPv(void *arg0) {
    s16 var_r31;

    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x78);
loop_1:
    var_r31 += 1;
    if (var_r31 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x78)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x78) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

void move_cursor_prev__11TWindowMenuFPv(void *arg0) {
    s16 var_r31;

    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x78);
loop_1:
    var_r31 -= 1;
    if (var_r31 < 0) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = M2C_FIELD(arg0, s16 *, 0x76) - 1;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x78)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x78) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

}
