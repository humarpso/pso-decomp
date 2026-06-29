#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TItemProArmorParticle__vt42(void *arg0);
void TItemProArmorParticle__vt43(void *arg0);

M2C_UNK fn_8010A940();

void TItemProArmorParticle__vt43(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 2) {
        M2C_FIELD(arg0, s32 *, 0x198) = -1;
    }
    fn_8010A940();
}

s32 TItemProArmor__sub_80102C3C(void *);
M2C_UNK TItemProArmor__vt42();
s32 TItemProArmor__sub_80364300(M2C_UNK);
M2C_UNK TItemProArmorParticle__sub_80364794(s32, u32, s32, M2C_UNK, s32);

void TItemProArmorParticle__vt42(void *arg0) {
    s32 temp_r3;

    TItemProArmor__vt42();
    if (((s32) M2C_FIELD(arg0, s32 *, 0x1A0) == 1) && ((u32) M2C_FIELD(arg0, u32 *, 0x174) != 0U)) {
        temp_r3 = TItemProArmor__sub_80364300(0x30);
        if (temp_r3 != 0) {
            TItemProArmorParticle__sub_80364794(temp_r3, M2C_FIELD(arg0, u32 *, 0x174), TItemProArmor__sub_80102C3C(arg0), 0x78, M2C_FIELD(arg0, s32 *, 0x19C));
        }
    }
}

}
