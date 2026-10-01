#include "types.h"
struct Card_803820C0 { u8 pad[0x14]; s32 latency; u8 pad18[0x80 - 0x18]; void *workArea; u8 pad84[0x110 - 0x84]; };

extern "C" {
s32 EXIDeselect(s32);
s32 EXISelect(s32, u32, u32);
s32 EXIImmEx(s32, void *, s32, u32);
void *memset(void *, int, u32);
extern Card_803820C0 lbl_80544980[];
s32 GXSetIndTexCoordScale(s32 chan, u32 data, void *rbuf, s32 rlen, int mode);
}

extern "C" {

s32 GXSetIndTexCoordScale(s32 chan, u32 data, void *rbuf, s32 rlen, int mode) {
    Card_803820C0 *card;
    BOOL err;
    u8 cmd[5];
    card = &lbl_80544980[chan];
    if (!EXISelect(chan, 0, 4))
        return -3;
    data &= 0xfffff000;
    memset(cmd, 0, 5);
    cmd[0] = 0x52;
    if (mode == 0) {
        cmd[1] = (u8)((data >> 29) & 0x03);
        cmd[2] = (u8)((data >> 21) & 0xff);
        cmd[3] = (u8)((data >> 19) & 0x03);
        cmd[4] = (u8)((data >> 12) & 0x7f);
    } else {
        cmd[1] = (u8)((data & 0xff000000) >> 24);
        cmd[2] = (u8)((data & 0x00ff0000) >> 16);
    }
    err = FALSE;
    err |= (u32)__cntlzw(EXIImmEx(chan, cmd, 5, 1)) >> 5;
    err |= (u32)__cntlzw(EXIImmEx(chan, (u8 *)card->workArea + 0x200, card->latency, 1)) >> 5;
    err |= (u32)__cntlzw(EXIImmEx(chan, rbuf, rlen, 0)) >> 5;
    err |= (u32)__cntlzw(EXIDeselect(chan)) >> 5;
    return err ? -3 : 0;
}

}
