#include "types.h"
extern "C" {
extern const f32 lbl_805E1050;
extern const f32 lbl_805E1054;
void fn_803E1FC8(u32 c);
void fn_803E1FFC(f32 farg0, f32 farg1);
void TParticleCtrl__sub_803E2008(s32 x);
void set_effect_active__10TObjPlayerFv(void);
void TParticleCtrl__sub_803E2010(void);
void fn_803E2070(void);
}

extern "C" {

#pragma push
#pragma scheduling off
void fn_803E2070(void) {
    fn_803E1FC8(0xFFFFFFFF);
    fn_803E1FFC(lbl_805E1050, lbl_805E1054);
    TParticleCtrl__sub_803E2008(2);
    set_effect_active__10TObjPlayerFv();
    TParticleCtrl__sub_803E2010();
}
#pragma pop

}
