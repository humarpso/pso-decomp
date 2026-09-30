#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18 { char pad[0x18]; };

struct VObj_18 : VBase_18 {
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
    virtual s32 m81();
    virtual void m82();
    virtual M2C_UNK m83();
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
    virtual M2C_UNK m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual M2C_UNK m103();
};

struct RecoveredGlobal_800D184C_TObjEneBm5GibonU__data_80500EC4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800D187C_TObjEneBm5GibonU__data_80500EC4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800D18AC_TObjEneBm5GibonU__data_80500EB0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_800D18DC_TObjEneBm5GibonU__data_80500EB0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct O_800D1CF8 { s32 f0; s32 f4; u16 f8; };

struct Node_800D17E8 { s32 f0; Node_800D17E8 *next; };

struct Ene_800D17E8 { u8 pad[0x46c]; s32 id; };

struct List_800D17E8 { Node_800D17E8 *head; u8 remaining[0x8]; };

struct G_800D1D14 { u8 pad[0x2c]; u8 chain1[0xc]; u8 obj1[8]; u8 chain2[0xc]; u8 obj2[8]; };

struct Base_800D13B8 {
    char pad[0x18];
};

struct Child_800D13B8 : Base_800D13B8 {
    virtual void v0(s32);
};

typedef struct Gibon_800D13B8 {
    u8 pad0[0x18];
    void *vtbl;
    u8 pad1C[0x3C0 - 0x1C];
    u8 f3C0[0xC];
    u8 f3CC[0xC];
    u8 f3D8[0x1C];
    u8 f3F4[4][0x1C];
    s32 f464;
    u8 pad468[0x50C - 0x468];
    Child_800D13B8 *child;
} Gibon_800D13B8;

typedef struct Vec_800D1E4C {
    f32 x, y, z;
} Vec_800D1E4C;

typedef struct Col_800D1E4C {
    u8 pad0[0x18];
    u32 flags;
} Col_800D1E4C;

typedef struct Param_800D1E4C {
    u8 pad0[4];
    f32 speed;
    s32 turn;
} Param_800D1E4C;

typedef struct Ene_800D1E4C {
    u8 pad0[0x30];
    u32 flags30;
    u8 pad34[0x38 - 0x34];
    Vec_800D1E4C pos;
    u8 pad44[0x50 - 0x44];
    Vec_800D1E4C target;
    u8 pad5C[0xA4 - 0x5C];
    Col_800D1E4C *col;
    u8 padA8[0xB8 - 0xA8];
    s16 fB8;
    u8 padBA[0x290 - 0xBA];
    Vec_800D1E4C v290;
    Vec_800D1E4C v29C;
    u8 pad2A8[0x2FC - 0x2A8];
    Vec_800D1E4C v2FC;
    u8 v308[0x350 - 0x308];
    Param_800D1E4C *param;
    u8 pad354[0x37C - 0x354];
    s32 state;
} Ene_800D1E4C;

