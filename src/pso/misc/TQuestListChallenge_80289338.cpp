#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void reset_globals__19TQuestListChallengeFv(void);
void reset_globals2__19TQuestListChallengeFv(void);

extern s32 lbl_805D64A8;
extern s32 lbl_805D64AC;
extern s32 TQuestListChallenge__data_805D64B0;

void reset_globals__19TQuestListChallengeFv(void) {
    lbl_805D64A8 = 0;
    lbl_805D64AC = 0;
    TQuestListChallenge__data_805D64B0 = 0;
}

extern s32 lbl_805D64A8;
extern s32 lbl_805D64AC;
extern s32 TQuestListChallenge__data_805D64B0;

void reset_globals2__19TQuestListChallengeFv(void) {
    lbl_805D64A8 = 0;
    lbl_805D64AC = 0;
    TQuestListChallenge__data_805D64B0 = 0;
}

}
