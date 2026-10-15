#include "types.h"
#include "pso/object/TObjAreaWarp.h"

extern "C" {

u32 get_player_by_client_id(s32);
u16 obj_getField1c();

u16 TObjAreaWarp::find_active_player() {
    u32 temp_r31;
    s32 var_r30;

    if ((s32) *(s32 *)((s8 *)this + 0x14) != 0) {
        temp_r31 = *(s32 *)((s8 *)this + 0x1C) & *(s32 *)((s8 *)this + 0x20);
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
