#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup_refs__14TOKeyAncient03Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_801E483C(s32);

extern u32 lbl_805D5A10;
extern void *TOKeyAncient03__data_805D5A14;

void cleanup_refs__14TOKeyAncient03Fv(void) {
    if ((void *) TOKeyAncient03__data_805D5A14 != NULL) {
        TObjPlayer__sub_801E483C(M2C_FIELD(TOKeyAncient03__data_805D5A14, s32 *, 4));
        if ((void *) TOKeyAncient03__data_805D5A14 != NULL) {
            free__11TOBoss4RockFUi((void*)TOKeyAncient03__data_805D5A14);
            TOKeyAncient03__data_805D5A14 = NULL;
        }
    }
    if ((u32) lbl_805D5A10 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A10, 1);
        lbl_805D5A10 = 0U;
    }
}

}
