#include "types.h"
#include "pso/misc/TWindowSubComCard_80244774.h"
#include "pso/misc/TUnk_804CE018.h"
#include "pso/misc/TWindowSoundBalance.h"

void TWindowSoundBalance::apply_balance(void *window_key_board_soft) {
    s32 temp;

    temp = get_array_entry((s32) ((s8 *) this)[0x61]);
    draw_selection_bar((u8 *)window_key_board_soft, (u8 *)temp, is_active());
}
