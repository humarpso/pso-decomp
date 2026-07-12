#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdMultiPlyChrSelectGC__sub_802DFFE8();
s32 TAdMultiPlyChrSelectGC__sub_802E00B4(void* p);
void TAdMultiPlyChrSelectGC__sub_802E00BC(void* p, s32 v);
s32 TAdMultiPlyChrSelectGC__sub_802E00C4(void* p);

void update_field_4E8__22TAdMultiPlyChrSelectGCFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4E8) = TAdMultiPlyChrSelectGC__sub_802DFFE8();
}
s32 TAdMultiPlyChrSelectGC__sub_802E00B4(void* p) { return *(s32*)((char*)p + 0x530); }
void TAdMultiPlyChrSelectGC__sub_802E00BC(void* p, s32 v) { *(s32*)((char*)p + 0x1c) = v; }
s32 TAdMultiPlyChrSelectGC__sub_802E00C4(void* p) { return *(s32*)((char*)p + 0x1c); }

}
