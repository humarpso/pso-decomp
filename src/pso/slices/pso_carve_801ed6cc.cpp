#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80019690(void);
M2C_UNK fn_800715FC(s32);
M2C_UNK fn_802926EC(s32);
extern s32 lbl_80512220[];

void fn_801ED6CC(void) {
    s32 temp_r31;

    temp_r31 = lbl_80512220[0];
    if (fn_80019690() == 1) {
        fn_802926EC(temp_r31);
        return;
    }
    fn_800715FC(temp_r31);
}

}
