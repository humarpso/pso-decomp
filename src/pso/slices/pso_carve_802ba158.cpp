#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void fn_802BA20C(void* p, void* q);
int fn_802BA394(void* p);
int fn_802AAFCC(void*);

int fn_802BA158(void) { return 0; }
int fn_802BA180(void) { return 0; }
void fn_802BA20C(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); }
int fn_802BA220(void* a0 = 0, void* a1 = 0) { return 0; }
s32 fn_802BA31C(void *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x464) == 0xFFFF) {
        return 0;
    }
    if (M2C_FIELD(arg0, u16 *, 0x55C) != 0xFFFF) {
        fn_802BA180();
    }
    if (fn_802BA220((void*)(arg0), (void*)(M2C_FIELD(arg0, u16 *, 0x464))) == 0) {
        M2C_FIELD(arg0, u16 *, 0x464) = 0xFFFFU;
        return 0;
    }
    return 1;
}
int fn_802BA394(void* p) { return fn_802AAFCC(p); }

}
