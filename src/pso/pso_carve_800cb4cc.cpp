#include "types.h"

extern "C" {

void fn_800CB4CC(void* p);
void fn_800CB4F0(void* p);
void fn_800CB500(void* p);
void fn_800CB510(void* p);
void fn_800CB580(void);
int fn_800CB628(void* p);
int TObjEneMe1Gee__vt107(void);
int TObjEneMe1Gee__vt114(void);

void fn_800CB4CC(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x40; }
int fn_800CB4DC(void) { return 0; }
void fn_800CB4F0(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x8; }
void fn_800CB500(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x4; }
void fn_800CB510(void* p) { *(u32*)((char*)p + 0x3c8) |= 0x2; }
int fn_800CB520(void) { return 0; }
int fn_800CB560(void) { return 0; }
int TObjEneMe1Gee__vt114(void) { return 1; }
void fn_800CB580(void) {  }
int fn_800CB584(void) { return 0; }
int fn_800CB5A0(void) { return 0; }
int fn_800CB5B8(void) { return 0; }
int fn_800CB5D4(void) { return 0; }
int fn_800CB5F0(void) { return 0; }
int fn_800CB60C(void) { return 0; }
int fn_800CB628(void* p) { return (*(u32*)((char*)p + 0x3c8) >> 15) & 0x1; }
int fn_800CB634(void) { return 0; }
int TObjEneMe1Gee__vt107(void) { return 1; }

}
