#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__12TPhotonMyllaFv(void *arg0, s16 arg1);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK free_photon__10TObjPlayerFPv(void *);
M2C_UNK destroy_photon_motion_object(void *, M2C_UNK);

extern M2C_UNK __vt__12TPhotonMylla[];

struct Base_801AD8FC { char pad[0x18]; };
struct VObj_801AD8FC : Base_801AD8FC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13();
};

void *__dt__12TPhotonMyllaFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        struct VObj_801AD8FC *o = (struct VObj_801AD8FC *)arg0;
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TPhotonMylla;
        o->m13();
        free_photon__10TObjPlayerFPv(arg0);
        destroy_photon_motion_object(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x801AD4A8
#include "types.h"

extern "C" {

void TPhotonMylla__sub_801AD4A8(void* a0);

    extern const float lbl_805DC1F8;
void TPhotonMylla__sub_801AD4A8(void* a0) { *(float*)((char*)a0 + 0x184) = lbl_805DC1F8; *(float*)((char*)a0 + 0x188) = lbl_805DC1F8; *(float*)((char*)a0 + 0x18c) = lbl_805DC1F8; *(float*)((char*)a0 + 0x190) = lbl_805DC1F8; }

}
#endif
#endif
