#include "types.h"

struct RecoveredGlobal_80149DE0_lbl_804A87C0 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80149DE0_lbl_804A87C0_size[sizeof(RecoveredGlobal_80149DE0_lbl_804A87C0) == 0x10 ? 1 : -1];

struct RecoveredGlobal_80149FB8_lbl_804A8950 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80149FB8_lbl_804A8950_size[sizeof(RecoveredGlobal_80149FB8_lbl_804A8950) == 0x10 ? 1 : -1];

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

struct RecoveredGlobal_80149E88___vt__17TObjNpcFemaleBase {
    s32 value;
    u8 remaining[0x174];
};

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80149DE0_lbl_804A87C0 bm_n_ebw_i_body_resource_descriptor;
extern u32 TObjNpcFemaleBase__shared_resource_obj;
void load_shared_resource__17TObjNpcFemaleBaseFv(void);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80149FB8_lbl_804A8950 bm_n_ecw_i_body_resource_descriptor;
extern u32 TObjNpcFemaleChild__static_instance;
void load_shared_resource__18TObjNpcFemaleChildFv(void);
s32 init_position_vectors__10TObjPlayerFi(void *);
s32 setup_common__11TObjNpcBaseFv(void *);
s32 construct_female_base__17TObjNpcFemaleBaseFPv(void *);
extern s32 __vt__17TObjNpcFemaleBase[];
extern s32 TObjNpcFemaleBase__name;
extern u32 TObjNpcFemaleBase__shared_resource_obj;
u8 *TObjNpcFemaleBase__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void * TObjNpcFemaleBase__create(void *arg0);
void * TObjNpcFemaleChild__create(void *arg0);
void *__dt__17TObjNpcFemaleBaseFv(void *arg0, s16 arg1);
void free_static_data__17TObjNpcFemaleBaseFv(void);
void release_static_instance__18TObjNpcFemaleChildFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjNpcFemaleChild__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *, int);

extern void *tl_04;

void * TObjNpcFemaleBase__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcFemaleBase__ct((u8 *)(o2), (s32)(o), (s32)(arg0));
    }
    return o2;
}

extern u32 TObjNpcFemaleBase__shared_resource_obj;

void free_static_data__17TObjNpcFemaleBaseFv(void) {
    if ((u32) TObjNpcFemaleBase__shared_resource_obj != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcFemaleBase__shared_resource_obj, 1);
        TObjNpcFemaleBase__shared_resource_obj = 0U;
    }
}

extern s32 __vt__17TObjNpcFemaleBase[];

void load_shared_resource__17TObjNpcFemaleBaseFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &bm_n_ebw_i_body_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TObjNpcFemaleBase__shared_resource_obj) = var_r0;
}

void *__dt__17TObjNpcFemaleBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__17TObjNpcFemaleBase;
        destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

typedef char RecoveredGlobal_80149E88___vt__17TObjNpcFemaleBase_size[sizeof(RecoveredGlobal_80149E88___vt__17TObjNpcFemaleBase) == 0x178 ? 1 : -1];
u8 *TObjNpcFemaleBase__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_female_base__17TObjNpcFemaleBaseFPv((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80149E88___vt__17TObjNpcFemaleBase *)&__vt__17TObjNpcFemaleBase).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjNpcFemaleBase__name;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    init_position_vectors__10TObjPlayerFi((void *) (arg0));
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TObjNpcFemaleBase__shared_resource_obj) + 0x42C)) + 8);
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TObjNpcFemaleBase__shared_resource_obj) + 0x42C)) + 0xC);
    setup_common__11TObjNpcBaseFv((void *) (arg0));
    return arg0;
}

void * TObjNpcFemaleChild__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcFemaleChild__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjNpcFemaleChild__static_instance;

void release_static_instance__18TObjNpcFemaleChildFv(void) {
    if ((u32) TObjNpcFemaleChild__static_instance != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcFemaleChild__static_instance, 1);
        TObjNpcFemaleChild__static_instance = 0U;
    }
}
void load_shared_resource__18TObjNpcFemaleChildFv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &bm_n_ecw_i_body_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TObjNpcFemaleChild__static_instance) = var_r0;
}

}
