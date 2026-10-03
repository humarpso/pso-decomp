#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802A1154_main_task {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
s32 release_all_players_control_lock();
s32 foreach_player__10TObjPlayerFv(void *);
extern RecoveredGlobal_802A1154_main_task TObjPlayer__sub_801BEABC;
void TObjPlayer__sub_801BA42C(void);
}

extern "C" {

typedef char RecoveredGlobal_802A1154_main_task_size[sizeof(RecoveredGlobal_802A1154_main_task) == 0x34 ? 1 : -1];
void TObjPlayer__sub_801BA42C(void) {
    foreach_player__10TObjPlayerFv((void *) (&TObjPlayer__sub_801BEABC.value));
    release_all_players_control_lock();
}

}
