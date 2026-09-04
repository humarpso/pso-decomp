#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TBoss2Mine__vt42(void);
void TBoss2Mine__vt43(void);
void TBoss2Mine__vt44(void);
void TBoss2Mine__vt45(void);
void TBoss2Mine__vt46(void);
void TBoss2Mine__vt47(void);
void TBoss2Mine__vt48(void);
void TBoss2Mine__vt49(void);
void TBoss2Mine__vt50(void);
void TBoss2Mine__sub_80038D84(void);
int TBoss2Mine__sub_80038D88(void* p);

int TObjPlayer__sub_800F0928(void*);

void TBoss2Mine__sub_80038D84(void) {  }
int TBoss2Mine__sub_80038D88(void* p) { return TObjPlayer__sub_800F0928(p); }
void TBoss2Mine__vt42(void) {  }
void TBoss2Mine__vt43(void) {  }
void TBoss2Mine__vt44(void) {  }
void TBoss2Mine__vt45(void) {  }
void TBoss2Mine__vt46(void) {  }
void TBoss2Mine__vt47(void) {  }
void TBoss2Mine__vt48(void) {  }
void TBoss2Mine__vt49(void) {  }
void TBoss2Mine__vt50(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x80037C08
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void move_mine__10TBoss2MineFPv(u8 *arg0);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32);
s32 is_alive__9TObjEneDDFPv(s32);

extern const f32 lbl_805D84E8;

void move_mine__10TBoss2MineFPv(u8 *arg0) {
    if (is_alive__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x3F0)) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x390, M2C_FIELD(arg0, s32 *, 0x3F0) + 0x38);
        TBoss4Zako__sub_803D8910(arg0 + 0x390, arg0 + 0x3F8);
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) + lbl_805D84E8);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80037C6C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss2Mine__sub_80037C6C(void *arg0);

extern f32 TBoss2Mine__data_805D84EC;

void TBoss2Mine__sub_80037C6C(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (TBoss2Mine__data_805D84EC + (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C)));
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80037C8C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss2Mine__sub_80037C8C(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__10TBoss2MineFv(void *, int);

extern M2C_UNK lbl_80482D04[];

void *TBoss2Mine__sub_80037C8C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482D04;
        __dt__10TBoss2MineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80037CE4
#include "types.h"

extern "C" {

void* create__10TBoss2MineFPviii(void* a0, int a1, int a2, int a3);
void* TBoss2Mine__ct(void* a0, int a1, int a2, int a3, int a4);

    extern unsigned char lbl_80482D04[];
    extern const float TBoss2Mine__data_805D84D4;
void* create__10TBoss2MineFPviii(void* a0, int a1, int a2, int a3) { TBoss2Mine__ct(a0, a1, a2, a3, 1); *(int*)((char*)a0 + 0x18) = (int)lbl_80482D04; *(int*)((char*)a0 + 0x3f0) = 0; *(int*)((char*)a0 + 0x3f4) = 0; *(float*)((char*)a0 + 0x3f8) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x3fc) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x400) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x404) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x408) = TBoss2Mine__data_805D84D4; *(float*)((char*)a0 + 0x40c) = TBoss2Mine__data_805D84D4; return a0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80038140
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss2Mine__sub_80038140(void *arg0);
void *deleting_dtor__10TBoss2MineFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__10TBoss2MineFv(void *, int);

extern f32 lbl_805D84FC;

void TBoss2Mine__sub_80038140(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) (lbl_805D84FC + (M2C_FIELD(arg0, f32 *, 0x300) - M2C_FIELD(arg0, f32 *, 0x3C)));
}

extern M2C_UNK lbl_80482EC0[];

void *deleting_dtor__10TBoss2MineFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482EC0;
        __dt__10TBoss2MineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800381B8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TBoss2Mine__sub_800381B8(void *arg0, s32 arg1, s16 arg2, s16 arg3);
void *TBoss2Mine__ct(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4);

extern M2C_UNK lbl_80482EC0[];

