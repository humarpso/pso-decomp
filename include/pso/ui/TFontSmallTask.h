#ifndef PSO_UI_TFONTSMALLTASK_H
#define PSO_UI_TFONTSMALLTASK_H

#include "types.h"

extern "C" {
void TBoss3Volopt__sub_800FD344(s32 arg0, s32 arg1, s32 arg2, void *arg3, void *arg4);
f32 calc_small_font_scale(void);
s32 create_font_small_task(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4, s32 arg5, s32 arg6);
s32 create_font_small_task_default_color(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4, s32 arg5);
void fn_800FCCC8(s32 arg0, s32 arg1);
s32 fn_800FCCF4(void *p);
void reset_leader_selection(void *p);
void set_world_section_id(void *p, s32 v);
}

#endif
