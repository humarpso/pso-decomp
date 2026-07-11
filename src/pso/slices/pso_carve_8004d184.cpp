#include "types.h"

extern "C" {

int TBoss4DarkFalz__sub_8004AB90(void*, void*);
int TBoss4DarkFalz__sub_8004B8F8(void*);
int TBoss4DarkFalz__sub_8004BA70(void*);
int fn_800502B4(void*);
int fn_80227220(void*);
int fn_8036A514(void*);
void fn_8004D184(void* p);

void fn_8004D184(void* p) { TBoss4DarkFalz__sub_8004B8F8(p); TBoss4DarkFalz__sub_8004AB90(p, (void*)1); TBoss4DarkFalz__sub_8004BA70(p); fn_800502B4(p); fn_80227220((void*)1); fn_8036A514((void*)23); *(int*)((char*)p + 0x380) = 120; }

}
