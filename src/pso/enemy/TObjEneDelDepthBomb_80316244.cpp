#include "types.h"
#include "pso/enemy/TObjEneDelDepthBomb.h"
#include "pso/enemy/TObjEneDelDepth.h"

extern "C" {

f32 TObjEneDelDepthBomb::get_depth_radius() { return *(f32*)((char*)this + 0x390); }

}
