#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u8 * init_state_35__13TUnk_804A69DCFv(void *, s32, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *TObjPlayer::create_state_35_alt(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x214));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_state_35__13TUnk_804A69DCFv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

}
