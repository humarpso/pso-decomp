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
