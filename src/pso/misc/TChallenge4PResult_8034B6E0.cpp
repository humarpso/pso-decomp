#include "types.h"

extern "C" {

void TChallenge4PResult__sub_8034B6E0(void* p);
int TWindow__close(void*);

void TChallenge4PResult__sub_8034B6E0(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { TWindow__close(*(void**)((char*)p + 0x2c)); *(int*)((char*)p + 0x2c) = 0; } }

}
