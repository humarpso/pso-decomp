#include "types.h"

extern "C" {

int fn_8001BF10(void*);
int fn_801BF964(void*);
int fn_801BF9A4(void*);
int fn_801BFDD4(void*);
int fn_801BFE50(void*);
int fn_801C5BB0(void*);
int fn_801C68B0(void*);
void fn_801BFD3C(void* p);

void* fn_801BFC28(void* p) { fn_8001BF10(p); fn_801BF9A4(p); return p; }
int fn_801BFC60(void) { return 0; }
int fn_801BFC90(void) { return 0; }
void* fn_801BFCAC(void* p) { fn_801C5BB0(p); return p; }
void* fn_801BFCDC(void* p) { fn_801BF964(p); return p; }
void* fn_801BFD0C(void* p) { fn_801BFD3C(p); return p; }
void fn_801BFD3C(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s16*)((char*)p + 0x2) = 0; *(s32*)((char*)p + 0x4) = 0; *(s16*)((char*)p + 0x8) = 0; }
void* fn_801BFD54(void* p) { fn_8001BF10((char*)p + 0xc); fn_801C68B0(p); return p; }
void* fn_801BFD90(void* p) { fn_8001BF10((char*)p + 0x4); fn_801BFE50((char*)p + 0x18); fn_801BFDD4(p); return p; }

}
