#include "types.h"

f64 func_800317BC(f64 a, f64 b) {
    union { f64 d; u32 w[2]; } ua, ub;
    ua.d = a;
    ub.d = b;
    ua.w[0] = (ub.w[0] & 0x80000000u) | (ua.w[0] & 0x7FFFFFFFu);
    return ua.d;
}

extern f32 glob_8003EC58;

void func_80035904(u32 value) {
    glob_8003EC58 = (f32)(u16)value;
}

void func_80037FA8(s8* data) {
    s32 val;
    val = data[2];
    if (val > 89) {
        data[2] = 89;
    } else if (val < -89) {
        data[2] = -89;
    }
    val = data[3];
    if (val > 89) {
        data[3] = 89;
    } else if (val < -89) {
        data[3] = -89;
    }
}
