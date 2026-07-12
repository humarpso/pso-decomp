#include "types.h"

extern "C" {

void release_member_90__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_80156934(void);
int TObjPlayer__sub_80019828(void*);
int TObjPlayer__sub_801549D0(void);
int TObjPlayer__sub_80154D7C(void);

void release_member_90__10TObjPlayerFPv(void* p) { void* m = *(void**)((char*)p + 0x90); if (m) TObjPlayer__sub_80019828(m); }
void TObjPlayer__sub_80156934(void) { TObjPlayer__sub_801549D0(); TObjPlayer__sub_80154D7C(); }

}
