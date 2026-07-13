#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_rocks__15TODoorAncient09Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5950;
extern void *TODoorAncient09__data_805D5954;

void free_rocks__15TODoorAncient09Fv(void) {
    if ((void *) TODoorAncient09__data_805D5954 != NULL) {
        free_if_valid__10TObjPlayerFi(M2C_FIELD(TODoorAncient09__data_805D5954, s32 *, 4));
        if ((void *) TODoorAncient09__data_805D5954 != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorAncient09__data_805D5954);
            TODoorAncient09__data_805D5954 = NULL;
        }
    }
    if ((u32) lbl_805D5950 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5950, 1);
        lbl_805D5950 = 0U;
    }
}

}
