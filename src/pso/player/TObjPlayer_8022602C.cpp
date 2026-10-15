#include "types.h"

extern "C" {

void play_effect_if_v2__10TObjPlayerFi(s32 arg0);
s32 update_technique_slot__10TTecRaFoieFi(s32, s32, s32);
s32 check_v2_mode__9TObjEneDDFv();

extern s32 last_sound_effect_slot;

void play_effect_if_v2__10TObjPlayerFi(s32 arg0) {
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        update_technique_slot__10TTecRaFoieFi(last_sound_effect_slot, arg0, 0);
    }
}

}
