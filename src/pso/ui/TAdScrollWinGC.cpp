#include "types.h"

extern "C" {

void render__14TAdScrollWinGCFv(void* p);

int abs__4cXyzCFv(void*, void*);
int get_state_flag__9TMainTaskFv(void*);
int render_status_value__20TWindowSubStatusDispFPv(void*);

void render__14TAdScrollWinGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); render_status_value__20TWindowSubStatusDispFPv(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }

}
