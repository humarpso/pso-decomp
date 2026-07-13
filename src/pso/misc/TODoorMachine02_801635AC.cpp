#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_statics__15TODoorMachine02Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK free_if_valid__10TObjPlayerFi(s32);

extern u32 lbl_805D5978;
extern s32 *lbl_805D597C;

void free_statics__15TODoorMachine02Fv(void) {
    if ((s32 *) lbl_805D597C != NULL) {
        free_if_valid__10TObjPlayerFi(*lbl_805D597C);
        if ((s32 *) lbl_805D597C != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D597C);
            lbl_805D597C = NULL;
        }
    }
    if ((u32) lbl_805D5978 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5978, 1);
        lbl_805D5978 = 0U;
    }
}

}
