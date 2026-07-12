#include "types.h"

extern "C" {

void init_draw_state__15TObjEneDelDepthFPv(void* p);
int TObjEneDelDepth__sub_80316488(void*, void*);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

void init_draw_state__15TObjEneDelDepthFPv(void* p) { *(int*)((char*)p + 0x384) = 30; *(int*)((char*)p + 0x388) = 8; TObjEneDelDepth__sub_80316488(*(void**)((char*)p + 0x37c), (void*)2); set_draw_mode__15TObjEneDelDepthFPvi(p, (void*)2); }

}
