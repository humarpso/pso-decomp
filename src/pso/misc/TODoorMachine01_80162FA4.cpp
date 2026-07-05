#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TODoorMachine01__sub_80162FA4(void);
M2C_UNK TOBoss4Rock__sub_80147A80(void*);
void fn_8001FE7C(void*, int);
M2C_UNK fn_801E483C(s32);

extern u32 lbl_805D5970;
extern s32 *lbl_805D5974;

void TODoorMachine01__sub_80162FA4(void) {
    if ((s32 *) lbl_805D5974 != NULL) {
        fn_801E483C(*lbl_805D5974);
        if ((s32 *) lbl_805D5974 != NULL) {
            TOBoss4Rock__sub_80147A80((void*)lbl_805D5974);
            lbl_805D5974 = NULL;
        }
    }
    if ((u32) lbl_805D5970 != 0U) {
        fn_8001FE7C((void*)lbl_805D5970, 1);
        lbl_805D5970 = 0U;
    }
}

}
