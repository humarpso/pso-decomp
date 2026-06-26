#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8011B704(M2C_UNK, M2C_UNK, M2C_UNK);
u32 fn_8011B86C(s32, s32, s32, f32);
u32 fn_80128BD4(u32, s32, s32, s32, f32);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK set_parent__7TObjectFP7TObject(u32, u32);

u32 fn_80128C38(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 var_r31;
    u32 temp_r30;

    var_r31 = 0U;
    if (arg0 != 0) {
        var_r31 = __nw__7TObjectFUl(0x6C);
        if (var_r31 != 0U) {
            var_r31 = fn_80128BD4(var_r31, arg0, arg1, arg2, farg0);
        }
        temp_r30 = fn_8011B86C(arg0, arg1, arg2, farg0);
        if ((var_r31 != 0U) && (temp_r30 != 0U)) {
            fn_8011B704(temp_r30, 0x1BB, 0);
            set_parent__7TObjectFP7TObject(temp_r30, var_r31);
        }
    }
    return var_r31;
}

}
