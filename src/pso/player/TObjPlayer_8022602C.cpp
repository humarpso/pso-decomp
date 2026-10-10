#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_effect_if_v2__10TObjPlayerFi(s32 arg0);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, s32, M2C_UNK);
s32 check_v2_mode__9TObjEneDDFv();

extern s32 last_sound_effect_slot;

void play_effect_if_v2__10TObjPlayerFi(s32 arg0) {
    if (check_v2_mode__9TObjEneDDFv() != 0) {
        update_technique_slot__10TTecRaFoieFi(last_sound_effect_slot, arg0, 0);
    }
}

}
