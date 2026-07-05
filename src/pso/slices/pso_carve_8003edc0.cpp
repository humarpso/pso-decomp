#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
M2C_UNK fn_80040788();
M2C_UNK TBoss3VoloptHiraisin__sub_8004172C();
M2C_UNK TBoss3VoloptMonitor__sub_800423D4();
M2C_UNK TBoss3VoloptP01__sub_80043EA4();
M2C_UNK fn_800479D0();
M2C_UNK TObjVoloptCage__sub_800490E8();
extern u32 lbl_805D4C10;

void TBoss3Volopt__sub_8003EDC0(void) {
    TObjVoloptCage__sub_800490E8();
    if ((u32) lbl_805D4C10 != 0U) {
        fn_8001FE7C((void*)lbl_805D4C10, 1);
        lbl_805D4C10 = 0U;
    }
    TBoss3VoloptP01__sub_80043EA4();
    fn_80040788();
    fn_800479D0();
    TBoss3VoloptHiraisin__sub_8004172C();
    TBoss3VoloptMonitor__sub_800423D4();
}

}
