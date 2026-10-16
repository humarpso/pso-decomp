#include "types.h"

extern "C" {
u8 * init_effect_state__13TUnk_804A6108Fv(void *, s32, void *);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *TObjPlayer__sub_8012EFAC(u8 *arg0);
}

extern "C" {

u8 *TObjPlayer__sub_8012EFAC(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(init_effect_state__13TUnk_804A6108Fv(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

}
