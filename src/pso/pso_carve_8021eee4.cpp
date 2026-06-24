#include "types.h"

extern "C" {

s16 fn_8021EEE4(void* p);

s16 fn_8021EEE4(void* p) { return *(s16*)((char*)p + 0x74); }

}
