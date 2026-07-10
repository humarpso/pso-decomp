#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy__16TOFenceAncient04Fv(void);
M2C_UNK TOBoss4Rock__sub_80147A80(void*);
void fn_8001FE7C(void*, int);
M2C_UNK fn_801E483C(s32);

extern u32 lbl_805D59C8;
extern void *lbl_805D59CC;

void destroy__16TOFenceAncient04Fv(void) {
    if ((void *) lbl_805D59CC != NULL) {
        fn_801E483C(M2C_FIELD(lbl_805D59CC, s32 *, 4));
        fn_801E483C(M2C_FIELD(lbl_805D59CC, s32 *, 8));
        fn_801E483C(M2C_FIELD(lbl_805D59CC, s32 *, 0xC));
        if ((void *) lbl_805D59CC != NULL) {
            TOBoss4Rock__sub_80147A80((void*)lbl_805D59CC);
            lbl_805D59CC = NULL;
        }
    }
    if ((u32) lbl_805D59C8 != 0U) {
        fn_8001FE7C((void*)lbl_805D59C8, 1);
        lbl_805D59C8 = 0U;
    }
}

}
