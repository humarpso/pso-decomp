#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_next__26TWindowSubQuestBoardSelectFPv(void *arg0);
M2C_UNK fn_8027D230(void *);
s32 get_slot_flag__26TWindowSubQuestBoardSelectFic(void *, u8);
s32 is_shortcut_active__18TWindowSubShortCutFPv();

void select_next__26TWindowSubQuestBoardSelectFPv(void *arg0) {
    u8 temp_r3;

    if ((is_shortcut_active__18TWindowSubShortCutFPv() == 0) && (get_slot_flag__26TWindowSubQuestBoardSelectFic(arg0, M2C_FIELD(arg0, u8 *, 0x61)) == 0)) {
        do {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) + 1);
            temp_r3 = M2C_FIELD(arg0, u8 *, 0x61);
            if ((s8) temp_r3 > 6) {
                M2C_FIELD(arg0, u8 *, 0x61) = (u8) (temp_r3 - 6);
            }
        } while (get_slot_flag__26TWindowSubQuestBoardSelectFic(arg0, M2C_FIELD(arg0, u8 *, 0x61)) == 0);
        fn_8027D230(arg0);
    }
}

}
