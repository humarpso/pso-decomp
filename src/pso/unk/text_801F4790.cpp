#include "types.h"
extern "C" {
extern u8 lbl_805127F8[4][128];
extern s32 lbl_805D5550;
void fn_801F4790(s32 flag);
}

extern "C" {

void fn_801F4790(s32 flag) {
    s32 v;
    s32 bit;
    s32 byteIdx;
    if (flag < 0 || flag > 0x3FF) return;
    if (lbl_805D5550 < 0 || lbl_805D5550 >= 4) return;
    v = flag + 1;
    byteIdx = v / 8;
    bit = v % 8;
    if (bit > 0) {
        lbl_805127F8[lbl_805D5550][byteIdx] |= 1 << (8 - bit);
        return;
    }
    lbl_805127F8[lbl_805D5550][byteIdx - 1] |= 1;
}

}
