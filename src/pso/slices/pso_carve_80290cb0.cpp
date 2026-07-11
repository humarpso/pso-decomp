#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TKeyBoardControl__sub_8000F90C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F91C(M2C_UNK);
M2C_UNK TKeyBoardControl__sub_8000F92C();
M2C_UNK TKeyBoardControl__sub_801A66B8();
M2C_UNK fn_801E2F44(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK render_tick__Fv();
M2C_UNK fn_8028EA88();
M2C_UNK fn_80290D10();
extern u8 lbl_805D6560;

void fn_80290CB0(void) {
    fn_801E2F44(0, 0, 0xFF);
    TKeyBoardControl__sub_801A66B8();
    TKeyBoardControl__sub_8000F90C(2);
    TKeyBoardControl__sub_8000F91C(6);
    if ((u8) lbl_805D6560 != 0) {
        fn_80290D10();
        TKeyBoardControl__sub_8000F92C();
        return;
    }
    fn_8028EA88();
    render_tick__Fv();
}

}
