#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PAD_VIRT virtual void CAT(pv, __LINE__)();
struct Base_A_800E47DC { char pad[0x18]; };
struct V_A_800E47DC : Base_A_800E47DC {
    virtual void m0();
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    virtual void m93();
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    PAD_VIRT
    virtual void m100();
};
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_VT_800E47DC { char pad[0x18]; };
struct VObj_DD_800E47DC : Base_VT_800E47DC {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    virtual void m93();
    PADV4
    PADV
    PADV
    virtual void m100();
};
struct Base_800E7034_800E47DC { char pad[0x18]; };
struct VObj_800E7034_800E47DC : Base_800E7034_800E47DC {
    virtual void m0();  virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();  virtual void m7();
    virtual void m8();  virtual void m9();  virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86();
};
struct Base_800E707C_800E47DC { char pad[0x18]; };
struct VObj_800E707C_800E47DC : Base_800E707C_800E47DC {
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
};

extern "C" {
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5DC;
s32 TObjEneMe3ShinowaMirage__sub_800E6FE0(u8 *arg0);
extern const f32 TObjEneMe3ShinowaMirage__data_805DA5DC;
s32 TObjEneMe3ShinowaMirage__sub_800E701C(u8 *arg0);
}

extern "C" {

struct VBase18b_800e70d4_800E47DC { char pad[0x18]; };
struct VObj18b_800e70d4_800E47DC : VBase18b_800e70d4_800E47DC {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4(void *, void *);
};

void TObjEneMe3ShinowaMirage__sub_800E4DC4(void);
void TObjEneMe3ShinowaMirage__sub_800E4DC8(void);
void TObjEneMe3ShinowaMirage__sub_800E4DCC(void);
void TObjEneMe3ShinowaMirage__sub_800E5220(void *arg0, s32 arg1);
void action__23TObjEneMe3ShinowaMirageFPvi(u8 *arg0, s32 arg1);
void apply_effect_pair__23TObjEneMe3ShinowaMirageFPv(u8 *arg0);
int select_and_apply_target__23TObjEneMe3ShinowaMirageFPv(void* p);
void update_by_distance__23TObjEneMe3ShinowaMirageFPv(void *arg0);
void update_collision__23TObjEneMe3ShinowaMirageFPv(void *arg0);
void update_mirage__23TObjEneMe3ShinowaMirageFPv(void* p);
M2C_UNK TBoss1Dragon__sub_80143504(void *, s32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);
int TObjEneMe3ShinowaMirage__sub_800E6F64(void*);
M2C_UNK TObjPlayer__sub_801564A0(void *);
M2C_UNK TObjPlayer__sub_803D8960(int, int, void *, int);
M2C_UNK TObjPlayer__sub_803D8CD4(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK check_object_collisions__10TObjPlayerFPv(void *);
s32 check_v2_mode__9TObjEneDDFv();
int fn_800E762C(void*);
int get_target_info__9TObjEneDDFPv(void*);
u32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
int select_and_apply_target__14TObjEneEpsilonFPvf(void*);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK);
s32 update_linked_position__14TObjEneEpsilonFPv(f32);

void update_mirage__23TObjEneMe3ShinowaMirageFPv(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { fn_800E762C(p); TObjEneMe3ShinowaMirage__sub_800E6F64(p); } }

void TObjEneMe3ShinowaMirage__sub_800E4DC4(void) {  }
void TObjEneMe3ShinowaMirage__sub_800E4DC8(void) {  }
void TObjEneMe3ShinowaMirage__sub_800E4DCC(void) {  }

extern const f32 TObjEneMe3ShinowaMirage__data_805DA5F4;

void TObjEneMe3ShinowaMirage__sub_800E5220(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi(arg0, 0xB);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFC);
        ((V_A_800E47DC *) arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        return;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFPv(TObjEneMe3ShinowaMirage__data_805DA5F4) != 0) {
            TObjEneDD__sub_800BBA18(arg0, 4);
        } else if ((s32) M2C_FIELD(arg0, s32 *, 0x404) >= 0x5A) {
            TObjEneDD__sub_800BBA18(arg0, 9);
        }
        return;
    case 0:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x404);
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) (temp_r4 + 1);
        TBoss1Dragon__sub_80143504(arg0, temp_r4);
        ((V_A_800E47DC *) arg0)->m100();
        break;
    case 5:
        break;
    }
}

