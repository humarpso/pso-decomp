#include "types.h"
#include "pso/unk/text_802A0A30.h"
#include "pso/TObjWarpString.h"

extern "C" {
void fn_802A0A30(s32 arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    ((TObjWarpString *)arg4)->draw_string((s32)((void *) (arg3)), (f32)((f32) (*(f32 *)((s8 *)arg1 + 0))), (f32)((f32) (*(f32 *)((s8 *)arg1 + 4))));
}

}
