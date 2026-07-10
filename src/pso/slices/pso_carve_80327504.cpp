#include "types.h"

extern "C" {

int TWindow__close(void*);
void close_window__14TAdScrollWinGCFPv(void* p);

void close_window__14TAdScrollWinGCFPv(void* p) { if (*(unsigned int*)((char*)p + 0x40) != 0) { TWindow__close(*(void**)((char*)p + 0x40)); *(int*)((char*)p + 0x40) = 0; } }

}