void action__23TObjEneMe3ShinowaMirageFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi(arg0, 1);
        ((VObj_DD_800E47DC *)arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) | 2);
        M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFFFFFE);
        if (check_v2_mode__9TObjEneDDFv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C4) & 0xFFFCFFFF);
        }
        M2C_FIELD(arg0, s32 *, 0x404) = 0;
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x50);
        M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
        if (!(M2C_FIELD(arg0, s32 *, 0x3C4) & 0x1000)) {
            M2C_FIELD(arg0, s32 *, 0x3D0) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x3D8) = 0;
        return;
    case 3:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x404) > 5) {
            TObjEneDD__sub_800BBA18(arg0, 1);
        }
    case 5:
        return;
    case 0:
        M2C_FIELD(arg0, s32 *, 0x404) = (s32) (M2C_FIELD(arg0, s32 *, 0x404) + 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x404) == 1) {
            M2C_FIELD(arg0, f32 *, 0x3C8) = (f32) M2C_FIELD(arg0, f32 *, 0x3C);
            ((VObj_DD_800E47DC *)arg0)->m100();
            M2C_FIELD(arg0, f32 *, 0x3CC) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C8) - M2C_FIELD(arg0, f32 *, 0x3C));
        }
        break;
    }
}

s32 TObjEneMe3ShinowaMirage__sub_800E6FE0(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x358) >= TObjEneMe3ShinowaMirage__data_805DA5DC;
}

int select_and_apply_target__23TObjEneMe3ShinowaMirageFPv(void* p) { return select_and_apply_target__14TObjEneEpsilonFPvf(p); }

s32 TObjEneMe3ShinowaMirage__sub_800E701C(u8 *arg0) {
    return M2C_FIELD(arg0, f32 *, 0x354) < TObjEneMe3ShinowaMirage__data_805DA5DC;
}

void update_collision__23TObjEneMe3ShinowaMirageFPv(void *arg0) {
    struct VObj_800E7034_800E47DC *o = (struct VObj_800E7034_800E47DC *)arg0;
    o->m86();
    check_object_collisions__10TObjPlayerFPv(arg0);
    TObjPlayer__sub_801564A0(arg0);
}

extern const f32 lbl_805DA5F8;

void update_by_distance__23TObjEneMe3ShinowaMirageFPv(void *arg0) {
    VObj_800E707C_800E47DC *o = (VObj_800E707C_800E47DC *)arg0;
    f32 lim = lbl_805DA5F8;
    if ((M2C_FIELD(arg0, f32 *, 0x3C8) - M2C_FIELD(arg0, f32 *, 0x3C)) > lim) {
        o->m95();
        return;
    }
    o->m96();
}

extern s32 TObjEneMe3ShinowaMirage__data_805D52A4;
extern s32 TObjEneMe3ShinowaMirage__data_805D52A8;

void apply_effect_pair__23TObjEneMe3ShinowaMirageFPv(u8 *arg0) {
    M2C_UNK sp8[8];
    u32 temp_r3;
    u32 temp_r3_3;
    u8 *temp_r3_2;
    u8 *temp_r3_4;

    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D8CD4((int) (0));
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_r3 = lookup_entry_by_value__10TObjPlayerFPvf((void *) (TObjEneMe3ShinowaMirage__data_805D52A4), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    if (temp_r3 != 0U) {
        TObjPlayer__sub_803D8960((int) (0), (int) (temp_r3), (void *) (&sp8), (int) (2));
        temp_r3_2 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3E0));
        ((VObj18b_800e70d4_800E47DC *) temp_r3_2)->m4(&sp8, &sp8[3]);
    }
    temp_r3_3 = lookup_entry_by_value__10TObjPlayerFPvf((void *) (TObjEneMe3ShinowaMirage__data_805D52A8), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    if (temp_r3_3 != 0U) {
        TObjPlayer__sub_803D8960((int) (0), (int) (temp_r3_3), (void *) (&sp8), (int) (2));
        temp_r3_4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x3E4));
        ((VObj18b_800e70d4_800E47DC *) temp_r3_4)->m4(&sp8, &sp8[3]);
    }
    TObjPlayer__sub_803D9B78();
}

}
