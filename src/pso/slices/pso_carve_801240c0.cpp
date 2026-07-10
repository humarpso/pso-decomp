#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK fn_80084E98(u32, M2C_UNK *);
M2C_UNK queue_target_destruction__10TObjCameraFPv(u32);
s32 fn_80101AB0(s32);
u32 fn_80102AA8();
s8 fn_80102C30();
s32 TItemMag__sub_80102C4C(s32);
s32 fn_801207E8(s32, s32, M2C_UNK *);

void fn_801240C0(void *arg0) {
    M2C_UNK sp8;
    s32 temp_r3;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != fn_80102AA8()) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        temp_r3 = fn_80101AB0(M2C_FIELD(arg0, s32 *, 0x1C));
        if ((temp_r3 != 0) && (fn_80102C30() == 2) && (fn_801207E8(temp_r3, M2C_FIELD(arg0, s32 *, 0x20), &sp8) != 0)) {
            if (TItemMag__sub_80102C4C(temp_r3) == 0) {
                fn_80084E98(M2C_FIELD(arg0, u32 *, 0x24), &sp8);
                return;
            }
            queue_target_destruction__10TObjCameraFPv(M2C_FIELD(arg0, u32 *, 0x24));
            return;
        }
    }
    queue_destruction__7TObjectFv(arg0);
}

}
