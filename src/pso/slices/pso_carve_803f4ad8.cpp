#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern s32 lbl_805D79A4;

s32 TLobby__sub_803F4AD8(s32 arg0) {
    if (arg0 < 4) {
        lbl_805D79A4 = arg0;
    }
    return lbl_805D79A4;
}

}
