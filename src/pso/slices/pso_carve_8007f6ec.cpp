#include "types.h"

extern "C" {

void TDLGraph__vt1(void);
void fn_8007F6F0(void* p, s32 v);

void TDLGraph__vt1(void) {  }
void fn_8007F6F0(void* p, s32 v) { *(s32*)((char*)p + 0x20) = v; }

}
