#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_flags_and_apply_damage_color__10TObjPlayerFv(void);
M2C_UNK TObjPlayer__sub_803DED78(M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_803DED84();

extern s32 some_id_805c6f74;

void set_flags_and_apply_damage_color__10TObjPlayerFv(void) {
    some_id_805c6f74 |= 0x8820;
    TObjPlayer__sub_803DED84();
    TObjPlayer__sub_803DED78(0xFF00, 0x800);
}

}
