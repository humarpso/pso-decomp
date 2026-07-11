#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_globals__15TObjEneDelDepthFv(void);
M2C_UNK fn_803DED78(M2C_UNK, M2C_UNK);
M2C_UNK fn_803E38FC(M2C_UNK);

extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;

void reset_globals__15TObjEneDelDepthFv(void) {
    some_id_805c6f74 &= 0xFFFF77DF;
    fn_803DED78(0xFF00, 0);
    fn_803E38FC(0x2500);
    fn_803E38FC(0x2500);
    lbl_805D7784 = lbl_805D5664;
    lbl_805D7780 = lbl_805D5668;
    some_id_805c6f74 = lbl_805D5660;
}

}
