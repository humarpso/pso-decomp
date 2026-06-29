#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void  fn_803639F0(s32);
void *TItemMagSub__sub_80115728(void *, s32);
void  fn_803642D8(void *);
extern void *__vt__17TItemEffectWeapon[];

void *__dt__17TItemEffectWeaponFv(void *self, s32 flag) {
    if (self) {
        M2C_FIELD(self, void **, 0x18) = __vt__17TItemEffectWeapon;
        fn_803639F0(M2C_FIELD(self, s32 *, 0x1C));
        TItemMagSub__sub_80115728(self, 0);
        if ((s16)flag > 0) {
            fn_803642D8(self);
        }
    }
    return self;
}

}
