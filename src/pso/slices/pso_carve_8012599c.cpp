#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 obj_testFlags30(s32, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TNowLoading__sub_80087660(u32, M2C_UNK *);
M2C_UNK TParticleCtrl__sub_80088000(u32);
M2C_UNK TParticleCtrl__sub_80088010(u32);
s32 fn_80101AB0(s32);
u32 fn_80102AA8();
s8 fn_80102C30();
s32 TItemMag__sub_80102C4C(s32);
s32 fn_801207E8(s32, s32, M2C_UNK *);

void fn_8012599C(void *arg0) {
    M2C_UNK sp8[5];
    s32 var_r31;
    s32 var_r30;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != fn_80102AA8()) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    var_r31 = 0;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        var_r30 = fn_80101AB0(M2C_FIELD(arg0, s32 *, 0x1C));
        if ((var_r30 != 0) && (fn_80102C30() == 2)) {
            var_r31 = 1;
            if (fn_801207E8(var_r30, M2C_FIELD(arg0, s32 *, 0x20), sp8) != 0) {
                TNowLoading__sub_80087660(M2C_FIELD(arg0, u32 *, 0x24), sp8);
                if ((TItemMag__sub_80102C4C(var_r30) == 0) || (obj_testFlags30(var_r30, 0x08000000) == 0)) {
                    TParticleCtrl__sub_80088000(M2C_FIELD(arg0, u32 *, 0x24));
                } else {
                    TParticleCtrl__sub_80088010(M2C_FIELD(arg0, u32 *, 0x24));
                }
            } else {
                TParticleCtrl__sub_80088010(M2C_FIELD(arg0, u32 *, 0x24));
            }
        }
    }
    if (var_r31 == 0) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
