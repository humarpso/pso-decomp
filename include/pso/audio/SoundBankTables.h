#ifndef PSO_AUDIO_SOUND_BANK_TABLES_H
#define PSO_AUDIO_SOUND_BANK_TABLES_H
#include "types.h"

struct SoundEffectRange { s32 start; s32 end; };
struct SoundEffectBankRoutes {
    SoundEffectRange* common[7];
    SoundEffectRange* area_effects[22];
    SoundEffectRange* area_backgrounds[22];
    SoundEffectRange* extra_effects[22];
};

extern "C" {
extern u32 sound_bank_file_sizes[153];
extern const char* sound_bank_filenames[153];
extern u16 sound_bank_file_crc16[152];
extern SoundEffectBankRoutes sound_effect_bank_range_routes;
extern u16 sound_bank_file_indices[38][4];
extern s16* sound_bank_load_routes[22];
extern u16 sound_bank_group_ids[38];
}
#endif
