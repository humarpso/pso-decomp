#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802AA934_lbl_804DDFC0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_802AA934_lbl_804DDFC0_size[sizeof(RecoveredGlobal_802AA934_lbl_804DDFC0) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_802AA934_lbl_804DDFC0 lbl_804DDFC0;
extern u32 TOMekaFish00__data_805D66D8;
void TOMekaFish00__sub_802AA934(void);
}

extern "C" {

void *__dt__12TOMekaFish00Fv(void *arg0, s16 arg1);
s32 is_phase_reached__14TBoss6PlotFalzFv(void);
void release_static_instance__12TOMekaFish00Fv(void);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__11TODragonflyFv(void *, int);
s32 get_phase__8TObjFishFPv(void*);

extern u32 TOMekaFish00__data_805D66D8;

void release_static_instance__12TOMekaFish00Fv(void) {
    if ((u32) TOMekaFish00__data_805D66D8 != 0U) {
        TLobby__sub_8001FE7C((void*)TOMekaFish00__data_805D66D8, 1);
        TOMekaFish00__data_805D66D8 = 0U;
    }
}

extern M2C_UNK __vt__12TOMekaFish00[];

void TOMekaFish00__sub_802AA934(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804DDFC0.value, 0, 0, 0));
    }
    (*(s32 *)&TOMekaFish00__data_805D66D8) = var_r0;
}

void *__dt__12TOMekaFish00Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TOMekaFish00;
        __dt__11TODragonflyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern u32 TBoss6PlotFalz__data_805D66EC;

s32 is_phase_reached__14TBoss6PlotFalzFv(void) {
    u32 p = TBoss6PlotFalz__data_805D66EC;
    if (!p) {
        return 0;
    }
    return get_phase__8TObjFishFPv((void*)TBoss6PlotFalz__data_805D66EC) >= 7 ? 1 : 0;
}

}
