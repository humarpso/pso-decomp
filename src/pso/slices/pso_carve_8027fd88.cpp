#include "types.h"

extern "C" {

void fn_8027FD88(void* p, f32 a, f32 b);
void fn_8027FD94(void* p, s16 v);
void TWindowSubStatusDisp__vt16(void);

void fn_8027FD88(void* p, f32 a, f32 b) { *(f32*)((char*)p + 0x6c) = a; *(f32*)((char*)p + 0x70) = b; }
void fn_8027FD94(void* p, s16 v) { *(s16*)((char*)p + 0x62) = v; }
int fn_8027FD9C(void) { return 0; }
void TWindowSubStatusDisp__vt16(void) {  }

}
