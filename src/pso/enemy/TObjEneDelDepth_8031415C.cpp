#include "types.h"

extern "C" {

void setup_depth_draw__15TObjEneDelDepthFPv(void* p);
int TObjEneDelDepth__sub_80316488(void*, void*);
int set_depth_offset__15TObjEneDelDepthFPvii(void*, void*, void*);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

void setup_depth_draw__15TObjEneDelDepthFPv(void* p) { set_depth_offset__15TObjEneDelDepthFPvii(p, (void*)30, (void*)30); TObjEneDelDepth__sub_80316488(*(void**)((char*)p + 0x37c), (void*)0); set_draw_mode__15TObjEneDelDepthFPvi(p, (void*)2); }

}
