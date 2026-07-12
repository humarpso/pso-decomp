#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup__15TODoorAncient07Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK fn_801E483C(s32);

extern void *lbl_805D5938;
extern void *TODoorAncient07__data_805D593C;
extern void *lbl_805D5940;

void cleanup__15TODoorAncient07Fv(void) {
    if (lbl_805D5940 != NULL) {
        free__11TOBoss4RockFUi(lbl_805D5940);
        lbl_805D5940 = NULL;
    }
    if (TODoorAncient07__data_805D593C != NULL) {
        fn_801E483C(M2C_FIELD(TODoorAncient07__data_805D593C, s32 *, 4));
        fn_801E483C(M2C_FIELD(TODoorAncient07__data_805D593C, s32 *, 0));
        if (TODoorAncient07__data_805D593C != NULL) {
            free__11TOBoss4RockFUi(TODoorAncient07__data_805D593C);
            TODoorAncient07__data_805D593C = NULL;
        }
    }
    if (lbl_805D5938 != NULL) {
        TLobby__sub_8001FE7C(lbl_805D5938, 1);
        lbl_805D5938 = NULL;
    }
}

}
