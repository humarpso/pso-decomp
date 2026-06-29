#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK fn_803DED78(M2C_UNK, M2C_UNK);
M2C_UNK fn_803DED84(s32);
extern s32 some_id_805c6f74;

s32 TObjEneMe3ShinowaMirage__vt107(s32 arg0) {
    some_id_805c6f74 |= 0x820;
    fn_803DED84(arg0 + 0x430);
    fn_803DED78(0xFF00, 0x800);
    return 0;
}

}
