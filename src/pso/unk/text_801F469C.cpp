#include "types.h"
extern "C" {
extern u8 quest_story_flags_by_difficulty[4][128];
void set_story_flag_in_bank(s32 n, s32 flag);
}

extern "C" {

void set_story_flag_in_bank(s32 n, s32 flag) {
    s32 v;
    s32 bit;
    s32 byteIdx;
    if (flag < 0 || flag > 0x3FF) return;
    if (n < 0 || n >= 4) return;
    v = flag + 1;
    byteIdx = v / 8;
    bit = v % 8;
    if (bit > 0) {
        quest_story_flags_by_difficulty[n][byteIdx] |= 1 << (8 - bit);
        return;
    }
    quest_story_flags_by_difficulty[n][byteIdx - 1] |= 1;
}

}
