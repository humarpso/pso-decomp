#include "types.h"

extern "C" {

int TObjEneGibbles__sub_80156780(void*);
int TObjEneDD__sub_800BA934(void* a0 = 0);
void TObjEneDD__sub_800BAB58(void* p);
void TObjEneDD__vt85(void);
void TObjEneDD__sub_800BAB8C(void* p);
void TObjEneDD__sub_800BAB98(void* p);

void TObjEneDD__sub_800BAB58(void* p) { TObjEneGibbles__sub_80156780(p); TObjEneDD__sub_800BA934(p); }
void TObjEneDD__sub_800BAB8C(void* p) { *(s32*)((char*)p + 0x388) = 0; }
void TObjEneDD__sub_800BAB98(void* p) { *(s32*)((char*)p + 0x388) = 1; }

}
