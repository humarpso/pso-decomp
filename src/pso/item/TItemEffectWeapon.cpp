#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__17TItemEffectWeaponFv(void *self, s32 arg1, s32 param);
void *__dt__17TItemEffectWeaponFv(void *self, s32 flag);
void *TItemMagSub__sub_80115728(void *, s32);
void  TItemEffectWeapon__sub_803639F0(s32);
s32   TItemEffectWeapon__sub_80363A1C(void);
void  free_to_heap__11TItemMagSubFPv(void *);
void  init_object__21TItemEffArmorParticleFPv(void *);

extern void *__vt__17TItemEffectWeapon[];

void *__dt__17TItemEffectWeaponFv(void *self, s32 flag) {
    if (self) {
        M2C_FIELD(self, void **, 0x18) = __vt__17TItemEffectWeapon;
        TItemEffectWeapon__sub_803639F0(M2C_FIELD(self, s32 *, 0x1C));
        TItemMagSub__sub_80115728(self, 0);
        if ((s16)flag > 0) {
            free_to_heap__11TItemMagSubFPv(self);
        }
    }
    return self;
}

extern void *__vt__17TItemEffectWeapon[];
extern s32 lbl_805D4470;

void *__ct__17TItemEffectWeaponFv(void *self, s32 arg1, s32 param) {
    init_object__21TItemEffArmorParticleFPv(self);
    M2C_FIELD(self, void **, 0x18) = __vt__17TItemEffectWeapon;
    M2C_FIELD(self, s32 *, 0) = lbl_805D4470;
    M2C_FIELD(self, s32 *, 0x1C) = TItemEffectWeapon__sub_80363A1C();
    M2C_FIELD(self, s32 *, 0x24) = param;
    M2C_FIELD(self, s32 *, 0x20) = 0;
    M2C_FIELD(self, s32 *, 0x28) = 0;
    return self;
}

}
