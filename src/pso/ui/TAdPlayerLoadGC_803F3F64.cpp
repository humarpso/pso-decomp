#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off

extern "C" {
M2C_UNK TAdSinglePlyChrSelectGC__sub_803F47BC();
void TLobby__sub_803F4B2C(s32 arg0);
s32 TLobby__sub_803F4AD8(s32 arg0);
s32 TLobby__sub_803F4AB4(void);
s32 TLobby__sub_803F4B10(s32 arg0);
s32 TLobby__sub_803F4AEC(void);
s32 TLobby__sub_803F4B68(s32 mode);
}

extern "C" {

s32 TAdPlayerLoadGC__sub_803F4B24(void);
s32 TAdPlayerLoadGC__sub_803F4B80(void);
s32 TLobby__sub_803F4AD8(s32 arg0);
s32 TLobby__sub_803F4B10(s32 arg0);

extern s32 lbl_805D79A4;

s32 TLobby__sub_803F4AB4(void) { return TLobby__sub_803F4AD8(4); }

s32 TLobby__sub_803F4AD8(s32 arg0) {
    if (arg0 < 4) {
        lbl_805D79A4 = arg0;
    }
    return lbl_805D79A4;
}

extern s32 lbl_805D79A8;

s32 TLobby__sub_803F4AEC(void) { return TLobby__sub_803F4B10(2); }

s32 TLobby__sub_803F4B10(s32 arg0) {
    if (arg0 < 2) {
        lbl_805D79A8 = arg0;
    }
    return lbl_805D79A8;
}

extern s32 lbl_805D4708;

s32 TAdPlayerLoadGC__sub_803F4B24(void) {
    return lbl_805D4708;
}

void TLobby__sub_803F4B2C(s32 arg0) {
    if (TLobby__sub_803F4AB4() >= 1) {
        lbl_805D4708 = arg0;
        TAdSinglePlyChrSelectGC__sub_803F47BC();
    }
}

#pragma push
#pragma scheduling off
s32 TLobby__sub_803F4B68(s32 mode) {
    s32 n = 0x19D4;
    if (mode == 1) {
        n <<= 1;
    }
    return n;
}
#pragma pop

s32 TAdPlayerLoadGC__sub_803F4B80(void) {
    return 0x8000;
}

}
