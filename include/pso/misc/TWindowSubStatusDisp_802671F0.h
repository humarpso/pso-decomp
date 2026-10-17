#ifndef PSO_MISC_TWINDOWSUBSTATUSDISP_802671F0_H
#define PSO_MISC_TWINDOWSUBSTATUSDISP_802671F0_H

#include "types.h"

extern "C" {
void TAdVIConfigGC__sub_80267704(s32 arg0);
void TWindowMenuIconLine__ct(u8 *arg0, u32 arg1, s32 arg2);
void add_battle_stat_entry(void *arg0, s32 arg1, s32 arg2, s32 arg3);
void advance_status_disp_entry(void *arg0, s32 arg1);
u8 *fn_80267F38(s32 arg0, s32 arg1, s32 arg2, s16 arg3);
void push_status_disp_entry(void *arg0, s32 arg1, s32 arg2);
void update_item_list_window(u8 *arg0);
}

#endif
