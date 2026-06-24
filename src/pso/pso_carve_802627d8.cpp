#include "types.h"

extern "C" {

int fn_802627D8(void* p);
int fn_802627E4(void* p);
int fn_802627F0(void* p);
int fn_802627FC(void* p);
int fn_80262808(void* p);

int fn_802627D8(void* p) { return *(u32*)((char*)p + 0x60) & 0x1; }
int fn_802627E4(void* p) { return (*(u32*)((char*)p + 0x60) >> 7) & 0x1; }
int fn_802627F0(void* p) { return (*(u32*)((char*)p + 0x60) >> 6) & 0x1; }
int fn_802627FC(void* p) { return (*(u32*)((char*)p + 0x60) >> 5) & 0x1; }
int fn_80262808(void* p) { return *(u16*)((char*)p + 0x62) & 0x8; }
int fn_80262814(void) { return 0; }
int fn_8026287C(void) { return 0; }

}
