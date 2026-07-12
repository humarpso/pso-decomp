#include "types.h"

extern "C" {

void TObjEnePanarms__sub_800DEEF8(void* p);
int TOHangerMachine01__sub_803D9C00(void*);
int draw__16TObjEneRe7BeruraFPv(void*);
int TObjFish__sub_800E2FD8(void*);
int TObjFish__sub_800E3074(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void*);
int TObjPlayer__sub_803D9B78(void);
int TObjFish__sub_803DA798(void*);

void TObjEnePanarms__sub_800DEEF8(void* p) { TObjPlayer__sub_803D9B2C(p); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); TObjFish__sub_803DA798(*(void**)((char*)p + 0x24)); TObjFish__sub_800E3074(*(void**)((char*)p + 0x39c)); draw__16TObjEneRe7BeruraFPv(p); TObjFish__sub_800E2FD8(*(void**)((char*)p + 0x39c)); TObjPlayer__sub_803D9B78(); }

}
