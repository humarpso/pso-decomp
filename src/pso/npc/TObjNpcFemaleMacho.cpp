#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8014A718_lbl_804A8F90 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8014A718_lbl_804A8F90_size[sizeof(RecoveredGlobal_8014A718_lbl_804A8F90) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_8014A718_lbl_804A8F90 lbl_804A8F90;
extern u32 TObjNpcFemaleOld__data_805D5788;
void TObjNpcFemaleOld__sub_8014A718(void);
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

extern M2C_UNK __vt__18TObjNpcFemaleMacho[];

void *__dt__18TObjNpcFemaleMachoFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TObjNpcFemaleMacho;
        destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_04;

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

extern u32 TObjNpcFemaleOld__data_805D5788;

void destroy_static_instance__16TObjNpcFemaleOldFv(void) {
    if ((u32) TObjNpcFemaleOld__data_805D5788 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcFemaleOld__data_805D5788, 1);
        TObjNpcFemaleOld__data_805D5788 = 0U;
    }
}
void TObjNpcFemaleOld__sub_8014A718(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804A8F90.value, 0, 0, 0));
    }
    (*(s32 *)&TObjNpcFemaleOld__data_805D5788) = var_r0;
}

}
