#include "types.h"

extern "C" {

int TObjPlayer__sub_801D0D10(void* p);
int TObjPlayer__sub_801D0D34(void* p);
int TObjPlayer__sub_801D0D58(void* p);
void TObjPlayer__sub_801D0D7C(void* p);
void TObjPlayer__sub_801D0D8C(void* p);
void TObjPlayer__sub_801D0D9C(void* p);
int TObjPlayer__sub_801D0DAC(void* p);
int TObjPlayer__sub_801D0DD0(void* p);
int TObjPlayer__sub_801D0DF4(void* p);
void TObjPlayer__sub_801D0E18(void* p);
int TObjPlayer__sub_801D0E28(void* p);
int TObjPlayer__sub_801D0E34(void* p);
int TObjPlayer__sub_801D0E58(void* p);
void TObjPlayer__sub_801D0E64(void* p);
void TObjPlayer__sub_801D0E74(void* p);
void TObjPlayer__sub_801D0E84(void* p);
int TObjPlayer__sub_801D0E94(void* p);
int TObjPlayer__sub_801D1024(void*);
int TObjPlayer__sub_801D102C(void*);
int TObjPlayer__sub_801D1034(void*);
int TObjPlayer__sub_801D103C(void*);
int TObjPlayer__sub_801D1044(void*);
int TBoss7LaserPtcl__sub_8035AF14(void*);
int fn_8035AF18(void*);

int TObjPlayer__sub_801D0D10(void* p) { return TObjPlayer__sub_801D1024((char*)p + 0x34c); }
int TObjPlayer__sub_801D0D34(void* p) { return TObjPlayer__sub_801D102C((char*)p + 0x34c); }
int TObjPlayer__sub_801D0D58(void* p) { return TBoss7LaserPtcl__sub_8035AF14((char*)p + 0x34c); }
void TObjPlayer__sub_801D0D7C(void* p) { *(u32*)((char*)p + 0x334) &= 0xfbffffff; }
void TObjPlayer__sub_801D0D8C(void* p) { *(u32*)((char*)p + 0x334) &= 0xf7ffffff; }
void TObjPlayer__sub_801D0D9C(void* p) { *(u32*)((char*)p + 0x334) &= 0xefffffff; }
int TObjPlayer__sub_801D0DAC(void* p) { return TObjPlayer__sub_801D1034((char*)p + 0x34c); }
int TObjPlayer__sub_801D0DD0(void* p) { return TObjPlayer__sub_801D103C((char*)p + 0x34c); }
int TObjPlayer__sub_801D0DF4(void* p) { return fn_8035AF18((char*)p + 0x34c); }
void TObjPlayer__sub_801D0E18(void* p) { *(u32*)((char*)p + 0x334) |= 0x4000000; }
int TObjPlayer__sub_801D0E28(void* p) { return (*(u32*)((char*)p + 0x334) >> 27) & 0x1; }
int TObjPlayer__sub_801D0E34(void* p) { return TObjPlayer__sub_801D1044((char*)p + 0x34c); }
int TObjPlayer__sub_801D0E58(void* p) { return (*(u32*)((char*)p + 0x334) >> 28) & 0x1; }
void TObjPlayer__sub_801D0E64(void* p) { *(u32*)((char*)p + 0x334) |= 0x8000000; }
void TObjPlayer__sub_801D0E74(void* p) { *(u32*)((char*)p + 0x334) |= 0x10000000; }
void TObjPlayer__sub_801D0E84(void* p) { *(u32*)((char*)p + 0x334) &= 0xdfffffff; }
int TObjPlayer__sub_801D0E94(void* p) { return (*(u32*)((char*)p + 0x334) >> 29) & 0x1; }

}
