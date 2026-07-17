#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 calc_random_scaled__10TObjPlayerFv(void);
s32 rand__11TOBoss4RockFv();

extern M2C_UNK lbl_80435620;
extern const f32 lbl_805D8244;
extern const f32 lbl_805D8248;

s32 calc_random_scaled__10TObjPlayerFv(void) {
    return (s32) (lbl_805D8248 * (lbl_805D8244 * (f32) rand__11TOBoss4RockFv()));
}

}
