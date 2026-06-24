#include "types.h"

extern "C" {

void fn_801178A8(void* p, void* q);
u8 fn_801178CC(void* p);

int fn_8011781C(void) { return 0; }
void fn_801178A8(void* p, void* q) { *(u8*)((char*)p + 0x5) = *(u8*)((char*)q + 0x192); }
int fn_801178B4(void) { return 0; }
u8 fn_801178CC(void* p) { return *(u8*)((char*)p + 0x192); }
int fn_801178D4(void) { return 0; }
int fn_80117908(void) { return 0; }

}
