#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void foreach_player__10TObjPlayerFv(M2C_UNK (*arg0)(u32));
s32 TObjPlayer__sub_80019248(u32);

extern M2C_UNK lbl_8050EA10[];

void foreach_player__10TObjPlayerFv(M2C_UNK (*arg0)(u32)) {
    M2C_UNK (*var_r27)(u32);
    s32 var_r29;
    M2C_UNK *var_r30;
    s32 var_r31;
    u32 temp_r28;

    var_r27 = arg0;
    var_r29 = 0;
    var_r30 = lbl_8050EA10;
    var_r31 = 0;
    do {
        temp_r28 = var_r30[var_r31];
        if ((temp_r28 != 0U) && (TObjPlayer__sub_80019248(temp_r28) != 0)) {
            var_r27(temp_r28);
        }
        var_r29 += 1;
        var_r31 += 1;
    } while (var_r29 < 0xC);
}

}
