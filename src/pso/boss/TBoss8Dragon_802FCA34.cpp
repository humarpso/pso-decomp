#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_802FCA34(void);
M2C_UNK TObjEneEpsilon__sub_800B96D4(f32);

extern const f32 lbl_805DEEE0;

void TBoss8Dragon__sub_802FCA34(void) {
    TObjEneEpsilon__sub_800B96D4(lbl_805DEEE0);
}

}
