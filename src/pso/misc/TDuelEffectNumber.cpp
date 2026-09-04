#include "pso/TDuelEffectNumber.h"

TDuelEffectNumber::~TDuelEffectNumber() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__17TDuelEffectNumberFv(void *arg0);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_803DF160(M2C_UNK, M2C_UNK);
M2C_UNK fn_8007FF28(void *, M2C_UNK *);
M2C_UNK fn_8007FFF4(void *, M2C_UNK *);
M2C_UNK fn_800800EC(void *, void *, s32);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 lbl_805D63F0;

void render__17TDuelEffectNumberFv(void *arg0) {
    char sp8[0x20];

    fn_800800EC(arg0, &sp8, M2C_FIELD(arg0, s32 *, 0x24));
    init_xyz_limits__10TObjPlayerFv();
    TWindowSubStatusDisp__sub_803DEE6C(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    TWindowSubStatusDisp__sub_803DF160(6, -1);
    fn_8007FFF4(arg0, (M2C_UNK *)&sp8);
    fn_8007FF28(arg0, (M2C_UNK *)&sp8);
    get_player__20TWindowSubStatusDispFv();
    reset_transform_state__10TObjPlayerFv();
}

}
