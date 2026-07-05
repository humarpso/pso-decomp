#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOSensorAncient01__sub_80175C90(void);
M2C_UNK TOBoss4Rock__sub_80147A80(void*);
void fn_8001FE7C(void*, int);
M2C_UNK fn_801E483C(s32);

extern u32 lbl_805D5A88;
extern void *lbl_805D5A8C;

void TOSensorAncient01__sub_80175C90(void) {
    if ((void *) lbl_805D5A8C != NULL) {
        fn_801E483C(M2C_FIELD(lbl_805D5A8C, s32 *, 0));
        fn_801E483C(M2C_FIELD(lbl_805D5A8C, s32 *, 0xC));
        fn_801E483C(M2C_FIELD(lbl_805D5A8C, s32 *, 8));
        if ((void *) lbl_805D5A8C != NULL) {
            TOBoss4Rock__sub_80147A80((void*)lbl_805D5A8C);
            lbl_805D5A8C = NULL;
        }
    }
    if ((u32) lbl_805D5A88 != 0U) {
        fn_8001FE7C((void*)lbl_805D5A88, 1);
        lbl_805D5A88 = 0U;
    }
}

}
