#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8003AB00_lbl_804FEA80 {
    M2C_UNK value;
    u8 remaining[0x3E4];
};

extern "C" {
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(int);
M2C_UNK TObjPlayer__sub_803DF578(int, int, int);
extern RecoveredGlobal_8003AB00_lbl_804FEA80 lbl_804FEA80;
void fn_8003AB00(M2C_UNK *arg0, s32 arg1);
}

extern "C" {

typedef char RecoveredGlobal_8003AB00_lbl_804FEA80_size[sizeof(RecoveredGlobal_8003AB00_lbl_804FEA80) == 0x3E8 ? 1 : -1];
void fn_8003AB00(M2C_UNK *arg0, s32 arg1) {
    M2C_UNK *var_r30;
    M2C_UNK *var_r3;
    s32 var_r31;
    s32 var_r4;
    s32 var_r5;
    var_r30 = (M2C_UNK *)(arg0);
    var_r31 = arg1;
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B2C();
    var_r3 = (M2C_UNK *)(var_r30);
    TOHangerMachine01__sub_803D9C00((int) (var_r3));
    var_r5 = var_r31 * 0x60;
    var_r3 = (M2C_UNK *)(&lbl_804FEA80.value);
    var_r4 = 6;
    var_r3 = (M2C_UNK *)((u8 *)&lbl_804FEA80.value + var_r5);
    var_r5 = 0;
    TObjPlayer__sub_803DF578((int) (var_r3), (int) (6), (int) (0));
    pop_matrix();
}

}
