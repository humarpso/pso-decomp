#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_com_card__12TQuestThreadFPv(void *arg0);
s32 TWindowSubComCard__sub_8007341C(void *);
s32 TWindowSubComCard__sub_80265BF8(u32);

s32 update_com_card__12TQuestThreadFPv(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x1C) != NULL) {
        if (TWindowSubComCard__sub_8007341C(M2C_FIELD(arg0, void **, 0x1C)) != 0) {
            return TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x1C));
        }
    }
    return -1;
}

}
