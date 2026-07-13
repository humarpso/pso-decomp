#include "types.h"

extern "C" {

int TBoss6Thanks__sub_8035CB40(void);
int dispatch_darkfalz_phase__12TBoss6ThanksFv(void);
u8 fn_8035CAE0(void);
u8 check_ship_door__12TBoss6ThanksFv(void);
s32 TODoorVoShip__sub_801F44BC(s32);
int dispatch_by_main_phase__14TBoss4DarkFalzFUs(void*);

u8 fn_8035CAE0(void) {
    return (u8) (TODoorVoShip__sub_801F44BC(0x9A) != 0);
}
u8 check_ship_door__12TBoss6ThanksFv(void) {
    return (u8) (TODoorVoShip__sub_801F44BC(0x98) != 0);
}
int TBoss6Thanks__sub_8035CB40(void) { return dispatch_by_main_phase__14TBoss4DarkFalzFUs((void*)(154)); }
int dispatch_darkfalz_phase__12TBoss6ThanksFv(void) { return dispatch_by_main_phase__14TBoss4DarkFalzFUs((void*)(152)); }

}
