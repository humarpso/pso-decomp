#include "types.h"
#include "pso/enemy/TObjEneSlimeTailAttack.h"
#include "pso/player/TObjPlayer.h"
#include "pso/enemy/TObjEneSlimeOne.h"

struct Stack_800EBE74 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
extern const f32 lbl_805DA6B4;
void TObjPlayer__sub_800EBE48(f32 farg0);
void set_chunk_material_override_pair(s32, s32);
s32 set_chunk_material_color(void *);
extern int lbl_805D5660;
extern int lbl_805D5664;
extern int lbl_805D5668;
extern int chunk_polygon_flags_or_mask;
extern int chunk_polygon_flags_and_mask;
extern int model_render_flags;
extern const f32 lbl_805DA6F8;
s32 find_nearest_hittable_enemy__10TObjPlayerFiPvf(void *, int, f32);
}

extern "C" {

    extern int lbl_805D5660;
    extern int lbl_805D5664;
    extern int lbl_805D5668;
    extern int chunk_polygon_flags_or_mask;
    extern int chunk_polygon_flags_and_mask;
    extern int model_render_flags;
void TObjPlayer::init_render_globals() { chunk_polygon_flags_and_mask = lbl_805D5664; chunk_polygon_flags_or_mask = lbl_805D5668; model_render_flags = lbl_805D5660; }

void TObjPlayer__sub_800EBE48(f32 farg0) {
    TObjPlayer::push_material_color_override(farg0, lbl_805DA6B4, lbl_805DA6B4, lbl_805DA6B4);
}

void TObjPlayer::push_material_color_override(f32 farg0, f32 farg1, f32 farg2, f32 farg3) {
    Stack_800EBE74 stack;
    (*(s32 *)&lbl_805D5660) = (*(s32 *)&model_render_flags);
    (*(s32 *)&lbl_805D5664) = (*(s32 *)&chunk_polygon_flags_and_mask);
    (*(s32 *)&lbl_805D5668) = (*(s32 *)&chunk_polygon_flags_or_mask);
    (*(s32 *)&model_render_flags) |= 0x20;
    set_chunk_material_override_pair(0xFF00, 0x800);
    stack.spC = farg1;
    stack.sp10 = farg2;
    stack.sp8 = lbl_805DA6F8 + farg0;
    stack.sp14 = farg3;
    set_chunk_material_color((void *) (&stack.sp8));
}
int TObjEneSlimeTailAttack::find_nearest_enemy_with_flag(f32 farg0) {
    u8 *arg0 = (u8 *)this;
    u16 temp_r3;
    *(s32 *)&(*(u32 *)((u8 *)this + 0x30)) = (s32) (*(s32 *)&(*(u32 *)((u8 *)this + 0x30)) | 0x02000000);
    temp_r3 = find_nearest_hittable_enemy__10TObjPlayerFiPvf((void *) (arg0), (int) (0), (f32) (farg0));
    *(s32 *)&(*(u32 *)((u8 *)this + 0x30)) = (s32) (*(s32 *)&(*(u32 *)((u8 *)this + 0x30)) & 0xFDFFFFFF);
    return temp_r3;
}

}
