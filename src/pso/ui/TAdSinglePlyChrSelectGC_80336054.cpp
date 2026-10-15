#include "types.h"

extern "C" {

int TAdSinglePlyChrSelectGC__sub_8033605C(void);
int get_data__23TAdSinglePlyChrSelectGCFv(void);
s32 start_offline_seq__23TAdSinglePlyChrSelectGCFPv(void *arg0);
u32 __nw__7TObjectFUl(s32);
s32 init__22THunterGuildSeqOfflineFPvPvPv(s32, s32, s32 *);

    extern int lobby_game_mode_state;
int get_data__23TAdSinglePlyChrSelectGCFv(void) {  return lobby_game_mode_state; }

int TAdSinglePlyChrSelectGC__sub_8033605C(void) { return 0; }

extern s32 queue_destruction_and_cleanup__6TLobbyFv[];
extern s32 tl_fade;

s32 start_offline_seq__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 *temp_r3;
    if (!(*(s32 *)((s8 *)arg0 + 0x3C) & 2)) {
        temp_r3 = (s32 *) __nw__7TObjectFUl(0x28);
        if (temp_r3 != NULL) {
            init__22THunterGuildSeqOfflineFPvPvPv((s32) temp_r3, tl_fade, queue_destruction_and_cleanup__6TLobbyFv);
        }
        *(s32 *)((s8 *)arg0 + 0x3C) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C) | 2);
    }
    return *(s32 *)((s8 *)arg0 + 0x3C) & 4;
}

}
