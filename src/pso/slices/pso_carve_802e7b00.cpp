#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_800F5E08(void *);
void TBoss7Joint__sub_802E7B00(void* p);

void TBoss7Joint__sub_802E7B00(void* p) { *(u32*)((char*)p + 0x628) |= 0x800; }
void fn_802E7B10(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), s32 *, 0x18) & 1) {
        fn_800F5E08(arg0);
    }
}
int fn_802E7B40(void) { return 0; }
int fn_802E7B94(void) { return 0; }

}
