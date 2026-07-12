#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemProArmorParticle__vt14(void *arg0);
M2C_UNK create__21TItemProArmorParticleFiiii(s32, s32, s32, s32);
s32 TItemProArmor__sub_80102C3C(void *);
s32 TOKeyMachine01__sub_802034A8();
s32 TObjPlayer__sub_80099EF8(void *);
s32 TObjPlayer__sub_802034B0();

extern s32 tl_05;

void TItemProArmorParticle__vt14(void *arg0) {
    s32 temp_r3;
    s32 temp_r31;

    if ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 2) {
        temp_r3 = TOKeyMachine01__sub_802034A8();
        if (temp_r3 != (s32) M2C_FIELD(arg0, s32 *, 0x198)) {
            M2C_FIELD(arg0, s32 *, 0x198) = temp_r3;
            if (TObjPlayer__sub_802034B0() != 0) {
                create__21TItemProArmorParticleFiiii(tl_05, TObjPlayer__sub_80099EF8(arg0), TItemProArmor__sub_80102C3C(arg0), M2C_FIELD(arg0, s32 *, 0x19C));
            }
        }
    }
}

}
