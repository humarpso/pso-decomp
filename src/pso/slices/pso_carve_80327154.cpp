#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s16 obj_getS16_32C(s32);
s16 TItemProShield__sub_80076B5C(s32);
s32 fn_8011E384();
M2C_UNK fn_8011EB84(void *, s32, M2C_UNK, M2C_UNK);
M2C_UNK fn_8011F5E0(void *);
M2C_UNK fn_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);

void fn_80327154(void *arg0) {
    s32 temp_r31;

    if (fn_8011E384() != 0) {
        temp_r31 = (s16) TItemProShield__sub_80076B5C(M2C_FIELD(arg0, s32 *, 0xF0));
        if ((s32) ((s16) obj_getS16_32C(M2C_FIELD(arg0, s32 *, 0xF0)) * 8) < temp_r31) {
            fn_8011EB84(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, -0x238E);
            fn_8011EB84(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, -0x11C7);
            fn_8011EB84(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0);
            fn_8011EB84(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0x11C7);
            fn_8011EB84(arg0, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0x238E);
            fn_8022675C(0x4001A642, M2C_FIELD(arg0, s32 *, 0xF0) + 0x38, 0, 0);
            return;
        }
        fn_8011F5E0(arg0);
        return;
    }
    fn_8011F5E0(arg0);
}

}
