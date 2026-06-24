#include "types.h"

extern "C" {

int fn_801C00FC(void);
int fn_801C0104(void);
void fn_801C011C(void* p, s16 v);
int fn_801C0134(void);
int fn_801C013C(void* p);
int fn_801C01BC(void* p);
void fn_801C0258(void* p, void* q);
void fn_801C0438(void* p);
void fn_801C0480(void* p);
void fn_801C04C8(void* p);
void fn_801C0510(void* p);
void fn_801C0558(void* p);
void fn_801C05A0(void* p);
void fn_801C05E8(void* p);
void fn_801C0630(void* p);
int fn_8001960C(void*);
int fn_8001BEE8(void*, int);

int fn_801C00FC(void) { return 0; }
int fn_801C0104(void) { return 0; }
int fn_801C010C(void) { return 0; }
void fn_801C011C(void* p, s16 v) { *(s16*)((char*)p + 0x4) = v; }
int fn_801C0124(void) { return 0; }
int fn_801C0134(void) { return 255; }
int fn_801C013C(void* p) { return fn_8001BEE8((char*)p + 0x10, 2); }
int fn_801C0164(void) { return 0; }
int fn_801C01BC(void* p) { return fn_8001960C(p); }
int fn_801C01DC(void) { return 0; }
int fn_801C0228(void) { return 0; }
void fn_801C0258(void* p, void* q) { *(u8*)((char*)p + 0x0) = *(u8*)((char*)q + 0x0); *(u8*)((char*)p + 0x1) = *(u8*)((char*)q + 0x1); *(u16*)((char*)p + 0x2) = *(u16*)((char*)q + 0x2); }
int fn_801C0274(void) { return 0; }
int fn_801C029C(void) { return 0; }
int fn_801C02D0(void) { return 0; }
int fn_801C030C(void) { return 0; }
int fn_801C0350(void) { return 0; }
int fn_801C0378(void) { return 0; }
int fn_801C03AC(void) { return 0; }
int fn_801C03E0(void) { return 0; }
int fn_801C041C(void) { return 0; }
void fn_801C0438(void* p) { *(u8*)((char*)p + 0x0) = 130; *(u8*)((char*)p + 0x1) = 1; }
int fn_801C044C(void) { return 0; }
void fn_801C0480(void* p) { *(u8*)((char*)p + 0x0) = 129; *(u8*)((char*)p + 0x1) = 1; }
int fn_801C0494(void) { return 0; }
void fn_801C04C8(void* p) { *(u8*)((char*)p + 0x0) = 123; *(u8*)((char*)p + 0x1) = 1; }
int fn_801C04DC(void) { return 0; }
void fn_801C0510(void* p) { *(u8*)((char*)p + 0x0) = 122; *(u8*)((char*)p + 0x1) = 1; }
int fn_801C0524(void) { return 0; }
void fn_801C0558(void* p) { *(u8*)((char*)p + 0x0) = 28; *(u8*)((char*)p + 0x1) = 1; }
int fn_801C056C(void) { return 0; }
void fn_801C05A0(void* p) { *(u8*)((char*)p + 0x0) = 27; *(u8*)((char*)p + 0x1) = 1; }
int fn_801C05B4(void) { return 0; }
void fn_801C05E8(void* p) { *(u8*)((char*)p + 0x0) = 35; *(u8*)((char*)p + 0x1) = 1; }
int fn_801C05FC(void) { return 0; }
void fn_801C0630(void* p) { *(u8*)((char*)p + 0x0) = 34; *(u8*)((char*)p + 0x1) = 1; }
int fn_801C0644(void) { return 0; }
int fn_801C0678(void) { return 0; }
int fn_801C06BC(void) { return 0; }
int fn_801C0708(void) { return 0; }
int fn_801C0734(void) { return 0; }
int fn_801C0768(void) { return 0; }
int fn_801C07B4(void) { return 0; }

}
