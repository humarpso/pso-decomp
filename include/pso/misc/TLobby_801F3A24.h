#ifndef PSO_MISC_TLOBBY_801F3A24_H
#define PSO_MISC_TLOBBY_801F3A24_H

#include "types.h"

extern "C" {
void clear_quest_floor_designations(void);
bool load_quest_encounter_section(s32 arg0);
void open_session__6TLobbyFi(s32 arg0);
void populate_quest_floor_sets(void);
void rebuild_all__6TLobbyFi(int a0);
void refresh_quest_list__6TLobbyFi(s32 arg0);
void set_quest_floor_designation(s16 mode, s32 floor, s32 terrain, s32 unused);
void set_quest_floor_designation_ex(s16 mode, s32 floor, s32 area, s32 layout, s32 entities);
void update_and_reset__6TLobbyFi(int a0);
}

#endif
