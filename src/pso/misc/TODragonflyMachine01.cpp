#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_timer__20TODragonflyMachine01Fv(void);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);

extern s32 lbl_805D599C;
extern s32 lbl_805D59A0;

void update_timer__20TODragonflyMachine01Fv(void) {
    if ((s32) lbl_805D599C == 6) {
        TObjPlayer__sub_803D9214(0, lbl_805D59A0);
    }
    lbl_805D599C += 1;
}

}
