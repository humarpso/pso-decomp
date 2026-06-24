#include "types.h"

extern "C" {

void fn_8012B1F0(void* p, s16 v);
s16 fn_8012B1F8(void* p);

void fn_8012B1F0(void* p, s16 v) { *(s16*)((char*)p + 0x1e8) = v; }
s16 fn_8012B1F8(void* p) { return *(s16*)((char*)p + 0x1e8); }

}
