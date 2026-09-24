#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_f9c8ca
{
  char pad[0x18];
};

struct VObj_18_f9c8ca : VBase_18_f9c8ca {
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
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct VBase_14_c143b1 { char pad[0x14]; };

struct VObj_14_c143b1 : VBase_14_c143b1 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
    virtual s32 m5();
};

extern "C" {
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK set_state_flags__18TObjEneRe4SorcererFPv(void *);
M2C_UNK set_hold_flags__18TObjEneRe4SorcererFPv(void *);
M2C_UNK TObjEneRe4Sorcerer__sub_800ED47C();
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, int, int);
extern const f32 TObjEneRe4Bit__data_805DA770;
void TObjEneRe4Bit__sub_800ECC14(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
s32 TBoss8Dragon__sub_800BB780(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
void TObjEneRe4Bit__sub_800ECD28(u8 *arg0, s32 arg1);
void TObjEneRe4Bit__sub_800ED150(u8 *arg0);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneRe4Bit__sub_800ED4BC(void *);
void update_position_flag__13TObjEneRe4BitFPv(void *);
extern const f32 lbl_805DA76C;
extern const f32 lbl_805DA778;
void TObjEneRe4Bit__sub_800ECED0(void *arg0, s32 arg1);
void TObjEneRe4Bit__sub_800ECC14(u8 *arg0, s32 arg1);
void TObjEneRe4Bit__sub_800ECD28(u8 *arg0, s32 arg1);
void TObjEneRe4Bit__sub_800ECED0(void *arg0, s32 arg1);
s32 handle_event__13TObjEneRe4BitFPvi(void *arg0, s32 arg1);
void TObjEneRe4Bit__vt85(s32 arg0, u32 arg1, s32 arg2);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
M2C_UNK TObjEneRe4Bit__sub_800ED4BC(void *);
void update_position_flag__13TObjEneRe4BitFPv(void *);
extern const f32 TObjEneRe4Bit__data_805DA770;
extern const f32 lbl_805DA778;
void TObjEneRe4Bit__sub_800ECE04(u8 *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
void TObjEneRe4Bit__sub_800ED090(void *self, s32 msg);
}

extern "C" {

void reset_transform__13TObjEneRe4BitFPv(void *arg0);
void TObjEneDD__sub_800BA934(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
void VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
void update_position_flag__13TObjEneRe4BitFPv(void *);

#pragma push
#pragma fp_contract on
void TObjEneRe4Bit__sub_800ECC14(u8 *arg0, s32 arg1) {
    s32 temp_r4;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x408) = 0;
        set_hold_flags__18TObjEneRe4SorcererFPv((void *) (arg0));
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x400);
        TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003A815)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
        break;
    case 3:
        if (M2C_FIELD(arg0, s32 *, 0x3CC) & 8) {
            TBoss3Volopt__sub_8022675C(copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x4003AD16)), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            TObjEneDD__sub_800BBA18((void *)((void *) (arg0)), (M2C_UNK)((int) (1)));
        }
        break;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x408) = (s32) (M2C_FIELD(arg0, s32 *, 0x408) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x408) >= 0x384) {
            temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
            if (!(temp_r4 & 0x10)) {
                M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFBFF);
                set_state_flags__18TObjEneRe4SorcererFPv((void *) (arg0));
                return;
            }
        }
        break;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF7FF);
        M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
        TObjEneRe4Sorcerer__sub_800ED47C();
        M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) TObjEneRe4Bit__data_805DA770;
        break;
    }
}
#pragma pop

typedef struct VBase_18_f9c8ca VBase_18_f9c8ca;
typedef struct VObj_18_f9c8ca VObj_18_f9c8ca;
#define PSO_VCALL_VObj_18_f9c8ca_m100(_self) (((VObj_18_f9c8ca *)(_self))->m100())
void TObjEneRe4Bit__sub_800ECD28(u8 *arg0, s32 arg1) {
  switch (arg1)
  {
    case 4:
      *((s32 *) (((s8 *) arg0) + 0x408)) = 0;
      return;
    case 3:
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x408)))) > 0xF)
    {
      TObjEneDD__sub_800BBA18((void *)((void *) arg0), (M2C_UNK)((int) 1));
    }
      return;
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x408)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x408))) + 1);
      VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x2FC)), (void *)((int) (*((s32 *) (((s8 *) arg0) + 0x3C0)))));
      *((f32 *) (((s8 *) arg0) + 0x300)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x300))) + (*((f32 *) (((s8 *) arg0) + 0x3D8))));
      *((f32 *) (((s8 *) arg0) + 0x2FC)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x2FC))) + calc_elapsed_scaled__9TObjEneDDFv((void *) arg0));
      *((f32 *) (((s8 *) arg0) + 0x304)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x304))) + calc_elapsed_scaled__9TObjEneDDFv((void *) arg0));
      PSO_VCALL_VObj_18_f9c8ca_m100(arg0);
      return;
    case 5:
      TBoss8Dragon__sub_800BB780((void *) arg0);
      return;
      break;
  }
}

