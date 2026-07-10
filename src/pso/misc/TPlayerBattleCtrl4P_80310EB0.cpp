#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *arg0, u16 arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_801B5408(u32, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
M2C_UNK request_active_window_close();
M2C_UNK fn_8024ACEC(u32);
M2C_UNK TWindowCtrl__sub_8024AEAC(u32);

void remove_player__19TPlayerBattleCtrl4PFPvUsi(void *arg0, u16 arg1, s32 arg2) {
    u32 id;
    u32 temp;

    id = arg1;
    temp = TPlayerBattleCtrl4P__sub_801BA74C(id);
    if (temp != 0U) {
        TObjPlayer__sub_801B5408(temp, -1);
    }
    if (arg2 != 0) {
        fn_8024ACEC(id);
        request_active_window_close();
        TWindowCtrl__sub_8024AEAC(id);
    }
}

}
