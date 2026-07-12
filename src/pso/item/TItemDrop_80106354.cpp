#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_drop_table__9TItemDropFv(void);
u8 TObjPlayer__sub_8011C914(s32);

extern u8 *TItemDrop__data_805D5468;

void init_drop_table__9TItemDropFv(void) {
    s32 var_r31;
    s8 temp_r0;
    u8 *var_r30;
    u8 temp_r3;
    u8 temp_r4;
    u8 temp_r5;

    var_r31 = 0;
    var_r30 = TItemDrop__data_805D5468;
    do {
        temp_r3 = TObjPlayer__sub_8011C914(var_r31 + 0x2AF);
        temp_r5 = temp_r3;
        var_r31 += 1;
        temp_r4 = temp_r5 - 1;
        M2C_FIELD(var_r30, u8 *, 0) = temp_r4;
        temp_r0 = temp_r5 + 1;
        M2C_FIELD(var_r30, u8 *, 1) = temp_r4;
        M2C_FIELD(var_r30, u8 *, 2) = temp_r3;
        M2C_FIELD(var_r30, s8 *, 3) = temp_r0;
        M2C_FIELD(var_r30, s8 *, 4) = temp_r0;
        var_r30 += 5;
    } while (var_r31 != 0x10);
    while (var_r31 != 0x48) {
        *var_r30 = TObjPlayer__sub_8011C914(var_r31 + 0x2AF);
        var_r30 += 1;
        var_r31 += 1;
    }
}

}
