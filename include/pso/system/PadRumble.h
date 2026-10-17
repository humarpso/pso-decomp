#ifndef PSO_SYSTEM_PADRUMBLE_H
#define PSO_SYSTEM_PADRUMBLE_H

#include "types.h"

extern "C" {
s32 *find_active_pad_rumble_effect_by_id(u32 arg0);
s32 *find_free_pad_rumble_effect_slot(void);
s32 *get_pad_rumble_effect_slots(void);
void reset_pad_rumble_effects_and_channels(s16 arg0);
}
void update_pad_rumble(void);

#endif
