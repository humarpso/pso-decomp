#include "types.h"

extern "C" {

void TMedicalCenterMes__sub_802229F4(void* p);

int TWindow__close(void*);

void TMedicalCenterMes__sub_802229F4(void* p) { if (*(unsigned int*)((char*)p + 0x20c) != 0) { TWindow__close(*(void**)((char*)p + 0x20c)); *(int*)((char*)p + 0x20c) = 0; } }

}
