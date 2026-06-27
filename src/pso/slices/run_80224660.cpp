#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_80224660(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 5)) {
        return 0;
    }
    if ((arg0 >= 6) && (arg0 <= 0xA)) {
        return 1;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x11)) {
        return 2;
    }
    if ((arg0 >= 0x12) && (arg0 <= 0x19)) {
        return 3;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x23)) {
        return 4;
    }
    if ((arg0 >= 0x24) && (arg0 <= 0x2D)) {
        return 5;
    }
    if ((arg0 >= 0x2E) && (arg0 <= 0x3C)) {
        return 6;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x4B)) {
        return 7;
    }
    if ((arg0 >= 0x4C) && (arg0 <= 0x64)) {
        return 8;
    }
    if (arg0 >= 0x65) {
        return 8;
    }
    return -1;
}

s32 fn_80224750(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 3)) {
        return 0;
    }
    if ((arg0 >= 4) && (arg0 <= 0xA)) {
        return 1;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x11)) {
        return 2;
    }
    if ((arg0 >= 0x12) && (arg0 <= 0x19)) {
        return 3;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x23)) {
        return 4;
    }
    if ((arg0 >= 0x24) && (arg0 <= 0x2D)) {
        return 5;
    }
    if ((arg0 >= 0x2E) && (arg0 <= 0x3C)) {
        return 6;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x4B)) {
        return 7;
    }
    if ((arg0 >= 0x4C) && (arg0 <= 0x64)) {
        return 8;
    }
    if (arg0 >= 0x65) {
        return 8;
    }
    return -1;
}

s32 fn_80224840(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 0xA)) {
        return 0;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x11)) {
        return 1;
    }
    if ((arg0 >= 0x12) && (arg0 <= 0x19)) {
        return 2;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x23)) {
        return 3;
    }
    if ((arg0 >= 0x24) && (arg0 <= 0x2D)) {
        return 4;
    }
    if ((arg0 >= 0x2E) && (arg0 <= 0x3C)) {
        return 5;
    }
    if ((arg0 >= 0x3D) && (arg0 <= 0x4B)) {
        return 6;
    }
    if ((arg0 >= 0x4C) && (arg0 <= 0x64)) {
        return 7;
    }
    if (arg0 >= 0x65) {
        return 7;
    }
    return -1;
}

s32 fn_80224918(s32 arg0) {
    if ((arg0 >= 1) && (arg0 <= 3)) {
        return 0;
    }
    if ((arg0 >= 4) && (arg0 <= 0xA)) {
        return 1;
    }
    if ((arg0 >= 0xB) && (arg0 <= 0x19)) {
        return 2;
    }
    if ((arg0 >= 0x1A) && (arg0 <= 0x28)) {
        return 3;
    }
    if ((arg0 >= 0x29) && (arg0 <= 0x37)) {
        return 4;
    }
    if ((arg0 >= 0x38) && (arg0 <= 0x64)) {
        return 5;
    }
    if (arg0 >= 0x65) {
        return 5;
    }
    return -1;
}

}
