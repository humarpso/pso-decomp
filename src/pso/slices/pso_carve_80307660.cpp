#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TItemProShield__sub_8010B734();
M2C_UNK fn_8012106C(void *, M2C_UNK);
f32 fn_803D64C0(s32);
extern f32 lbl_805DF0A8;

void fn_80307660(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) > 0) {
        if (TItemProShield__sub_8010B734() == 1) {
            M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1F8) - 1);
            if ((s32) M2C_FIELD(arg0, s32 *, 0x1F8) == 0) {
                fn_8012106C(arg0, 0x800);
            }
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x200) = (s32) (M2C_FIELD(arg0, s32 *, 0x200) + 0xB6);
        M2C_FIELD(arg0, s32 *, 0x1FC) = (s32) (lbl_805DF0A8 * fn_803D64C0(M2C_FIELD(arg0, s32 *, 0x200)));
    }
}

}
