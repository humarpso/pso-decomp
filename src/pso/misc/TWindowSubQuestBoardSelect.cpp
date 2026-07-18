#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_cancel__26TWindowSubQuestBoardSelectFPv(void *arg0);
void handle_decide__26TWindowSubQuestBoardSelectFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_open__20TWindowSubQuestBoardFPv();
s32 is_shortcut_active__18TWindowSubShortCutFPv();

void handle_cancel__26TWindowSubQuestBoardSelectFPv(void *arg0) {
    if (is_open__20TWindowSubQuestBoardFPv() == 0) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
    }
}

void handle_decide__26TWindowSubQuestBoardSelectFPv(void *arg0) {
    if (is_shortcut_active__18TWindowSubShortCutFPv() == 0) {
        TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
    }
}

}
