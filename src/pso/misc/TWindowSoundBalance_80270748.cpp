#include "types.h"
#include "pso/misc/TWindowSoundBalance.h"

extern "C" {

s32 get_array_entry__20TWindowSubStatusDispFi(void *, s32);
s32 draw_selection_bar(void *, s32, s32);
s32 is_active__17TWindowOptionCtrlFv(void *);

void TWindowSoundBalance::apply_balance(void *arg1) {
    s32 temp;

    temp = get_array_entry__20TWindowSubStatusDispFi(this, (s32) ((s8 *) this)[0x61]);
    draw_selection_bar(arg1, temp, is_active__17TWindowOptionCtrlFv(this));
}

}
