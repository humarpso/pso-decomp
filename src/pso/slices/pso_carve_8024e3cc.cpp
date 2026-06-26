#include "types.h"

extern "C" {

int fn_8024664C(void*);
int fn_80257C28(void*, void*);
void fn_8024E3CC(void);
void fn_8024E3D0(void);
int fn_8024E3D4(void* p);
int fn_8024E3E0(void* p);
void TWindowMainMenu__vt4(void);
void TWindowMainMenu__vt6(void);
int fn_8024E3F4(void* p);

void fn_8024E3CC(void) {  }
void fn_8024E3D0(void) {  }
int fn_8024E3D4(void* p) { return (*(u32*)((char*)p + 0x4c) >> 3) & 0x1; }
int fn_8024E3E0(void* p) { return *(u32*)((char*)p + 0x4c) & 0x1; }
void TWindowMainMenu__vt4(void) {  }
void TWindowMainMenu__vt6(void) {  }
int fn_8024E3F4(void* p) { return (*(u16*)((char*)p + 0x1c) >> 6) & 0x1; }
int fn_8024E400(void) { return 0; }
int fn_8024E434(void) { return 0; }
int fn_8024E464(void) { return 0; }
void TWindowDeposit__vt1(void* p) { fn_8024664C(p); fn_80257C28(p, (char*)p + 0x24); }

}
