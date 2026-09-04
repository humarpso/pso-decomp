#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TObjEneMe3Shinowa__sub_800E7250(u8 *arg0);
void TObjEneMe3Shinowa__sub_800E7268(u8 *arg0);
}

extern "C" {

struct E71ACBase_800e71ac_800E71A8 { char pad[0x14]; };
struct E71ACObj_800e71ac_800E71A8 : E71ACBase_800e71ac_800E71A8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};
struct E71FCBase_800e71fc_800E71A8 { char pad[0x14]; };
struct E71FCObj_800e71fc_800E71A8 : E71FCBase_800e71fc_800E71A8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

void TObjEneMe3Shinowa__sub_800E71A8(void);
void TObjEneMe3Shinowa__vt105(void);
void dispatch_if_active__17TObjEneMe3ShinowaFPv(u8 *arg0);
s32 update_effect__17TObjEneMe3ShinowaFPv(u8 *arg0);

void TObjEneMe3Shinowa__sub_800E71A8(void) {  }

void dispatch_if_active__17TObjEneMe3ShinowaFPv(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 == 1) || (temp_r0 == 9) || (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x80000)) {
        ((E71ACObj_800e71ac_800E71A8*)(arg0 + 0x3E8))->m7();
    }
}

s32 update_effect__17TObjEneMe3ShinowaFPv(u8 *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 == 1) || (temp_r0 == 9) || (M2C_FIELD(arg0, s32 *, 0x3C4) & 0x80000)) {
        ((E71FCObj_800e71fc_800E71A8*)(arg0 + 0x3E8))->m6();
    }
    return 0;
}

void TObjEneMe3Shinowa__sub_800E7250(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFEF);
    M2C_FIELD(arg0, s16 *, 0x2CC) = (s16) M2C_FIELD(arg0, s16 *, 0x3DC);
}

void TObjEneMe3Shinowa__sub_800E7268(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) | 0x10);
    M2C_FIELD(arg0, s16 *, 0x2CC) = (s16) ((s16) M2C_FIELD(arg0, s16 *, 0x3DC) / 2);
}

void TObjEneMe3Shinowa__vt105(void) {  }

}
