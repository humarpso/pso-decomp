#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_8033B5F0(void *arg0);
M2C_UNK TWindow__close(void *);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);

void TAdSinglePlyChrSelectGC__sub_8033B5F0(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x38);
    if ((u32) temp_r3 != 0U) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(temp_r3) != 0) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x38));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
    }
}

}
