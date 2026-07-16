#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TTecLuker__sub_8022C008(u8 *arg0);
M2C_UNK TEffStarLightChild__sub_80141FBC(int, void *, int, f32);

void TTecLuker__sub_8022C008(u8 *arg0) {
    s32 temp_r3;

    temp_r3 = (long) (arg0 + 0x20);
    TEffStarLightChild__sub_80141FBC((int) (temp_r3), (void *) (arg0 + 0x7C), (int) (temp_r3), (f32) (M2C_FIELD(arg0, f32 *, 0x64)));
}

}
