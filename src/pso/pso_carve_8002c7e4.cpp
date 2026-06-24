#include "types.h"

extern "C" {

s32 fn_8002C7E4(void* p);
int fn_8002C868(void* p);
int fn_8002CB44(void*);

s32 fn_8002C7E4(void* p) { return *(s32*)((char*)p + 0x8); }
int fn_8002C7EC(void) { return 0; }
int fn_8002C838(void) { return 0; }
int fn_8002C868(void* p) { return fn_8002CB44(p); }
int fn_8002C888(void) { return 0; }

}
