#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TItemShootParticle__sub_8011B704(u32, M2C_UNK, M2C_UNK);
u32 fn_8011B86C(s32, s32, s32, f32);
u32 fn_8011BA54();
M2C_UNK set_parent__7TObjectFP7TObject(u32, u32);

u32 fn_8011BDC8(s32 arg0, s32 arg1, s32 arg2, f32 farg0) {
    u32 temp_r31;
    u32 temp_r30;

    temp_r31 = fn_8011BA54();
    temp_r30 = fn_8011B86C(arg0, arg1, arg2, farg0);
    if ((temp_r31 != 0U) && (temp_r30 != 0U)) {
        TItemShootParticle__sub_8011B704(temp_r30, 0x1BD, 0);
        set_parent__7TObjectFP7TObject(temp_r30, temp_r31);
    }
    return temp_r31;
}

}
