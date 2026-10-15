#include "types.h"

struct GE_802F1DAC { s32 a, b, obj, d; };

struct GE_802F1E54 { s32 a, b, obj, d; };

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
s32 update_collision__18TObjBoss7TunnelColFPv(void *);
s32 copy_position__16TBoss8DragonDemoFPv(int, void *);
f32 TBoss8DragonDemo__sub_802F2CB4(int);
f32 TBoss8DragonDemo__sub_802F2CBC(int);
void fn_802F1ED0(u8 *arg0);
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(int);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 concat_matrix__10TObjPlayerFUiUi(int, int);
s32 draw_ginja_object(int);
s32 is_in_camera_range__18TObjBoss7TunnelColFPv(void *);
s32 push_matrix();
s32 pop_matrix();
s32 set_global_param__8TObjFishFi(int);
extern u8 *lbl_805D6950;
extern u8 *lbl_805D6954;
void draw_tunnel_segment(u8 *arg0);
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(int);
s32 is_in_camera_range__18TObjBoss7TunnelColFPv(void *);
s32 concat_matrix__10TObjPlayerFUiUi(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 set_global_param__8TObjFishFi(int);
s32 draw_ginja_object(int);
extern u8 *lbl_805D6950;
extern u8 *lbl_805D6954;
void fn_802F1DAC(u8 *arg0);
s32 func_80141618__Fv();
s32 set_depth_buffer_settings_id__FUl(int);
s32 is_in_camera_range__18TObjBoss7TunnelColFPv(void *);
s32 concat_matrix__10TObjPlayerFUiUi(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 set_global_param__8TObjFishFi(int);
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
    if (is_in_camera_range__18TObjBoss7TunnelColFPv((void *) (arg0)) != 0) {
        var_r3 = (u8 *)((void *)2);
        var_r4 = (u8 *)(*(u8 **)((s8 *)var_r30 + 0x3C));
        var_r4 += *(s32 *)((s8 *)var_r30 + 0x38) * 4;
        var_r31 = *(s32 *)((s8 *)var_r4 + (-4));
        set_depth_buffer_settings_id__FUl((int) (2));
        var_r3 = (u8 *)(lbl_805D6954);
        set_global_param__8TObjFishFi((int) (var_r3));
        begin_effect_render__13TParticleCtrlFv();
        push_matrix();
        var_r4 = (u8 *)(var_r30 + 0x48);
        var_r3 = (u8 *)(NULL);
        concat_matrix__10TObjPlayerFUiUi((int) (0), (int) (var_r4));
        var_r3 = (u8 *)(lbl_805D6950);
        var_r3 = (u8 *)(*(u8 **)((s8 *)var_r3 + 0x42C));
        var_r3 += var_r31 * 0x10;
        var_r3 = (u8 *)(*(u8 **)((s8 *)var_r3 + 8));
        draw_ginja_object((int) (var_r3));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        func_80141618__Fv();
    }
}

void fn_802F1DAC(u8 *arg0) {
    if (((s32 (*)(void))is_in_camera_range__18TObjBoss7TunnelColFPv)() != 0) {
        set_depth_buffer_settings_id__FUl((int) (2));
        set_global_param__8TObjFishFi((int) (lbl_805D6954));
        push_matrix();
        concat_matrix__10TObjPlayerFUiUi((int) (0), (int) (arg0 + 0x48));
        ((s32 (*)(int, void *))draw_ginja_object)((*(GE_802F1DAC **)((s8 *)lbl_805D6950 + 0x42C))[(*(s32 **)((s8 *)arg0 + 0x3C))[1]].obj, (void *) (lbl_805D6950));
        if ((s32) *(s32 *)((s8 *)arg0 + 0x38) == 4) {
            ((s32 (*)(int, void *))draw_ginja_object)((*(GE_802F1DAC **)((s8 *)lbl_805D6950 + 0x42C))[(*(s32 **)((s8 *)arg0 + 0x3C))[2]].obj, (void *) (lbl_805D6950));
        }
        pop_matrix();
        func_80141618__Fv();
    }
}

void fn_802F1E54(u8 *arg0) {
    if (((s32 (*)(void))is_in_camera_range__18TObjBoss7TunnelColFPv)() != 0) {
        set_depth_buffer_settings_id__FUl((int) (1));
        set_global_param__8TObjFishFi((int) (lbl_805D6954));
        push_matrix();
        concat_matrix__10TObjPlayerFUiUi((int) (0), (int) (arg0 + 0x48));
        ((s32 (*)(int, void *))draw_ginja_object)((*(GE_802F1E54 **)((s8 *)lbl_805D6950 + 0x42C))[(*(s32 **)((s8 *)arg0 + 0x3C))[0]].obj, (void *) (lbl_805D6950));
        pop_matrix();
        func_80141618__Fv();
    }
}

void fn_802F1ED0(u8 *arg0) {
    *(f32 *)((s8 *)arg0 + 0x1C) = TBoss8DragonDemo__sub_802F2CBC((int) (*(s32 *)((s8 *)arg0 + 0x34)));
    *(f32 *)((s8 *)arg0 + 0x24) = (f32) (*(f32 *)((s8 *)arg0 + 0x24) - TBoss8DragonDemo__sub_802F2CB4((int) (*(s32 *)((s8 *)arg0 + 0x34))));
    if ((s32) *(s32 *)((s8 *)arg0 + 0x40) == 4) {
        copy_position__16TBoss8DragonDemoFPv((int) (*(s32 *)((s8 *)arg0 + 0x34)), (void *) (arg0 + 0x1C));
    }
    if (*(f32 *)((s8 *)arg0 + 0x24) <= -*(f32 *)((s8 *)arg0 + 0x44)) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
    update_collision__18TObjBoss7TunnelColFPv((void *) (arg0));
}

}
