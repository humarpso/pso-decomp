#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80149B0C_lbl_804A84B8 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80149B0C_lbl_804A84B8_size[sizeof(RecoveredGlobal_80149B0C_lbl_804A84B8) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80149B0C_lbl_804A84B8 lbl_804A84B8;
extern u32 TObjNpcExpertBase__data_805D5750;
void TObjNpcExpertBase__sub_80149B0C(void);
}

extern "C" {

void *__dt__17TObjNpcExpertBaseFv(void *arg0, s16 arg1);
void free_shared_data__17TObjNpcExpertBaseFv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void destroy_npc_lappy_base__12TObjNpcLappyFPvs(void *, int);

extern u32 TObjNpcExpertBase__data_805D5750;

void free_shared_data__17TObjNpcExpertBaseFv(void) {
    if ((u32) TObjNpcExpertBase__data_805D5750 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjNpcExpertBase__data_805D5750, 1);
        TObjNpcExpertBase__data_805D5750 = 0U;
    }
}

extern M2C_UNK __vt__17TObjNpcExpertBase[];

void TObjNpcExpertBase__sub_80149B0C(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804A84B8.value, 0, 0, 0));
    }
    (*(s32 *)&TObjNpcExpertBase__data_805D5750) = var_r0;
}

void *__dt__17TObjNpcExpertBaseFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__17TObjNpcExpertBase;
        destroy_npc_lappy_base__12TObjNpcLappyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
