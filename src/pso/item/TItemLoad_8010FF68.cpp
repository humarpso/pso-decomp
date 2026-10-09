#include "types.h"

extern "C" {

void free_texture__9TItemLoadFPv(void* p);
int close_adxf_handle__6TLobbyFPv(void*);

void free_texture__9TItemLoadFPv(void* p) { if (*(unsigned int*)((char*)p + 0x4) != 0) { close_adxf_handle__6TLobbyFPv(*(void**)((char*)p + 0x4)); *(int*)((char*)p + 0x4) = 0; *(int*)((char*)p + 0xc) = 0; } }

}
