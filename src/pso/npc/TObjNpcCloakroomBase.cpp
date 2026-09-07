#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80149738_lbl_804A8098 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80149738_lbl_804A8098_size[sizeof(RecoveredGlobal_80149738_lbl_804A8098) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80149738_lbl_804A8098 lbl_804A8098;
extern u32 TObjNpcCloakroomBase__data_805D5740;
void TObjNpcCloakroomBase__sub_80149738(void);
}

extern "C" {

f32 TObjNpcCloakroomBase__vt21(void);
void TObjNpcCloakroomBase__vt88(s32 arg0);
void * TObjNpcConnoisseur__create(void *arg0);
void *__dt__20TObjNpcCloakroomBaseFv(void *arg0, s16 arg1);
void * create__20TObjNpcCloakroomBaseFPv(void *arg0);
void destroy_static_instance__20TObjNpcCloakroomBaseFv(void);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void *TObjNpcCloakroomBase__ct(void *, void *, void *);
void *TObjNpcConnoisseur__ct(void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *, int);
s32 get_global_state__14TOKeyMachine01Fv();

void TObjNpcCloakroomBase__vt88(s32 arg0) {
    if (get_global_state__14TOKeyMachine01Fv() != 5) {
        TBoss3Volopt__sub_8022675C(0x40003804, arg0 + 0x38, 0, 0);
        return;
    }
    TBoss3Volopt__sub_8022675C(0x40003802, arg0 + 0x38, 0, 0);
}

extern void *tl_04;

void * create__20TObjNpcCloakroomBaseFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcCloakroomBase__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 TObjNpcCloakroomBase__data_805D5740;

void destroy_static_instance__20TObjNpcCloakroomBaseFv(void) {
    if ((u32) TObjNpcCloakroomBase__data_805D5740 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcCloakroomBase__data_805D5740, 1);
        TObjNpcCloakroomBase__data_805D5740 = 0U;
    }
}

extern M2C_UNK __vt__20TObjNpcCloakroomBase[];

void TObjNpcCloakroomBase__sub_80149738(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804A8098.value, 0, 0, 0));
    }
    (*(s32 *)&TObjNpcCloakroomBase__data_805D5740) = var_r0;
}

void *__dt__20TObjNpcCloakroomBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TObjNpcCloakroomBase;
        destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern f32 lbl_805DB1E8;

f32 TObjNpcCloakroomBase__vt21(void) {
    return lbl_805DB1E8;
}

extern void *tl_04;

void * TObjNpcConnoisseur__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3B8);
    if (o2 != NULL) {
        o2 = TObjNpcConnoisseur__ct(o2, o, arg0);
    }
    return o2;
}

}
