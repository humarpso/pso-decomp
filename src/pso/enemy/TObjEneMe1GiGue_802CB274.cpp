#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneMe1GiGue__sub_802CB274(u8 *arg0);
M2C_UNK TObjEneMe1GiGue__sub_802CB5A0(void *, M2C_UNK);
M2C_UNK fn_80040B3C(void *, s32, s32);
M2C_UNK fn_800D758C(void *);
M2C_UNK fn_800D8E80(void *, s32);
M2C_UNK fn_80143504(void *);
M2C_UNK fn_80156698(void *);
M2C_UNK fn_8022675C(void *, void *, s32, s32);

}

struct Base410 { char pad[0x14]; };
struct VObj410 : Base410 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual s32 m5(); virtual void m6();
};

extern "C" {

void TObjEneMe1GiGue__sub_802CB274(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        fn_800D8E80(arg0 + 0x2FC, temp_r4);
        fn_800D758C(arg0 + 0x3FC);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        fn_80143504(arg0);
        if (((VObj410 *)(arg0 + 0x3FC))->m5() == 1) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            fn_8022675C((void *)TObjEneMe1GiGue__sub_802CB5A0(arg0, 0x3A345), arg0 + 0x38, 0, 0);
        }
        fn_80156698(arg0);
        return;
    case -1:
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (temp_r5 & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        fn_80040B3C(arg0, 0, temp_r5);
        return;
    }
}

}
