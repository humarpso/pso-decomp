#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u32 TItemShootGun__sub_8011B598(s32 arg0, s32 arg1, s32 arg2, f32 farg0);
M2C_UNK TItemShoot__sub_8011BF94(u32, M2C_UNK);
M2C_UNK TObjEneDellBiter__sub_80087350(s32, M2C_UNK);
u32 __ct__13TItemShootGunFv(void *, s32, s32, s32, f32);
u32 __nw__7TObjectFUl(M2C_UNK);

u32 TItemShootGun__sub_8011B598(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 var_r31;

    TObjEneDellBiter__sub_80087350(arg1, 0x1BF);
    var_r31 = __nw__7TObjectFUl(0x74);
    if (var_r31 != 0U) {
        var_r31 = (u32) __ct__13TItemShootGunFv((void *) var_r31, arg0, arg1, arg2, farg0);
    }
    if (var_r31 != 0U) {
        TItemShoot__sub_8011BF94(var_r31, 4);
    }
    return var_r31;
}

}
