#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8014ABC4_lbl_804A9428 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8014ABC4_lbl_804A9428_size[sizeof(RecoveredGlobal_8014ABC4_lbl_804A9428) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8014ABC4_lbl_804A9428 lbl_804A9428;
extern u32 TObjNpcGovernorBase__data_805D57A0;
void TObjNpcGovernorBase__sub_8014ABC4(void);
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

}
