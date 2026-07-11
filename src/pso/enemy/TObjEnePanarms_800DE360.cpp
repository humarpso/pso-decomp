#include "types.h"

extern "C" {

int fn_80080750(void*);
int TObjEnePanarms__sub_800DED30(void*, void*);
void try_activate__14TObjEnePanarmsFPv(void* p);
void set_state__14TObjEnePanarmsFPv(void* p);
void TObjEnePanarms__sub_800DE2B0(void* p);
void TObjEnePanarms__sub_800DE2C0(void* p);

void set_state__14TObjEnePanarmsFPv(void* p) { if (*(int*)((char*)p + 0x374) != 4) { TObjEnePanarms__sub_800DED30(p, (void*)4); } }

}
