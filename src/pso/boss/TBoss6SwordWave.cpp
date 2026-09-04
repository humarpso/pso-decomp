#include "pso/TBoss6SwordWave.h"

TBoss6SwordWave::~TBoss6SwordWave() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TBoss6SwordWave__sub_80356D08(u32 arg1, u32 arg2);
void render__15TBoss6SwordWaveFv(void);

void render__15TBoss6SwordWaveFv(void) {  }

u8 TBoss6SwordWave__sub_80356D08(u32 arg1, u32 arg2) {
    return (u8) (arg2 >> 8U);
}

}
