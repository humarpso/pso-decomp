#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8015B8E8 { char pad[0x18]; };
struct VObj_8015B8E8 : Base_8015B8E8 {
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
};

struct RecoveredGlobal_8015BD68_lbl_804B00C8 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_8015BD68___vt__23TOContainerAncientEnemy {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct Obj_8015BCC0 { u8 pad[0x326]; s16 a326; u8 pad2[0x364 - 0x328]; s32 a364; };

extern "C" {
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TOSignCave03__sub_803DB510(int);
extern u32 lbl_805D58E8;
void TOContainerAncientEnemy__sub_8015BBFC(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 TObjFish__sub_8001EDC4(void *, int);
s32 reset_photon_effect__10TObjPlayerFPv(void *);
s32 TObjEneGibbles__sub_80156780(void *, void *, int);
s32 fn_8018A150(void *, int, void *);
extern RecoveredGlobal_8015BD68_lbl_804B00C8 lbl_804B00C8;
extern M2C_UNK __vt__23TOContainerAncientEnemy[];
extern s32 lbl_805D2F08;
extern u32 lbl_805D58E8;
extern s32 tl_05;
u8 *TOContainerAncientEnemy__ct(u8 *arg0, s32 arg1);
void TObjPlayer__sub_801B4A18(Obj_8015BCC0 *self, s32 x);
void TOContainerAncientEnemy__sub_8015BCC0(Obj_8015BCC0 *self);
}

extern "C" {

void *__dt__23TOContainerAncientEnemyFv(void *arg0, s16 arg1);
void check_and_destroy__23TOContainerAncientEnemyFPvPvi(void *arg0, s16 *arg1, s32 arg2);
M2C_UNK TObjEneGibbles__sub_80156720(void *);
M2C_UNK TObjPlayer__sub_80154A00(M2C_UNK *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK destroy_container_object__10TObjPlayerFPvs(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_flag8__6TLobbyFPv(void *);

void check_and_destroy__23TOContainerAncientEnemyFPvPvi(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 1) {
        if (arg2 != 0) {
            ((VObj_8015B8E8 *)arg0)->m77();
        }
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK __vt__23TOContainerAncientEnemy[];

void TOContainerAncientEnemy__sub_8015BBFC(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    if ((u32) lbl_805D58E8 != 0U) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
            TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
            set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (temp_r31 + 8));
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31, s32 *, 4)));
            temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (temp_r31_2 + 8));
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
            TObjPlayer__sub_803D9B78();
            temp_r31_3 = (unsigned char *) (M2C_FIELD(temp_r31_2, void **, 0x30));
            TObjPlayer__sub_803D9B2C();
            TOHangerMachine01__sub_803D9C00((void *) (temp_r31_3 + 8));
            begin_effect_render__13TParticleCtrlFv();
            TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
            end_effect_render__13TParticleCtrlFv();
            TObjPlayer__sub_803D9B78();
            TObjPlayer__sub_803D9B78();
            TObjPlayer__sub_803D9B78();
            break;
        }
    }
}

void TOContainerAncientEnemy__sub_8015BCC0(Obj_8015BCC0 *self) {
    switch (self->a326) {
    case 0:
        if (self->a364 != 0) {
            TObjPlayer__sub_801B4A18(self, -1);
        }
        break;
    }
}

void *__dt__23TOContainerAncientEnemyFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__23TOContainerAncientEnemy;
        TObjPlayer__sub_80154A00((M2C_UNK *)arg0);
        TObjEneGibbles__sub_80156720(arg0);
        destroy_container_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8015BD68_lbl_804B00C8_size[sizeof(RecoveredGlobal_8015BD68_lbl_804B00C8) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_8015BD68___vt__23TOContainerAncientEnemy_size[sizeof(RecoveredGlobal_8015BD68___vt__23TOContainerAncientEnemy) == 0x14C ? 1 : -1];
u8 *TOContainerAncientEnemy__ct(u8 *arg0, s32 arg1) {
    fn_8018A150((void *) (arg0), (int) (tl_05), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8015BD68___vt__23TOContainerAncientEnemy *)&__vt__23TOContainerAncientEnemy).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2F08;
    M2C_FIELD(arg0, s16 *, 0x326) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x60000000);
    TObjEneGibbles__sub_80156780((void *) (arg0), (void *) (&lbl_804B00C8.value), (int) (1));
    reset_photon_effect__10TObjPlayerFPv((void *) (arg0));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x38));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) (M2C_FIELD(arg0, f32 *, 0x78) + M2C_FIELD(&lbl_804B00C8.value, f32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4((void *) ((*(s32 *)&lbl_805D58E8)), (int) (0));
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0((void *) ((*(s32 *)&lbl_805D58E8)), (int) (0));
    return arg0;
}

}
