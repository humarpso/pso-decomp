#include "types.h"

extern "C" {

int fn_8002AE64(void*);
int fn_800660B8(void*);
int fn_80143198(void*, void*);
int TObjEnePanarms__sub_800DFB68(void* p);
int TObjEnePanarms__sub_800DFBC4(void* p);

int TObjEnePanarms__sub_800DFB68(void* p) { return (*(u32*)((char*)p + 0x30) >> 4) & 0x1; }

}
