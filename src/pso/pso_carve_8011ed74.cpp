#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 obj_getField1c(s32);
s32 fn_80099EF8(void *);
M2C_UNK fn_8011E484(void *);
M2C_UNK fn_8011E4D8();
s16 fn_801210D0(s32);
f32 fn_80121118(s32);
f32 fn_80121198(s32);
s16 fn_801A1EB0(s32);

void fn_8011ED74(void *arg0, void *arg1) {
    fn_8011E4D8();
    M2C_FIELD(arg1, s16 *, 0x14) = obj_getField1c(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg1, s16 *, 0x16) = fn_801A1EB0(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg1, s32 *, 0x18) = fn_80099EF8(arg0);
    M2C_FIELD(arg1, f32 *, 0x1C) = fn_80121198(M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC);
    M2C_FIELD(arg1, s32 *, 0x24) = (s32) fn_801210D0(M2C_FIELD(arg0, s32 *, 0xF0));
    M2C_FIELD(arg1, f32 *, 0x20) = fn_80121118(M2C_FIELD(arg0, s32 *, 0xF0));
    fn_8011E484(arg0);
}

}
