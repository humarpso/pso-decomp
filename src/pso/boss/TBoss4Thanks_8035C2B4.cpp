#include "types.h"

extern "C" {

int dispatch_main_phase_153__12TBoss4ThanksFv(void);
int dispatch_main_phase__12TBoss4ThanksFv(void);
u8 fn_8035C2B4(void);
u8 is_door_0x97_open__12TBoss4ThanksFv(void);
s32 TODoorVoShip__sub_801F44BC(s32);
int dispatch_by_main_phase__14TBoss4DarkFalzFUs(void*);

u8 fn_8035C2B4(void) {
    return (u8) (TODoorVoShip__sub_801F44BC(0x99) != 0);
}
u8 is_door_0x97_open__12TBoss4ThanksFv(void) {
    return (u8) (TODoorVoShip__sub_801F44BC(0x97) != 0);
}
int dispatch_main_phase_153__12TBoss4ThanksFv(void) { return dispatch_by_main_phase__14TBoss4DarkFalzFUs((void*)(153)); }
int dispatch_main_phase__12TBoss4ThanksFv(void) { return dispatch_by_main_phase__14TBoss4DarkFalzFUs((void*)(151)); }

}