void *TBoss2Mine__sub_800381B8(void *arg0, s32 arg1, s16 arg2, s16 arg3) {
    TBoss2Mine__ct(arg0, arg1, arg2, arg3, 0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80482EC0;
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800381F8
#include "types.h"

extern "C" {

void TBoss2Mine__vt107(void);
void TBoss2Mine__vt108(void);

void TBoss2Mine__vt108(void) {  }
void TBoss2Mine__vt107(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x8003843C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8003843C { char pad[0x18]; };
struct VObj_8003843C : Base_8003843C {
#define V(n) virtual void m##n();
    V(0)V(1)V(2)V(3)V(4)V(5)V(6)V(7)V(8)V(9)
    V(10)V(11)V(12)V(13)V(14)V(15)V(16)V(17)V(18)V(19)
    V(20)V(21)V(22)V(23)V(24)V(25)V(26)V(27)V(28)V(29)
    V(30)V(31)V(32)V(33)V(34)V(35)V(36)V(37)V(38)V(39)
    V(40)V(41)V(42)V(43)V(44)V(45)V(46)V(47)V(48)V(49)
    V(50)V(51)V(52)V(53)V(54)V(55)V(56)V(57)V(58)V(59)
    V(60)V(61)V(62)V(63)V(64)V(65)V(66)V(67)V(68)V(69)
    V(70)V(71)V(72)V(73)V(74)V(75)V(76)V(77)V(78)V(79)
    V(80)V(81)V(82)V(83)V(84)V(85)V(86)V(87)V(88)V(89)
    V(90)V(91)V(92)V(93)
#undef V
    virtual void m94();
};

extern "C" {

void TBoss2Mine__vt106(void *arg0, s32 arg1);
M2C_UNK TObjEneDD__sub_800BBA18(void *, M2C_UNK);

void TBoss2Mine__vt106(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VObj_8003843C *)arg0)->m94();
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) & 0xFFFFFFF8);
        return;
    case 3:
        TObjEneDD__sub_800BBA18(arg0, 0);
        return;
    case 5:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFF7FF);
        M2C_FIELD(arg0, s16 *, 0x32C) = (s16) M2C_FIELD(arg0, s16 *, 0x2B8);
    case 0:
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80038608
#include "types.h"

extern "C" {

void TBoss2Mine__vt103(void);
void TBoss2Mine__vt104(void);

void TBoss2Mine__vt104(void) {  }
void TBoss2Mine__vt103(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80038610
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80038610 { char pad[0x18]; };
struct VObj_80038610 : Base_80038610 {
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
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93();
};
#define VM(n) virtual void m##n();
struct Base_800386A4 { char pad[0x18]; };
struct VObj_800386A4 : Base_800386A4 {
    VM(0) VM(1) VM(2) VM(3) VM(4) VM(5) VM(6) VM(7) VM(8) VM(9)
    VM(10) VM(11) VM(12) VM(13) VM(14) VM(15) VM(16) VM(17) VM(18) VM(19)
    VM(20) VM(21) VM(22) VM(23) VM(24) VM(25) VM(26) VM(27) VM(28) VM(29)
    VM(30) VM(31) VM(32) VM(33) VM(34) VM(35) VM(36) VM(37) VM(38) VM(39)
    VM(40) VM(41) VM(42) VM(43) VM(44) VM(45) VM(46) VM(47) VM(48) VM(49)
    VM(50) VM(51) VM(52) VM(53) VM(54) VM(55) VM(56) VM(57) VM(58) VM(59)
    VM(60) VM(61) VM(62) VM(63) VM(64) VM(65) VM(66) VM(67) VM(68) VM(69)
    VM(70) VM(71) VM(72) VM(73) VM(74) VM(75) VM(76) VM(77) VM(78) VM(79)
    VM(80) VM(81) VM(82) VM(83) VM(84) VM(85) VM(86) VM(87) VM(88) VM(89)
    VM(90) VM(91) VM(92) VM(93) VM(94) VM(95) VM(96) VM(97) VM(98) VM(99)
    VM(100) VM(101)
    virtual void m102(s32);
    virtual void m103(s32);
    virtual void m104(s32);
    virtual void m105(s32);
    virtual void m106(s32);
};

extern "C" {

void TBoss2Mine__vt102(void *arg0, s32 arg1);
void TBoss2Mine__vt85(void *arg0, s32 arg1, s32 arg2);
M2C_UNK TObjEneDD__sub_800BBA18(M2C_UNK, M2C_UNK);

void TBoss2Mine__vt102(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        ((VObj_80038610 *)arg0)->m93();
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) | 1);
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) & 0xFFFFFFF9);
        return;
    case 3:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x38C);
        if (temp_r4 & 0x100) {
            M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (temp_r4 & 0xFFFFFEFF);
            TObjEneDD__sub_800BBA18((s32)arg0, 1);
        }
    case 5:
    case 0:
        return;
    }
}

