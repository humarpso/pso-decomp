#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_8000F90C(M2C_UNK);
M2C_UNK fn_8000F91C(M2C_UNK);
M2C_UNK fn_80132F44();
M2C_UNK fn_80132F68();
M2C_UNK fn_801A66B8();
M2C_UNK fn_801E2F44(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK render_tick__Fv();
M2C_UNK fn_80201354();
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK fn_802A1324();
extern s8 lbl_805D6638;
extern u8 lbl_805D6639;

void fn_802A1218(void) {
    fn_801E2F44(0, 0, 0);
    fn_801A66B8();
    fn_8000F90C(2);
    switch ((s8) lbl_805D6639) {
    case 0:
        fn_8000F91C(1);
        fn_8000F90C(9);
        break;
    case 1:
        fn_80132F68();
        fn_80201354();
        fn_80132F44();
        fn_8000F91C(5);
        break;
    }
    lbl_805D6638 = 0;
    if (__nw__7TObjectFUl(0x24) != 0U) {
        fn_802A1324();
    }
    render_tick__Fv();
}

}
