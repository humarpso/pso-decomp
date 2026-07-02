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
