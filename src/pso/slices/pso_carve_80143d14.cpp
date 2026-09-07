#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK DCFlushRangeNoSync(s32, s32);
s32 TObjPlayer__sub_800845F8();
s32 GXGetTexBufferSize(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK (*lbl_805D6BB8)(s32, s32, s32);
extern M2C_UNK (*lbl_805D6BC4)(s32, M2C_UNK, M2C_UNK);

void flush_framebuffer(s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r31;

    lbl_805D6BC4(arg2, 0x280, 0x1E0);
    lbl_805D6BB8(arg2, arg3, TObjPlayer__sub_800845F8());
    temp_r31 = GXGetTexBufferSize(0x280, 0x1E0, 6, 0, 0);
    DCFlushRangeNoSync(TObjPlayer__sub_800845F8(), temp_r31);
}

}
