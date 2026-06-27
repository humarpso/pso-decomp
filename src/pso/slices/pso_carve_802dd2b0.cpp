#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TWindowSubComCard__sub_802A5748(void *);
M2C_UNK fn_802E0008(s32);
s32 fn_802E00C4(s32);

void fn_802DD2B0(void *arg0) {
    void *temp_r3;
    temp_r3 = M2C_FIELD(arg0, void **, 0x8C);
    if ((u32) temp_r3 != 0U) {
        TWindowSubComCard__sub_802A5748(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x8C) = 0U;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x74);
    if ((u32) temp_r3 != 0U) {
        queue_destruction__7TObjectFv(temp_r3);
        M2C_FIELD(arg0, u32 *, 0x74) = 0U;
    }
    if (fn_802E00C4(M2C_FIELD(arg0, s32 *, 0x6C)) == 1) {
        fn_802E0008(M2C_FIELD(arg0, s32 *, 0x5C));
        M2C_FIELD(arg0, s32 *, 0x20) = 0xC;
    }
}

}
