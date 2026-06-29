#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8011AF58(u16);
M2C_UNK fn_801B811C(s32, void *);
extern s32 lbl_805D53A0;

void fn_801D8548(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 4) & 8) {
        M2C_FIELD(arg1, s32 *, 0x14) = fn_8011AF58((u16) lbl_805D53A0);
        fn_801B811C(arg0, arg1);
    }
}

}
