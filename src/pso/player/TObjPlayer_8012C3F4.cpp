#include "types.h"

extern "C" {

s32 TObjEneDellBiter__sub_80087350(u32, s32);
s32 update_rico_ring__10TObjPlayerFUi(u32);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_8012C4E0(void);

void send_trade_action__10TObjPlayerFUiUiUiUi(u32 arg0, u32 arg1, u32 arg2, u32 arg3) {
    if ((arg1 != 0U) && (arg3 != 0U)) {
        update_rico_ring__10TObjPlayerFUi(arg1);
        TObjEneDellBiter__sub_80087350(arg3, 0x45);
        TBoss3Volopt__sub_8022675C(0x4001C112, 0, 0, 0);
    }
}

}
