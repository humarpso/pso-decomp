#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_anim_frame__16TObjEneBm5GibonUFv(void);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);

extern s32 TObjEneBm5GibonU__data_805D51D4;
extern s32 TObjEneBm5GibonU__data_805D51D8;

void advance_anim_frame__16TObjEneBm5GibonUFv(void) {
    if (((s32) TObjEneBm5GibonU__data_805D51D4 >= 0x30) && ((s32) TObjEneBm5GibonU__data_805D51D4 < 0x32)) {
        TObjPlayer__sub_803D9214(0, TObjEneBm5GibonU__data_805D51D8);
    }
    TObjEneBm5GibonU__data_805D51D4 += 1;
}

}
