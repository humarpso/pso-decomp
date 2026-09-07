#include <stddef.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_c3f20f { char pad[0x18]; };

struct VObj_18_c3f20f : VBase_18_c3f20f {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual M2C_UNK m86();
    virtual void m87();
    virtual void m88();
    virtual M2C_UNK m89();
    virtual M2C_UNK m90();
    virtual void m91();
    virtual void m92();
    virtual M2C_UNK m93();
};

struct Stack_800CAFD8 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct VBase_14_948132 { char pad[0x14]; };

struct VObj_14_948132 : VBase_14_948132 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};

struct RecoveredFields_800CAFD8_arg0 {
    u8 unknown_0[0x30];
    s32 field_30;
    u8 unknown_34[0x84];
    s16 field_B8;
    u8 unknown_BA[0x30E];
    s32 field_3C8;
    u8 unknown_3CC[0x2C];
    f32 field_3F8;
    u8 unknown_3FC[0x38];
    s32 field_434;
    u8 unknown_438[0x44];
    s32 field_47C;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void set_field_378__9TObjEneDDFPvi(void *, s32);
void TObjEneDD__sub_800BBA18(void *, s16);
void TObjEneMe1Gee__sub_800CB968(s32);
void update_from_float_sum__13TObjEneMe1GeeFPv(void *);
void TObjEneMe3SinowZoa__sub_800D758C(void *);
void TBoss3Volopt__sub_800D8D88(s32);
void TBoss1Dragon__sub_80143504(void *);
extern const f32 lbl_805DA128;
void TObjEneMe1Gee__sub_800CAFD8(u8 *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredFields_800CAFD8_arg0_30_offset[offsetof(RecoveredFields_800CAFD8_arg0, field_30) == 0x30 ? 1 : -1];
typedef char RecoveredFields_800CAFD8_arg0_B8_offset[offsetof(RecoveredFields_800CAFD8_arg0, field_B8) == 0xB8 ? 1 : -1];
typedef char RecoveredFields_800CAFD8_arg0_3C8_offset[offsetof(RecoveredFields_800CAFD8_arg0, field_3C8) == 0x3C8 ? 1 : -1];
typedef char RecoveredFields_800CAFD8_arg0_3F8_offset[offsetof(RecoveredFields_800CAFD8_arg0, field_3F8) == 0x3F8 ? 1 : -1];
typedef char RecoveredFields_800CAFD8_arg0_434_offset[offsetof(RecoveredFields_800CAFD8_arg0, field_434) == 0x434 ? 1 : -1];
typedef char RecoveredFields_800CAFD8_arg0_47C_offset[offsetof(RecoveredFields_800CAFD8_arg0, field_47C) == 0x47C ? 1 : -1];
void TObjEneMe1Gee__sub_800CAFD8(u8 *arg0, s32 arg1) {
    Stack_800CAFD8 stack;
    f32 temp_f0;
    s32 temp_r0;
    switch (arg1) {
    case 4:
        ((RecoveredFields_800CAFD8_arg0 *)arg0)->field_B8 = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        ((RecoveredFields_800CAFD8_arg0 *)arg0)->field_3C8 = (s32) (((RecoveredFields_800CAFD8_arg0 *)arg0)->field_3C8 & 0xFFBFFFFF);
        ((RecoveredFields_800CAFD8_arg0 *)arg0)->field_3C8 = (s32) (((RecoveredFields_800CAFD8_arg0 *)arg0)->field_3C8 & 0xFFF7FFFF);
        ((RecoveredFields_800CAFD8_arg0 *)arg0)->field_30 = (s32) (((RecoveredFields_800CAFD8_arg0 *)arg0)->field_30 | 0x01000000);
        ((VObj_18_c3f20f *)(arg0))->m93();
        ((RecoveredFields_800CAFD8_arg0 *)arg0)->field_47C = 1;
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3CC);
        VecCopy__FP3VecPC3Vec(&stack.sp8, arg0 + 0x38);
        temp_f0 = stack.spC + lbl_805DA128;
        stack.spC = temp_f0;
        ((RecoveredFields_800CAFD8_arg0 *)arg0)->field_3F8 = temp_f0;
        TBoss3Volopt__sub_800D8D88((s32) &stack.sp8);
        ((VObj_18_c3f20f *)(arg0))->m89();
        ((RecoveredFields_800CAFD8_arg0 *)arg0)->field_434 = 0;
        return;
    case 3:
        if (((RecoveredFields_800CAFD8_arg0 *)arg0)->field_3C8 & 0x80000) {
            TObjEneDD__sub_800BBA18(arg0, 3);
            ((VObj_18_c3f20f *)(arg0))->m90();
        }
        return;
    case 0:
        TBoss1Dragon__sub_80143504(arg0);
        temp_r0 = ((RecoveredFields_800CAFD8_arg0 *)arg0)->field_434;
        switch (temp_r0) {
        case 0:
            if (((VObj_14_948132 *)((u8 *)(arg0) + (972)))->m5() != 0) {
                ((RecoveredFields_800CAFD8_arg0 *)arg0)->field_434 = 1;
            }
            break;
        case 1:
            update_from_float_sum__13TObjEneMe1GeeFPv(arg0);
            break;
        }
        ((VObj_18_c3f20f *)(arg0))->m86();
        TObjEneMe1Gee__sub_800CB968((s32) arg0);
        return;
    case 5:
        ((VObj_18_c3f20f *)(arg0))->m90();
        ((RecoveredFields_800CAFD8_arg0 *)arg0)->field_30 = (s32) (((RecoveredFields_800CAFD8_arg0 *)arg0)->field_30 & 0xFEFFFFFF);
        break;
    }
}

}
