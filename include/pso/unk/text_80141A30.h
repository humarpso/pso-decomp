#ifndef PSO_UNK_TEXT_80141A30_H
#define PSO_UNK_TEXT_80141A30_H

#include "types.h"

u32 calc_pulse_flash_color(u8 r, u8 g, u8 b, s32 frame, s32 period, s32 start, s32 peak, s32 end);
extern "C" {
void restore_saved_depth_alpha_state(void);
}

#endif
