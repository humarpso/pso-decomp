#include "types.h"

extern "C" {
void *fn_80350588(void *arg0, void *arg1, void *arg2);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *fn_803505C4(u8 *arg0);
u8 *fn_803505C4(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x104));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)fn_80350588((void *)(temp_r3), (void *)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

}
