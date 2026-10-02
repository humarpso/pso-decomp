#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct A_802D6390 { u8 pad0[0x188]; s32 f188; } A_802D6390;

typedef struct B_802D6390 {
    u8 pad0[0x10];
    s32 f10;
    u8 pad14[0x40 - 0x14];
    u32 f40;
    s32 f44;
    u8 pad48[4];
    f32 f4C;
    u8 pad50[0x60 - 0x50];
    u8 v60[0x10];
    void *f70;
} B_802D6390;

extern "C" {
void copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
void TObjPlayer__sub_80120304(void *, void *);
extern u8 TObjPlayer__sub_8010941C[];
extern const f32 lbl_805DE7AC;
void TAdPlayerLoadGC__sub_802D6390(A_802D6390 *arg0, B_802D6390 *arg1);
}

extern "C" {

void play_load_sound__15TAdPlayerLoadGCFPv(void *arg0);
void send_player_load__15TAdPlayerLoadGCFi(s32 arg0);
M2C_UNK spawn_particle_effect(M2C_UNK *, M2C_UNK);
M2C_UNK TObjPlayer__sub_8011E3E8(s32);
M2C_UNK TObjPlayer__sub_8011EB84(s32, M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK translate_matrix(M2C_UNK, f32, f32, f32);
M2C_UNK draw_status_icon__10TObjPlayerFPvi(s32, M2C_UNK *);
s32 get_player_list__10TObjPlayerFv();

extern f32 lbl_805DE7A8;

void play_load_sound__15TAdPlayerLoadGCFPv(void *arg0) {
    if (get_player_list__10TObjPlayerFv() == 1) {
        translate_matrix(0, lbl_805DE7A8, M2C_FIELD(arg0, f32 *, 0x1F8), lbl_805DE7A8);
    }
}

void TAdPlayerLoadGC__sub_802D6390(A_802D6390 *arg0, B_802D6390 *arg1) {
    u8 sp8[16];
    arg1->f40 |= 0x11C;
    TObjPlayer__sub_80120304(sp8, arg0);
    copy_vec4__13TRaderMapCoreFPvPv(arg1->v60, sp8);
    arg1->f44 = arg0->f188;
    arg1->f10 = 4;
    arg1->f4C = lbl_805DE7AC;
    arg1->f70 = TObjPlayer__sub_8010941C;
}

void send_player_load__15TAdPlayerLoadGCFi(s32 arg0) {
    M2C_UNK sp8;

    draw_status_icon__10TObjPlayerFPvi(arg0, &sp8);
    spawn_particle_effect(&sp8, 9);
    TObjPlayer__sub_8011E3E8(arg0);
    TObjPlayer__sub_8011EB84(arg0, &sp8, 0, 0);
}

}
