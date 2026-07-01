#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK fn_80141A30();
M2C_UNK fn_80141F1C();
M2C_UNK fn_80141F50();
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();
M2C_UNK fn_803DF5C4();
M2C_UNK fn_803DF5E4(s32, M2C_UNK);
M2C_UNK fn_803DF768(M2C_UNK);
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;

void render__20TItemEffOrgaFlowShotFv(s32 arg0) {
    fn_801E2EFC();
    lbl_805D5660 = some_id_805c6f74;
    set_depth_buffer_settings_1__Fv();
    fn_80141F50();
    fn_803DF768(1);
    fn_803DF5E4(arg0 + 0xC4, 0xA);
    fn_803DF5C4();
    fn_80141F1C();
    fn_80141A30();
    some_id_805c6f74 = lbl_805D5660;
    fn_801E2F20();
}

}
