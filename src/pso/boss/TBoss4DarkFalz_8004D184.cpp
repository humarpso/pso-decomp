#include "types.h"

extern "C" {

void start_demo__14TBoss4DarkFalzFPv(void* p);
int TBoss4DarkFalz__sub_8004AB90(void*, void*);
int TBoss4DarkFalz__sub_8004B8F8(void*);
int TBoss4DarkFalz__sub_8004BA70(void*);
int TLobby__sub_80227220(void*);
int create__11TObjDFDemoFFPv(void*);
int fn_8036A514(void*);

void start_demo__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004B8F8(p); TBoss4DarkFalz__sub_8004AB90(p, (void*)1); TBoss4DarkFalz__sub_8004BA70(p); create__11TObjDFDemoFFPv(p); TLobby__sub_80227220((void*)1); fn_8036A514((void*)23); *(int*)((char*)p + 0x380) = 120; }

}
