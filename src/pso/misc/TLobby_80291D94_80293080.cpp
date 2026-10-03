#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_challenge_mode_active(void);

extern u32 lbl_805D6580;
extern s32 lbl_805D658C;

s32 is_challenge_mode_active(void) {
    if (((s32) lbl_805D658C == 1) || ((u32) lbl_805D6580 != 0U)) {
        return 1;
    }
    return 0;
}

}