#pragma push
#pragma opt_common_subs off
void TObjEneRe4Bit__sub_800ECE04(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (M2C_UNK)(3));
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFEFFF);
        M2C_FIELD(arg0, s32 *, 0x3D0) = 3;
        break;
    case 3:
        if (M2C_FIELD(arg0, f32 *, 0x3D8) <= TObjEneRe4Bit__data_805DA770) {
            TObjEneDD__sub_800BBA18((void *)(arg0), (M2C_UNK)(1));
            break;
        }
    case 5:
        break;
    case 0:
        M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) (M2C_FIELD(arg0, f32 *, 0x3D8) - lbl_805DA778);
        if (M2C_FIELD(arg0, f32 *, 0x3D8) < TObjEneRe4Bit__data_805DA770) {
            M2C_FIELD(arg0, f32 *, 0x3D8) = (f32) TObjEneRe4Bit__data_805DA770;
        }
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - 0x1800);
        TObjEneRe4Bit__sub_800ED4BC(arg0);
        update_position_flag__13TObjEneRe4BitFPv(arg0);
        break;
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TObjEneRe4Bit__sub_800ECED0(void *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x1000);
        M2C_FIELD(arg0, s32 *, 0x408) = 0;
        M2C_FIELD(arg0, s32 *, 0x404) = 1;
        M2C_FIELD(arg0, s32 *, 0x3D0) = (s32) M2C_FIELD(arg0, s32 *, 0x3D4);
        return;
    case 3:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
        if (temp_r4 & 2) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFD);
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        return;
    case 0:
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x408);
        switch (temp_r0) {
        case 1:
            break;
        case 0:
            M2C_FIELD(arg0, f32 *, 0x3D8) = M2C_FIELD(arg0, f32 *, 0x3D8) + lbl_805DA778;
            if (M2C_FIELD(arg0, f32 *, 0x3D8) > lbl_805DA76C) {
                M2C_FIELD(arg0, f32 *, 0x3D8) = lbl_805DA76C;
                M2C_FIELD(arg0, s32 *, 0x408) = 1;
                M2C_FIELD(arg0, s32 *, 0x404) = 2;
            }
            M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) + 0x1800);
            break;
        }
        TObjEneRe4Bit__sub_800ED4BC((void *)(arg0));
        update_position_flag__13TObjEneRe4BitFPv(arg0);
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        break;
    }
}
#pragma pop

s32 handle_event__13TObjEneRe4BitFPvi(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        set_field_378__9TObjEneDDFPvi(arg0, 1);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFEFFF);
        break;
    case 3:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x3CC);
        if (temp_r4 & 1) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFE);
            TObjEneDD__sub_800BBA18(arg0, 2);
            break;
        }
        if (temp_r4 & 2) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (temp_r4 & 0xFFFFFFFD);
            TObjEneDD__sub_800BBA18(arg0, 3);
        }
        break;
    case 5:
        break;
    case 0:
        TObjEneRe4Bit__sub_800ED4BC((void *)(arg0));
        update_position_flag__13TObjEneRe4BitFPv((void *)(arg0));
        break;
    }
}

extern const f32 TObjEneRe4Bit__data_805DA770;

void TObjEneRe4Bit__sub_800ED090(void *self, s32 msg) {
    switch (msg) {
    case 0:
        return;
    case 3:
        TObjEneDD__sub_800BBA18((void *)(self), (M2C_UNK)(1));
        return;
    }
}

void TObjEneRe4Bit__vt85(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TObjEneRe4Bit__sub_800ED090((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 1:
        handle_event__13TObjEneRe4BitFPvi((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 2:
        TObjEneRe4Bit__sub_800ECED0((void *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 3:
        TObjEneRe4Bit__sub_800ECE04((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 5:
        TObjEneRe4Bit__sub_800ECD28((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
        return;
    case 6:
        TObjEneRe4Bit__sub_800ECC14((u8 *)((void *) (arg0)), (s32)((void *) (arg2)));
    default:
        return;
    }
}

void TObjEneRe4Bit__sub_800ED150(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x3CC);
    if (temp_r3 & 4) {
        if (((VObj_14_c143b1 *)((u8 *)(arg0) + (988)))->m4() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFFB);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFDFF);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFEFF);
        }
    } else if ((temp_r3 & 8) && (((VObj_14_c143b1 *)((u8 *)(arg0) + (988)))->m5() != 0)) {
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFFF7);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFFFFDFF);
    }
}

void reset_transform__13TObjEneRe4BitFPv(void *arg0) {
    VecCopy__FP3VecPC3Vec((void *)((char *)arg0 + 764), M2C_FIELD(arg0, void **, 0x3C0));
    M2C_FIELD(arg0, f32 *, 0x3F8) = TObjEneRe4Bit__data_805DA770;
    M2C_FIELD(arg0, f32 *, 0x3FC) = TObjEneRe4Bit__data_805DA770;
    M2C_FIELD(arg0, f32 *, 0x400) = TObjEneRe4Bit__data_805DA770;
    update_position_flag__13TObjEneRe4BitFPv((void *)(arg0));
    TObjEneDD__sub_800BA934(arg0);
}

}
