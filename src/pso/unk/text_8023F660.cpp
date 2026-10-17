#include "types.h"
#include "pso/unk/text_8023F660.h"

extern "C" {
s32 sndStreamMixParameter(u32, u8, u8, u8, u8);
s32 TLobby__sub_803C9CB0(s32);
s32 TLobby__sub_803CBE64(s32, s32);
void fn_8023F660(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    if (arg4 < 0) {
        arg4 = 0;
    }
    if (arg4 > 0x7F) {
        arg4 = 0x7F;
    }
    if (arg2 < 0) {
        arg2 = 0;
    }
    if (arg2 > 0x7F) {
        arg2 = 0x7F;
    }
    if (arg3 < 0) {
        arg3 = 0;
    }
    if (arg3 > 0x7F) {
        arg3 = 0x7F;
    }
    if (arg5 < 0) {
        arg5 = 0;
    }
    if (arg5 > 0x7F) {
        arg5 = 0x7F;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0x2A0) != 2) {
        arg4 = 0;
    }
    if (TLobby__sub_803C9CB0(arg1) == 3) {
        sndStreamMixParameter(TLobby__sub_803CBE64(arg1, 0), (u8) arg2, (u8) arg3, (u8) arg4, (u8) arg5);
    }
}

}
