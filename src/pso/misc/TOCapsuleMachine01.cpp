#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOCapsuleMachine01__vt1(void);
M2C_UNK TOComputerMachine01__sub_8023DDC8(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

M2C_UNK PPCSync();
extern s32 lbl_805D53A4;
extern s32 lbl_805D58C8;
extern s32 lbl_805D58CC;

void TOCapsuleMachine01__vt1(void) {
    if ((s32) lbl_805D58C8 != (s32) lbl_805D53A4) {
        lbl_805D58C8 = lbl_805D53A4;
        TOComputerMachine01__sub_8023DDC8(lbl_805D58CC, 0, 5, 4, 1);
        PPCSync();
    }
}

}
