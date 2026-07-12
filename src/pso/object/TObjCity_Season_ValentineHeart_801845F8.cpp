#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjCity_Season_ValentineHeart__sub_801845F8(M2C_UNK arg0);
M2C_UNK TObjCity_Season_EasterEgg__sub_80184A08(M2C_UNK, M2C_UNK, f32);

extern const f32 lbl_805DBC70;

void TObjCity_Season_ValentineHeart__sub_801845F8(M2C_UNK arg0) {
    TObjCity_Season_EasterEgg__sub_80184A08(arg0, 1, lbl_805DBC70);
}

}
