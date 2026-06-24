#include "types.h"

extern "C" {

s32 fn_802E1128(void* p);
void* fn_802E1130(void* p);
s32 fn_802E1138(void* p);
s32 fn_802E1140(void* p);
void* fn_802E1148(void* p);
s32 fn_802E1150(void* p);
void* fn_802E1158(void* p);

s32 fn_802E1128(void* p) { return *(s32*)((char*)p + 0x498); }
void* fn_802E1130(void* p) { return (char*)p + 0x1b8; }
s32 fn_802E1138(void* p) { return *(s32*)((char*)p + 0x49c); }
s32 fn_802E1140(void* p) { return *(s32*)((char*)p + 0x4a0); }
void* fn_802E1148(void* p) { return (char*)p + 0x324; }
s32 fn_802E1150(void* p) { return *(s32*)((char*)p + 0x4a4); }
void* fn_802E1158(void* p) { return (char*)p + 0x490; }

}
