#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8019608C_lbl_8050DD08 {
    M2C_UNK value;
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
