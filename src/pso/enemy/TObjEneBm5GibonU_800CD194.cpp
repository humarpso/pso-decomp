#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_state__16TObjEneBm5GibonUFPv(void *arg0);
M2C_UNK TObjEneBm5GibonU__sub_800D10A0(void *);
M2C_UNK update_center_position__16TObjEneBm5GibonUFPv(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D184C(void *);
M2C_UNK TObjEneBm5GibonU__sub_800D187C(void *);
s32 get_target_info__9TObjEneDDFPv();

void update_state__16TObjEneBm5GibonUFPv(void *arg0) {
    s32 temp_r31;

    if (get_target_info__9TObjEneDDFPv() != 0) {
        temp_r31 = M2C_FIELD(arg0, s32 *, 0x464);
        TObjEneBm5GibonU__sub_800D10A0(arg0);
        if (temp_r31 != (s32) M2C_FIELD(arg0, s32 *, 0x464)) {
            if (temp_r31 != 0) {
                TObjEneBm5GibonU__sub_800D184C(arg0);
            } else {
                TObjEneBm5GibonU__sub_800D187C(arg0);
            }
        }
        update_center_position__16TObjEneBm5GibonUFPv(arg0);
    }
}

}
