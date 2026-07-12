#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdPlayerLoadGC__sub_802D6404(s32 arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E3E8(s32);
M2C_UNK TObjPlayer__sub_8011EB84(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_801208E0(s32, M2C_UNK *);

void TAdPlayerLoadGC__sub_802D6404(s32 arg0) {
    M2C_UNK sp8;

    TObjPlayer__sub_801208E0(arg0, &sp8);
    TObjEneDellBiter__sub_80087350(&sp8, 9);
    TObjPlayer__sub_8011E3E8(arg0);
    TObjPlayer__sub_8011EB84(arg0, &sp8, 0, 0);
}

}
