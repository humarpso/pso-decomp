#include "types.h"

extern "C" {

int TAdSinglePlyChrSelectGC__sub_802431D0(void);
int test_card_flag8__23TAdSinglePlyChrSelectGCFPv(void* p);
void draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void load_player__23TAdSinglePlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void* p, int a1, int a2);
s32 TAdPlayerLoadGC__sub_801E15A4(s32, s32, s32, s32, s32 *, s32);
int TAdPlayerLoadGC__sub_801E1944(void*, int, int, int);
s32 get_current_date_stamp__23TAdSinglePlyChrSelectGCFPv(s32 *);
int test_card_flag__19TWindowKeyBoardHardFii(void*, int);
int reset_all_slots__23TAdSinglePlyChrSelectGCFs(void*);

int TAdSinglePlyChrSelectGC__sub_802431D0(void) { return reset_all_slots__23TAdSinglePlyChrSelectGCFs((void*)(0)); }
int test_card_flag8__23TAdSinglePlyChrSelectGCFPv(void* p) { return test_card_flag__19TWindowKeyBoardHardFii(p, 8); }
void draw_window_bg__23TAdSinglePlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    get_current_date_stamp__23TAdSinglePlyChrSelectGCFPv(&sp8);
    TAdPlayerLoadGC__sub_801E15A4(arg0, arg1, arg2, arg3, &sp8, 0x800000FF);
}
void load_player__23TAdSinglePlyChrSelectGCFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp8;

    get_current_date_stamp__23TAdSinglePlyChrSelectGCFPv(&sp8);
    TAdPlayerLoadGC__sub_801E15A4(arg0, arg1, arg2, arg3, &sp8, 0x80000000);
}
int load_player_slot__23TAdSinglePlyChrSelectGCFPvii(void* p, int a1, int a2) { return TAdPlayerLoadGC__sub_801E1944(p, a1, a2, 0); }

}
