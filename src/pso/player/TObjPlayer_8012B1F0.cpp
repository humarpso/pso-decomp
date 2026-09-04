#include "types.h"

extern "C" {

void TObjPlayer__sub_8012B1F0(void* p, s16 v);
s16 TObjPlayer__sub_8012B1F8(void* p);

void TObjPlayer__sub_8012B1F0(void* p, s16 v) { *(s16*)((char*)p + 0x1e8) = v; }
s16 TObjPlayer__sub_8012B1F8(void* p) { return *(s16*)((char*)p + 0x1e8); }

}
