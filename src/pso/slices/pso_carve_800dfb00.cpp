#include "types.h"

extern "C" {

int fn_8002AE64(void*);
int fn_800660B8(void*);
int fn_80143198(void*, void*);
int TObjEnePanarms__sub_800DFB68(void* p);
int TObjEnePanarms__sub_800DFBC4(void* p);

void TObjEnePanarms__sub_800DFB00(void* p, void* a1) { fn_800660B8(p); fn_80143198(p, a1); fn_8002AE64(p); }
int TObjEnePanarms__sub_800DFB44(void) { return 0; }
int TObjEnePanarms__sub_800DFB68(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }
int TObjEnePanarms__sub_800DFB74(void) { return 0; }
int TObjEnePanarms__sub_800DFB9C(void) { return 0; }
int TObjEnePanarms__sub_800DFBB0(void) { return 0; }
int TObjEnePanarms__sub_800DFBC4(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }
int TObjEnePanarms__sub_800DFBD0(void) { return 0; }

}
