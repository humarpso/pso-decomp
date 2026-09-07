#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802AA644_lbl_804DDFE0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802AA644_lbl_804DDFE0_size[sizeof(RecoveredGlobal_802AA644_lbl_804DDFE0) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_802AA644_lbl_804DDFE0 lbl_804DDFE0;
extern u32 TOMekaFish01__data_805D66DC;
void TOMekaFish01__sub_802AA644(void);
}

extern "C" {

void *TOMekaFish01__create(void *arg0);
void *__dt__12TOMekaFish01Fv(void *arg0, s16 arg1);
void free_static_data__12TOMekaFish01Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void *TOMekaFish01__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__11TODragonflyFv(void *, int);
void *__nw__7TObjectFUl(int);

void *TOMekaFish01__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TOMekaFish01__ct(o, arg0);
    }
    return o;
}

extern u32 TOMekaFish01__data_805D66DC;

void free_static_data__12TOMekaFish01Fv(void) {
    if ((u32) TOMekaFish01__data_805D66DC != 0U) {
        TLobby__sub_8001FE7C((void*)TOMekaFish01__data_805D66DC, 1);
        TOMekaFish01__data_805D66DC = 0U;
    }
}

extern M2C_UNK __vt__12TOMekaFish01[];

void TOMekaFish01__sub_802AA644(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804DDFE0.value, 0, 0, 0));
    }
    (*(s32 *)&TOMekaFish01__data_805D66DC) = var_r0;
}

void *__dt__12TOMekaFish01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOMekaFish01;
        __dt__11TODragonflyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
