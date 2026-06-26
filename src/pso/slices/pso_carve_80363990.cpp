#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void  fn_80364328(void *);
s32   fn_80363A1C(void);
extern void *__vt__17TItemEffectWeapon[];
extern s32 lbl_805D4470;

void *__ct__17TItemEffectWeaponFv(void *self, s32 arg1, s32 param) {
    fn_80364328(self);
    M2C_FIELD(self, void **, 0x18) = __vt__17TItemEffectWeapon;
    M2C_FIELD(self, s32 *, 0) = lbl_805D4470;
    M2C_FIELD(self, s32 *, 0x1C) = fn_80363A1C();
    M2C_FIELD(self, s32 *, 0x24) = param;
    M2C_FIELD(self, s32 *, 0x20) = 0;
    M2C_FIELD(self, s32 *, 0x28) = 0;
    return self;
}

}
