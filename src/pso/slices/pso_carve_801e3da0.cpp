#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK run_tasks__16TKeyBoardControlFv();
M2C_UNK TKeyBoardControl__sub_8000F7FC();
M2C_UNK TCameraCtrl__sub_80069024();
M2C_UNK set_cull_none__8TObjFishFv();
M2C_UNK TParticleCtrl__sub_801E2EFC();
M2C_UNK TParticleCtrl__sub_801E2F20();
M2C_UNK GXSetZMode(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK GXSetViewport(f32, f32, f32, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D85D8(s32);
M2C_UNK fn_803DCEC8();
M2C_UNK fn_803DCF0C();
extern s32 lbl_805D3584;
extern f32 lbl_805DC428;
extern f32 lbl_805DC42C;
extern f32 lbl_805DC430;
extern f32 lbl_805DC43C;

void render_tick__Fv(void) {
    run_tasks__16TKeyBoardControlFv();
    TParticleCtrl__sub_801E2EFC();
    GXSetZMode(1, 7, 0);
    TCameraCtrl__sub_80069024();
    set_cull_none__8TObjFishFv();
    TObjPlayer__sub_803D85D8(lbl_805D3584);
    GXSetZMode(1, 3, 1);
    GXSetViewport(lbl_805DC43C, lbl_805DC43C, lbl_805DC430, lbl_805DC42C, lbl_805DC43C, lbl_805DC428);
    set_cull_none__8TObjFishFv();
    TParticleCtrl__sub_801E2F20();
    fn_803DCEC8();
    fn_803DCF0C();
    TKeyBoardControl__sub_8000F7FC();
}

}
