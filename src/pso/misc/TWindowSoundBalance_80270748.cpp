#include "types.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowSoundBalance.h"

extern "C" {

void draw_selection_bar(u8 *arg0, u8 *arg1, s32 arg2);

void TWindowSoundBalance::apply_balance(void *arg1) {
    s32 temp;

    temp = get_array_entry((s32) ((s8 *) this)[0x61]);
    draw_selection_bar((u8 *)arg1, (u8 *)temp, is_active());
}

}
