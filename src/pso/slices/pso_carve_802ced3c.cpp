#include "types.h"

extern "C" {

void fn_802CED3C(void);
void fn_802CED40(void* p);

void fn_802CED3C(void) {  }
void fn_802CED40(void* p) { *(u32*)((char*)p + 0x438) |= 0x2; }

}
