#include "types.h"

extern "C" {

void* fn_801C0F70(void* p);
int fn_801C0F10(void* a0 = 0);
void* fn_801C0EC4(void* p, void* a1);
int fn_801C0228(void*);
void* fn_801C0BC0(void* p, void* a1);
void* fn_801C0D38(void* p, void* a1);
void* fn_801C0E04(void* p, void* a1);
void fn_801C0FC8(void* p);

int fn_801C0B50(void) { return 0; }
int fn_801C0B84(void) { return 0; }
void* fn_801C0BC0(void* p, void* a1) { fn_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); *(void**)((char*)p + 0x8) = *(void**)((char*)a1 + 0x8); return p; }
int fn_801C0C04(void) { return 0; }
int fn_801C0C24(void) { return 0; }
int fn_801C0C58(void) { return 0; }
int fn_801C0CC4(void) { return 0; }
int fn_801C0CFC(void) { return 0; }
void* fn_801C0D38(void* p, void* a1) { fn_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); *(void**)((char*)p + 0x8) = *(void**)((char*)a1 + 0x8); return p; }
int fn_801C0D7C(void) { return 0; }
int fn_801C0D9C(void) { return 0; }
int fn_801C0DD0(void) { return 0; }
void* fn_801C0E04(void* p, void* a1) { fn_801C0228(p); *(void**)((char*)p + 0x4) = *(void**)((char*)a1 + 0x4); return p; }
int fn_801C0E40(void) { return 0; }
int fn_801C0E5C(void) { return 0; }
int fn_801C0E90(void) { return 0; }
void* fn_801C0EC4(void* p, void* a1) { fn_801C0F10(p); *(unsigned char*)((char*)p + 0x18) = *(unsigned char*)((char*)a1 + 0x18); *(unsigned char*)((char*)p + 0x19) = *(unsigned char*)((char*)a1 + 0x19); *(short*)((char*)p + 0x1a) = *(unsigned short*)((char*)a1 + 0x1a); return p; }
int fn_801C0F10(void*) { return 0; }
void* fn_801C0F70(void* p) { fn_801C0FC8(p); *(unsigned char*)(p) = 43; *(unsigned char*)((char*)p + 0x18) = 2; *(unsigned char*)((char*)p + 0x19) = 0; *(unsigned char*)((char*)p + 0x1a) = 0; *(unsigned char*)((char*)p + 0x1b) = 0; *(unsigned char*)((char*)p + 0x1) = 7; return p; }
void fn_801C0FC8(void* p) { *(u8*)((char*)p + 0x0) = 43; *(u8*)((char*)p + 0x1) = 6; }
int fn_801C0FDC(void) { return 0; }
int fn_801C1010(void) { return 0; }
int fn_801C106C(void) { return 0; }

}
