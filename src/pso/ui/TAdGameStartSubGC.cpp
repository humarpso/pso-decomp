#include "types.h"

extern "C" {

void render__17TAdGameStartSubGCFv(void* p);

int abs__4cXyzCFv(void*, void*);
int get_state_flag__9TMainTaskFv(void*);
int TAdGameStartSubGC__sub_802E6864(void*);

void render__17TAdGameStartSubGCFv(void* p) { if (get_state_flag__9TMainTaskFv(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); TAdGameStartSubGC__sub_802E6864(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }

}
