#include "types.h"

extern "C" {

void render__14TAdSelectCurGCFv(void* p);

int set_cached_blend_factor(void*, void*);
int get_state_flag__9TMainTaskFv(void*);
int draw_select_cursor_quads(void*);

void render__14TAdSelectCurGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { set_cached_blend_factor((void*)0, (void*)8); set_cached_blend_factor((void*)1, (void*)10); draw_select_cursor_quads(p); set_cached_blend_factor((void*)0, (void*)8); set_cached_blend_factor((void*)1, (void*)6); } }

}
