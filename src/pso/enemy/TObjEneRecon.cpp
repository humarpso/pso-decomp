#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

f32 TObjEneRecon::get_field_4d4() { return *(f32*)((char*)this + 0x4d4); }
f32 TObjEneRecon::get_field_4d0() { return *(f32*)((char*)this + 0x4d0); }

}
