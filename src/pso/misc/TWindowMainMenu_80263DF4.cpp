#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_keyboard_card_state__15TWindowMainMenuFPv(void *arg0);
M2C_UNK TWindowMainMenu__sub_80263DBC(void *);
s32 test_keyboard_card_flag4(s32);

void update_keyboard_card_state__15TWindowMainMenuFPv(void *arg0) {
    if (test_keyboard_card_flag4(M2C_FIELD(arg0, s32 *, 0x54)) != 0) {
        M2C_FIELD(arg0, s16 *, 0x52) = 0;
        return;
    }
    TWindowMainMenu__sub_80263DBC(arg0);
}

}
