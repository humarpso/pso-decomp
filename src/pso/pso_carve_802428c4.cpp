#include "types.h"

extern "C" {

int fn_80077AA4(void*);
s32 fn_802428F8(void* p);

void* fn_802428C4(void* p) { fn_80077AA4((char*)p + 0x58); return p; }
s32 fn_802428F8(void* p) { return *(s32*)((char*)p + 0x4); }

}
