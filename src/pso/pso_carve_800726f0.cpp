#include "types.h"

extern "C" {

void fn_80072758(void* p);
void fn_800727EC(void* p);
void fn_80072880(void* p);
void fn_800728FC(void* p);
void fn_80072980(void* p);
int fn_80072B10(void* p);
int bswap_32__FPUl(void*);

int fn_800726F0(void) { return 0; }
int fn_80072724(void) { return 0; }
void fn_80072758(void* p) { *(u8*)((char*)p + 0x0) = 157; *(u8*)((char*)p + 0x1) = 2; }
int fn_8007276C(void) { return 0; }
int fn_800727A0(void) { return 0; }
void fn_800727EC(void* p) { *(u8*)((char*)p + 0x0) = 151; *(u8*)((char*)p + 0x1) = 5; }
int fn_80072800(void) { return 0; }
int fn_8007284C(void) { return 0; }
void fn_80072880(void* p) { *(u8*)((char*)p + 0x0) = 149; *(u8*)((char*)p + 0x1) = 5; }
int fn_80072894(void) { return 0; }
int fn_800728C8(void) { return 0; }
void fn_800728FC(void* p) { *(u8*)((char*)p + 0x0) = 138; *(u8*)((char*)p + 0x1) = 2; }
int fn_80072910(void) { return 0; }
int fn_8007294C(void) { return 0; }
void fn_80072980(void* p) { *(u8*)((char*)p + 0x0) = 124; *(u8*)((char*)p + 0x1) = 66; }
int fn_80072994(void) { return 0; }
int fn_80072A44(void) { return 0; }
int fn_80072A78(void) { return 0; }
int fn_80072AB8(void) { return 0; }
int fn_80072B10(void* p) { return bswap_32__FPUl(p); }
int fn_80072B30(void) { return 0; }
int fn_80072B70(void) { return 0; }

}