void TBoss2Mine__vt85(void *arg0, s32 arg1, s32 arg2) {
    VObj_800386A4 *o = (VObj_800386A4 *)arg0;
    switch (arg1) {
    case 0:
        o->m102(arg2);
        return;
    case 1:
        o->m103(arg2);
        return;
    case 2:
        o->m104(arg2);
        return;
    case 3:
        o->m105(arg2);
        return;
    case 4:
        o->m106(arg2);
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80038898
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_state_by_distance__10TBoss2MineFPvi(void *arg0, s32 arg1);

extern const f32 lbl_805D850C;

void set_state_by_distance__10TBoss2MineFPvi(void *arg0, s32 arg1) {
    if (arg1 < 0x5A) {
        f32 temp = lbl_805D850C;
        M2C_FIELD(arg0, s32 *, 0x3C0) = 3;
        M2C_FIELD(arg0, f32 *, 0x3B8) = temp;
        return;
    }
    if (arg1 < 0x96) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 5;
        return;
    }
    if (arg1 < 0x12C) {
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0xA;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C0) = 0x1E;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800388E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_params__10TBoss2MineFPvif(u8 *arg0, s32 arg1, f32 farg0);

extern const f32 TBoss2Mine__data_805D84D4;

void init_params__10TBoss2MineFPvif(u8 *arg0, s32 arg1, f32 farg0) {
    M2C_FIELD(arg0, f32 *, 0x3B8) = farg0;
    M2C_FIELD(arg0, s32 *, 0x3C0) = arg1;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 0;
    M2C_FIELD(arg0, f32 *, 0x3B4) = (f32) TBoss2Mine__data_805D84D4;
    M2C_FIELD(arg0, s32 *, 0x3BC) = 0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80038948
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_move_flag__10TBoss2MineFPv(void *arg0);

struct Base_80038948 {
    char pad[0x18];
};

struct VObj_80038948 : Base_80038948 {
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
    virtual u32 m102();
};

void update_move_flag__10TBoss2MineFPv(void *arg0) {
    struct VObj_80038948 *obj = (struct VObj_80038948 *) arg0;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg0, f32 *, 0x2FC);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg0, f32 *, 0x304);
    if (obj->m102() == 0U) {
        M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) & 0xFFFFFFFD);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x38C) = (s32) (M2C_FIELD(arg0, s32 *, 0x38C) | 2);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800389B4
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TBoss2Mine__vt61(void* p);
int VecCopy__FP3VecPC3Vec(void*, void*);
void TBoss2Mine__vt59(void);
void TBoss2Mine__vt26(void);

void save_position__10TBoss2MineFPv(void* p) { VecCopy__FP3VecPC3Vec((char*)p + 0x74, (char*)p + 0x2fc); }
void TBoss2Mine__vt59(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80038A04
#include "types.h"

extern "C" {

int TObjEneDD__sub_800BBA18(void*, void*);
void TBoss2Mine__vt61(void* p);
int VecCopy__FP3VecPC3Vec(void*, void*);
void TBoss2Mine__vt59(void);
void TBoss2Mine__vt26(void);

void TBoss2Mine__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 4) { TObjEneDD__sub_800BBA18(p, (void*)4); } }
void TBoss2Mine__vt26(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80038B40
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__10TBoss2MineFv(void *arg0, s16 arg1);
void TObjEneDD__vt0(void *, int);
void __dl__7TObjectFPv(void *);
void TObjEneGibbles__sub_80156720(void *);

extern M2C_UNK __vt__10TBoss2Mine[];

void *__dt__10TBoss2MineFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TBoss2Mine;
        TObjEneGibbles__sub_80156720(arg0);
        TObjEneDD__vt0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80038D0C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TBoss2Mine__ct(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4);
M2C_UNK TBoss2Mine__sub_80038BA0(void *, s32);
M2C_UNK TObjEneDD__ct(void *, s32);
s32 get_instance__13TBoss2DeRolLeFv(void);
M2C_UNK init_common_from__9TObjEneDDFPvPv(void *, s32);

extern void *__vt__10TBoss2Mine[];
extern s32 lbl_805D26D0;

void *TBoss2Mine__ct(void *arg0, s32 arg1, s16 arg2, s16 arg3, s32 arg4) {
    s32 temp_r3;

    TObjEneDD__ct(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x18) = (void *) __vt__10TBoss2Mine;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D26D0;
    temp_r3 = get_instance__13TBoss2DeRolLeFv();
    if (temp_r3 != 0) {
        init_common_from__9TObjEneDDFPvPv(arg0, temp_r3);
    }
    M2C_FIELD(arg0, s16 *, 0x1C) = arg2;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg3;
    TBoss2Mine__sub_80038BA0(arg0, arg4);
    return arg0;
}

}
#endif
#endif
