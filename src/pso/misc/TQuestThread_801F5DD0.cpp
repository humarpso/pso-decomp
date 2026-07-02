#include "types.h"

extern "C" {

void TQuestThread__sub_801F5DD0(void* p);

int memset(void*, void*, void*);

void TQuestThread__sub_801F5DD0(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { memset(*(void**)((char*)p + 0x2c), (void*)0, (void*)1024); } }

}
