#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void fn_8001FE7C(void*, int);
M2C_UNK fn_8002E784();
M2C_UNK fn_8002EB88();
M2C_UNK fn_800367C0();
M2C_UNK TBoss2Mine__sub_80038D84();
M2C_UNK fn_8003A0A8();
extern u32 lbl_805D4BA4;

void fn_80035C8C(void) {
    fn_8002E784();
    fn_8002EB88();
    fn_800367C0();
    TBoss2Mine__sub_80038D84();
    fn_8003A0A8();
    if ((u32) lbl_805D4BA4 != 0U) {
        fn_8001FE7C((void*)lbl_805D4BA4, 1);
        lbl_805D4BA4 = 0U;
    }
}

}
