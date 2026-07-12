#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_statics__14TOKeyMachine01Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_801E483C(s32);

extern u32 lbl_805D5A30;
extern s32 *TOKeyMachine01__data_805D5A34;

void free_statics__14TOKeyMachine01Fv(void) {
    if ((s32 *) TOKeyMachine01__data_805D5A34 != NULL) {
        TObjPlayer__sub_801E483C(*TOKeyMachine01__data_805D5A34);
        *TOKeyMachine01__data_805D5A34 = 0;
        if ((s32 *) TOKeyMachine01__data_805D5A34 != NULL) {
            free__11TOBoss4RockFUi((void*)TOKeyMachine01__data_805D5A34);
            TOKeyMachine01__data_805D5A34 = NULL;
        }
    }
    if ((u32) lbl_805D5A30 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A30, 1);
        lbl_805D5A30 = 0U;
    }
}

}
