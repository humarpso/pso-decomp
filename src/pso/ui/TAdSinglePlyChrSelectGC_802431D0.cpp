#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC_802431D0.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
#include "pso/misc/TWindowKeyBoardHard.h"

extern "C" {

s32 TAdPlayerLoadGC__sub_801E15A4(s32, s32, s32, s32, s32 *, s32);
int TAdPlayerLoadGC__sub_801E1944(void*, int, int, int);
int reset_pad_rumble_effects_and_channels(void*);

int TAdSinglePlyChrSelectGC__sub_802431D0(void) { return reset_pad_rumble_effects_and_channels((void*)(0)); }
int TAdSinglePlyChrSelectGC::test_card_flag8() { return TWindowKeyBoardHard::test_card_flag((s32)this, (s32)8); }
void TAdSinglePlyChrSelectGC::draw_window_bg(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    ((TAdSinglePlyChrSelectGC *)(&sp8))->get_current_date_stamp();
    TAdPlayerLoadGC__sub_801E15A4(arg0, arg1, arg2, arg3, &sp8, 0x800000FF);
}
void TAdSinglePlyChrSelectGC::load_player(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    ((TAdSinglePlyChrSelectGC *)(&sp8))->get_current_date_stamp();
    TAdPlayerLoadGC__sub_801E15A4(arg0, arg1, arg2, arg3, &sp8, 0x80000000);
}
int TAdSinglePlyChrSelectGC::load_player_slot(int a1, int a2) { return TAdPlayerLoadGC__sub_801E1944(this, a1, a2, 0); }

}
