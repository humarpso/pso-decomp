#include "types.h"

extern "C" {

int fn_80066128(void* p);
int fn_8006614C(void* p);
int fn_8006626C(void*);
int fn_8006628C(void*);

int fn_80066128(void* p) { return fn_8006626C(*(void**)((char*)p + 0x1c)); }
int fn_8006614C(void* p) { return fn_8006628C(*(void**)((char*)p + 0x1c)); }

}
