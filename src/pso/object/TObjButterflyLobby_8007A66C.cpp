#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjButterflyLobby__sub_8007A66C(void);
void free__11TOBoss4RockFUi(void*);

extern u32 lbl_805D4E6C;

void TObjButterflyLobby__sub_8007A66C(void) {
    if ((u32) lbl_805D4E6C != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D4E6C);
        lbl_805D4E6C = 0U;
    }
}

}
