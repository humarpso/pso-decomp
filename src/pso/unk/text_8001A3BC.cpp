#include "types.h"
#include "pso/unk/text_8001A3BC.h"

extern "C" {
u8 * __ct__15TAdDrawLineTaskFv(void *, s32, s32, s32);
u8 *__nw__7TObjectFUl(s32);
extern const f32 lbl_805D7DDC;
u8 *fn_8001A3BC(s32 arg0, u8 *arg1, s32 arg2) {
    u8 *temp_r3;
    u8 *var_r0;
    if ((arg1 != NULL) && (lbl_805D7DDC != *(f32 *)((s8 *)arg1 + 0x24))) {
        temp_r3 = (u8 *)(__nw__7TObjectFUl(0xB0));
        var_r0 = temp_r3;
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(__ct__15TAdDrawLineTaskFv(temp_r3, arg0, (s32) arg1, arg2));
        }
        return var_r0;
    }
    return NULL;
}

}
