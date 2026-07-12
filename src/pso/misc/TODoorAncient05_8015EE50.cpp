#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset__15TODoorAncient05Fv(void);
M2C_UNK free__11TOBoss4RockFUi(void*);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TObjPlayer__sub_801E483C(s32);

extern void *lbl_805D5918;
extern void *TODoorAncient05__data_805D591C;
extern void *lbl_805D5920;

void reset__15TODoorAncient05Fv(void) {
    if (lbl_805D5920 != NULL) {
        free__11TOBoss4RockFUi(lbl_805D5920);
        lbl_805D5920 = NULL;
    }
    if (TODoorAncient05__data_805D591C != NULL) {
        TObjPlayer__sub_801E483C(M2C_FIELD(TODoorAncient05__data_805D591C, s32 *, 4));
        if (TODoorAncient05__data_805D591C != NULL) {
            free__11TOBoss4RockFUi(TODoorAncient05__data_805D591C);
            TODoorAncient05__data_805D591C = NULL;
        }
    }
    if (lbl_805D5918 != NULL) {
        TLobby__sub_8001FE7C(lbl_805D5918, 1);
        lbl_805D5918 = NULL;
    }
}

}
