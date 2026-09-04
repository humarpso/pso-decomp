#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct En0Base_80090DD0 { char pad[0x14]; };
struct En0VObj_80090DD0 : En0Base_80090DD0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};

void TObjEneBalClawClaw__sub_800914A4(void);
void action__18TObjEneBalClawClawFPv(u8 *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *, s32);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_800A0554(void *);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv(void *, s32, s32);

extern const f32 TObjEneBalClawClaw__data_805D968C;

void action__18TObjEneBalClawClawFPv(u8 *arg0) {
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
        TBoss3Volopt__sub_800D8C48(arg0 + 0x38, temp_r4);
        TObjPlayer__sub_800A0554(arg0 + 0x390);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        TObjPlayer__sub_80011734(arg0, 0, TObjEneBalClawClaw__data_805D968C);
        if (((En0VObj_80090DD0*)(arg0 + 0x390))->m5() == 1) {
            temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
            temp_r4_2 = temp_r5 & ~5;
            M2C_FIELD(arg0, s32 *, 0x388) = temp_r4_2;
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            reset_active_state__18TObjEneBalClawClawFPv(arg0, temp_r4_2, temp_r5);
        }
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        break;
    }
}

void TObjEneBalClawClaw__sub_800914A4(void) {  }

}
