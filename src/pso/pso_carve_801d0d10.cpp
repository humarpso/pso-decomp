#include "types.h"

extern "C" {

int fn_801D0D10(void* p);
int fn_801D0D34(void* p);
int fn_801D0D58(void* p);
void fn_801D0D7C(void* p);
void fn_801D0D8C(void* p);
void fn_801D0D9C(void* p);
int fn_801D0DAC(void* p);
int fn_801D0DD0(void* p);
int fn_801D0DF4(void* p);
void fn_801D0E18(void* p);
int fn_801D0E28(void* p);
int fn_801D0E34(void* p);
int fn_801D0E58(void* p);
void fn_801D0E64(void* p);
void fn_801D0E74(void* p);
void fn_801D0E84(void* p);
int fn_801D0E94(void* p);
int fn_801D1024(void*);
int fn_801D102C(void*);
int fn_801D1034(void*);
int fn_801D103C(void*);
int fn_801D1044(void*);
int fn_8035AF14(void*);
int fn_8035AF18(void*);

int fn_801D0D10(void* p) { return fn_801D1024((char*)p + 0x34c); }
int fn_801D0D34(void* p) { return fn_801D102C((char*)p + 0x34c); }
int fn_801D0D58(void* p) { return fn_8035AF14((char*)p + 0x34c); }
void fn_801D0D7C(void* p) { *(u32*)((char*)p + 0x334) &= 0xfbffffff; }
void fn_801D0D8C(void* p) { *(u32*)((char*)p + 0x334) &= 0xf7ffffff; }
void fn_801D0D9C(void* p) { *(u32*)((char*)p + 0x334) &= 0xefffffff; }
int fn_801D0DAC(void* p) { return fn_801D1034((char*)p + 0x34c); }
int fn_801D0DD0(void* p) { return fn_801D103C((char*)p + 0x34c); }
int fn_801D0DF4(void* p) { return fn_8035AF18((char*)p + 0x34c); }
void fn_801D0E18(void* p) { *(u32*)((char*)p + 0x334) |= 0x4000000; }
int fn_801D0E28(void* p) { return (*(u32*)((char*)p + 0x334) >> 27) & 0x1; }
int fn_801D0E34(void* p) { return fn_801D1044((char*)p + 0x34c); }
int fn_801D0E58(void* p) { return (*(u32*)((char*)p + 0x334) >> 28) & 0x1; }
void fn_801D0E64(void* p) { *(u32*)((char*)p + 0x334) |= 0x8000000; }
void fn_801D0E74(void* p) { *(u32*)((char*)p + 0x334) |= 0x10000000; }
void fn_801D0E84(void* p) { *(u32*)((char*)p + 0x334) &= 0xdfffffff; }
int fn_801D0E94(void* p) { return (*(u32*)((char*)p + 0x334) >> 29) & 0x1; }
int fn_801D0EA0(void) { return 0; }

}
