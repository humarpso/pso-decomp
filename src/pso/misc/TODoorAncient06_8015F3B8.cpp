#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void destroy__15TODoorAncient06Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void fn_8001FE7C(void*, int);
M2C_UNK fn_801E483C(s32);

extern void *lbl_805D5928;
extern void *lbl_805D592C;
extern void *lbl_805D5930;

void destroy__15TODoorAncient06Fv(void) {
    if (lbl_805D5930 != NULL) {
        free__11TOBoss4RockFUi(lbl_805D5930);
        lbl_805D5930 = NULL;
    }
    if (lbl_805D592C != NULL) {
        fn_801E483C(M2C_FIELD(lbl_805D592C, s32 *, 4));
        fn_801E483C(M2C_FIELD(lbl_805D592C, s32 *, 0));
        if (lbl_805D592C != NULL) {
            free__11TOBoss4RockFUi(lbl_805D592C);
            lbl_805D592C = NULL;
        }
    }
    if (lbl_805D5928 != NULL) {
        fn_8001FE7C(lbl_805D5928, 1);
        lbl_805D5928 = NULL;
    }
}

}
