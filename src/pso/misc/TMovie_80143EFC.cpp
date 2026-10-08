#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
bool is_playback_finished__6TMovieFPv(u8 *arg0);
}

extern "C" {

bool is_playback_finished__6TMovieFPv(u8 *arg0) {
    void **temp_r3;
    u8 *temp_r4;
    temp_r3 = (void **)(M2C_FIELD(arg0, void ***, 4));
    temp_r4 = (u8 *)(*temp_r3);
    return M2C_FIELD(temp_r4, s32 (**)(void **, void *), 0x20)(temp_r3, temp_r4) == 3;
}

}
