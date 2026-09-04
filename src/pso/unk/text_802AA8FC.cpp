#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
