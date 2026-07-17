#include "types.h"

extern "C" {

void set_position__6TLobbyFPvff(void* p, f32 a, f32 b);

void set_position__6TLobbyFPvff(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0xa8) = a; *(f32*)((char*)p + 0xac) = b; }

}
