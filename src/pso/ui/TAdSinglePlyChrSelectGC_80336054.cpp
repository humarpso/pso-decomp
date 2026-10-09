#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TAdSinglePlyChrSelectGC__sub_8033605C(void);
int get_data__23TAdSinglePlyChrSelectGCFv(void);
s32 start_offline_seq__23TAdSinglePlyChrSelectGCFPv(void *arg0);
u32 __nw__7TObjectFUl(M2C_UNK);
M2C_UNK init__22THunterGuildSeqOfflineFPvPvPv(s32, M2C_UNK, M2C_UNK *);

    extern int lobby_game_mode_state;
int get_data__23TAdSinglePlyChrSelectGCFv(void) {  return lobby_game_mode_state; }

int TAdSinglePlyChrSelectGC__sub_8033605C(void) { return 0; }

extern M2C_UNK queue_destruction_and_cleanup__6TLobbyFv[];
extern s32 tl_fade;

s32 start_offline_seq__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    M2C_UNK *temp_r3;
    if (!(M2C_FIELD(arg0, s32 *, 0x3C) & 2)) {
        temp_r3 = (M2C_UNK *) __nw__7TObjectFUl(0x28);
        if (temp_r3 != NULL) {
            init__22THunterGuildSeqOfflineFPvPvPv((s32) temp_r3, tl_fade, queue_destruction_and_cleanup__6TLobbyFv);
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (M2C_FIELD(arg0, s32 *, 0x3C) | 2);
    }
    return M2C_FIELD(arg0, s32 *, 0x3C) & 4;
}

}
