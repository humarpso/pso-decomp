#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TPhotonMylla__sub_80154CB4(u16);
s16 obj_getField1c(s32);
s32 TObjEneBm5Wolf__sub_800B88A8(s32 arg0, s16 arg1);
int __dl__FPv();
s32 TObjEneBm5Wolf__sub_800B89E8(s32 arg0, s16 arg1);
int TObjEneBm5Wolf__sub_800B896C(void* a0 = 0, void* a1 = 0, void* a2 = 0);
int TObjEneBm5Wolf__sub_800B89A4(void* a0 = 0, void* a1 = 0, void* a2 = 0);
void TObjEneBm5Wolf__sub_800B8838(void* p, void* a1);
void TObjEneBm5Wolf__sub_800B8868(void* p, void* a1);
void TObjEneBm5Wolf__sub_800B8898(void* p);

void TObjEneBm5Wolf__sub_800B8838(void* p, void* a1) { TObjEneBm5Wolf__sub_800B89A4(a1, p, (char*)p + 0x4); }
void TObjEneBm5Wolf__sub_800B8868(void* p, void* a1) { TObjEneBm5Wolf__sub_800B896C(a1, p, (char*)p + 0x4); }
void TObjEneBm5Wolf__sub_800B8898(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 TObjEneBm5Wolf__sub_800B88A8(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void* TObjEneBm5Wolf__sub_800B88E4(void* p) { TObjEneBm5Wolf__sub_800B8898(p); return p; }
void TObjEneBm5Wolf__sub_800B8914(void *arg0) {
    TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 8));
}
void TObjEneBm5Wolf__sub_800B8938(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = obj_getField1c(arg1);
}
int TObjEneBm5Wolf__sub_800B896C(void*, void*, void*) { return 0; }
int TObjEneBm5Wolf__sub_800B89A4(void*, void*, void*) { return 0; }
s32 TObjEneBm5Wolf__sub_800B89E8(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
int TObjEneBm5Wolf__sub_800B8A24(void) { return 0; }

}
