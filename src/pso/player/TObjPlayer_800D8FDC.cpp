#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_800D9290(s32 arg0, s32 arg1);
void TObjPlayer__sub_800D92BC(s32 arg0, s32 arg1);
void TObjPlayer__sub_800D9340(s32 arg0, s32 arg1);
void apply_effect_variant_a__10TObjPlayerFii(s32 arg0, s32 arg1);
void apply_effect_variant_b__10TObjPlayerFii(s32 arg0, s32 arg1);
void spawn_dead_spot_default__10TObjPlayerFii(s32 arg0, s32 arg1);
void spawn_dead_spot_here__10TObjPlayerFii(s32 arg0, s32 arg1);
void spawn_effect_at_ground__10TObjPlayerFPvi(void *arg0, s32 arg1);
M2C_UNK TLobby__sub_800869A4(M2C_UNK *, M2C_UNK, M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_800D93F0(M2C_UNK, s32, s32, f32);
M2C_UNK adjust_to_ground__15TObjBoss2TunnelFiPv(void *, M2C_UNK *);
M2C_UNK spawn_dead_spot__10TObjPlayerFiiif(M2C_UNK, s32, s32, f32);

void spawn_effect_at_ground__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    M2C_UNK sp8;

    adjust_to_ground__15TObjBoss2TunnelFiPv(arg0, &sp8);
    TLobby__sub_800869A4(&sp8, 0xE4, 0, arg1);
}

extern const f32 lbl_805DA3C8;

void apply_effect_variant_a__10TObjPlayerFii(s32 arg0, s32 arg1) {
    TObjPlayer__sub_800D93F0(arg0, 0, arg1, lbl_805DA3C8);
}

extern const f32 lbl_805DA3CC;

void apply_effect_variant_b__10TObjPlayerFii(s32 arg0, s32 arg1) {
    TObjPlayer__sub_800D93F0(arg0, 0, arg1, lbl_805DA3CC);
}

extern const f32 lbl_805DA3C4;

void TObjPlayer__sub_800D9290(s32 arg0, s32 arg1) {
    spawn_dead_spot__10TObjPlayerFiiif(arg0, 1, arg1, lbl_805DA3C4);
}

extern const f32 lbl_805DA3C8;

void TObjPlayer__sub_800D92BC(s32 arg0, s32 arg1) {
    spawn_dead_spot__10TObjPlayerFiiif(arg0, 1, arg1, lbl_805DA3C8);
}

extern const f32 lbl_805DA3CC;

void spawn_dead_spot_default__10TObjPlayerFii(s32 arg0, s32 arg1) {
    spawn_dead_spot__10TObjPlayerFiiif(arg0, 1, arg1, lbl_805DA3CC);
}

extern const f32 lbl_805DA3D0;

void spawn_dead_spot_here__10TObjPlayerFii(s32 arg0, s32 arg1) {
    spawn_dead_spot__10TObjPlayerFiiif(arg0, 1, arg1, lbl_805DA3D0);
}

extern const f32 lbl_805DA3C4;

void TObjPlayer__sub_800D9340(s32 arg0, s32 arg1) {
    spawn_dead_spot__10TObjPlayerFiiif(arg0, 2, arg1, lbl_805DA3C4);
}

}