extern "C" {
void TObjEneBm5GibonU__sub_800D1C40(u8 *arg0, void **arg1, void **arg2);
void TObjEneBm5GibonU__sub_800D1C78(u8 *arg0, void ***arg1, void **arg2);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK set_player_state_default__12TBoss8DragonFPv(void *);
int TObjEneDD__sub_800BBA18(void*, void*);
void update_center_position__16TObjEneBm5GibonUFPv(u8 *arg0);
s32 TPhotonMylla__sub_80154CB4(int);
M2C_UNK all_parents_unqueued_for_destruction__7TObjectFv();
void TObjEneBm5GibonU__sub_800D1268(u8 *arg0);
s32 update_if_active__15TObjEneMe1GiGueFPv(void *, int);
void TObjEneBm5GibonU__sub_800D1D80(u8 *arg0);
void forward_hit__16TObjEneBm5GibonUFPvPv(void* p, void* a1);
extern RecoveredGlobal_800D184C_TObjEneBm5GibonU__data_80500EC4 TObjEneBm5GibonU__data_80500EC4;
void TObjEneBm5GibonU__sub_800D184C(s32 arg0);
void init_child__16TObjEneBm5GibonUFPvPv(void* p, void* a1);
extern RecoveredGlobal_800D184C_TObjEneBm5GibonU__data_80500EC4 TObjEneBm5GibonU__data_80500EC4;
void TObjEneBm5GibonU__sub_800D187C(s32 arg0);
void forward_hit__16TObjEneBm5GibonUFPvPv(void* p, void* a1);
extern RecoveredGlobal_800D18AC_TObjEneBm5GibonU__data_80500EB0 TObjEneBm5GibonU__data_80500EB0;
void TObjEneBm5GibonU__sub_800D18AC(s32 arg0);
void init_child__16TObjEneBm5GibonUFPvPv(void* p, void* a1);
extern RecoveredGlobal_800D18AC_TObjEneBm5GibonU__data_80500EB0 TObjEneBm5GibonU__data_80500EB0;
void TObjEneBm5GibonU__sub_800D18DC(s32 arg0);
void TObjEneBm5GibonU__sub_800D1CF8(O_800D1CF8 *self);
extern RecoveredGlobal_800D184C_TObjEneBm5GibonU__data_80500EC4 TObjEneBm5GibonU__data_80500EC4;
void update_photon_mylla__16TObjEneBm5GibonUFPv(void *arg0);
Ene_800D17E8 *TObjEneBm5GibonU__sub_800D17E8(s32 id);
extern G_800D1D14 TObjEneBm5GibonU__data_80500E78;
s32 __dt__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1);
void* reset__16TObjEneBm5GibonUFPv(void* p);
void __register_global_object(void *obj, void *dtor, void *chain);
void TObjEneBm5GibonU__sub_800D1D14(void);
void __dt__9TObjEneDDFv(void *, s32);
void TObjEneBm5GibonU__sub_800D184C(s32 arg0);
void TObjEneBm5GibonU__sub_800D18AC(s32 arg0);
s32 destroy__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, s16);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, u32, u32);
void TObjPlayer__sub_800D7C58(void);
extern u8 lbl_80493F04[];
Gibon_800D13B8 *TObjEneBm5GibonU__sub_800D13B8(Gibon_800D13B8 *arg0, s16 arg1);
void TObjPlayer__sub_80011734(void *, s32, f32);
void TObjPlayer__sub_80017E6C(void *);
void TObjPlayer__sub_800180E8(void *, Vec_800D1E4C, Vec_800D1E4C, f32);
void update_angle__10TObjPlayerFPviPv(void *, s32, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 update_if_active__15TObjEneMe1GiGueFPv(void *, int);
f32 fn_8013157C(void *, void *);
s32 TBoss1Dragon__sub_80143504(void *);
void update_collisions__10TObjPlayerFPv(void *);
extern const f32 lbl_805DA258;
extern const f32 lbl_805DA25C;
void TObjPlayer__sub_800D1E4C(Ene_800D1E4C *arg0);
}

extern "C" {

void TObjEneBm5GibonU__sub_800D119C(u8 *arg0);
void TObjEneBm5GibonU__sub_800D11F8(void);
void TObjEneBm5GibonU__sub_800D1264(void);
s32 TObjEneBm5GibonU__sub_800D1D70(void* p);
void* TObjEneBm5GibonU__sub_800D1D78(void* p);
s32 __dt__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1);
s32 check_and_update__16TObjEneBm5GibonUFi(s32 arg0);
void *create__16TObjEneBm5GibonUFPv(void *arg0);
s32 destroy__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1);
void forward_hit__16TObjEneBm5GibonUFPvPv(void* p, void* a1);
void init_child__16TObjEneBm5GibonUFPvPv(void* p, void* a1);
void release_static_resource__16TObjEneBm5GibonUFv(void);
void* reset__16TObjEneBm5GibonUFPv(void* p);
void reset_fields__16TObjEneBm5GibonUFPv(void* p);
void set_anim_hit__16TObjEneBm5GibonUFPv(void *arg0);
void set_field8_from_obj__16TObjEneBm5GibonUFPvi(void *arg0, s32 arg1);
void set_state__16TObjEneBm5GibonUFPv(void* p);
s32 try_activate__16TObjEneBm5GibonUFi(s32 arg0);
void update_center_position__16TObjEneBm5GibonUFPv(u8 *arg0);
void update_photon_mylla__16TObjEneBm5GibonUFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TObjEneBm5GibonU__ct(void *, void *, void *);
int TObjEneDD__sub_800BBA18(void*, void*);
s32 TObjPlayer__sub_80016C54();
s32 TObjPlayer__sub_80016D78();
int __dl__FPv();
void *__nw__7TObjectFUl(int);
s16 obj_getField1c(s32);

