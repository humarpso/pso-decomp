#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TObjEneDellBiter__sub_80087350(void *, int);
s32 __ct__13TItemShootGunFPvPC3VecPC3Vecf(int, void *, void *, void *, f32);
s32 __nw__7TObjectFUl(int);
s32 fn_8011B620(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
}

extern "C" {

s32 fn_8011B620(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    s32 temp_r3;
    s32 var_r0;
    TObjEneDellBiter__sub_80087350((void *) (arg1), (int) (9));
    temp_r3 = __nw__7TObjectFUl((int) (0x74));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = __ct__13TItemShootGunFPvPC3VecPC3Vecf((int) (temp_r3), (void *) (arg0), (void *) (arg1), (void *) (arg2), (f32) (farg0));
    }
    return var_r0;
}

}
