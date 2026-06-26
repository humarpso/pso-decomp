#include "types.h"

extern "C" {

void fn_80142920(void);
int fn_80142944(void* p);
int fn_80143938(void);
int fn_803E46BC(void);

void fn_80142920(void) { fn_80143938(); fn_803E46BC(); }
int fn_80142944(void* p) { return (*(u32*)((char*)p + 0xb0) >> 4) & 0x1; }

}
