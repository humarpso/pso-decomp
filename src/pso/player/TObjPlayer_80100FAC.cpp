#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_80100FAC(void *arg0);
M2C_UNK TObjPlayer__sub_8001BED8(M2C_UNK *, M2C_UNK);
s32 TObjPlayer__sub_8001BEF8(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_80101048();
M2C_UNK TObjPlayer__sub_8023E480(s32);
M2C_UNK fn_8008362C(M2C_UNK);

extern M2C_UNK lbl_805D53EC;

void TObjPlayer__sub_80100FAC(void *arg0) {
    TObjPlayer__sub_80101048();
    if (TObjPlayer__sub_8001BEF8(&lbl_805D53EC, 8) == 0) {
        fn_8008362C(0);
        TObjPlayer__sub_8023E480(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_8001BED8(&lbl_805D53EC, 8);
    }
}

}
