#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 set_float_4__6TLobbyFf(s32, f32);
s32 set_pos_z__6TLobbyFf(s32, f32);
s32 set_scale__6TLobbyFf(s32, f32);
s32 TObjPlayer__sub_801C19C8(f32);
extern const f32 lbl_805DC3F0;
extern const f32 lbl_805DC3F4;
}

extern "C" {

s32 TObjPlayer::init_sub_object(s32 arg0) {
    TObjPlayer::init_sub_object_vectors(arg0);
    return arg0;
}
void TObjPlayer::init_sub_object_vectors(s32 arg0) {
    TObjPlayer__sub_801C19C8(lbl_805DC3F0);
    set_float_4__6TLobbyFf(arg0, lbl_805DC3F0);
    set_pos_z__6TLobbyFf(arg0, lbl_805DC3F4);
    set_scale__6TLobbyFf(arg0, lbl_805DC3F4);
}

}
