#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8014ABC4_lbl_804A9428 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8014ABC4_lbl_804A9428_size[sizeof(RecoveredGlobal_8014ABC4_lbl_804A9428) == 0x10 ? 1 : -1];

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

struct RecoveredGlobal_8014AC6C___vt__19TObjNpcGovernorBase {
    M2C_UNK value;
    u8 remaining[0x174];
};

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8014ABC4_lbl_804A9428 lbl_804A9428;
extern u32 TObjNpcGovernorBase__data_805D57A0;
void TObjNpcGovernorBase__sub_8014ABC4(void);
s32 init_position_vectors__10TObjPlayerFi(void *);
s32 fn_80148274(void *);
s32 fn_8014B8A4(void *);
extern M2C_UNK __vt__19TObjNpcGovernorBase[];
extern s32 lbl_805D2DAC;
extern u32 TObjNpcGovernorBase__data_805D57A0;
u8 *TObjNpcGovernorBase__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
void *create_named_object(const char *name);
void *TLanguage__sub_801E4874(const char *name);
extern u32 TObjNpcHFW00__data_805D57A8;
extern u32 TObjNpcHFW00__data_805D57AC;
extern char lbl_8043FA38[];
extern char lbl_8043FA4C[];
void TObjNpcHFW00__sub_8014ADB8(void);
}

extern "C" {

void * TObjNpcHFW00__create(void *arg0);
void *__dt__19TObjNpcGovernorBaseFv(void *arg0, s16 arg1);
void free_resources__12TObjNpcHFW00Fv(void);
void free_shared_data__19TObjNpcGovernorBaseFv(void);
void TLobby__sub_8001FE7C(void*, int);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
void *TObjControl__ct(void *, void *);
void *TObjNpcHFW00__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcGovernorBase__data_805D57A0;

void free_shared_data__19TObjNpcGovernorBaseFv(void) {
    if ((u32) TObjNpcGovernorBase__data_805D57A0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcGovernorBase__data_805D57A0, 1);
        TObjNpcGovernorBase__data_805D57A0 = 0U;
    }
}

extern M2C_UNK __vt__19TObjNpcGovernorBase[];

void TObjNpcGovernorBase__sub_8014ABC4(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804A9428.value, 0, 0, 0));
    }
    (*(s32 *)&TObjNpcGovernorBase__data_805D57A0) = var_r0;
}

void *__dt__19TObjNpcGovernorBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjNpcGovernorBase;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

typedef char RecoveredGlobal_8014AC6C___vt__19TObjNpcGovernorBase_size[sizeof(RecoveredGlobal_8014AC6C___vt__19TObjNpcGovernorBase) == 0x178 ? 1 : -1];
u8 *TObjNpcGovernorBase__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    fn_8014B8A4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8014AC6C___vt__19TObjNpcGovernorBase *)&__vt__19TObjNpcGovernorBase).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2DAC;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    init_position_vectors__10TObjPlayerFi((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TObjNpcGovernorBase__data_805D57A0), u8 **, 0x42C), s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TObjNpcGovernorBase__data_805D57A0), u8 **, 0x42C), s32 *, 0xC);
    fn_80148274((void *) (arg0));
    return arg0;
}

void * TObjNpcHFW00__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcHFW00__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjNpcHFW00__data_805D57A8;
extern u32 TObjNpcHFW00__data_805D57AC;

void free_resources__12TObjNpcHFW00Fv(void) {
    if ((u32) TObjNpcHFW00__data_805D57AC != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcHFW00__data_805D57AC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcHFW00__data_805D57AC);
        TObjNpcHFW00__data_805D57AC = 0U;
    }
    if ((u32) TObjNpcHFW00__data_805D57A8 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcHFW00__data_805D57A8);
        TObjNpcHFW00__data_805D57A8 = 0U;
    }
}
void TObjNpcHFW00__sub_8014ADB8(void) {
    TObjNpcHFW00__data_805D57A8 = (u32)create_named_object(lbl_8043FA38);
    TObjNpcHFW00__data_805D57AC = (u32)TLanguage__sub_801E4874(lbl_8043FA4C);
}

}
