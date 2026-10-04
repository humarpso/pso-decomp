#include "musyx/runtime/musyx_runtime_b.h"

#define synthInfo_voiceNum (((u8 *)lbl_80557348)[0x210])
#define synthVoice lbl_805D73B0
#define CLAMP(value, min, max) ((value) > (max) ? (max) : (value) < (min) ? (min) : (value))
#define CLAMP_INV(value, min, max) ((value) < (min) ? (min) : (value) > (max) ? (max) : (value))
#define MIN(a, b) ((a) > (b) ? (b) : (a))
extern "C" {

u16 TLobby__sub_803BC91C(void) {
    lbl_805D4630 = lbl_805D4630 * 0xA8351D63;
    return lbl_805D4630 >> 6;
}

s16 TLobby__sub_803BC93C(s32 arg0) {
    s16 *tbl = lbl_804F7168;
    u32 t = arg0 & 0xFFF;
    if (t < 0x400U) {
        return tbl[t];
    }
    if (t < 0x800U) {
        return tbl[0x3FF - (t & 0x3FF)];
    }
    if (t < 0xC00U) {
        return -tbl[t & 0x3FF];
    }
    return -tbl[0x3FF - (t & 0x3FF)];
}

void *search_sound_sample_directory(void *key, void *base, s32 num, s32 len, s32 (*cmp)(void *, void *)) {
    long l;
    long r;
    long m;
    long c;
    void *ptr;
    if (num != 0) {
        l = 1;
        r = num;
        do {
            if ((c = cmp(key, (ptr = (void *)((u32)base + len * ((m = (l + r) >> 1) - 1))))) == 0) {
                return ptr;
            }
            if (c < 0) {
                r = m - 1;
            } else {
                l = m + 1;
            }
        } while (l <= r);
    }
    return 0;
}

void shift_left_8__6TLobbyFPv(s32 *arg0) {
    *arg0 <<= 8;
}

void TLobby__sub_803BCA50(u32 *arg0, s32 arg1) {
    M2C_FIELD(arg0, u32 *, 0) = (u32) (((u32) (M2C_FIELD(arg0, u32 *, 0) << 0x10) / TLobby__sub_803A6F18((void *) (arg1))) * 0x3E8) >> 5U;
}

u32 shift_right_8__6TLobbyFUi(u32 arg0) {
    return arg0 >> 8U;
}

}
