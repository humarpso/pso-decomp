#include "types.h"
struct Pair_80219F64 { s32 a; s32 b; };

extern "C" {
s32 get_instance__6TLobbyFv(void);
s32 get_story_flag(s32);
extern Pair_80219F64 lbl_8044BF58[];
extern Pair_80219F64 lbl_8044C028[];
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
            if (get_story_flag(lbl_8044BF58[i].b) == 0) {
                return 0;
            }
        } else {
            if (get_story_flag(lbl_8044C028[i].b) == 0) {
                return 0;
            }
        }
    }
    return 1;
}

}
