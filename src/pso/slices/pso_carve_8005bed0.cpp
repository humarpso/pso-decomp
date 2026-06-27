#include "types.h"

extern "C" {

int TBoss4Bishi__sub_8005BE8C(void*);
int fn_800F6B68(void*);
void fn_8005BED0(void* p);

void fn_8005BED0(void* p) { if (*(int*)((char*)p + 0x374) != 3) { fn_800F6B68(p); TBoss4Bishi__sub_8005BE8C(p); } }

}
