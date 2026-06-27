#include "types.h"

extern "C" {

int TObjEneRe7Berura__sub_80143098(void*);
int fn_8023E480(void*);
int fn_80308840(void*);
int fn_803D8AE4(void*, void*, void*, void*);
int fn_803D9B2C(void);
int fn_803D9B78(void);
int TBoss7Tentacle__sub_803D9BA0(void*);
int TOHangerMachine01__sub_803D9C00(void*);
int fn_803E4BC4(void);
int fn_803E4BD0(void);
void TBoss7Crawfish__vt2(void* p);

void TBoss7Crawfish__vt2(void* p) { if (fn_80308840(p) != 0) { fn_8023E480(*(void**)((char*)p + 0x24)); fn_803E4BC4(); fn_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); fn_803D8AE4((void*)0, *(void**)((char*)p + 0x5c), *(void**)((char*)p + 0x60), *(void**)((char*)p + 0x64)); TBoss7Tentacle__sub_803D9BA0((char*)p + 0x68); TObjEneRe7Berura__sub_80143098(p); fn_803D9B78(); fn_803E4BD0(); } }

}
