#include "types.h"

extern "C" {

void TBoss4Uro__vt61(void* p);

int TBoss4Uro__sub_8005D6D4(void*);
int TObjPlayer__sub_800F6B68(void*);

void TBoss4Uro__vt61(void* p) { if (*(int*)((char*)p + 0x374) != 3) { TObjPlayer__sub_800F6B68(p); TBoss4Uro__sub_8005D6D4(*(void**)((char*)p + 0x378)); *(int*)((char*)p + 0x374) = 3; } }

}
