#include "types.h"

extern "C" {

int fn_80131A5C(void* p);
int fn_80131A80(void* p);
int fn_80131F90(void*);
int fn_80244D2C(void*);

int fn_8013194C(void) { return 0; }
int fn_80131998(void) { return 0; }
int fn_801319F4(void) { return 0; }
int fn_80131A5C(void* p) { return fn_80131F90(*(void**)((char*)p + 0x20)); }
int fn_80131A80(void* p) { return fn_80244D2C(*(void**)((char*)p + 0x20)); }

}
