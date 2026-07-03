#include "types.h"

extern "C" {

int TWindow__close(void*);
void TAdScrollWinGC__sub_80327504(void* p);

void TAdScrollWinGC__sub_80327504(void* p) { if (*(unsigned int*)((char*)p + 0x40) != 0) { TWindow__close(*(void**)((char*)p + 0x40)); *(int*)((char*)p + 0x40) = 0; } }

}
