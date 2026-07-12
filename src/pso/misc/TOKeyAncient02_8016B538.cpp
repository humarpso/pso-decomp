#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_static__14TOKeyAncient02Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_801E483C(s32);

extern u32 lbl_805D5A00;
extern s32 lbl_805D5A04;
extern void *lbl_805D5A08;

void free_static__14TOKeyAncient02Fv(void) {
    if ((void *) lbl_805D5A08 != NULL) {
        TObjPlayer__sub_801E483C(M2C_FIELD(lbl_805D5A08, s32 *, 4));
        if ((void *) lbl_805D5A08 != NULL) {
            free__11TOBoss4RockFUi((void*)lbl_805D5A08);
            lbl_805D5A08 = NULL;
        }
    }
    if ((u32) lbl_805D5A00 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5A00, 1);
        lbl_805D5A00 = 0U;
    }
    lbl_805D5A04 = 0;
}

}
