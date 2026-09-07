#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_fe72f9 { char pad[0x18]; };

struct VObj_18_fe72f9 : VBase_18_fe72f9 {
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
    virtual M2C_UNK m79(void *);
    virtual M2C_UNK m80();
};

struct RecoveredGlobal_800EBC28___vt__12TObjEneSlime {
    M2C_UNK value;
    u8 remaining[0x14C];
};

extern "C" {
s32 reset_photon_effect__12TBoss3VoloptFPv(void *);
s32 TBoss4DarkFalz__sub_8004B4F0(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
s32 TObjEneSlime__sub_800EB984(void *);
s32 TObjEnemy__ct(void *);
extern M2C_UNK __vt__12TObjEneSlime[];
extern s32 lbl_805D2AD8;
u8 *TObjEneSlime__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2);
}

extern "C" {

void *__dt__12TObjEneSlimeFv(void *arg0, s16 arg1);
void free_instance__12TObjEneSlimeFv(void);
void TLobby__sub_8001FE7C(void*, int);
void TObjEneSlime__sub_800EB910(void *);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);

extern M2C_UNK __vt__12TObjEneSlime[];

void *__dt__12TObjEneSlimeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjEneSlime;
        TObjEneSlime__sub_800EB910(arg0);
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 lbl_805D52B0;

typedef char RecoveredGlobal_800EBC28___vt__12TObjEneSlime_size[sizeof(RecoveredGlobal_800EBC28___vt__12TObjEneSlime) == 0x150 ? 1 : -1];
u8 *TObjEneSlime__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    s32 temp_r0;
    TObjEnemy__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_800EBC28___vt__12TObjEneSlime *)&__vt__12TObjEneSlime).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2AD8;
    ((VObj_18_fe72f9 *)(arg0))->m79(arg2);
    ((VObj_18_fe72f9 *)(arg0))->m80();
    reset_photon_effect__12TBoss3VoloptFPv((void *) (arg0));
    TBoss4DarkFalz__sub_8004B4F0((void *) (arg0 + 0x374), (void *) (arg2));
    M2C_FIELD(arg0, s32 *, 0x3B4) = (s32) M2C_FIELD(arg2, s16 *, 2);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x3B4);
    if (temp_r0 < 1) {
        if (check_demo_mode__10TObjPlayerFv() != 0) {
            M2C_FIELD(arg0, s32 *, 0x3B4) = 3;
        }
    } else if (temp_r0 > 4) {
        M2C_FIELD(arg0, s32 *, 0x3B4) = 4;
    }
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x02000000);
    TObjEneSlime__sub_800EB984((void *) (arg0));
    return arg0;
}

void free_instance__12TObjEneSlimeFv(void) {
    if ((u32) lbl_805D52B0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D52B0, 1);
        lbl_805D52B0 = 0U;
    }
}

}
