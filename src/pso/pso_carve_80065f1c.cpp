#include "types.h"

extern "C" {

void fn_80065F1C(void);
void fn_80065F20(void);
void fn_80065F24(void);
void fn_80065F28(void);
void fn_80065F2C(void);
void fn_80065F30(void);
void fn_80065F34(void);
void fn_80065F38(void* p);
void fn_800660A4(void* p);

void fn_80065F1C(void) {  }
void fn_80065F20(void) {  }
void fn_80065F24(void) {  }
void fn_80065F28(void) {  }
void fn_80065F2C(void) {  }
void fn_80065F30(void) {  }
void fn_80065F34(void) {  }
void fn_80065F38(void* p) { *(u8*)((char*)p + 0x0) = 160; *(u8*)((char*)p + 0x1) = 10; }
int fn_80065F4C(void) { return 0; }
int fn_80065F80(void) { return 0; }
int fn_80065FD4(void) { return 0; }
int fn_8006602C(void) { return 0; }
int fn_80066060(void) { return 0; }
void fn_800660A4(void* p) { *(u8*)((char*)p + 0x0) = 159; *(u8*)((char*)p + 0x1) = 4; }
int fn_800660B8(void) { return 0; }
int fn_800660D4(void) { return 0; }

}
