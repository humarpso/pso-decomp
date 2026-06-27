#include "types.h"

extern "C" {

void TAdEnterSerialAccessGC__sub_802E0110(void* p);

void TAdEnterSerialAccessGC__sub_802E0110(void* p) { *(s32*)((char*)p + 0xb0) = 1; }

}
