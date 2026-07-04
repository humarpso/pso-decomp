#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80293080();
extern M2C_UNK lbl_804DB1F0[];

void fn_80293000(s32 arg0) {
    s32 var_r31;

    var_r31 = arg0;
    if (fn_80293080() != 0) {
        if ((var_r31 < 0) || (var_r31 > 1)) {
            var_r31 = 0;
        }
        M2C_FIELD(lbl_804DB1F0, s32 *, 0x24) = var_r31;
    }
}

}
