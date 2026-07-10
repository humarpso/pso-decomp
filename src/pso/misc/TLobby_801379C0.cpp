#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_state_flags__6TLobbyFv(void);
M2C_UNK fn_801A5438();

extern void *lbl_805D5580;
extern s32 lbl_805D5590;
extern s32 lbl_805D5594;
extern s32 lbl_805D55D8;
extern s32 lbl_805D55FC;

void reset_state_flags__6TLobbyFv(void) {
    fn_801A5438();
    M2C_FIELD(lbl_805D5580, s32 *, 0x191C) = 1;
    lbl_805D55FC = 1;
    if ((s32) lbl_805D5594 == 0xC) {
        lbl_805D5590 = 5;
        lbl_805D5594 = 0x17;
    }
    lbl_805D55D8 = 0;
}

}
