#include "types.h"

extern "C" {

void reset_lobby_subobject__10TObjPlayerFPv(u8 *arg0);
void init_render_target__10TObjPlayerFPv(u8 *arg0);
s32 TLobby__sub_803DA16C(void *);
s32 set_render_rect__10TObjPlayerFPviiii(s32 *, s32, s32, s32, s32);
s32 set_texture_name(s32, s32 *, s32, s32);
s32 load_texture_list(void *);

void reset_lobby_subobject__10TObjPlayerFPv(u8 *arg0) {
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    TLobby__sub_803DA16C(arg0 + 0x1C);
}

void init_render_target__10TObjPlayerFPv(u8 *arg0) {
    s32 sp8[12];

    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) (arg0 + 0x10);
    *(s32 *)((s8 *)arg0 + 0x20) = 1;
    set_render_rect__10TObjPlayerFPviiii(sp8, 0, 4, 0x280, 0x1E0);
    set_texture_name(*(s32 *)((s8 *)arg0 + 0x1C), sp8, 0x901, 0x08800000);
    *(s32 *)((s8 *)arg0 + 0x24) = load_texture_list(arg0 + 0x1C);
}

}
