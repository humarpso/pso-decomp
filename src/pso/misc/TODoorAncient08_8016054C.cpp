#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_objects__15TODoorAncient08Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void fn_8001FE7C(void*, int);
M2C_UNK fn_801E483C(s32);

extern u32 lbl_805D5948;
extern void *TODoorAncient08__data_805D594C;

void free_objects__15TODoorAncient08Fv(void) {
    if ((void *) TODoorAncient08__data_805D594C != NULL) {
        fn_801E483C(M2C_FIELD(TODoorAncient08__data_805D594C, s32 *, 4));
        if ((void *) TODoorAncient08__data_805D594C != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorAncient08__data_805D594C);
            TODoorAncient08__data_805D594C = NULL;
        }
    }
    if ((u32) lbl_805D5948 != 0U) {
        fn_8001FE7C((void*)lbl_805D5948, 1);
        lbl_805D5948 = 0U;
    }
}

}
