#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 tick_com_card__12TQuestThreadFPv(void *arg0);
s32 update_board_card__12TQuestThreadFPv(void *arg0);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 TWindowSubComCard__sub_80265BF8(void *);

s32 tick_com_card__12TQuestThreadFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x60);
    if (temp_r3 != NULL) {
        return TWindowSubComCard__sub_80265BF8(temp_r3);
    }
    return -1;
}

s32 update_board_card__12TQuestThreadFPv(void *arg0) {
    void *temp_r3 = M2C_FIELD(arg0, void **, 0x60);
    if (temp_r3 != NULL) {
        return is_visible__17TWindowSubComCardFPv(temp_r3);
    }
    return 0;
}

}
