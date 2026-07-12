#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TKeyBoardControl__sub_8000F90C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
M2C_UNK TAdEndText__sub_8001B370();
M2C_UNK TLobby__sub_800FC3D0();
M2C_UNK fn_80132F68();
M2C_UNK TKeyBoardControl__sub_801A66B8();
M2C_UNK fn_801E2F44(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK render_tick__Fv();
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_80307964();
M2C_UNK fn_803D6688(f32, f32);
extern s32 lbl_805D6A58;
extern const f32 lbl_805DF0B0;
extern const f32 lbl_805DF0B4;

void fn_80307AF8(void) {
    lbl_805D6A58 = 1;
    fn_803D6688(lbl_805DF0B0, lbl_805DF0B4);
    fn_801E2F44(0, 0, 0);
    TKeyBoardControl__sub_801A66B8();
    TKeyBoardControl__sub_8000F91C(2);
    TKeyBoardControl__sub_8000F90C(2);
    TAdEndText__sub_8001B370();
    fn_80132F68();
    TLobby__sub_800FC3D0();
    if (__nw__7TObjectFUl(0x1C) != 0U) {
        fn_80307964();
    }
    render_tick__Fv();
}

}
