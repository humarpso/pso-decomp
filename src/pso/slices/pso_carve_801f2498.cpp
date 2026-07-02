#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TODoorVoShip__sub_801F44BC(s32);
M2C_UNK fn_801F45FC(s32);
M2C_UNK fn_801F4830(s32);

void qst_op_grev(s32 arg0) {
    u16 v = arg0;
    if (TODoorVoShip__sub_801F44BC(v) != 0) {
        fn_801F45FC(v);
        return;
    }
    fn_801F4830(v);
}

}
