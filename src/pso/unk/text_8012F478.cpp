#include "types.h"
#include "pso/unk/text_8012F478.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_sword_weapon(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1FC));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((TObjPlayer *)temp_r3)->init_from_item((void *)tl_05, (void *)arg0));
        }
        return var_r0;
    }
    return NULL;
}

}
