#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
    virtual M2C_UNK m79(s32);
};

struct RecoveredGlobal_801499DC___vt__18TObjNpcConnoisseur {
    M2C_UNK value;
    u8 remaining[0x174];
};

extern "C" {
s32 init_position_vectors__10TObjPlayerFi(void *);
s32 fn_80148274(void *);
s32 construct_male_npc_base(void *);
extern M2C_UNK __vt__18TObjNpcConnoisseur[];
extern s32 lbl_805D2D60;
extern u32 TObjNpcConnoisseur__data_805D574C;
u8 *TObjNpcConnoisseur__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void *load_resource_from_descriptor(void *, s32, s32, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 get_task_id__14TFontSmallTaskFPv(void *);
extern s32 lbl_804A8310[];
extern u8 TLobby__data_805011D8[];
extern s32 lbl_805D5748;
extern u32 TObjNpcConnoisseur__data_805D574C;
void load_section_motion__18TObjNpcConnoisseurFv(void);
}

extern "C" {

void * TObjNpcExpertBase__create(void *arg0);
void *__dt__18TObjNpcConnoisseurFv(void *arg0, s16 arg1);
void destroy_instance__18TObjNpcConnoisseurFv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjNpcExpertBase__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);

extern u32 TObjNpcConnoisseur__data_805D574C;

void destroy_instance__18TObjNpcConnoisseurFv(void) {
    if ((u32) TObjNpcConnoisseur__data_805D574C != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcConnoisseur__data_805D574C, 1);
        TObjNpcConnoisseur__data_805D574C = 0U;
    }
}

extern M2C_UNK __vt__18TObjNpcConnoisseur[];

void load_section_motion__18TObjNpcConnoisseurFv(void) {
    void *o;
    lbl_805D5748 = get_task_id__14TFontSmallTaskFPv(TLobby__data_805011D8);
    o = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
    if (o != 0) {
        o = load_resource_from_descriptor(o, 1, lbl_804A8310[lbl_805D5748], 0, 0, 0);
    }
    TObjNpcConnoisseur__data_805D574C = (u32)o;
}

void *__dt__18TObjNpcConnoisseurFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjNpcConnoisseur;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

typedef char RecoveredGlobal_801499DC___vt__18TObjNpcConnoisseur_size[sizeof(RecoveredGlobal_801499DC___vt__18TObjNpcConnoisseur) == 0x178 ? 1 : -1];
u8 *TObjNpcConnoisseur__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    construct_male_npc_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801499DC___vt__18TObjNpcConnoisseur *)&__vt__18TObjNpcConnoisseur).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2D60;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    init_position_vectors__10TObjPlayerFi((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TObjNpcConnoisseur__data_805D574C), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TObjNpcConnoisseur__data_805D574C), u8 **, 0x42C), s32 *, 0xC);
    fn_80148274((void *) (arg0));
    return arg0;
}

void * TObjNpcExpertBase__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcExpertBase__ct(o2, o, arg0);
    }
    return o2;
}

}
