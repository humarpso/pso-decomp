#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TTecZondeEff__sub_8023D40C(void *arg0);
f32 TObjFish__sub_8001973C(f32);

s32 TTecZondeEff__sub_8023D40C(void *arg0) {
    f32 temp_f1;
    f32 temp_f30;
    f32 temp_f31;

    temp_f30 = TObjFish__sub_8001973C(M2C_FIELD(arg0, f32 *, 0x28));
    temp_f31 = TObjFish__sub_8001973C(M2C_FIELD(arg0, f32 *, 0x2C));
    temp_f1 = TObjFish__sub_8001973C(M2C_FIELD(arg0, f32 *, 0x30));
    if (temp_f30 > temp_f31) {
        if (temp_f30 > temp_f1) {
            return 0;
        }
        return 2;
    }
    if (temp_f31 > temp_f1) {
        return 1;
    }
    return 2;
}

}
