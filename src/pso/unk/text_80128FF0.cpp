#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u8 * init_event_callbacks__13TUnk_804A403CFv(void *, s32, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
}

extern "C" {

u8 *TObjPlayer::create_event_callbacks_state(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x218));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_event_callbacks__13TUnk_804A403CFv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"

#include "types.h"

}
