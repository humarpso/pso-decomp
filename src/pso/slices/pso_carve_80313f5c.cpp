#include "types.h"

extern "C" {

int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);
int fn_80316488(void*, void*);
void fn_80313F5C(void* p);

void fn_80313F5C(void* p) { *(int*)((char*)p + 0x384) = 30; *(int*)((char*)p + 0x388) = 8; fn_80316488(*(void**)((char*)p + 0x37c), (void*)2); set_draw_mode__15TObjEneDelDepthFPvi(p, (void*)2); }

}
