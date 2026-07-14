#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 update_selected_item__17TWindowOptionCtrlFPv(s32);
s32 TWindowSubComCard__sub_80265BF8(s32);
M2C_UNK set_board_flags__20TWindowSubQuestBoardFii(s32, s32);
M2C_UNK set_card_window_flags__20TWindowSubQuestBoardFii(s32, s32);
M2C_UNK clear_card_window_flags__20TWindowSubQuestBoardFii(s32, s32);
M2C_UNK TWindowSubQuestBoard__sub_8027CF50(s32, s32);
M2C_UNK set_card_flags_scaled__20TWindowSubQuestBoardFii(s32, s32);
M2C_UNK set_card_flags_direct__20TWindowSubQuestBoardFPvi(s32, s32);

void update_quest_board_card_flags(void *arg0) {
    s32 temp_r31;
    s32 temp_r4;

    temp_r31 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x28));
    temp_r4 = update_selected_item__17TWindowOptionCtrlFPv(M2C_FIELD(arg0, s32 *, 0x2C));
    switch (temp_r31) {
    case 0:
        set_card_flags_direct__20TWindowSubQuestBoardFPvi(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 1:
        set_card_flags_scaled__20TWindowSubQuestBoardFii(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 2:
        TWindowSubQuestBoard__sub_8027CF50(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 4:
        clear_card_window_flags__20TWindowSubQuestBoardFii(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 3:
        set_card_window_flags__20TWindowSubQuestBoardFii(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    case 5:
        set_board_flags__20TWindowSubQuestBoardFii(M2C_FIELD(arg0, s32 *, 0x20), temp_r4);
        return;
    }
}

}
