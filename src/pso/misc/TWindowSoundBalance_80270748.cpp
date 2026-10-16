#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowSoundBalance.h"

extern "C" {

s32 draw_selection_bar(void *, s32, s32);

void TWindowSoundBalance::apply_balance(void *arg1) {
    s32 temp;

    temp = get_array_entry((s32) ((s8 *) this)[0x61]);
    draw_selection_bar(arg1, temp, is_active());
}

}
