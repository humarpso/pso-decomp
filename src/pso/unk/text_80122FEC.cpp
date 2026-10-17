#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u8 * enter_state_513__13TUnk_804A1570Fv(void *, s32, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *TObjPlayer::create_state_513(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x204));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(enter_state_513__13TUnk_804A1570Fv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

}
