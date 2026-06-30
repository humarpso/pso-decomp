#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_801085B0(s32, s32, M2C_UNK);
s32 fn_8011E384(s32);
M2C_UNK fn_8011F5E0(s32);
s32 fn_8011F63C();
M2C_UNK fn_8012B9B4(s32);
extern s32 tl_05;

void fn_8012BB1C(s32 arg0) {
    if (fn_8011F63C() == 0) {
        fn_801085B0(tl_05, arg0, 4);
    }
    if (fn_8011E384(arg0) != 0) {
        fn_8012B9B4(arg0);
        return;
    }
    fn_8011F5E0(arg0);
}

}
