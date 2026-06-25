#include "types.h"

extern "C" {

void fn_8009E238(void* p);
void fn_8009E248(void* p);
void fn_8009E26C(void* p);
void fn_8009E27C(void* p);
void fn_8009E28C(void* p);
void fn_8009E2FC(void);
int fn_8009E36C(void* p);
int TObjEneMe1Canadin__vt107(void);
int TObjEneMe1Canadin__vt114(void);

void fn_8009E238(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x40; }
void fn_8009E248(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x20; }
int fn_8009E258(void) { return 0; }
void fn_8009E26C(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x8; }
void fn_8009E27C(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x4; }
void fn_8009E28C(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x2; }
int fn_8009E29C(void) { return 0; }
int fn_8009E2DC(void) { return 0; }
int TObjEneMe1Canadin__vt114(void) { return 1; }
void fn_8009E2FC(void) {  }
int fn_8009E300(void) { return 0; }
int fn_8009E31C(void) { return 0; }
int fn_8009E334(void) { return 0; }
int fn_8009E350(void) { return 0; }
int fn_8009E36C(void* p) { return (*(u32*)((char*)p + 0x3c8) >> 15) & 0x1; }
int fn_8009E378(void) { return 0; }
int TObjEneMe1Canadin__vt107(void) { return 1; }

}
