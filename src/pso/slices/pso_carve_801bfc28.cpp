#include "types.h"

extern "C" {

int TObjPlayer__sub_801BFC90(void* a0 = 0);
void* TObjPlayer__sub_801BFC60(void* p);
int TObjPlayer__sub_8001BF10(void*);
int TObjPlayer__sub_801BF964(void*);
int TObjPlayer__sub_801BF9A4(void*);
int TObjPlayer__sub_801BFDD4(void*);
int TObjPlayer__sub_801BFE50(void*);
int TObjPlayer__sub_801C5BB0(void*);
int fn_801C68B0(void*);
void TObjPlayer__sub_801BFD3C(void* p);

void* TObjPlayer__sub_801BFC28(void* p) { TObjPlayer__sub_8001BF10(p); TObjPlayer__sub_801BF9A4(p); return p; }
void* TObjPlayer__sub_801BFC60(void* p) { TObjPlayer__sub_801BFC90(p); return p; }
int TObjPlayer__sub_801BFC90(void*) { return 0; }
void* TObjPlayer__sub_801BFCAC(void* p) { TObjPlayer__sub_801C5BB0(p); return p; }
void* TObjPlayer__sub_801BFCDC(void* p) { TObjPlayer__sub_801BF964(p); return p; }
void* TObjPlayer__sub_801BFD0C(void* p) { TObjPlayer__sub_801BFD3C(p); return p; }
void TObjPlayer__sub_801BFD3C(void* p) { *(s16*)((char*)p + 0x0) = 0; *(s16*)((char*)p + 0x2) = 0; *(s32*)((char*)p + 0x4) = 0; *(s16*)((char*)p + 0x8) = 0; }
void* TObjPlayer__sub_801BFD54(void* p) { TObjPlayer__sub_8001BF10((char*)p + 0xc); fn_801C68B0(p); return p; }
void* TObjPlayer__sub_801BFD90(void* p) { TObjPlayer__sub_8001BF10((char*)p + 0x4); TObjPlayer__sub_801BFE50((char*)p + 0x18); TObjPlayer__sub_801BFDD4(p); return p; }

}
