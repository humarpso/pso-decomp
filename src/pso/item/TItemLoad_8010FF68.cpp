#include "types.h"
#include "pso/TItemLoad.h"

extern "C" {

int close_adxf_handle__6TLobbyFPv(void*);

void TItemLoad::free_texture() { if (*(unsigned int*)((char*)this + 0x4) != 0) { close_adxf_handle__6TLobbyFPv(*(void**)((char*)this + 0x4)); *(int*)((char*)this + 0x4) = 0; *(int*)((char*)this + 0xc) = 0; } }

}
