#include "types.h"

extern "C" {

void destroy_submenu__15TWindowMainMenuFPv(void* p);
int queue_destruction__7TObjectFv(void*);

void destroy_submenu__15TWindowMainMenuFPv(void* p) { if (*(unsigned int*)((char*)p + 0x20) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x20)); *(int*)((char*)p + 0x20) = 0; } }

}
