#include "types.h"

extern "C" {

void update_phase__12TBoss3VoloptFv(void);
int TBoss3Volopt__sub_8003CB48(void);
void alloc_idle_event__12TBoss3VoloptFv(void);
s32 dispatch_state__16TBoss3VoloptCtrlFi(s32);
s32 dispatch_by_main_phase__14TBoss4DarkFalzFUs(s32);
s32 TODoorVoShip__sub_801F44BC(s32);
int update_if_active__12TBoss3VoloptFv(void*);
int alloc_event__12TBoss3VoloptFsi(void*, void*);
s32 get_main_phase();
s32 is_not_split_screen__13TRaderMapCoreFv();

void update_phase__12TBoss3VoloptFv(void) {
    dispatch_by_main_phase__14TBoss4DarkFalzFUs(0x2A);
    if (get_main_phase() == 0xF) {
        dispatch_state__16TBoss3VoloptCtrlFi(0);
        return;
    }
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        dispatch_state__16TBoss3VoloptCtrlFi(5);
        return;
    }
    if (TODoorVoShip__sub_801F44BC(0x2F) != 0) {
        dispatch_state__16TBoss3VoloptCtrlFi(2);
        return;
    }
    dispatch_state__16TBoss3VoloptCtrlFi(1);
}
int TBoss3Volopt__sub_8003CB48(void) { return update_if_active__12TBoss3VoloptFv((void*)(0)); }
void alloc_idle_event__12TBoss3VoloptFv(void) { alloc_event__12TBoss3VoloptFsi((void*)160, (void*)0); }

}
