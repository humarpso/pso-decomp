#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int bswap__17TPlyInventoryItemFv(void*);
void fn_8013A450(void* p);

void fn_8013A450(void* p) { bswap_32__FPUl(p); { int i; for (i = 0; i < 30; i++) { bswap__17TPlyInventoryItemFv((char*)p + 0x4 + i * 28); } } }

}
