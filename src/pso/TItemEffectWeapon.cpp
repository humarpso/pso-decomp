#include "pso/TItemEffectWeapon.h"

extern "C" void  fn_80364328(TItemEffectWeapon*);
extern "C" void* fn_80115728(TItemEffectWeapon*, int);
extern "C" void  fn_803642D8(TItemEffectWeapon*);
extern "C" u8*   fn_80363A1C(void);
extern "C" void  fn_803639F0(u8*);
extern "C" void  fn_80115C24(void* timer, int limit);

extern void* __vt__17TItemEffectWeapon[];

TItemEffectWeapon* TItemEffectWeapon_ct(TItemEffectWeapon* self, int param) {
    fn_80364328(self);
    self->m_vtable = __vt__17TItemEffectWeapon;
    self->m_name   = "TItemEffectWeapon";
    self->m_pool   = fn_80363A1C();
    self->m_param  = param;
    self->m_count2 = 0;
    self->m_28     = 0;
    return self;
}

void* TItemEffectWeapon_dt(TItemEffectWeapon* self, int free) {
    if (self != nullptr) {
        self->m_vtable = __vt__17TItemEffectWeapon;
        fn_803639F0(self->m_pool);
        fn_80115728(self, 0);
        if ((s16)free > 0) {
            fn_803642D8(self);
        }
    }
    return self;
}

void TItemEffectWeapon_step(TItemEffectWeapon* self) {
    int i = 0;
    int off = 0;
    while (i != self->m_count2 / 2) {
        u8* elem = self->m_pool + off;
        fn_80115C24(elem + 0xc, 0x3f);
        if ((*(u32*)(elem + 0xc) & 0xff000000) == 0) {
            self->m_count2 = i << 1;
            return;
        }
        fn_80115C24(elem + 0x1c, 0x3f);
        i++;
        off += 0x20;
    }
}
