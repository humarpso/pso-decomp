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
void TObjPlayer__sub_8015C3C8(u8 *arg0);
extern M2C_UNK __vt__23TOContainerAncientEnemy[];
void TObjPlayer__sub_8015C3C8(u8 *arg0);
s32 TCameraCtrl__sub_8006B368();
void * TOContainerAncientItemCommon__ct(void *, void *);
s32 __nw__7TObjectFUl(int);
s32 TLobby__sub_8030A7B0();
extern s32 enable_v2_features;
s32 TOContainerAncientItemCommon__sub_8015C108(s32 arg0);
}

extern "C" {

struct Base_8015C098 { char pad[0x18]; };
struct VObj_8015C098 : Base_8015C098 {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();  virtual void m4();
    virtual void m5();  virtual void m6();  virtual void m7();  virtual void m8();
    virtual void m9();  virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20();
    virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28();
    virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32();
    virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36();
    virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40();
    virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48();
    virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52();
    virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56();
    virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60();
    virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68();
    virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72();
    virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76();
    virtual void m77();
};

void TOContainerAncientItemCommon__vt4(void *arg0, s16 *arg1, s32 arg2);
void *__dt__28TOContainerAncientItemCommonFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_ancient_container__10TObjPlayerFPvs(void *, int);
void fn_8015C534(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_flag8__6TLobbyFPv(void *);
M2C_UNK spawn_item__17TObjContainerItemFPvi(void *, void *);

void TOContainerAncientItemCommon__vt4(void *arg0, s16 *arg1, s32 arg2) {
    if ((s16) *arg1 == 1) {
        if (arg2 != 0) {
            ((struct VObj_8015C098 *) arg0)->m77();
            spawn_item__17TObjContainerItemFPvi(arg0, arg0);
        }
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
        set_flag8__6TLobbyFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

extern M2C_UNK __vt__28TOContainerAncientItemCommon[];

s32 TOContainerAncientItemCommon__sub_8015C108(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    s32 var_r0_2;
    if (((s32) enable_v2_features == 1) && (TLobby__sub_8030A7B0() == 1) && (TCameraCtrl__sub_8006B368() == 1)) {
        temp_r3 = __nw__7TObjectFUl((int) (0x368));
        var_r0_2 = temp_r3;
        if (var_r0_2 != 0) {
            var_r0_2 = ((s32)TOContainerAncientItemCommon__ct((void *)((int) (temp_r3)), (void *)((void *) (arg0))));
        }
        return var_r0_2;
    }
    temp_r3_2 = __nw__7TObjectFUl((int) (0x368));
    var_r0 = temp_r3_2;
    if (var_r0 != 0) {
        var_r0 = ((s32)TOContainerAncientItemCommon__ct((void *)((int) (temp_r3_2)), (void *)((void *) (arg0))));
    }
    return var_r0;
}

void *__dt__28TOContainerAncientItemCommonFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__28TOContainerAncientItemCommon;
        destroy_ancient_container__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__28TOContainerAncientItemCommon[];
extern void *lbl_805D2EFC;

void *TOContainerAncientItemCommon__ct(void *arg0, void * _w1) {
    fn_8015C534(arg0, _w1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__28TOContainerAncientItemCommon;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2EFC;
    return arg0;
}
void TObjPlayer__sub_8015C3C8(u8 *arg0) {
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

}
