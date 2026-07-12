#include "types.h"

extern "C" {

void TItem__sub_80115D68(void);
u8 TItemObject__sub_80115D7C(void* p);

u8 TItemObject__sub_80115D7C(void* p) { return *(u8*)((char*)p + 0x100); }

}
