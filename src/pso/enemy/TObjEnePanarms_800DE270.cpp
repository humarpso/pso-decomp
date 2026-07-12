#include "types.h"

extern "C" {

int check_demo_mode__10TObjPlayerFv(void*);
int TObjEnePanarms__sub_800DED30(void*, void*);
void try_activate__14TObjEnePanarmsFPv(void* p);
void set_state__14TObjEnePanarmsFPv(void* p);
void TObjEnePanarms__sub_800DE2B0(void* p);
void TObjEnePanarms__sub_800DE2C0(void* p);

void try_activate__14TObjEnePanarmsFPv(void* p) { if (check_demo_mode__10TObjPlayerFv(p) == 0) { TObjEnePanarms__sub_800DED30(p, (void*)1); } }
void TObjEnePanarms__sub_800DE2B0(void* p) { *(s32*)((char*)p + 0x3e0) = 1; *(s32*)((char*)p + 0x3dc) = 1; }
void TObjEnePanarms__sub_800DE2C0(void* p) { *(u32*)((char*)p + 0x30) &= 0xfffffeff; }

}
