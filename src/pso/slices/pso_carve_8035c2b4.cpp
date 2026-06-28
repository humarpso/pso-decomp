#include "types.h"

extern "C" {

s32 TODoorVoShip__sub_801F44BC(s32);
int TBoss4Thanks__sub_8035C314(void);
int fn_8035C338(void);
int fn_801F4830(void*);

u8 fn_8035C2B4(void) {
    return (u8) (TODoorVoShip__sub_801F44BC(0x99) != 0);
}
u8 fn_8035C2E4(void) {
    return (u8) (TODoorVoShip__sub_801F44BC(0x97) != 0);
}
int TBoss4Thanks__sub_8035C314(void) { return fn_801F4830((void*)(153)); }
int fn_8035C338(void) { return fn_801F4830((void*)(151)); }

}
