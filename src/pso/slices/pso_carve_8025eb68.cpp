#include "types.h"

extern "C" {

int fn_8025EB68(void* p);
int fn_8025EB74(void* p);
int fn_8025EB98(void* p);
int fn_8025EBBC(void* p);
int fn_8025EBE0(void* p);
int fn_801A529C(void*, int);

int fn_8025EB68(void* p) { return (*(u16*)((char*)p + 0x60) >> 3) & 0x1; }
int fn_8025EB74(void* p) { return fn_801A529C(p, 128); }
int fn_8025EB98(void* p) { return fn_801A529C(p, 64); }
int fn_8025EBBC(void* p) { return fn_801A529C(p, 32); }
int fn_8025EBE0(void* p) { return fn_801A529C(p, 16); }
int fn_8025EC04(void) { return 0; }
int fn_8025EC1C(void) { return 0; }

}
