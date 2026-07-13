#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801E67D0(void);
M2C_UNK append_string(void *);
u32 get_card_window__17TWindowSubComCardFUi(int);

extern M2C_UNK lbl_80449C6C[];

void TLobby__sub_801E67D0(void) {
    u32 temp_r3;

    temp_r3 = get_card_window__17TWindowSubComCardFUi((int) (0xFFFF));
    if (temp_r3 != 0U) {
        append_string((void *) (temp_r3 + 0x2254));
        return;
    }
    append_string((void *) (lbl_80449C6C));
}

}
