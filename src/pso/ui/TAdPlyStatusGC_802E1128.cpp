#include "types.h"

extern "C" {

s32 TAdPlyStatusGC__sub_802E1128(void* p);
void* TAdPlyStatusGC__sub_802E1130(void* p);
s32 TAdPlyStatusGC__sub_802E1138(void* p);
s32 TAdPlyStatusGC__sub_802E1140(void* p);
void* TAdPlyStatusGC__sub_802E1148(void* p);
s32 TAdPlyStatusGC__sub_802E1150(void* p);
void* get_status_sub__14TAdPlyStatusGCFPv(void* p);

s32 TAdPlyStatusGC__sub_802E1128(void* p) { return *(s32*)((char*)p + 0x498); }
void* TAdPlyStatusGC__sub_802E1130(void* p) { return (char*)p + 0x1b8; }
s32 TAdPlyStatusGC__sub_802E1138(void* p) { return *(s32*)((char*)p + 0x49c); }
s32 TAdPlyStatusGC__sub_802E1140(void* p) { return *(s32*)((char*)p + 0x4a0); }
void* TAdPlyStatusGC__sub_802E1148(void* p) { return (char*)p + 0x324; }
s32 TAdPlyStatusGC__sub_802E1150(void* p) { return *(s32*)((char*)p + 0x4a4); }
void* get_status_sub__14TAdPlyStatusGCFPv(void* p) { return (char*)p + 0x490; }

}
