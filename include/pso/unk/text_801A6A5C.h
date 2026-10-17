#ifndef PSO_UNK_TEXT_801A6A5C_H
#define PSO_UNK_TEXT_801A6A5C_H

#include "types.h"

extern "C" {
void map_c_stick_to_buttons(u8 *arg0, s16 arg1, s16 arg2, s32 arg3);
void map_main_stick_to_buttons(u8 *arg0, s16 arg1, s16 arg2, s32 arg3);
}
void update_button_hold_counter(void *arg0, void *arg1, int mask, int held);
extern "C" {
void update_button_hold_counters(u8 *arg0);
}

#endif
