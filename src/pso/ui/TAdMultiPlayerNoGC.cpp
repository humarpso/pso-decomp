#include "types.h"

extern "C" {

void run_task__18TAdMultiPlayerNoGCFv(void);
void render__18TAdMultiPlayerNoGCFv(void* p);

int abs__4cXyzCFv(void*, void*);
int fn_8001A430(void*);
int fn_8033A54C(void*);

void render__18TAdMultiPlayerNoGCFv(void* p) { if (fn_8001A430(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); fn_8033A54C(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }
void run_task__18TAdMultiPlayerNoGCFv(void) {  }

}
