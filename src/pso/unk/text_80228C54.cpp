#include "types.h"
extern "C" {
s32 fn_80228C54(s32 c);
}

extern "C" {

s32 fn_80228C54(s32 c) {
    if (((s8)c >= 0x61 && (s8)c <= 0x7a) || ((s8)c >= 0xc0 && (s8)c <= 0xff)) {
        return c - 0x20;
    }
    return c;
}

}
