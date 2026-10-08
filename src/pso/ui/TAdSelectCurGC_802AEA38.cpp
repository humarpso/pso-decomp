#include "types.h"

extern "C" {

void render__14TAdSelectCurGCFv(void* p);

int abs__4cXyzCFv(void*, void*);
int get_state_flag__9TMainTaskFv(void*);
int draw_select_cursor_quads(void*);

void render__14TAdSelectCurGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); draw_select_cursor_quads(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }

}
