#include "types.h"

extern "C" {

void fn_801BF47C(void* p);
int fn_801BF4B8(void* p);
int fn_801BF4DC(void* p);
int fn_801BF500(void* p);
int fn_801BF524(void* p);
s16 fn_801BF57C(void* p);
void fn_801BF5F0(void* p, s32 v);
int fn_801BF640(void* p);
int fn_8001BED8(void*, int);
int fn_8001BEE8(void*, int);
int fn_8013DF4C(void*);
int fn_8013DF54(void*);
int fn_801BFFA0(void*);

int fn_801BF460(void) { return 0; }
void fn_801BF47C(void* p) { *(s32*)((char*)p + 0x0) = 0; }
int fn_801BF488(void) { return 0; }
int fn_801BF4A0(void) { return 0; }
int fn_801BF4B8(void* p) { return fn_8013DF4C((char*)p + 0x4); }
int fn_801BF4DC(void* p) { return fn_8013DF54((char*)p + 0x4); }
int fn_801BF500(void* p) { return fn_8001BEE8(p, 2); }
int fn_801BF524(void* p) { return fn_8001BED8(p, 2); }
int fn_801BF548(void) { return 0; }
int fn_801BF560(void) { return 0; }
s16 fn_801BF57C(void* p) { return *(s16*)((char*)p + 0x0); }
int fn_801BF584(void) { return 0; }
void fn_801BF5F0(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
int fn_801BF5F8(void) { return 0; }
int fn_801BF60C(void) { return 0; }
int fn_801BF640(void* p) { return fn_801BFFA0(p); }
int fn_801BF660(void) { return 0; }

}
