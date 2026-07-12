#include "types.h"

extern "C" {

void TAdPlyStatusGC__sub_802E11BC(void* p);
void TAdPlyStatusGC__sub_802E11C8(void* p);

void TAdPlyStatusGC__sub_802E11BC(void* p) { *(s32*)((char*)p + 0x1c) = 0; }
void TAdPlyStatusGC__sub_802E11C8(void* p) { *(s32*)((char*)p + 0x1c) = 1; }

}
