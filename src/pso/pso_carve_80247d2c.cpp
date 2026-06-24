#include "types.h"

extern "C" {

void fn_80247D2C(void* p);
u8 fn_80247D3C(void* p);
int fn_80247D44(void* p);
void fn_80247DD0(void* p);
void fn_80247DE0(void* p);
int fn_80247DF0(void* p);
int fn_80247E44(void* p);
int fn_80247EA8(void* p);
int fn_80247EB4(void* p);
void fn_80247ED8(void* p);

void fn_80247D2C(void* p) { *(u16*)((char*)p + 0x62) |= 0x4; }
u8 fn_80247D3C(void* p) { return *(u8*)((char*)p + 0x65); }
int fn_80247D44(void* p) { return (*(u16*)((char*)p + 0x60) >> 6) & 0x1; }
int fn_80247D50(void) { return 0; }
int fn_80247D64(void) { return 0; }
int fn_80247D88(void) { return 0; }
int fn_80247DAC(void) { return 0; }
void fn_80247DD0(void* p) { *(u16*)((char*)p + 0x1e) |= 0x10; }
void fn_80247DE0(void* p) { *(u16*)((char*)p + 0x1e) |= 0x20; }
int fn_80247DF0(void* p) { return (*(u16*)((char*)p + 0x1e) >> 6) & 0x1; }
int fn_80247DFC(void) { return 0; }
int fn_80247E44(void* p) { return (*(u16*)((char*)p + 0x1e) >> 5) & 0x1; }
int fn_80247E50(void) { return 0; }
int fn_80247EA8(void* p) { return (*(u16*)((char*)p + 0x1e) >> 4) & 0x1; }
int fn_80247EB4(void* p) { return *(u16*)((char*)p + 0x1e) & 0x1; }
int fn_80247EC0(void) { return 0; }
void fn_80247ED8(void* p) { *(u32*)((char*)p + 0x60) |= 0x2; }

}
