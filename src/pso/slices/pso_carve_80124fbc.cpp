#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8011E2FC(void *, f32);
s32 fn_8011E384();
M2C_UNK fn_8011F5E0(void *);
M2C_UNK fn_80124C90(void *);
s16 fn_801251AC(s32);
extern f32 lbl_805DAD3C;

void fn_80124FBC(void *arg0) {
    if (fn_8011E384() != 0) {
        if (fn_801251AC(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC) == 0) {
            fn_8011E2FC(arg0, lbl_805DAD3C);
            fn_80124C90(arg0);
        }
    } else {
        fn_8011F5E0(arg0);
    }
}

}
