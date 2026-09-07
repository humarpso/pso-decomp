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

struct RecoveredGlobal_80147C18___vt__12TObjNpcAHM01 {
    M2C_UNK value;
    u8 remaining[0x174];
};

extern "C" {
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TObjNpcAHM01__vt88(s32 arg0);
s32 init_position_vectors__10TObjPlayerFi(void *);
s32 fn_80148274(void *);
s32 fn_8014B8A4(void *);
extern M2C_UNK __vt__12TObjNpcAHM01[];
extern s32 lbl_805D2D08;
extern u32 TObjNpcAHM01__data_805D5720;
extern u32 TObjNpcAHM01__data_805D5724;
u8 *TObjNpcAHM01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
}

extern "C" {

void * TObjNpcARM00__create(void *arg0);
int TObjNpcFemaleBase__sub_80147CD4(void);
void *__dt__12TObjNpcAHM01Fv(void *arg0, s16 arg1);
void free_resources__12TObjNpcAHM01Fv(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
void *TObjNpcARM00__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcAHM01__data_805D5720;
extern u32 TObjNpcAHM01__data_805D5724;

void free_resources__12TObjNpcAHM01Fv(void) {
    if ((u32) TObjNpcAHM01__data_805D5724 != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcAHM01__data_805D5724);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcAHM01__data_805D5724);
        TObjNpcAHM01__data_805D5724 = 0U;
    }
    if ((u32) TObjNpcAHM01__data_805D5720 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcAHM01__data_805D5720);
        TObjNpcAHM01__data_805D5720 = 0U;
    }
}

extern M2C_UNK __vt__12TObjNpcAHM01[];

void *__dt__12TObjNpcAHM01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcAHM01;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80147C18___vt__12TObjNpcAHM01_size[sizeof(RecoveredGlobal_80147C18___vt__12TObjNpcAHM01) == 0x178 ? 1 : -1];
u8 *TObjNpcAHM01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    fn_8014B8A4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80147C18___vt__12TObjNpcAHM01 *)&__vt__12TObjNpcAHM01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2D08;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    init_position_vectors__10TObjPlayerFi((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) *(*(s32 * *)&TObjNpcAHM01__data_805D5720);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (*(s32 *)&TObjNpcAHM01__data_805D5724);
    fn_80148274((void *) (arg0));
    return arg0;
}

void TObjNpcAHM01__vt88(s32 arg0) {
    TBoss3Volopt__sub_8022675C((int) (0x40004C15), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

int TObjNpcFemaleBase__sub_80147CD4(void) { return 0; }

extern void *tl_04;

void * TObjNpcARM00__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcARM00__ct(o2, o, arg0);
    }
    return o2;
}

}