extern const f32 TObjEneBm5GibonU__data_805DA178;

void TObjEneBm5GibonU__sub_800D119C(u8 *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xA4), f32 *, 4) = (f32) TObjEneBm5GibonU__data_805DA178;
}

extern const f32 TObjEneBm5GibonU__data_805DA178;

void update_center_position__16TObjEneBm5GibonUFPv(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (TObjEneBm5GibonU__data_805DA178 + M2C_FIELD(arg0, f32 *, 0x3C));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC));
}

void TObjEneBm5GibonU__sub_800D11F8(void) {  }
void set_state__16TObjEneBm5GibonUFPv(void* p) { if (*(short*)((char*)p + 0x326) != 16) { TObjEneDD__sub_800BBA18(p, (void*)16); } }
void set_anim_hit__16TObjEneBm5GibonUFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0x11) && (temp_r0 != 0x12)) {
        TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(0x11));
    }
}
void TObjEneBm5GibonU__sub_800D1264(void) {  }

extern u32 TObjEneBm5GibonU__data_805D51D0;

void TObjEneBm5GibonU__sub_800D1268(u8 *arg0) {
    s16 temp_r0;
    s16 temp_r3_2;
    s32 temp_r3;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    if (((u32)TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0x474)))) != 0U) {
        all_parents_unqueued_for_destruction__7TObjectFv();
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x510);
        if (temp_r3 != 0) {
            M2C_FIELD(arg0, s32 *, 0x510) = (s32) (temp_r3 - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x510) == 0) {
                temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
                if ((temp_r0 != 0x11) && (temp_r0 != 0x12)) {
                    TObjEneDD__sub_800BBA18((void*)((void *) (arg0)), (void*)((int) (0xF)));
                }
            }
        }
        ((VObj_18 *)(arg0))->m83();
    } else {
        temp_r3_2 = M2C_FIELD(arg0, s16 *, 0x326);
        if (temp_r3_2 == 0) {
            ((VObj_18 *)(arg0))->m83();
        } else if (temp_r3_2 == 1) {
            VecCopy__FP3VecPC3Vec((void *)((void *) (arg0 + 0x38)), (void *)((void *) (arg0 + 0x50)));
            TObjEneDD__sub_800BBA18((void*)((void *) (arg0)), (void*)((int) (8)));
            ((VObj_18 *)(arg0))->m83();
        }
    }
    update_center_position__16TObjEneBm5GibonUFPv((u8 *)((void *) (arg0)));
    set_player_state_default__12TBoss8DragonFPv((void *) (arg0));
    ((VObj_18 *)(arg0))->m98();
}

typedef char RecoveredGlobal_800D184C_TObjEneBm5GibonU__data_80500EC4_size[sizeof(RecoveredGlobal_800D184C_TObjEneBm5GibonU__data_80500EC4) == 0xC ? 1 : -1];

