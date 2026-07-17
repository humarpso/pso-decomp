#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_status_pair__20TWindowSubStatusDispFii(s32 arg0, s32 arg1);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TWindowSubComCard__sub_803DEECC(s32, f32);
M2C_UNK TWindowSubStatusDisp__sub_803DEE6C(M2C_UNK);
M2C_UNK TWindowSubStatusDisp__sub_803DEEAC();
M2C_UNK TWindowSubStatusDisp__sub_803DF160(M2C_UNK, s32);

extern s32 lbl_805D6668;
extern f32 lbl_805DDF88;

void render_status_pair__20TWindowSubStatusDispFii(s32 arg0, s32 arg1) {
    TWindowSubStatusDisp__sub_803DEE6C(1);
    set_global_param__8TObjFishFi(lbl_805D6668);
    TWindowSubStatusDisp__sub_803DF160(0, arg1);
    TWindowSubComCard__sub_803DEECC(arg0 + 0x1C, lbl_805DDF88);
    TWindowSubStatusDisp__sub_803DEEAC();
    TWindowSubStatusDisp__sub_803DEE6C(1);
    set_global_param__8TObjFishFi(lbl_805D6668);
    TWindowSubStatusDisp__sub_803DF160(0, arg1);
    TWindowSubComCard__sub_803DEECC(arg0 + 0x3C, lbl_805DDF88);
    TWindowSubStatusDisp__sub_803DEEAC();
}

}
