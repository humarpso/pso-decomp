#include "types.h"

extern "C" {

int TWindowMenu__sub_80266BB8(void* p);
void reset_selection__17TWindowSubComCardFPv(void* p);

int TWindowMenu__sub_80266BB8(void* p) { return (*(u16*)((char*)p + 0x70) >> 6) & 0x1; }

}
