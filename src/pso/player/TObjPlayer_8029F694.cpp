#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TLobby__sub_803DA16C(void *);
s32 set_render_rect__10TObjPlayerFllll(s32 *, s32, s32, s32, s32);
s32 set_texture_name(s32, s32 *, s32, s32);
s32 load_texture_list(void *);

void TObjPlayer::reset_lobby_subobject() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x24) = 0;
    TLobby__sub_803DA16C(arg0 + 0x1C);
}

void TObjPlayer::init_render_target() {
    u8 *arg0 = (u8 *)this;
    s32 sp8[12];

    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) (arg0 + 0x10);
    *(s32 *)((s8 *)arg0 + 0x20) = 1;
    set_render_rect__10TObjPlayerFllll(sp8, 0, 4, 0x280, 0x1E0);
    set_texture_name(*(s32 *)((s8 *)arg0 + 0x1C), sp8, 0x901, 0x08800000);
    *(s32 *)((s8 *)arg0 + 0x24) = load_texture_list(arg0 + 0x1C);
}

}
