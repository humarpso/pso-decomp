#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBalClawClaw__sub_80090DD0(u8 *arg0);
M2C_UNK TObjEneBalClawClaw__sub_8009082C(void *, s32, s32);
M2C_UNK fn_80011734(void *, M2C_UNK, f32);
M2C_UNK fn_800A0554(void *);
M2C_UNK fn_800D8C48(void *, s32);
M2C_UNK fn_80143504(void *);

extern const f32 lbl_805D968C;

struct En0Base { char pad[0x14]; };
struct En0VObj : En0Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};
void TObjEneBalClawClaw__sub_80090DD0(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        fn_800D8C48(arg0 + 0x38, temp_r4);
        fn_800A0554(arg0 + 0x390);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        fn_80143504(arg0);
        fn_80011734(arg0, 0, lbl_805D968C);
        if (((En0VObj*)(arg0 + 0x390))->m5() == 1) {
            temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
            temp_r4_2 = temp_r5 & ~5;
            M2C_FIELD(arg0, s32 *, 0x388) = temp_r4_2;
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            TObjEneBalClawClaw__sub_8009082C(arg0, temp_r4_2, temp_r5);
        }
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        break;
    }
}

}