Gibon_800D13B8 *TObjEneBm5GibonU__sub_800D13B8(Gibon_800D13B8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        arg0->vtbl = lbl_80493F04;
        if (arg0->child != NULL) {
            TObjEneGibbles__sub_80156720(arg0->child);
            if (arg0->child != NULL) {
                arg0->child->v0(1);
            }
            arg0->child = NULL;
        }
        TObjEneBm5GibonU__sub_800D18AC((s32)arg0);
        if (arg0->f464 != 0) {
            TObjEneBm5GibonU__sub_800D184C((s32)arg0);
        }
        TObjEneGibbles__sub_80156720(arg0);
        __destroy_arr(arg0->f3F4, (void *)TObjPlayer__sub_800D7C58, 0x1C, 4);
        __dt__18TObjEneMe3SinowZoaFPvs(arg0->f3D8, -1);
        destroy__16TObjEneBm5GibonUFis((s32)arg0->f3CC, -1);
        destroy__16TObjEneBm5GibonUFis((s32)arg0->f3C0, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

Ene_800D17E8 *TObjEneBm5GibonU__sub_800D17E8(s32 id) {
    Node_800D17E8 *n;
    for (n = (*(List_800D17E8 *)&TObjEneBm5GibonU__data_80500EC4).head; n != 0; n = n->next) {
        Ene_800D17E8 *e = ((Ene_800D17E8 *(*)(void *))update_photon_mylla__16TObjEneBm5GibonUFPv)(n);
        if (e != 0 && e->id == id) {
            return e;
        }
    }
    return 0;
}

void TObjEneBm5GibonU__sub_800D184C(s32 arg0) {
    forward_hit__16TObjEneBm5GibonUFPvPv((void*)((s32) &TObjEneBm5GibonU__data_80500EC4.value), (void*)(arg0 + 0x3CC));
}

typedef char RecoveredGlobal_800D187C_TObjEneBm5GibonU__data_80500EC4_size[sizeof(RecoveredGlobal_800D187C_TObjEneBm5GibonU__data_80500EC4) == 0xC ? 1 : -1];
void TObjEneBm5GibonU__sub_800D187C(s32 arg0) {
    init_child__16TObjEneBm5GibonUFPvPv((void*)((s32) &(*(RecoveredGlobal_800D187C_TObjEneBm5GibonU__data_80500EC4 *)&TObjEneBm5GibonU__data_80500EC4).value), (void*)(arg0 + 0x3CC));
}

typedef char RecoveredGlobal_800D18AC_TObjEneBm5GibonU__data_80500EB0_size[sizeof(RecoveredGlobal_800D18AC_TObjEneBm5GibonU__data_80500EB0) == 0x14 ? 1 : -1];
void TObjEneBm5GibonU__sub_800D18AC(s32 arg0) {
    forward_hit__16TObjEneBm5GibonUFPvPv((void*)((s32) &TObjEneBm5GibonU__data_80500EB0.value), (void*)(arg0 + 0x3C0));
}

typedef char RecoveredGlobal_800D18DC_TObjEneBm5GibonU__data_80500EB0_size[sizeof(RecoveredGlobal_800D18DC_TObjEneBm5GibonU__data_80500EB0) == 0x14 ? 1 : -1];
void TObjEneBm5GibonU__sub_800D18DC(s32 arg0) {
    init_child__16TObjEneBm5GibonUFPvPv((void*)((s32) &(*(RecoveredGlobal_800D18DC_TObjEneBm5GibonU__data_80500EB0 *)&TObjEneBm5GibonU__data_80500EB0).value), (void*)(arg0 + 0x3C0));
}

void release_static_resource__16TObjEneBm5GibonUFv(void) {
    if ((u32) TObjEneBm5GibonU__data_805D51D0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneBm5GibonU__data_805D51D0, 1);
        TObjEneBm5GibonU__data_805D51D0 = 0U;
    }
}

extern void *tl_04;

void *create__16TObjEneBm5GibonUFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x568);
    if (o != NULL) {
        o = TObjEneBm5GibonU__ct(o, tl_04, arg0);
    }
    return o;
}

void forward_hit__16TObjEneBm5GibonUFPvPv(void* p, void* a1) { TObjEneBm5GibonU__sub_800D1C78((u8 *)((void*)(a1)), (void ***)((void*)(p)), (void **)((void*)((char*)p + 0x4))); }
void init_child__16TObjEneBm5GibonUFPvPv(void* p, void* a1) { TObjEneBm5GibonU__sub_800D1C40((u8 *)((void*)(a1)), (void **)((void*)(p)), (void **)((void*)((char*)p + 0x4))); }
void reset_fields__16TObjEneBm5GibonUFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; }
s32 __dt__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void* reset__16TObjEneBm5GibonUFPv(void* p) { reset_fields__16TObjEneBm5GibonUFPv((void*)(p)); return p; }
void update_photon_mylla__16TObjEneBm5GibonUFPv(void *arg0) {
    TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 8));
}
void set_field8_from_obj__16TObjEneBm5GibonUFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 8) = obj_getField1c(arg1);
}

