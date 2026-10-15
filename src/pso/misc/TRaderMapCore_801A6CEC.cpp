#include "types.h"

extern "C" {

s32 pack_color_bits__13TRaderMapCoreFii(s32 arg1, s32 arg2);
s32 TRaderMapCore__sub_801A6D00(void *arg0, s32 arg1);
s32 pack_flags__13TRaderMapCoreFii(s32 arg1, s32 arg2);
u8 has_flag__13TRaderMapCoreFPv(void *arg0);

s32 pack_color_bits__13TRaderMapCoreFii(s32 arg1, s32 arg2) {
    s32 temp_r3;

    temp_r3 = arg2 | ((arg2 << 0x10) & 0xF00000);
    return temp_r3 | ((temp_r3 << 0x16) & 0x3C000000);
}

s32 TRaderMapCore__sub_801A6D00(void *arg0, s32 arg1) {
    return (arg1 & 0xFFFFFF0F) | ((arg1 << 0x16) & 0x3C000000);
}

s32 pack_flags__13TRaderMapCoreFii(s32 arg1, s32 arg2) {
    return (arg2 & 0xFF0FFFFF) | ((arg2 << 0x16) & 0x3C000000);
}

u8 has_flag__13TRaderMapCoreFPv(void *arg0) {
    return (u8) ((*(s32 *)((s8 *)arg0 + 4) & ((s32 (*)())pack_flags__13TRaderMapCoreFii)()) != 0);
}

}
