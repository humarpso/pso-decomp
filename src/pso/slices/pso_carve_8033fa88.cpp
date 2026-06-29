#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK disallow_rendering__7TObjectFv();
M2C_UNK TWindowSubComCard__sub_80244A14(void *);
u32 fn_8033FDA8();

void TAdPlyStatusGC__sub_8033FA88(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x6C);
    if ((u32) temp_r3 != 0U) {
        TWindowSubComCard__sub_80244A14(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x6C) = 0U;
    }
    if (fn_8033FDA8() != 0U) {
        disallow_rendering__7TObjectFv();
    }
}

}
