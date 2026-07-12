#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void step__17TItemEffectWeaponFv(void *self);
void TItemEffectWeapon__sub_80115C24(void *, s32);

void step__17TItemEffectWeaponFv(void *self) {
    s32 off;
    s8 *elem;
    s32 i;
    i = 0;
    off = 0;
    while (i != M2C_FIELD(self, s32 *, 0x20) / 2) {
        elem = M2C_FIELD(self, s8 **, 0x1C) + off;
        TItemEffectWeapon__sub_80115C24(elem + 0xC, 0x3F);
        if ((*(u32 *)(elem + 0xC) & 0xFF000000) == 0) {
            M2C_FIELD(self, s32 *, 0x20) = i << 1;
            return;
        }
        TItemEffectWeapon__sub_80115C24(M2C_FIELD(self, s8 **, 0x1C) + off + 0x1C, 0x3F);
        i++;
        off += 0x20;
    }
}

}
