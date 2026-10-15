#include "types.h"

struct RecoveredGlobal_8019608C_lbl_8050DD08 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
void send_warp_toward_player__10TNpcPlayerFUsPv(u16, void *);
extern RecoveredGlobal_8019608C_lbl_8050DD08 lbl_8050DD08;
extern s32 quest_collision_warp_pending;
void fn_8019608C(void);
}

extern "C" {

typedef char RecoveredGlobal_8019608C_lbl_8050DD08_size[sizeof(RecoveredGlobal_8019608C_lbl_8050DD08) == 0x10 ? 1 : -1];
void fn_8019608C(void) {
    if ((s32) quest_collision_warp_pending != 0) {
        send_warp_toward_player__10TNpcPlayerFUsPv(1U, &lbl_8050DD08.value);
    }
}

}
