#include "types.h"

extern "C" {

void copy_header__6TLobbyFPvPv(void *arg0, void *arg1);

void copy_header__6TLobbyFPvPv(void *arg0, void *arg1) {
    *(s32 *)((s8 *)arg0 + 0) = (s32) *(s32 *)((s8 *)arg1 + 0);
    *(u16 *)((s8 *)arg0 + 4) = (u16) *(u16 *)((s8 *)arg1 + 4);
    *(s16 *)((s8 *)arg0 + 6) = (s16) *(s16 *)((s8 *)arg1 + 6);
    *(u8 *)((s8 *)arg0 + 8) = (u8) *(u8 *)((s8 *)arg1 + 8);
    *(u8 *)((s8 *)arg0 + 9) = (u8) *(u8 *)((s8 *)arg1 + 9);
    *(u8 *)((s8 *)arg0 + 0xA) = (u8) *(u8 *)((s8 *)arg1 + 0xA);
    *(u8 *)((s8 *)arg0 + 0xB) = (u8) *(u8 *)((s8 *)arg1 + 0xB);
}

}
