#include "types.h"

extern "C" {

u16 find_active_player__12TObjAreaWarpFPv(void *arg0);
u32 get_player_by_client_id(s32);
u16 obj_getField1c();

u16 find_active_player__12TObjAreaWarpFPv(void *arg0) {
    u32 temp_r31;
    s32 var_r30;

    if ((s32) *(s32 *)((s8 *)arg0 + 0x14) != 0) {
        temp_r31 = *(s32 *)((s8 *)arg0 + 0x1C) & *(s32 *)((s8 *)arg0 + 0x20);
        var_r30 = 0;
loop_2:
        if (!((temp_r31 >> var_r30) & 1) && (get_player_by_client_id(var_r30) != 0U)) {
            return (u16) obj_getField1c();
        }
        var_r30 += 1;
        if (var_r30 >= 4) {
            goto block_6;
        }
        goto loop_2;
    }
block_6:
    return 0U;
}

}
