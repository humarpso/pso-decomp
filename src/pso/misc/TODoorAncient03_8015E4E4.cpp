#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__15TODoorAncient03Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void fn_8001FE7C(void*, int);
M2C_UNK fn_801E483C(s32);

extern u32 lbl_805D5908;
extern void *lbl_805D590C;

void free_resources__15TODoorAncient03Fv(void) {
    if ((void *) lbl_805D590C != NULL) {
        fn_801E483C(M2C_FIELD(lbl_805D590C, s32 *, 4));
        if ((void *) lbl_805D590C != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D590C);
            lbl_805D590C = NULL;
        }
    }
    if ((u32) lbl_805D5908 != 0U) {
        fn_8001FE7C((void*)lbl_805D5908, 1);
        lbl_805D5908 = 0U;
    }
}

}
