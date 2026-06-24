#include "types.h"

extern "C" {

s32 fn_802B9930(void* p);

int fn_802B98FC(void) { return 0; }
s32 fn_802B9930(void* p) { return *(s32*)((char*)p + 0x37c); }

}
