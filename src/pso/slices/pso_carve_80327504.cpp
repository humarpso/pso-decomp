#include "types.h"

extern "C" {

int TWindowSubComCard__sub_80244A14(void*);
void TAdScrollWinGC__sub_80327504(void* p);

void TAdScrollWinGC__sub_80327504(void* p) { if (*(unsigned int*)((char*)p + 0x40) != 0) { TWindowSubComCard__sub_80244A14(*(void**)((char*)p + 0x40)); *(int*)((char*)p + 0x40) = 0; } }

}
