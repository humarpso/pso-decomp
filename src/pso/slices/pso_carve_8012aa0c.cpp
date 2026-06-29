#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8011E2FC(s32, f32);
s32 fn_8011E384();
M2C_UNK fn_8011EDFC(s32, M2C_UNK, M2C_UNK, f32);
M2C_UNK fn_8011F5E0(s32);
extern f32 lbl_805DAE68;
extern f32 lbl_805DAE6C;

void fn_8012AA0C(s32 arg0) {
    if (fn_8011E384() != 0) {
        fn_8011E2FC(arg0, lbl_805DAE68);
        fn_8011EDFC(arg0, 0, 1, lbl_805DAE6C);
        return;
    }
    fn_8011F5E0(arg0);
}

}
