#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TNpcPlayer__sub_80152838(void);
u32 TOBoss4Rock__sub_80147AA8(M2C_UNK);

extern u32 lbl_805D5860;

void TNpcPlayer__sub_80152838(void) {
    if ((u32) lbl_805D5860 == 0U) {
        lbl_805D5860 = TOBoss4Rock__sub_80147AA8(0x1400);
    }
}

}
