#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 validate_and_set_selection__6TLobbyFPvi(void *arg0, s32 arg1);
M2C_UNK pop_sound_groups__6TLobbyFPvi(void *, M2C_UNK);
M2C_UNK sndVolume(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK lbl_804CD9A8[];

s32 validate_and_set_selection__6TLobbyFPvi(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= 0x16)) {
        return 4;
    }
    if ((arg1 != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x288) == -1)) {
        return 8;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x288) > 0) {
        pop_sound_groups__6TLobbyFPvi(arg0, 0);
    }
    sndVolume(0x7F, 0, 0xFF);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x298) != 1) {
        return 9;
    }
    M2C_FIELD(arg0, s32 *, 0x2B0) = -1;
    M2C_FIELD(arg0, s32 *, 0x2B4) = (s32) lbl_804CD9A8[arg1];
    M2C_FIELD(arg0, s32 *, 0x29C) = arg1;
    return 0;
}

}
