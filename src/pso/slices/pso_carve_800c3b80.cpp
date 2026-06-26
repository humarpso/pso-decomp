#include "types.h"

extern "C" {

int fn_800C3B80(void* p);
void fn_800C3BA8(void);

int fn_800C3B80(void* p) { return (*(u32*)((char*)p + 0x3c4) >> 11) & 0x1; }
int fn_800C3B8C(void) { return 0; }
void fn_800C3BA8(void) {  }

}
