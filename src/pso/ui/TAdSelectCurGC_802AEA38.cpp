#include "types.h"
#include "pso/TAdSelectCurGC.h"

extern "C" {

int set_cached_blend_factor(void*, void*);
int get_state_flag__9TMainTaskFv(void*);
int draw_select_cursor_quads(void*);

void TAdSelectCurGC::render() { if (get_state_flag__9TMainTaskFv(this) != 1) { set_cached_blend_factor((void*)0, (void*)8); set_cached_blend_factor((void*)1, (void*)10); draw_select_cursor_quads(this); set_cached_blend_factor((void*)0, (void*)8); set_cached_blend_factor((void*)1, (void*)6); } }

}
