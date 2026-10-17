#include "types.h"

struct RecoveredGlobal_8036A450_lbl_8047AC1C { s32 value; u8 remaining[0x20]; };
typedef char RecoveredGlobal_8036A450_lbl_8047AC1C_size[sizeof(RecoveredGlobal_8036A450_lbl_8047AC1C) == 0x24 ? 1 : -1];

struct Inst_8036A3CC { u8 pad0[0x1155C]; u32 flags[2]; };

extern "C" {
s32 fn_8036A514(int);
s32 check_flag_index_set(int);
extern RecoveredGlobal_8036A450_lbl_8047AC1C music_sequencer_flag_ids;
void fn_8036A450(s32 arg0);
Inst_8036A3CC *get_instance__23TAdSinglePlyChrSelectGCFv(void);
u32 *fn_8036A3CC(s32 arg0, u32 *mask);

u32 *fn_8036A3CC(s32 arg0, u32 *mask) {
    s32 word;
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 >= 0x31) {
        return 0;
    }
    word = arg0 / 32;
    if (word >= 2) {
        return 0;
    }
    *mask = 1 << (arg0 & 0x1F);
    return &get_instance__23TAdSinglePlyChrSelectGCFv()->flags[word];
}

void fn_8036A450(s32 arg0) {
    s32 temp_r31;
    if ((arg0 >= 0) && (arg0 < 9)) {
        temp_r31 = *(s32 *)((s8 *)(&music_sequencer_flag_ids.value) + (arg0 * 4));
        if (check_flag_index_set((int) (temp_r31)) != 1) {
            fn_8036A514((int) (temp_r31));
        }
    }
}

}
