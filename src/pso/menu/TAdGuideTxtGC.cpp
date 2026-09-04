#include "pso/TAdGuideTxtGC.h"

TAdGuideTxtGC::~TAdGuideTxtGC() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802b1a70_802B1990 { char pad[0x18]; };
struct VObj_802b1a70_802B1990 : Base_802b1a70_802B1990 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

extern "C" {

void reset__15TLobby_802D2F7CFPv(u8 *arg0);

void reset__15TLobby_802D2F7CFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x28));
    ((VObj_802b1a70_802B1990 *)temp_r3)->m7();
    M2C_FIELD(arg0, s8 *, 0x1C) = 7;
}

}
