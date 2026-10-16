#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u8 * init_vtable_and_handlers__13TUnk_804A5150Fv(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
}

extern "C" {

u8 *TObjPlayer::create_handlers_state(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x200));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_vtable_and_handlers__13TUnk_804A5150Fv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

}
