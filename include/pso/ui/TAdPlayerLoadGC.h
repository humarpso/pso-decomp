#ifndef PSO_UI_TADPLAYERLOADGC_H
#define PSO_UI_TADPLAYERLOADGC_H

#include "types.h"

extern "C" {
void *__ct__15TAdPlayerLoadGCFv(void *arg0, void *arg1, void *arg2);
void *__dt__13TUnk_804E24F0Fv(void *arg0, s16 arg1);
u8 *format_level_text__15TAdSubPlyItemGCFii(s32 arg0, s32 arg1);
int get_player_load_state(void);
void render__15TAdPlayerLoadGCFv(void);
void run_task__15TAdPlayerLoadGCFv(u8 *arg0);
void set_character_select_b_slot_state(int a0);
}

#endif
