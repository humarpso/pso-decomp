#include "types.h"

extern "C" {

int TObjPlayer__sub_80015DB0(void*, void*);
void fn_80211444(void* p, void* a1);
int fn_80211584(void* a0 = 0);
void* fn_802115C0(void* p);
void fn_802115F0(void);
int fn_802115F4(void* p);
s32 fn_80211600(void* p);
int fn_80211608(void* p);
void fn_80211614(void* p, f32 a, f32 b);

int fn_80211408(void) { return 0; }
void fn_80211444(void* p, void* a1) { *(unsigned char*)(a1) = *(unsigned char*)(p); *(unsigned char*)((char*)a1 + 0x1) = *(unsigned char*)((char*)p + 0x1); *(unsigned char*)((char*)a1 + 0x2) = *(unsigned char*)((char*)p + 0x2); *(unsigned char*)((char*)a1 + 0x3) = *(unsigned char*)((char*)p + 0x3); *(unsigned char*)((char*)a1 + 0x4) = *(unsigned char*)((char*)p + 0x4); *(unsigned char*)((char*)a1 + 0x5) = *(unsigned char*)((char*)p + 0x5); TObjPlayer__sub_80015DB0((char*)a1 + 0x6, (char*)p + 0x6); TObjPlayer__sub_80015DB0((char*)a1 + 0x8, (char*)p + 0x8); TObjPlayer__sub_80015DB0((char*)a1 + 0xa, (char*)p + 0xa); *(void**)((char*)a1 + 0xc) = *(void**)((char*)p + 0xc); *(void**)((char*)a1 + 0x10) = *(void**)((char*)p + 0x10); }
int fn_802114D4(void) { return 0; }
int fn_80211574(void) { return 0; }
int fn_80211584(void*) { return 0; }
void* fn_802115C0(void* p) { fn_80211584(p); return p; }
void fn_802115F0(void) {  }
int fn_802115F4(void* p) { return (*(u16*)((char*)p + 0x60) >> 2) & 0x1; }
s32 fn_80211600(void* p) { return *(s32*)((char*)p + 0x6c); }
int fn_80211608(void* p) { return (*(u16*)((char*)p + 0x60) >> 1) & 0x1; }
void fn_80211614(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x74) = a; *(f32*)((char*)p + 0x78) = b; }

}
