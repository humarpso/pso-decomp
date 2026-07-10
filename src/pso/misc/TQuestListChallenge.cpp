#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_windows__19TQuestListChallengeFPv(void *arg0);
void TQuestListChallenge__sub_80288BE4(void);
void TQuestListChallenge__sub_80288BE8(void *arg0);
void TQuestListChallenge__sub_80288C30(void *arg0);
s32 TWindow__close(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void close_windows__19TQuestListChallengeFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x38) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x38));
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x40));
        M2C_FIELD(arg0, u32 *, 0x40) = 0U;
    }
}
void TQuestListChallenge__sub_80288BE4(void) {  }

void TQuestListChallenge__sub_80288BE8(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x2C);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x30));
    }
    queue_destruction__7TObjectFv(arg0);
}

void TQuestListChallenge__sub_80288C30(void *arg0) {
    M2C_UNK (*temp_r12)(s32);

    temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x28);
    if (temp_r12 != NULL) {
        temp_r12(M2C_FIELD(arg0, s32 *, 0x30));
    }
    queue_destruction__7TObjectFv(arg0);
}

}
