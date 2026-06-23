#include "types.h"

extern "C" {

int fn_801BE244(void* p);
int fn_801BE268(void* p);
int fn_801BE28C(void);
void fn_801BE2C0(void* p, s32 v);
s32 fn_801BE2C8(void* p);
int fn_801BE2E8(void* p);
int fn_801BE310(void* p);
int fn_801BE338(void* p);
int fn_801BE360(void* p);
int fn_8001BED8(void*, int);
int fn_801D62D0(void*);
int fn_801D6350(void*);

int fn_801BE244(void* p) { return fn_801D62D0((char*)p + 0x4ac); }
int fn_801BE268(void* p) { return fn_801D6350((char*)p + 0x4ac); }
int fn_801BE28C(void) { return 0; }
int fn_801BE294(void) { return 0; }
void fn_801BE2C0(void* p, s32 v) { *(s32*)((char*)p + 0x370) = v; }
s32 fn_801BE2C8(void* p) { return *(s32*)((char*)p + 0x370); }
int fn_801BE2D0(void) { return 0; }
int fn_801BE2DC(void) { return 0; }
int fn_801BE2E8(void* p) { return fn_8001BED8((char*)p + 0x41c, 32); }
int fn_801BE310(void* p) { return fn_8001BED8((char*)p + 0x41c, 4); }
int fn_801BE338(void* p) { return fn_8001BED8((char*)p + 0x41c, 2); }
int fn_801BE360(void* p) { return fn_8001BED8((char*)p + 0x41c, 8); }

}
