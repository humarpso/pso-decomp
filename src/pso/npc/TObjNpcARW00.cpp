#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TBoss3Volopt__sub_8022675C(int, void *, int, int);
void TObjNpcARW00__vt88(s32 arg0);
}

extern "C" {

void TObjNpcFemaleBase__sub_801480F4(void);
void TObjNpcFemaleBase__sub_801480F8(void);
void *__dt__12TObjNpcARW00Fv(void *arg0, s16 arg1);
void free_resources__12TObjNpcARW00Fv(void);
void TLobby__sub_800F957C(void*);
void TLobby__sub_803DA16C(void*);
void __dl__7TObjectFPv(void *);
void destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(void *, int);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 TObjNpcARW00__data_805D5730;
extern u32 TObjNpcARW00__data_805D5734;

void free_resources__12TObjNpcARW00Fv(void) {
    if ((u32) TObjNpcARW00__data_805D5734 != 0U) {
        TLobby__sub_803DA16C((void*)TObjNpcARW00__data_805D5734);
        safe_free__23TAdSinglePlyChrSelectGCFUi(TObjNpcARW00__data_805D5734);
        TObjNpcARW00__data_805D5734 = 0U;
    }
    if ((u32) TObjNpcARW00__data_805D5730 != 0U) {
        TLobby__sub_800F957C((void*)TObjNpcARW00__data_805D5730);
        TObjNpcARW00__data_805D5730 = 0U;
    }
}

extern M2C_UNK __vt__12TObjNpcARW00[];

void *__dt__12TObjNpcARW00Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjNpcARW00;
        destroy_npc_female_base__17TObjNpcFemaleBaseFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjNpcARW00__vt88(s32 arg0) {
    TBoss3Volopt__sub_8022675C((int) (0x40004C15), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjNpcFemaleBase__sub_801480F4(void) {  }
void TObjNpcFemaleBase__sub_801480F8(void) {  }

}
