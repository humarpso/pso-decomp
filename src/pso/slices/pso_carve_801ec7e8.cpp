#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen(void);
M2C_UNK fn_8006F848(s32);
extern s32 lbl_80512220[];

void fn_801EC7E8(void) {
    s32 temp_r31;

    temp_r31 = lbl_80512220[0];
    if (is_split_screen() == 1) {
        fn_8006F848(temp_r31);
        return;
    }
    fn_8006F848(temp_r31);
}

}
