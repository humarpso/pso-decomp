#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801CF8B0(s32 arg0);
void TObjPlayer__sub_801CF908(s32 arg0);
M2C_UNK TAdRicoRing__sub_8001BEE8(s32, M2C_UNK);
M2C_UNK TObjPlayer__sub_801D0BC0(s32, M2C_UNK, M2C_UNK);
s32 fn_8001BEF8(s32, M2C_UNK);

void TObjPlayer__sub_801CF8B0(s32 arg0) {
    if (fn_8001BEF8(arg0 + 0x5EC, 4) != 0) {
        TAdRicoRing__sub_8001BEE8(arg0 + 0x5EC, 4);
        TObjPlayer__sub_801D0BC0(arg0, 1, 0);
    }
}

void TObjPlayer__sub_801CF908(s32 arg0) {
    if (fn_8001BEF8(arg0 + 0x5EC, 4) != 0) {
        TAdRicoRing__sub_8001BEE8(arg0 + 0x5EC, 4);
        TObjPlayer__sub_801D0BC0(arg0, 1, 5);
    }
}

}
