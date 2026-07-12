#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801010E0(s32 arg0);
M2C_UNK TObjPlayer__sub_8001BED8(M2C_UNK *, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_803DED84(s32);

extern M2C_UNK lbl_805D53EC;
extern volatile s32 some_id_805c6f74;

void TObjPlayer__sub_801010E0(s32 arg0) {
    s32 temp_r0;

    if ((arg0 != 0) && (TObjPlayer__sub_8001BEF8(&lbl_805D53EC, 1) == 0)) {
        temp_r0 = some_id_805c6f74 & 0xFFFFFFEF;
        some_id_805c6f74 = temp_r0;
        some_id_805c6f74 = temp_r0 | 0x20;
        TObjPlayer__sub_803DED84(arg0);
        TObjPlayer__sub_8001BED8(&lbl_805D53EC, 1);
    }
}

}
