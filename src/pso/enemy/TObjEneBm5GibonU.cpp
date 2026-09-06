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
}

extern "C" {

void TObjEneBm5GibonU__sub_800D119C(u8 *arg0);
void TObjEneBm5GibonU__sub_800D11F8(void);
void TObjEneBm5GibonU__sub_800D1264(void);
int TObjEneBm5GibonU__sub_800D1CF8(void);
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

int TObjEneBm5GibonU__sub_800D1CF8(void) { return 0; }

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

}
