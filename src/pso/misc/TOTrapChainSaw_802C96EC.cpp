#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802C96EC { char pad[0x18]; };
struct VObj_802C96EC : Base_802C96EC {
    virtual void m0();
    virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8();
    virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17();
    virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21();
    virtual void m22(); virtual void m23();
    virtual void m24();
};

extern "C" {

void TOTrapChainSaw__sub_802C96EC(void *arg0);
void TOTrapChainSaw__sub_802C9764(void *arg0);
u8 TODoorAncient08__sub_80229220(u16);

void TOTrapChainSaw__sub_802C96EC(void *arg0) {
    ((VObj_802C96EC *) arg0)->m22();
    ((VObj_802C96EC *) arg0)->m15();
    if (TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s32 *, 0xE8)) == 1) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 1;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xF0) = 0;
}

void TOTrapChainSaw__sub_802C9764(void *arg0) {
    s32 var_r0;
    s32 temp_r3;
    u32 var_r0_2;
    u32 temp_r3_2;

    M2C_FIELD(arg0, s32 *, 0xE8) = (s32) (u16) M2C_FIELD(arg0, s32 *, 0x84);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_r3 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = 0xFF;
        if (temp_r3 <= 0xFF) {
            var_r0 = temp_r3;
        }
    }
    M2C_FIELD(arg0, s32 *, 0xE8) = var_r0;
    if (TODoorAncient08__sub_80229220((u16) M2C_FIELD(arg0, s32 *, 0xE8)) == 1) {
        M2C_FIELD(arg0, s32 *, 0xF0) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xF0) = 0;
    }
    M2C_FIELD(arg0, u32 *, 0xCC) = (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x88) >> 0x10U);
    M2C_FIELD(arg0, s32 *, 0xD0) = (s32) (u16) M2C_FIELD(arg0, u32 *, 0x88);
    M2C_FIELD(arg0, u32 *, 0xF4) = (u32) ((u32) M2C_FIELD(arg0, u32 *, 0x8C) >> 0x10U);
    temp_r3_2 = M2C_FIELD(arg0, u32 *, 0xF4);
    if ((s32) temp_r3_2 < 0) {
        var_r0_2 = 0;
    } else {
        var_r0_2 = 1;
        if ((s32) temp_r3_2 <= 1) {
            var_r0_2 = temp_r3_2;
        }
    }
    M2C_FIELD(arg0, u32 *, 0xF4) = var_r0_2;
}

}
