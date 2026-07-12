#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_resources__15TODoorAncient03Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_801E483C(s32);

extern u32 lbl_805D5908;
extern void *TODoorAncient03__data_805D590C;

void free_resources__15TODoorAncient03Fv(void) {
    if ((void *) TODoorAncient03__data_805D590C != NULL) {
        TObjPlayer__sub_801E483C(M2C_FIELD(TODoorAncient03__data_805D590C, s32 *, 4));
        if ((void *) TODoorAncient03__data_805D590C != NULL) {
            free__11TOBoss4RockFUi((void*)TODoorAncient03__data_805D590C);
            TODoorAncient03__data_805D590C = NULL;
        }
    }
    if ((u32) lbl_805D5908 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5908, 1);
        lbl_805D5908 = 0U;
    }
}

}
