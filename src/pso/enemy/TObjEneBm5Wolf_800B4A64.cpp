#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__14TObjEneBm5WolfFPv(void *arg0);
M2C_UNK TObjEneBm5Wolf__sub_800B7EA0(void *);
M2C_UNK update_collision_center__14TObjEneBm5WolfFPv(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B8570(void *);
M2C_UNK TObjEneBm5Wolf__sub_800B85A0(void *);
s32 get_target_info__9TObjEneDDFPv();

void update_state__14TObjEneBm5WolfFPv(void *arg0) {
    s32 temp_r31;

    if (get_target_info__9TObjEneDDFPv() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x3D8);
        TObjEneBm5Wolf__sub_800B7EA0(arg0);
        if (temp_r31 != (s32) M2C_FIELD(arg0, s32 *, 0x3D8)) {
            if (temp_r31 != 0) {
                TObjEneBm5Wolf__sub_800B8570(arg0);
            } else {
                TObjEneBm5Wolf__sub_800B85A0(arg0);
            }
        }
        update_collision_center__14TObjEneBm5WolfFPv(arg0);
    }
}

}
