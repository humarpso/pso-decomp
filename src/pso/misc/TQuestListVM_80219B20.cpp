#include "types.h"

extern "C" {

void init__12TQuestListVMFPv(void* p);
int set_field_20__12TQuestListVMFPvi(void*, void*);

int memset(void*, void*, void*);

void init__12TQuestListVMFPv(void* p) { memset((char*)p + 0x28, (void*)0, (void*)9024); *(int*)((char*)p + 0x2398) = 4; *(int*)((char*)p + 0x2368) = 0; *(int*)((char*)p + 0x239c) = 0; *(int*)((char*)p + 0x236c) = 0; *(int*)((char*)p + 0x23ac) = 0; *(int*)((char*)p + 0x23b0) = 0; set_field_20__12TQuestListVMFPvi(p, (void*)1); }

}
