#include "types.h"
struct Pair_80219F64 { s32 a; s32 b; };

extern "C" {
s32 get_instance__6TLobbyFv(void);
s32 get_story_flag(s32);
extern Pair_80219F64 story_quest_flag_pair_table[];
extern Pair_80219F64 story_quest_flag_table[];
s32 are_all_story_quests_complete(void);
}

extern "C" {

s32 are_all_story_quests_complete(void) {
    s32 n;
    s32 i;
    s32 r = get_instance__6TLobbyFv();
    n = 3;
    if (r == 0) {
        n = 0x1A;
    }
    for (i = 0; i < n; i++) {
        if (get_instance__6TLobbyFv() == 0) {
            if (get_story_flag(story_quest_flag_pair_table[i].b) == 0) {
                return 0;
            }
        } else {
            if (get_story_flag(story_quest_flag_table[i].b) == 0) {
                return 0;
            }
        }
    }
    return 1;
}

}
