#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800475A0 { char pad[0x18]; };
struct VObj_800475A0 : Base_800475A0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
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
    virtual void m56(); virtual void m57(); virtual void m58();
};
struct BaseA { char pad[0x18]; };
struct VObjA : BaseA {
    virtual M2C_UNK m0();
    virtual M2C_UNK m1();
    virtual M2C_UNK m2();
    virtual M2C_UNK m3();
    virtual M2C_UNK m4();
    virtual M2C_UNK m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual M2C_UNK m8(f32, f32);
};
struct BaseB { char pad[0x14]; };
struct VObjB : BaseB {
    virtual M2C_UNK n0();
    virtual M2C_UNK n1();
    virtual M2C_UNK n2();
    virtual M2C_UNK n3();
    virtual M2C_UNK n4();
    virtual M2C_UNK n5();
    virtual M2C_UNK n6();
    virtual M2C_UNK n7();
};

extern "C" {

void set_action_wait__12TBoss3VoloptFPvUs(void *arg0, u16 arg1);
void set_motion__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
void check_and_trigger__12TBoss3VoloptFPv(void *arg0);
void set_action__12TBoss3VoloptFPvs(void *arg0, s16 arg1);
void render__12TBoss3VoloptFPv(u8 *arg0);
M2C_UNK check_and_notify__12TBoss3VoloptFv(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK TObjEneMe1GiGue__sub_80040B3C(void *, M2C_UNK);
s32 TObjPlayer__sub_80080750();
s32 TObjEneEpsilonGuard__sub_800D7B1C(void *, void *);
M2C_UNK TObjPlayer__sub_800D8A2C();
M2C_UNK TParticleCtrl__sub_801E2F20();
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TObjFish__sub_803DA798(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);

s32 obj_testFlags30(void *, M2C_UNK);

void set_action_wait__12TBoss3VoloptFPvUs(void *arg0, u16 arg1) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x80000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 0xA)) {
        check_and_notify__12TBoss3VoloptFv(arg0);
        if ((u16) arg1 != 0xFFFF) {
            M2C_FIELD(arg0, u16 *, 0x338) = arg1;
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            TObjEneMe1GiGue__sub_80040B3C(arg0, 0xA);
        }
    }
}

s32 obj_testFlags30(void *, M2C_UNK);

void set_motion__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x10000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 9)) {
        M2C_FIELD(arg0, s16 *, 0x338) = arg1;
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        TObjEneMe1GiGue__sub_80040B3C(arg0, 9);
    }
}

s32 obj_testFlags30(void *, M2C_UNK);

void check_and_trigger__12TBoss3VoloptFPv(void *arg0) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x40000)) {
        check_and_notify__12TBoss3VoloptFv(arg0);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        TObjEneMe1GiGue__sub_80040B3C(arg0, 0xB);
    }
}

s32 obj_testFlags30(void *, s32);

void set_action__12TBoss3VoloptFPvs(void *arg0, s16 arg1) {
    if ((obj_testFlags30(arg0, 0x800) == 0) && !(M2C_FIELD(arg0, s32 *, 0x388) & 0x20000) && ((s16) M2C_FIELD(arg0, s16 *, 0x326) != 2)) {
        check_and_notify__12TBoss3VoloptFv(arg0);
        M2C_FIELD(arg0, s16 *, 0x338) = arg1;
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        ((VObj_800475A0 *)arg0)->m58();
    }
}

extern s32 some_id_805c6f74;
extern const f32 lbl_805D881C;
extern const f32 lbl_805D8820;

void render__12TBoss3VoloptFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (((VObjA *)arg0)->m8(lbl_805D881C, lbl_805D8820) != 0)) {
        if (TObjEneEpsilonGuard__sub_800D7B1C(arg0 + 0x490, arg0 + 0x2FC) != 0) {
            ((VObjB *)(arg0 + 0x490))->n6();
        }
        TObjFish__sub_803DA798(M2C_FIELD(arg0, s32 *, 0x24));
        TObjLight__sub_80134194(arg0);
        TObjPlayer__sub_800D8A2C();
        TObjPlayer__sub_803D9B2C();
        some_id_805c6f74 &= 0xFFFFFBFF;
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        if (TObjPlayer__sub_80080750() == 1) {
            TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        TObjPlayer__sub_803D9B78();
        TObjLight__sub_80134098();
        TParticleCtrl__sub_801E2F20();
        ((VObjB *)(arg0 + 0x490))->n7();
    }
}

}
