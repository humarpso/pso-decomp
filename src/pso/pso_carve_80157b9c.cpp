#include "types.h"

extern "C" {

int fn_80157B9C(void);
int fn_80157BA4(void);
int fn_80157BAC(void);
int fn_80157BB4(void);
int fn_80157BBC(void* p);
int fn_80157BDC(void* p);
int fn_80157BFC(void* p);
void fn_80157C20(void* p, s32 v);
s32 fn_80157C28(void* p);
int fn_80157728(void*);

int fn_80157B9C(void) { return 1; }
int fn_80157BA4(void) { return 1; }
int fn_80157BAC(void) { return 1; }
int fn_80157BB4(void) { return 1; }
int fn_80157BBC(void* p) { return fn_80157728(p); }
int fn_80157BDC(void* p) { return fn_80157728(p); }
int fn_80157BFC(void* p) { return fn_80157728(p); }
int fn_80157C1C(void) { return 0; }
void fn_80157C20(void* p, s32 v) { *(s32*)((char*)p + 0x33c) = v; }
s32 fn_80157C28(void* p) { return *(s32*)((char*)p + 0x33c); }
int fn_80157C30(void) { return 0; }
int fn_80157C74(void) { return 0; }
int fn_80157CA8(void) { return 0; }
int fn_80157CF4(void) { return 0; }
int fn_80157D24(void) { return 0; }

}
