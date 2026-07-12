#include "types.h"

extern "C" {

void close_window_2c__6TLobbyFPv(void* p);
int TWindow__close(void*);

void close_window_2c__6TLobbyFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close(*(void**)((char*)p + 0x2c)); *(int*)((char*)p + 0x2c) = 0; } }

}
