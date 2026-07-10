#include "types.h"

extern "C" {

void close__17TMedicalCenterMesFPv(void* p);

int TWindow__close(void*);

void close__17TMedicalCenterMesFPv(void* p) { if (*(unsigned int*)((char*)p + 0x20c) != 0) { TWindow__close(*(void**)((char*)p + 0x20c)); *(int*)((char*)p + 0x20c) = 0; } }

}
