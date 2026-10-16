#include "types.h"

extern "C" {
u8 * heaven_punisher_ct(void *, s32, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_heaven_punisher(s32 arg0);
}

extern "C" {

u8 *create_heaven_punisher(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x230));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(heaven_punisher_ct(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"

#include "types.h"

}
