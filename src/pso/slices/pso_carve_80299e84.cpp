#include "types.h"

extern "C" {

int TWindowSubComCard__sub_80244A14(void*);
void fn_80299E84(void* p);

void fn_80299E84(void* p) { if (*(unsigned int*)((char*)p + 0x30) != 0) { TWindowSubComCard__sub_80244A14(*(void**)((char*)p + 0x30)); *(int*)((char*)p + 0x30) = 0; } }

}
