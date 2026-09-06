#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_803594B4(void *, s32, f32);
extern const f32 TBoss6PlotFalz__data_805DE098;
extern const f32 TBoss6PlotFalz__data_805DE09C;
void TBoss6PlotFalz__sub_802AB568(u8 *arg0, s32 arg1, f32 farg0);
}

extern "C" {

void set_visible_flag__14TBoss6PlotFalzFPv(void *arg0);

s32 TLobby__sub_800C6C10();

void set_visible_flag__14TBoss6PlotFalzFPv(void *arg0) {
    if (TLobby__sub_800C6C10() != 0) {
        M2C_FIELD(arg0, s32 *, 0x374) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x374) = 1;
}
void TBoss6PlotFalz__sub_802AB568(u8 *arg0, s32 arg1, f32 farg0) {
    f32 var_f1;
    u8 *temp_r3;
    var_f1 = farg0;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x380));
    if ((temp_r3 != NULL) && !(var_f1 <= TBoss6PlotFalz__data_805DE098)) {
        if (var_f1 > TBoss6PlotFalz__data_805DE09C) {
            var_f1 = TBoss6PlotFalz__data_805DE09C;
        }
        fn_803594B4(temp_r3, arg1, var_f1);
    }
}

}
