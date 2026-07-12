#include "types.h"

extern "C" {

void init_params__15TObjEneDelDepthFPv(void* a0);
int set_default_depth_offset__15TObjEneDelDepthFPv(void*);
int TObjEneDelDepth__sub_80315380(void);
int TObjEneDelDepth__sub_80316488(void*, void*);
int set_draw_mode__15TObjEneDelDepthFPvi(void*, void*);

    extern const float TObjEneDelDepth__data_805DF258;
    extern const float TObjEneDelDepth__data_805DF278;
void init_params__15TObjEneDelDepthFPv(void* a0) { TObjEneDelDepth__sub_80315380(); *(float*)((char*)a0 + 0x39c) = TObjEneDelDepth__data_805DF278; *(float*)((char*)a0 + 0x3a8) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a4) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x3a0) = TObjEneDelDepth__data_805DF258; *(float*)((char*)a0 + 0x398) = TObjEneDelDepth__data_805DF258; *(int*)((char*)a0 + 0x3c0) = 0; TObjEneDelDepth__sub_80316488((void*)(*(int*)((char*)a0 + 0x37c)), (void*)6); set_draw_mode__15TObjEneDelDepthFPvi(a0, (void*)0); *(int*)((char*)a0 + 0x30) = (*(int*)((char*)a0 + 0x30) | 0x4040000); set_default_depth_offset__15TObjEneDelDepthFPv(a0); }

}
