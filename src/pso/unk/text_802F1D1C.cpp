#include "types.h"
#include "pso/unk/TUnk_804E4B24.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TObjBoss7TunnelCol.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct GE_802F1DAC { s32 a, b, obj, d; };

struct GE_802F1E54 { s32 a, b, obj, d; };

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 copy_position__16TBoss8DragonDemoFv(int, void *);
f32 TBoss8DragonDemo__sub_802F2CB4(int);
f32 TBoss8DragonDemo__sub_802F2CBC(int);
void run_task__13TUnk_804E4B24Fv(u8 *arg0);
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(int);
s32 draw_ginja_object(int);
s32 is_in_camera_range__18TObjBoss7TunnelColFv(void *);
s32 push_matrix();
s32 pop_matrix();
extern u8 *lbl_805D6950;
extern u8 *lbl_805D6954;
void draw_tunnel_segment(u8 *arg0);
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(int);
s32 is_in_camera_range__18TObjBoss7TunnelColFv(void *);
s32 push_matrix();
s32 pop_matrix();
s32 draw_ginja_object(int);
extern u8 *lbl_805D6950;
extern u8 *lbl_805D6954;
void fn_802F1DAC(u8 *arg0);
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(int);
s32 is_in_camera_range__18TObjBoss7TunnelColFv(void *);
s32 push_matrix();
s32 pop_matrix();
s32 draw_ginja_object(int);
extern u8 *lbl_805D6950;
extern u8 *lbl_805D6954;
void fn_802F1E54(u8 *arg0);
}

extern "C" {

void draw_tunnel_segment(u8 *arg0) {
    s32 var_r31;
    u8 *var_r30;
    u8 *var_r3;
    u8 *var_r4;
    var_r30 = (u8 *)(arg0);
    if (is_in_camera_range__18TObjBoss7TunnelColFv((void *) (arg0)) != 0) {
        var_r3 = (u8 *)((void *)2);
        var_r4 = (u8 *)(*(u8 **)((s8 *)var_r30 + 0x3C));
        var_r4 += *(s32 *)((s8 *)var_r30 + 0x38) * 4;
        var_r31 = *(s32 *)((s8 *)var_r4 + (-4));
        set_depth_buffer_settings_id__FUl((int) (2));
        var_r3 = (u8 *)(lbl_805D6954);
        TObjFish::set_global_param((int) (var_r3));
        TParticleCtrl::begin_effect_render();
        push_matrix();
        var_r4 = (u8 *)(var_r30 + 0x48);
        var_r3 = (u8 *)(NULL);
        TObjPlayer::concat_matrix((int) (0), (int) (var_r4));
        var_r3 = (u8 *)(lbl_805D6950);
        var_r3 = (u8 *)(*(u8 **)((s8 *)var_r3 + 0x42C));
        var_r3 += var_r31 * 0x10;
        var_r3 = (u8 *)(*(u8 **)((s8 *)var_r3 + 8));
        draw_ginja_object((int) (var_r3));
        pop_matrix();
        TParticleCtrl::end_effect_render();
        func_80141618__Fv();
    }
}

void fn_802F1DAC(u8 *arg0) {
    if (((s32 (*)(void))is_in_camera_range__18TObjBoss7TunnelColFv)() != 0) {
        set_depth_buffer_settings_id__FUl((int) (2));
        TObjFish::set_global_param((int) (lbl_805D6954));
        push_matrix();
        TObjPlayer::concat_matrix((int) (0), (int) (arg0 + 0x48));
        ((s32 (*)(int, void *))draw_ginja_object)((*(GE_802F1DAC **)((s8 *)lbl_805D6950 + 0x42C))[(*(s32 **)((s8 *)arg0 + 0x3C))[1]].obj, (void *) (lbl_805D6950));
        if ((s32) *(s32 *)((s8 *)arg0 + 0x38) == 4) {
            ((s32 (*)(int, void *))draw_ginja_object)((*(GE_802F1DAC **)((s8 *)lbl_805D6950 + 0x42C))[(*(s32 **)((s8 *)arg0 + 0x3C))[2]].obj, (void *) (lbl_805D6950));
        }
        pop_matrix();
        func_80141618__Fv();
    }
}

void fn_802F1E54(u8 *arg0) {
    if (((s32 (*)(void))is_in_camera_range__18TObjBoss7TunnelColFv)() != 0) {
        set_depth_buffer_settings_id__FUl((int) (1));
        TObjFish::set_global_param((int) (lbl_805D6954));
        push_matrix();
        TObjPlayer::concat_matrix((int) (0), (int) (arg0 + 0x48));
        ((s32 (*)(int, void *))draw_ginja_object)((*(GE_802F1E54 **)((s8 *)lbl_805D6950 + 0x42C))[(*(s32 **)((s8 *)arg0 + 0x3C))[0]].obj, (void *) (lbl_805D6950));
        pop_matrix();
        func_80141618__Fv();
    }
}

void TUnk_804E4B24::run_task() {
    u8 *arg0 = (u8 *)this;
    *(f32 *)((s8 *)arg0 + 0x1C) = TBoss8DragonDemo__sub_802F2CBC((int) (this->m_34));
    this->m_24 = (f32) (this->m_24 - TBoss8DragonDemo__sub_802F2CB4((int) (this->m_34)));
    if ((s32) this->m_40 == 4) {
        copy_position__16TBoss8DragonDemoFv((int) (this->m_34), (void *) (arg0 + 0x1C));
    }
    if (this->m_24 <= -*(f32 *)((s8 *)arg0 + 0x44)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    ((TUnk_804E4B24 *)arg0)->update_collision();
}

}
