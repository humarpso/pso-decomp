#include "types.h"

struct RecoveredGlobal_800F08AC_lbl_80501080 {
    s32 value;
    u8 remaining[0x4C];
};

struct RecoveredGlobal_800F08AC_lbl_805010D0 {
    s32 value;
    u8 remaining[0xC];
};

#include <stddef.h>
#include "pso/player/TObjPlayer.h"
#include "pso/TParticleCtrl.h"
struct Stack_800F09E8 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    s32 sp1C;
    s32 sp20;
    s32 * sp24;
};

struct RecoveredGlobal_800F09E8_lbl_804976B0 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
s32 set_chunk_material_override_pair(s32, s32);
extern s32 model_render_flags;
extern RecoveredGlobal_800F08AC_lbl_80501080 lbl_80501080;
extern RecoveredGlobal_800F08AC_lbl_805010D0 lbl_805010D0;
s32 *TObjPlayer__sub_800F08AC(s32 arg0, s32 arg1);
void TObjPlayer__sub_800F083C(void);
s32 *TObjPlayer__sub_800F08AC(s32 arg0, s32 arg1);
s32 draw__16TObjEneRe7BeruraFv(void *);
s32 is_split_screen();
s32 is_split_screen__10TObjPlayerFv(void);
s32 is_split_screen__10TObjPlayerFv(void);
s32 set_depth_buffer_settings_1__Fv();
s32 restore_saved_depth_alpha_state();
s32 set_cached_blend_factor(int, int);
extern RecoveredGlobal_800F09E8_lbl_804976B0 blob_shadow_rect_desc;
extern s32 blob_shadow_texture_list;
extern const f32 lbl_805DA7F8;
extern const f32 lbl_805DA7FC;
extern const f32 lbl_805DA800;
void draw_blob_shadow(s32 arg0);
}

extern "C" {

void TObjPlayer__sub_800F083C(void);
int init_directional_light__9TObjLightFv(void*);
int TObjLight__sub_801337F8(void*);
s32 set_chunk_material_override_pair(s32, s32);

    extern int current_scene_light;
void TObjPlayer::update_lights() { init_directional_light__9TObjLightFv((void*)(current_scene_light)); TObjLight__sub_801337F8((void*)(current_scene_light)); }

void TObjPlayer__sub_800F083C(void) {  }

extern s32 model_render_flags;

void TObjPlayer::clear_alt_model_flag() {
    model_render_flags &= 0xFFFFF7FF;
    set_chunk_material_override_pair(0xFF00, 0);
}
void TObjPlayer::set_alt_model_flag() { (*(int *)&model_render_flags) = ((*(int *)&model_render_flags) | 0x800); set_chunk_material_override_pair((s32)((void*)-513), (s32)((void*)0)); }
s32 *TObjPlayer__sub_800F08AC(s32 arg0, s32 arg1) {
    *(s32 *)((s8 *)(&lbl_805010D0.value) + 4) = arg1;
    *(s32 *)((s8 *)(&lbl_80501080.value) + 0x30) = arg0;
    return &lbl_80501080.value;
}
void TObjPlayer::draw_with_alt_model(s32 arg1) {
    s32 temp_r31;
    temp_r31 = *(s32 *)((s8 *)this + 0x34);
    TObjPlayer::set_alt_model_flag();
    TObjPlayer__sub_800F083C();
    *(s32 *)((s8 *)this + 0x34) = ((s32)TObjPlayer__sub_800F08AC(temp_r31, arg1));
    draw__16TObjEneRe7BeruraFv(this);
    TObjPlayer::update_lights();
    TObjPlayer::clear_alt_model_flag();
    *(s32 *)((s8 *)this + 0x34) = temp_r31;
}
s32 is_split_screen__10TObjPlayerFv(void) {
    return is_split_screen() ? 1 : 0;
}
#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void draw_blob_shadow(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_800F09E8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800F09E8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800F09E8, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_800F09E8, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_800F09E8, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_800F09E8, sp1C) == 0x14) ? 1 : -1];
    typedef char sp20_offset[(offsetof(Stack_800F09E8, sp20) == 0x18) ? 1 : -1];
    typedef char sp24_offset[(offsetof(Stack_800F09E8, sp24) == 0x1C) ? 1 : -1];
    Stack_800F09E8 stack;
    if (arg0 == 0) {
        if (is_split_screen__10TObjPlayerFv() != 0) {
            goto block_2;
        }
    } else {
block_2:
        stack.sp8 = lbl_805DA7F8;
        stack.spC = lbl_805DA7FC;
        stack.sp10 = lbl_805DA7FC;
        stack.sp14 = lbl_805DA800;
        stack.sp18 = lbl_805DA800;
        stack.sp1C = 0;
        stack.sp20 = blob_shadow_texture_list;
        stack.sp24 = (s32 *)(&blob_shadow_rect_desc.value);
        set_depth_buffer_settings_1__Fv();
        set_cached_blend_factor((int) (0), (int) (8));
        set_cached_blend_factor((int) (1), (int) (6));
        TParticleCtrl::begin_effect_render();
        ((TObjPlayer *)(&stack.sp8))->draw_shadow_quad((int) (0), (int) (0x20));
        stack.sp8 = lbl_805DA7FC;
        stack.spC = lbl_805DA7FC;
        ((TObjPlayer *)(&stack.sp8))->draw_shadow_quad((int) (0), (int) (0x24));
        stack.sp8 = lbl_805DA7F8;
        stack.spC = lbl_805DA7F8;
        ((TObjPlayer *)(&stack.sp8))->draw_shadow_quad((int) (0), (int) (0x28));
        stack.sp8 = lbl_805DA7FC;
        stack.spC = lbl_805DA7F8;
        ((TObjPlayer *)(&stack.sp8))->draw_shadow_quad((int) (0), (int) (0x2C));
        TParticleCtrl::end_effect_render();
        restore_saved_depth_alpha_state();
    }
}
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma pop

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
typedef char RecoveredGlobal_800F09E8_lbl_804976B0_size[sizeof(RecoveredGlobal_800F09E8_lbl_804976B0) == 0x18 ? 1 : -1];
#pragma pop

typedef char RecoveredGlobal_800F08AC_lbl_80501080_size[sizeof(RecoveredGlobal_800F08AC_lbl_80501080) == 0x50 ? 1 : -1];
typedef char RecoveredGlobal_800F08AC_lbl_805010D0_size[sizeof(RecoveredGlobal_800F08AC_lbl_805010D0) == 0x10 ? 1 : -1];

}
