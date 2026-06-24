#include "types.h"

extern "C" {

void fn_80036288(void);
void fn_8003628C(void);
void fn_80036290(void);
void fn_80036294(void);
void fn_80036298(void);
void fn_8003629C(void);
void fn_800362A0(void);
void fn_80036358(void* p);
void fn_800363A0(void* p);

void fn_80036288(void) {  }
void fn_8003628C(void) {  }
void fn_80036290(void) {  }
void fn_80036294(void) {  }
void fn_80036298(void) {  }
void fn_8003629C(void) {  }
void fn_800362A0(void) {  }
int fn_800362A4(void) { return 0; }
int fn_800362E8(void) { return 0; }
int fn_80036324(void) { return 0; }
void fn_80036358(void* p) { *(u8*)((char*)p + 0x0) = 19; *(u8*)((char*)p + 0x1) = 2; }
int fn_8003636C(void) { return 0; }
void fn_800363A0(void* p) { *(u8*)((char*)p + 0x0) = 20; *(u8*)((char*)p + 0x1) = 3; }

}
