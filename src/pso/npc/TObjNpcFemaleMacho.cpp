#include "types.h"

struct RecoveredGlobal_8014A718_lbl_804A8F90 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8014A718_lbl_804A8F90_size[sizeof(RecoveredGlobal_8014A718_lbl_804A8F90) == 0x10 ? 1 : -1];

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual s32 m79(s32);
};

struct RecoveredGlobal_8014A5E8___vt__18TObjNpcFemaleMacho {
    s32 value;
    u8 remaining[0x174];
};

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8014A718_lbl_804A8F90 bm_n_eow_i_body_resource_descriptor;
extern u32 TObjNpcFemaleOld__static_instance;
void load_resource_instance__16TObjNpcFemaleOldFv(void);
s32 init_position_vectors__10TObjPlayerFi(void *);
s32 setup_common__11TObjNpcBaseFv(void *);
s32 construct_female_base__17TObjNpcFemaleBaseFPv(void *);
extern s32 __vt__18TObjNpcFemaleMacho[];
extern s32 TObjNpcFemaleMacho__name;
extern u8 *TObjNpcFemaleMacho__lobby_resource;
u8 *TObjNpcFemaleMacho__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void * TObjNpcFemaleOld__create(void *arg0);
void *__dt__18TObjNpcFemaleMachoFv(void *arg0, s16 arg1);
void destroy_static_instance__16TObjNpcFemaleOldFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjNpcFemaleOld__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *, int);

extern s32 __vt__18TObjNpcFemaleMacho[];

void *__dt__18TObjNpcFemaleMachoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TObjNpcFemaleMacho;
        destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

typedef char RecoveredGlobal_8014A5E8___vt__18TObjNpcFemaleMacho_size[sizeof(RecoveredGlobal_8014A5E8___vt__18TObjNpcFemaleMacho) == 0x178 ? 1 : -1];
u8 *TObjNpcFemaleMacho__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_female_base__17TObjNpcFemaleBaseFPv((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8014A5E8___vt__18TObjNpcFemaleMacho *)&__vt__18TObjNpcFemaleMacho).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjNpcFemaleMacho__name;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    init_position_vectors__10TObjPlayerFi((void *) (arg0));
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)TObjNpcFemaleMacho__lobby_resource + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)TObjNpcFemaleMacho__lobby_resource + 0x42C)) + 0xC);
    setup_common__11TObjNpcBaseFv((void *) (arg0));
    return arg0;
}

void * TObjNpcFemaleOld__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcFemaleOld__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjNpcFemaleOld__static_instance;

void destroy_static_instance__16TObjNpcFemaleOldFv(void) {
    if ((u32) TObjNpcFemaleOld__static_instance != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcFemaleOld__static_instance, 1);
        TObjNpcFemaleOld__static_instance = 0U;
    }
}
void load_resource_instance__16TObjNpcFemaleOldFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &bm_n_eow_i_body_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TObjNpcFemaleOld__static_instance) = var_r0;
}

}
