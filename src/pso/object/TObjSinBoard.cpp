#include "types.h"
#include "pso/misc/TUnk_804B8DD0.h"
#include "pso/misc/TWindowTimer.h"
#include "pso/object/TObjSinBoard.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/object/TObjFish.h"

struct RecoveredGlobal_801982D4_lbl_804B8DAC { s32 value; u8 remaining[0x20]; };
typedef char RecoveredGlobal_801982D4_lbl_804B8DAC_size[sizeof(RecoveredGlobal_801982D4_lbl_804B8DAC) == 0x24 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_80198228___vt__12TObjSinBoard {
    s32 value;
    u8 remaining[0x34];
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pos_8019806C { u32 w[12]; };

struct Uv_8019806C { u32 w[4]; };

struct Desc_8019806C { Pos_8019806C *pos; Uv_8019806C *uv; s16 *col; s32 count; };

struct Vec_80198504 { f32 x, y, z; };

extern "C" {
u8 *get_bml_model(s32, s32);
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_z(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_model(void *);
extern RecoveredGlobal_801982D4_lbl_804B8DAC lobby_gvm_texture_handles;
extern s32 gogo_ball_bml_resource;
s32 construct_world_actor_base(void *, void *);
extern s32 __vt__12TObjSinBoard[];
extern s32 TObjSinBoard__class_name;
u8 *TObjSinBoard__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 get_state_flag__9TMainTaskFv();
void scale_matrix(int, f32, f32, f32);
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_z(int, int);
void translate_matrix(int, f32, f32, f32);
void rotate_matrix_x(int, int);
s32 push_matrix();
s32 pop_matrix();
void set_texture_num(int);
extern Pos_8019806C TObjSinBoard__quad_position_table;
extern Uv_8019806C sin_board_uv_table;
extern u8 signboard_texture_list[];
extern u32 TObjSinBoard__texture_buffer;
s32 queue_destruction__7TObjectFv(void *);
extern u8 gogo_ball_sync_state[];
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 spawn_particle_effect_with_flags(void *, int, int);
s32 TWindowTimer__sub_80198CF8(void *, void *, s16, s32, s32, s32);
s32 play_sound_effect(int, void *, int, int);
void *__nw__7TObjectFUl(int);
s32 construct_timed_sound_voice(void *, void *, int, int, int, s32);
extern u8 gogo_ball_configuration[];
extern void *tl_05;
extern s32 tl_06;
extern const f32 lbl_805DBF40;
}

extern "C" {

void *TObjSinBoard__create(void *arg0);
void *__dt__12TObjSinBoardFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

void TObjSinBoard::render() {
    u8 *arg0 = (u8 *)this;
    Pos_8019806C pos;
    Uv_8019806C uv;
    Desc_8019806C d;
    s16 col[8];
    if (get_state_flag__9TMainTaskFv() != 1 && TObjSinBoard__texture_buffer != 0) {
        pos = TObjSinBoard__quad_position_table;
        uv = sin_board_uv_table;
        col[0] = 0;
        col[1] = 0;
        col[2] = 0;
        col[3] = 0xFF;
        col[4] = 0xFF;
        col[5] = 0xFF;
        col[6] = 0xFF;
        col[7] = 0;
        d.pos = &pos;
        d.uv = &uv;
        d.col = col;
        d.count = 4;
        TObjPlayer::reset_transform_state();
        TObjFish::set_global_param((int) signboard_texture_list);
        set_texture_num(0);
        TParticleCtrl::begin_effect_render();
        push_matrix();
        translate_matrix(0, *(f32 *)(arg0 + 0x38), *(f32 *)(arg0 + 0x3C), *(f32 *)(arg0 + 0x40));
        rotate_matrix_z(0, *(s32 *)(arg0 + 0x64));
        rotate_matrix_x(0, *(s32 *)(arg0 + 0x5C));
        rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
        scale_matrix(0, *(f32 *)(arg0 + 0x68), *(f32 *)(arg0 + 0x6C), *(f32 *)(arg0 + 0x70));
        ((TObjPlayer *)(&d))->draw_tri_fan_3d(4, 0xE);
        pop_matrix();
        TParticleCtrl::end_effect_render();
    }
}

void TObjSinBoard::run_task() {  }

extern s32 __vt__12TObjSinBoard[];

void *__dt__12TObjSinBoardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__12TObjSinBoard;
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_80198228___vt__12TObjSinBoard_size[sizeof(RecoveredGlobal_80198228___vt__12TObjSinBoard) == 0x38 ? 1 : -1];
u8 *TObjSinBoard__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_world_actor_base((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80198228___vt__12TObjSinBoard *)&__vt__12TObjSinBoard).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjSinBoard__class_name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    return arg0;
}

void *TObjSinBoard__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x90);
    if (o != NULL) {
        o = TObjSinBoard__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}
void TUnk_804B8DD0::render() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    if ((s32) *(s32 *)&this->unk_3C != 0) {
        this->m_38 = (s32) (this->m_38 + 0x38E);
        if ((s32) this->m_38 >= 0x4000) {
            this->m_38 = 0x4000;
        }
    } else {
        this->m_38 = (s32) (this->m_38 - 0x38E);
        if ((s32) this->m_38 <= 0) {
            this->m_38 = 0;
        }
    }
    temp_r3 = (u8 *)(get_bml_model(gogo_ball_bml_resource, 1));
    if (temp_r3 != NULL) {
        if ((s32) this->m_28 != 0) {
            TObjFish::set_global_param((int) (*(s32 *)((s8 *)(&lobby_gvm_texture_handles.value) + 0x1C)));
        } else {
            TObjFish::set_global_param((int) (*(s32 *)((s8 *)(&lobby_gvm_texture_handles.value) + 0x20)));
        }
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x1C));
        ::draw_ginja_model((void *) (*(s32 *)((s8 *)temp_r3 + 4)));
        push_matrix();
        ::draw_ginja_model((void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 0x2C)) + 4)));
        pop_matrix();
        push_matrix();
        rotate_matrix_z((int) (0), (int) (this->m_38));
        rotate_matrix_y((int) (0), (int) (0x8000));
        ::draw_ginja_model((void *) (*(s32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)temp_r3 + 0x2C)) + 0x30)) + 4)));
        pop_matrix();
        push_matrix();
        rotate_matrix_z((int) (0), (int) (-this->m_38));
        ::draw_ginja_model((void *) (*(s32 *)((s8 *)(*(void **)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)temp_r3 + 0x2C)) + 0x30)) + 0x30)) + 4)));
        pop_matrix();
        pop_matrix();
    }
}
void TUnk_804B8DD0::run_task() {
    s32 t;
    if (this->m_28 != 0) {
        if (*(s16 *)((s8 *)gogo_ball_sync_state + 0x10) & (this->m_40 != 0 ? 0x10 : 1)) {
            *(s32 *)&this->unk_3C = 1;
            update_effects();
        } else {
            *(s32 *)&this->unk_3C = 0;
            this->m_30 = 0;
        }
    } else {
        if (*(s16 *)((s8 *)gogo_ball_sync_state + 0x10) & (this->m_40 != 0 ? 0x20 : 2)) {
            *(s32 *)&this->unk_3C = 1;
            update_effects();
        } else {
            *(s32 *)&this->unk_3C = 0;
            this->m_30 = 0;
        }
    }
    t = *(s32 *)&this->unk_2C;
    *(s32 *)&this->unk_2C = t + 1;
    if (t >= *(s32 *)&this->unk_34) {
        queue_destruction__7TObjectFv(this);
    }
}
void TUnk_804B8DD0::update_effects() {
    u8 *arg0 = (u8 *)this;
    Vec_80198504 v6;
    Vec_80198504 v2a;
    Vec_80198504 v2b;
    Vec_80198504 vda;
    Vec_80198504 vdb;
    void *o;
    if (*(u16 *)((s8 *)gogo_ball_configuration + 0x48) == 0) {
        (this->m_30)++;
        if (this->m_30 == 1) {
            o = (void *)__nw__7TObjectFUl(0x58);
            if (o != NULL) {
                TWindowTimer__sub_80198CF8(o, arg0 + 0x1C, *(s16 *)((s8 *)gogo_ball_configuration + 0x14), this->m_28, this->m_40, tl_06);
            }
        }
    } else if (*(u16 *)((s8 *)gogo_ball_configuration + 0x48) == 6) {
        (this->m_30)++;
        if (this->m_30 % 5 == 0 && this->m_30 <= 0x1E) {
            VecCopy__FP3VecPC3Vec(&v6, arg0 + 0x1C);
            v6.y += lbl_805DBF40;
            spawn_particle_effect_with_flags(&v6, 0x20D, 0x40);
            play_sound_effect(0x4001A82E, arg0 + 0x1C, 0, 0);
        }
    } else if (*(u16 *)((s8 *)gogo_ball_configuration + 0x48) == 2) {
        (this->m_30)++;
        if (this->m_28 != 0) {
            if (this->m_30 == 1) {
                TCameraCtrl::set_shake_preset(2);
                VecCopy__FP3VecPC3Vec(&v2a, arg0 + 0x1C);
                v2a.y += lbl_805DBF40;
                spawn_particle_effect_with_flags(&v2a, 0x45, 0x40);
                spawn_particle_effect_with_flags(&v2a, 0x189, 0x40);
                play_sound_effect(0x4001C112, arg0 + 0x1C, 0, 0);
            }
        } else {
            if (this->m_30 == 1) {
                TCameraCtrl::set_shake_preset(2);
                VecCopy__FP3VecPC3Vec(&v2b, arg0 + 0x1C);
                v2b.y += lbl_805DBF40;
                spawn_particle_effect_with_flags(&v2b, 0x45, 0x40);
                spawn_particle_effect_with_flags(&v2b, 0x189, 0x40);
                play_sound_effect(0x4001C112, arg0 + 0x1C, 0, 0);
            }
        }
    } else if (*(u16 *)((s8 *)gogo_ball_configuration + 0x48) != 0) {
        (this->m_30)++;
        if (this->m_28 != 0) {
            if (this->m_30 % 5 == 0 && this->m_30 <= 0x32) {
                VecCopy__FP3VecPC3Vec(&vda, arg0 + 0x1C);
                vda.y += lbl_805DBF40;
                spawn_particle_effect_with_flags(&vda, 0x20E, 0x40);
                o = (void *)__nw__7TObjectFUl(0x28);
                if (o != NULL) {
                    construct_timed_sound_voice(o, arg0 + 0x1C, 5, 0x4002A90C, 0, (s32)tl_05);
                }
            }
        } else {
            if (this->m_30 % 5 == 0 && this->m_30 <= 0x32) {
                VecCopy__FP3VecPC3Vec(&vdb, arg0 + 0x1C);
                vdb.y += lbl_805DBF40;
                spawn_particle_effect_with_flags(&vdb, 0x20F, 0x40);
                o = (void *)__nw__7TObjectFUl(0x28);
                if (o != NULL) {
                    construct_timed_sound_voice(o, arg0 + 0x1C, 5, 0x4002A90C, 0, (s32)tl_05);
                }
            }
        }
    }
}

}
