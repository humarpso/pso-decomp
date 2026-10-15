#include "types.h"

extern "C" {

void append_swapped_u32__6TLobbyFPv(s32 *arg0);
void append_entity_entry__6TLobbyFi(s32 arg0);
s32 bswap_32__FPUl(s32 *);
s32 move_data__6TLobbyFv(s32, s32 *, s32);

extern u32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void append_swapped_u32__6TLobbyFPv(s32 *arg0) {
    s32 sp8;

    if ((u32) lbl_805D60C4 != 0U) {
        sp8 = *arg0;
        bswap_32__FPUl(&sp8);
        move_data__6TLobbyFv((s32)(lbl_805D60C4 + lbl_805D60C8), (s32 *)(&sp8), (s32)(4));
        lbl_805D60C8 += 4;
    }
}

extern u32 lbl_805D60C4;
extern s32 lbl_805D60C8;

void append_entity_entry__6TLobbyFi(s32 arg0) {
    if ((u32) lbl_805D60C4 != 0U) {
        move_data__6TLobbyFv((s32)(lbl_805D60C4 + lbl_805D60C8), (s32 *)(arg0), (s32)(1));
        lbl_805D60C8 += 1;
    }
}

}
