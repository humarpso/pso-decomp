#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_press__17TWindowSubComCardFv(void);
s32 fn_8007A8F8();
s32 fn_8007BD94();
M2C_UNK fn_8007BF48(s32);

void update_press__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = fn_8007A8F8();
    if (fn_8007BD94() == 0) {
        fn_8007BF48(temp_r31);
    }
}

}
