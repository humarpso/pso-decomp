#include "types.h"

extern "C" {

void close_child_window__15TWindowMainMenuFPv(void* p);
int TWindow__close(void*);

void close_child_window__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x24) != 0) { TWindow__close(*(void**)((char*)p + 0x24)); *(int*)((char*)p + 0x24) = 0; } }

}
