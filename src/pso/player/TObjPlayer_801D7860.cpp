#include "types.h"

extern "C" {
s32 set_float_4__6TLobbyFPvf(s32, f32);
s32 set_pos_z__6TLobbyFPvf(s32, f32);
s32 set_scale__6TLobbyFPvf(s32, f32);
s32 TObjPlayer__sub_801C19C8(f32);
extern const f32 lbl_805DC3F0;
extern const f32 lbl_805DC3F4;
void init_sub_object_vectors__10TObjPlayerFi(s32 arg0);
}

extern "C" {

s32 init_sub_object__10TObjPlayerFi(s32 arg0);

s32 init_sub_object__10TObjPlayerFi(s32 arg0) {
    init_sub_object_vectors__10TObjPlayerFi((s32)(arg0));
    return arg0;
}
void init_sub_object_vectors__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_801C19C8(lbl_805DC3F0);
    set_float_4__6TLobbyFPvf(arg0, lbl_805DC3F0);
    set_pos_z__6TLobbyFPvf(arg0, lbl_805DC3F4);
    set_scale__6TLobbyFPvf(arg0, lbl_805DC3F4);
}

}
