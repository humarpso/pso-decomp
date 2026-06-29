#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80244A14(void *);
void TQuestListChallenge__sub_80288BE4(void);

void TQuestListChallenge__sub_80288B5C(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        TWindowSubComCard__sub_80244A14(M2C_FIELD(arg0, void **, 0x40));
        M2C_FIELD(arg0, u32 *, 0x40) = 0U;
    }
}
void TQuestListChallenge__sub_80288BE4(void) {  }

}
