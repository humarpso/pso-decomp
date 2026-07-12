#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjWarpJung__sub_801A04C0(void);
M2C_UNK TOComputerMachine01__sub_8023DDC8(s32, M2C_UNK, M2C_UNK, u16, M2C_UNK);

extern s32 lbl_805D53A4;
extern s32 lbl_805D5CB4;
extern s32 lbl_805D5CB8;
extern s32 lbl_805D5CC4;

s32 TObjWarpJung__sub_801A04C0(void) {
    if ((s32) lbl_805D53A4 != (s32) lbl_805D5CB4) {
        lbl_805D5CB4 = lbl_805D53A4;
        if ((s32) lbl_805D5CC4 >= 0) {
            TOComputerMachine01__sub_8023DDC8(lbl_805D5CB8, 0, 5, (u16) lbl_805D5CC4, 1);
            return 1;
        }
    }
    return 0;
}

}
