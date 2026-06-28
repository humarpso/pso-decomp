#include "types.h"

extern "C" {

void TQuestListVM__sub_80219B20(void* p);
int fn_80073DC4(void*, void*);

int memset(void*, void*, void*);

void TQuestListVM__sub_80219B20(void* p) { memset((char*)p + 0x28, (void*)0, (void*)9024); *(int*)((char*)p + 0x2398) = 4; *(int*)((char*)p + 0x2368) = 0; *(int*)((char*)p + 0x239c) = 0; *(int*)((char*)p + 0x236c) = 0; *(int*)((char*)p + 0x23ac) = 0; *(int*)((char*)p + 0x23b0) = 0; fn_80073DC4(p, (void*)1); }

}
