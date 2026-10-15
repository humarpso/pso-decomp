#include "types.h"
#include "pso/enemy/TObjEneDelDepthBomb.h"

extern "C" {

int get_flag_bit4__15TObjEneDelDepthFv(void* p);
s32 get_type__15TObjEneDelDepthFv(void* p);

f32 TObjEneDelDepthBomb::get_depth_radius() { return *(f32*)((char*)this + 0x390); }

}
