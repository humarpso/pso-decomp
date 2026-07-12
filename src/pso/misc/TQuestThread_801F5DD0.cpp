#include "types.h"

extern "C" {

void clear_buffer__12TQuestThreadFPv(void* p);

int memset(void*, void*, void*);

void clear_buffer__12TQuestThreadFPv(void* p) { if (*(unsigned int*)((char*)p + 0x2c) != 0) { memset(*(void**)((char*)p + 0x2c), (void*)0, (void*)1024); } }

}
