#include "types.h"

extern "C" {

int fn_8005D6D4(void*);
void TBoss4Bishi__sub_8005BE8C(void* p);

void TBoss4Bishi__sub_8005BE8C(void* p) { if (*(int*)((char*)p + 0x374) != 3) { fn_8005D6D4(*(void**)((char*)p + 0x378)); *(int*)((char*)p + 0x374) = 3; } }

}
