#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800196EC();
s32 fn_80070AB0();
s32 fn_80293080();
s32 TRaderMapCore__sub_8030A808();
void fn_80075004(void);

void fn_80075004(void) {  }
s32 fn_80075008(void *arg0) {
    s32 var_r3;

    if (TRaderMapCore__sub_8030A808() == 1) {
        var_r3 = fn_80293080();
    } else {
        var_r3 = fn_80070AB0();
    }
    if ((var_r3 == 0) || ((s8) M2C_FIELD(arg0, u8 *, 0xC2) != fn_800196EC())) {
        return 1;
    }
    return 0;
}

}
