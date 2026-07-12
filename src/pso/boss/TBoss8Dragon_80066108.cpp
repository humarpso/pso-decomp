#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_80066108(void);

extern f32 lbl_805D4D90;
extern f32 lbl_805D4D94;
extern f32 lbl_805D8D58;
extern f32 lbl_805D8D90;
extern f32 lbl_805D9E80;

void TBoss8Dragon__sub_80066108(void) {
    lbl_805D4D90 = lbl_805D8D90 * lbl_805D9E80;
    lbl_805D4D94 = lbl_805D8D58 * lbl_805D9E80;
}

}
