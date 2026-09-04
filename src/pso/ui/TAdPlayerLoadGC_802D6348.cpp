#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void play_load_sound__15TAdPlayerLoadGCFPv(void *arg0);
void send_player_load__15TAdPlayerLoadGCFi(s32 arg0);
M2C_UNK TObjEneDellBiter__sub_80087350(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E3E8(s32);
M2C_UNK TObjPlayer__sub_8011EB84(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK draw_status_icon__10TObjPlayerFPvi(s32, M2C_UNK *);
s32 get_player_list__10TObjPlayerFv();

extern f32 lbl_805DE7A8;

void play_load_sound__15TAdPlayerLoadGCFPv(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        TObjPlayer__sub_803D9624(0, lbl_805DE7A8, M2C_FIELD(arg0, f32 *, 0x1F8), lbl_805DE7A8);
    }
}

void send_player_load__15TAdPlayerLoadGCFi(s32 arg0) {
    M2C_UNK sp8;

    draw_status_icon__10TObjPlayerFPvi(arg0, &sp8);
    TObjEneDellBiter__sub_80087350(&sp8, 9);
    TObjPlayer__sub_8011E3E8(arg0);
    TObjPlayer__sub_8011EB84(arg0, &sp8, 0, 0);
}

}
