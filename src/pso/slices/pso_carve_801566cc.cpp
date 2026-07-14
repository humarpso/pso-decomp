#include "types.h"

extern "C" {

int TObjPlayer__sub_80154E3C(void*);
void* initialize_linked_object_reference(void* p, void* a1);
int TObjPlayer__sub_801564A0(void*);
int check_object_collisions__10TObjPlayerFPv(void*);
void fn_801566CC(void* p);

void fn_801566CC(void* p) { *(s32*)((char*)p + 0x9c) = 0; *(s32*)((char*)p + 0xa4) = 0; }
void* initialize_linked_object_reference(void* p, void* a1) { *(int*)((char*)p + 0xa8) = 1; *(void**)((char*)p + 0xa4) = a1; *(void**)((char*)p + 0x9c) = (char*)p + 0xa0; TObjPlayer__sub_80154E3C(p); return *(void**)((char*)p + 0xa4); }
int TObjEneGibbles__sub_80156720(void) { return 0; }
int TObjEneGibbles__sub_80156780(void) { return 0; }

}
