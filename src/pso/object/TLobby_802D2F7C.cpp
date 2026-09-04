#ifndef PSO_CLASS_PACKAGE
#else
#if PSO_CLASS_PACKAGE == 0x802B1A70
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802b1a70 { char pad[0x18]; };
struct VObj_802b1a70 : Base_802b1a70 {
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
    ((VObj_802b1a70 *)temp_r3)->m7();
    M2C_FIELD(arg0, s8 *, 0x1C) = 7;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x803398CC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase803398CC_803398cc { char pad[0x18]; };
struct VObj803398CC_803398cc : VBase803398CC_803398cc {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};

extern "C" {

void reset_impl__15TLobby_802D2F7CFPv(u8 *arg0);

void reset_impl__15TLobby_802D2F7CFPv(u8 *arg0) {
    u8 *temp_r3;

    temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x24));
    ((VObj803398CC_803398cc *) temp_r3)->m7();
    M2C_FIELD(arg0, s8 *, 0x1C) = 2;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80339910
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby_802D2F7C__sub_80339910(void *arg0);
u32 fn_80339954();

void TLobby_802D2F7C__sub_80339910(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) == 0U) {
        M2C_FIELD(arg0, u32 *, 0x28) = fn_80339954();
    }
    M2C_FIELD(arg0, s8 *, 0x1C) = 1;
}

}
#endif
#endif
