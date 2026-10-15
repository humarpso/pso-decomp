#include "types.h"
#include "pso/misc/TLobby.h"

extern "C" {

void TLobby__sub_803CE544(u32 arg0, s32 arg1);
s32 set_scroll_position__6TLobbyFPvi(int, void *);
s32 init_stream_position__6TLobbyFPv(int);
s32 set_scroll_offset__6TLobbyFPvi(int, int);
s32 get_entry_pair__6TLobbyFlPlPl(int, int, void *, void *);
s32 get_scroll_offset__6TLobbyFv(int);
s32 update_scroll_impl__6TLobbyFv();
s32 TLobby__sub_803CE220();

void TLobby::update_scroll() {
    u8 *arg0 = (u8 *)this;
    s32 spC;
    s32 sp8;

    *(s32 *)((s8 *)arg0 + 0x1B0) = (s32) (*(s32 *)((s8 *)arg0 + 0x1B0) + 1);
    if (((s32) *(u8 *)((s8 *)arg0 + 0x1A8) == 1) && ((s32) *(s32 *)((s8 *)arg0 + 0x1B0) >= (s32) *(s32 *)((s8 *)arg0 + 0x1BC))) {
        *(s32 *)((s8 *)arg0 + 0x1B0) = (s32) *(s32 *)((s8 *)arg0 + 0x1B8);
    }
    if (((s32) *(u8 *)((s8 *)arg0 + 0x1A9) == 1) && ((s32) *(s32 *)((s8 *)arg0 + 0x1B0) < get_scroll_offset__6TLobbyFv((int) (*(s32 *)((s8 *)arg0 + 4))))) {
        TLobby__sub_803CE220();
        get_entry_pair__6TLobbyFlPlPl((int) (*(s32 *)((s8 *)arg0 + 4)), (int) (*(s32 *)((s8 *)arg0 + 0x1B0)), (void *) (&spC), (void *) (&sp8));
        set_scroll_offset__6TLobbyFPvi((int) (*(s32 *)((s8 *)arg0 + 8)), (int) (spC / 2048));
        set_scroll_position__6TLobbyFPvi((int) (*(s32 *)((s8 *)arg0 + 8)), (void *) ((s32) (spC + sp8) / 2048));
        init_stream_position__6TLobbyFPv((int) (*(s32 *)((s8 *)arg0 + 8)));
        update_scroll_impl__6TLobbyFv();
    }
}

extern u32 cvfs_completion_callback;
extern s32 lbl_805D75FC;

void TLobby__sub_803CE544(u32 arg0, s32 arg1) {
    if (arg0 == 0U) {
        cvfs_completion_callback = 0U;
        lbl_805D75FC = 0;
        return;
    }
    cvfs_completion_callback = arg0;
    lbl_805D75FC = arg1;
}

}
