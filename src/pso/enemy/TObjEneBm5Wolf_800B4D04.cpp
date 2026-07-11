#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_spawn_timer__14TObjEneBm5WolfFv(void);
M2C_UNK fn_803D9214(M2C_UNK, s32);

extern s32 TObjEneBm5Wolf__data_805D5124;
extern s32 TObjEneBm5Wolf__data_805D5128;

void advance_spawn_timer__14TObjEneBm5WolfFv(void) {
    if (((s32) TObjEneBm5Wolf__data_805D5124 >= 0x16) && ((s32) TObjEneBm5Wolf__data_805D5124 < 0x18)) {
        fn_803D9214(0, TObjEneBm5Wolf__data_805D5128);
    }
    TObjEneBm5Wolf__data_805D5124 += 1;
}

}