void TObjEneBm5GibonU__sub_800D1C40(u8 *arg0, void **arg1, void **arg2) {
    u8 *temp_r0;
    temp_r0 = (u8 *)(*arg2);
    if (temp_r0 != NULL) {
        M2C_FIELD(arg0, void **, 0) = temp_r0;
        M2C_FIELD(*arg2, void **, 4) = arg0;
    } else {
        M2C_FIELD(arg0, void **, 0) = NULL;
        *arg1 = arg0;
    }
    *arg2 = arg0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}

void TObjEneBm5GibonU__sub_800D1C78(u8 *arg0, void ***arg1, void **arg2) {
    void **temp_r4;
    u8 *temp_r6;
    temp_r6 = M2C_FIELD(arg0, u8 **, 0);
    if (temp_r6 != NULL) {
        M2C_FIELD(temp_r6, void ***, 4) = (void **) M2C_FIELD(arg0, void ***, 4);
    } else {
        *arg1 = M2C_FIELD(arg0, void ***, 4);
    }
    temp_r4 = M2C_FIELD(arg0, void ***, 4);
    if (temp_r4 != NULL) {
        *temp_r4 = M2C_FIELD(arg0, u8 **, 0);
        return;
    }
    *arg2 = M2C_FIELD(arg0, u8 **, 0);
}

s32 destroy__16TObjEneBm5GibonUFis(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

void TObjEneBm5GibonU__sub_800D1CF8(O_800D1CF8 *self) {
    self->f0 = 0;
    self->f4 = 0;
    self->f8 = 0xFFFF;
}

#pragma push
#pragma opt_propagation off
void TObjEneBm5GibonU__sub_800D1D14(void) {
    G_800D1D14 *g = &TObjEneBm5GibonU__data_80500E78;
    __register_global_object(reset__16TObjEneBm5GibonUFPv(g->obj1), (void *)__dt__16TObjEneBm5GibonUFis, g->chain1);
    __register_global_object(reset__16TObjEneBm5GibonUFPv(g->obj2), (void *)__dt__16TObjEneBm5GibonUFis, g->chain2);
}
#pragma pop

s32 TObjEneBm5GibonU__sub_800D1D70(void* p) { return *(s32*)((char*)p + 0x46c); }
void* TObjEneBm5GibonU__sub_800D1D78(void* p) { return (char*)p + 0x47c; }

void TObjEneBm5GibonU__sub_800D1D80(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x374) == 7) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (0));
    }
}

s32 check_and_update__16TObjEneBm5GibonUFi(s32 arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        TObjEneBm5GibonU__sub_800D1D80((u8 *)((void*)((void*)(arg0))));
        return 1;
    }
    return 0;
}
s32 try_activate__16TObjEneBm5GibonUFi(s32 arg0) {
    if (TObjPlayer__sub_80016C54() != 0) {
        TObjEneBm5GibonU__sub_800D1D80((u8 *)((void*)((void*)(arg0))));
        return 1;
    }
    return 0;
}
void TObjPlayer__sub_800D1E4C(Ene_800D1E4C *arg0) {
    switch (arg0->state) {
    case -1:
        break;
    case 0:
        arg0->col->flags &= ~0x380000;
        arg0->flags30 &= ~0x100;
        arg0->fB8 = 1;
        VecCopy__FP3VecPC3Vec(&arg0->v29C, &arg0->target);
        arg0->state = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        TObjPlayer__sub_80011734(arg0, 0, lbl_805DA258);
        VecCopy__FP3VecPC3Vec(&arg0->v290, &arg0->v2FC);
        TObjPlayer__sub_800180E8(arg0, arg0->v290, arg0->v29C, arg0->param->speed);
        update_angle__10TObjPlayerFPviPv(arg0, arg0->param->turn, arg0->v308);
        TObjPlayer__sub_80017E6C(arg0);
        update_collisions__10TObjPlayerFPv(arg0);
        if (fn_8013157C(&arg0->pos, &arg0->target) <= lbl_805DA25C) {
            update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
        }
        break;
    }
}

}
