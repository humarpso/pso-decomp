#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_action_probability__8TItemMagFPvi(u8 *arg0, s32 arg1);
s32 TOBoss4Rock__sub_8039C880();

extern M2C_UNK TItemMag__data_8043E558;
extern const f32 lbl_805DAB9C;
extern const f32 lbl_805DABAC;

s32 check_action_probability__8TItemMagFPvi(u8 *arg0, s32 arg1) {
    s16 temp_r0;
    u8 temp_r0_2;
    u8 temp_r3;
    u8 var_r31;
    u8 var_r5;
    u8 *temp_r4;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x19A);
    if (temp_r0 < 0x1F) {
        var_r5 = 0;
    } else if (temp_r0 < 0x3D) {
        var_r5 = 0xF;
    } else if (temp_r0 < 0x51) {
        var_r5 = 0x19;
    } else if (temp_r0 < 0x65) {
        var_r5 = 0x1E;
    } else {
        var_r5 = 0x23;
    }
    temp_r4 = arg0 + arg1;
    var_r31 = 0;
    if ((u8) M2C_FIELD(temp_r4, u8 *, 0x1BD) != 0) {
        temp_r0_2 = M2C_FIELD(temp_r4, u8 *, 0x1C1);
        switch ((s32) temp_r0_2) {
        case 0:
            var_r31 = M2C_FIELD(arg0, u8 *, 0x1BC);
            break;
        case 1:
            var_r31 = M2C_FIELD(arg0, u8 *, 0x1BC) + var_r5;
            break;
        case 2:
            var_r31 = var_r5;
            break;
        case 3:
            temp_r3 = M2C_FIELD(arg0, u8 *, 0x1BC);
            if (temp_r3 > 0xAU) {
                var_r31 = temp_r3 - 0xA;
            } else {
                var_r31 = 0;
            }
            break;
        case 4:
            if (var_r5 > 0xAU) {
                var_r31 = var_r5 - 0xA;
            } else {
                var_r31 = 0;
            }
            break;
        }
        if ((u8) (s32) (lbl_805DABAC * (lbl_805DAB9C * (f32) TOBoss4Rock__sub_8039C880())) < var_r31) {
            return 1;
        }
        goto block_29;
    }
block_29:
    return 0;
}

}
