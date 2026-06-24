#include "types.h"

extern "C" {

void fn_802EE6E8(void);
void fn_802EE6EC(void);
void fn_802EE6F0(void);
void fn_802EE6F4(void);
void fn_802EE6F8(void);
void fn_802EE6FC(void);
void fn_802EE700(void);
void fn_802EE7B8(void* p);
void fn_802EE800(void* p);
int fn_802EE814(void* p);

void fn_802EE6E8(void) {  }
void fn_802EE6EC(void) {  }
void fn_802EE6F0(void) {  }
void fn_802EE6F4(void) {  }
void fn_802EE6F8(void) {  }
void fn_802EE6FC(void) {  }
void fn_802EE700(void) {  }
int fn_802EE704(void) { return 0; }
int fn_802EE748(void) { return 0; }
int fn_802EE784(void) { return 0; }
void fn_802EE7B8(void* p) { *(u8*)((char*)p + 0x0) = 169; *(u8*)((char*)p + 0x1) = 2; }
int fn_802EE7CC(void) { return 0; }
void fn_802EE800(void* p) { *(u8*)((char*)p + 0x0) = 170; *(u8*)((char*)p + 0x1) = 3; }
int fn_802EE814(void* p) { return *(u32*)((char*)p + 0x3bc) & 0x1; }
int fn_802EE820(void) { return 0; }
int fn_802EE8CC(void) { return 0; }

}
