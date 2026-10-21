#include "types.h"
#include "pso/TMainTask.h"
#include "pso/system/ModelDrawContext.h"
#include "pso/TAdSelectCurGC.h"

extern "C" {

int draw_select_cursor_quads(void*);

void TAdSelectCurGC::render() { if (TMainTask::get_state_flag() != 1) { set_cached_blend_factor((s32)((void*)0), (s32)((void*)8)); set_cached_blend_factor((s32)((void*)1), (s32)((void*)10)); draw_select_cursor_quads(this); set_cached_blend_factor((s32)((void*)0), (s32)((void*)8)); set_cached_blend_factor((s32)((void*)1), (s32)((void*)6)); } }

}
