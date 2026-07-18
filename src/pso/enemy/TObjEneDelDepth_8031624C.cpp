#include "types.h"

extern "C" {

f32 get_depth_radius__19TObjEneDelDepthBombFPv(void* p);
int get_flag_bit4__15TObjEneDelDepthFPv(void* p);
s32 get_type__15TObjEneDelDepthFPv(void* p);

int get_flag_bit4__15TObjEneDelDepthFPv(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

}
