#include "types.h"

extern "C" {

void apply_balance__19TWindowSoundBalanceFPvPv(void *arg0, void *arg1);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
s32 draw_selection_bar(void *, s32, s32);
s32 is_active__17TWindowOptionCtrlFPv(void *);

void apply_balance__19TWindowSoundBalanceFPvPv(void *arg0, void *arg1) {
    s32 temp;

    temp = get_array_entry__20TWindowSubStatusDispFPvi(arg0, (s32) ((s8 *) arg0)[0x61]);
    draw_selection_bar(arg1, temp, is_active__17TWindowOptionCtrlFPv(arg0));
}

}
