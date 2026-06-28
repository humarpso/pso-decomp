#include "types.h"

extern "C" {

s32 TODoorVoShip__sub_801F44BC(s32);
int TBoss6Thanks__sub_8035CB40(void);
int fn_8035CB64(void);
int fn_801F4830(void*);

u8 fn_8035CAE0(void) {
    return (u8) (TODoorVoShip__sub_801F44BC(0x9A) != 0);
}
u8 fn_8035CB10(void) {
    return (u8) (TODoorVoShip__sub_801F44BC(0x98) != 0);
}
int TBoss6Thanks__sub_8035CB40(void) { return fn_801F4830((void*)(154)); }
int fn_8035CB64(void) { return fn_801F4830((void*)(152)); }

}
