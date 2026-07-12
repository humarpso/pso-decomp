#include "types.h"

extern "C" {

void run_task__18TAdMultiPlayerNoGCFv(void);
void render__18TAdMultiPlayerNoGCFv(void* p);

int abs__4cXyzCFv(void*, void*);
int TMainTask__sub_8001A430(void*);
int render_status__18TAdMultiPlayerNoGCFi(void*);

void render__18TAdMultiPlayerNoGCFv(void* p) { if (TMainTask__sub_8001A430(p) != 1) { abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)10); render_status__18TAdMultiPlayerNoGCFi(p); abs__4cXyzCFv((void*)0, (void*)8); abs__4cXyzCFv((void*)1, (void*)6); } }
void run_task__18TAdMultiPlayerNoGCFv(void) {  }

}
