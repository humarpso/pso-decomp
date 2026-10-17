#include "types.h"
#include "pso/unk/text_8012FCF8.h"

extern "C" {
u8 * twin_psychogun_ct(void *, s32, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_twin_psychogun(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x210));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(twin_psychogun_ct(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}

}
