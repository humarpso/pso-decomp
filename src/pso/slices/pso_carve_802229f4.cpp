#include "types.h"

extern "C" {

int TWindowSubComCard__sub_80244A14(void*);
void TMedicalCenterMes__sub_802229F4(void* p);

void TMedicalCenterMes__sub_802229F4(void* p) { if (*(unsigned int*)((char*)p + 0x20c) != 0) { TWindowSubComCard__sub_80244A14(*(void**)((char*)p + 0x20c)); *(int*)((char*)p + 0x20c) = 0; } }

}
