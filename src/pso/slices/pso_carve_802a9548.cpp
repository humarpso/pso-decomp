#include "types.h"

extern "C" {

void fn_802A9548(void* p);
u8 fn_802A9554(void* p);
void fn_802A955C(void* p);

void fn_802A9548(void* p) { *(s16*)((char*)p + 0x46) = 0; }
u8 fn_802A9554(void* p) { return *(u8*)((char*)p + 0x25); }
void fn_802A955C(void* p) { *(s16*)((char*)p + 0x46) = 1; }

}
