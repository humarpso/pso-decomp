#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 take_hit__11TOVS2Wall01FPvUi(u8 *arg0, u32 arg1);
M2C_UNK TOVS2Wall01__sub_8017BAFC(void *, M2C_UNK);
s32 fn_80019248(u32);
M2C_UNK fn_80087350(void *, M2C_UNK);

u16 obj_getField1c(u32);
extern const f32 lbl_805DBAA8;

f32 take_hit__11TOVS2Wall01FPvUi(u8 *arg0, u32 arg1) {
    u32 var_r31;

    var_r31 = 0U;
    obj_getField1c(arg1);
    if (obj_getField1c(arg1) < 4U) {
        var_r31 = arg1;
    }
    if ((var_r31 != 0U) && (fn_80019248(var_r31) == 1)) {
        M2C_FIELD(arg0, s32 *, 0x33C) = (s32) (M2C_FIELD(arg0, s32 *, 0x33C) - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x33C) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x33C) = 0;
            TOVS2Wall01__sub_8017BAFC(arg0, 1);
        } else {
            TOVS2Wall01__sub_8017BAFC(arg0, 0);
        }
        fn_80087350(arg0 + 0x38, 0x1D0);
        fn_80087350(arg0 + 0x38, 1);
    }
    return lbl_805DBAA8;
}

}
