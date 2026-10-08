#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801982D4_lbl_804B8DAC { M2C_UNK value; u8 remaining[0x20]; };
typedef char RecoveredGlobal_801982D4_lbl_804B8DAC_size[sizeof(RecoveredGlobal_801982D4_lbl_804B8DAC) == 0x24 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_80198228___vt__12TObjSinBoard {
    M2C_UNK value;
    u8 remaining[0x34];
};

typedef s32 M2C_UNK;
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct Pos_8019806C { u32 w[12]; };

struct Uv_8019806C { u32 w[4]; };

struct Desc_8019806C { Pos_8019806C *pos; Uv_8019806C *uv; s16 *col; s32 count; };

struct Vec_80198504 { f32 x, y, z; };

extern "C" {
u8 *get_bml_model(s32, M2C_UNK);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK draw_ginja_model(void *);
extern RecoveredGlobal_801982D4_lbl_804B8DAC lobby_gvm_texture_handles;
extern s32 lbl_805D5C60;
void draw_hinged_model__10TObjPlayerFPv(u8 *arg0);
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern M2C_UNK __vt__12TObjSinBoard[];
extern s32 lbl_805D3430;
u8 *TObjSinBoard__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 get_state_flag__9TMainTaskFv();
void reset_transform_state__10TObjPlayerFv();
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void draw_tri_fan_3d__10TObjPlayerFPviUi(Desc_8019806C *, int, int);
void scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
void translate_matrix(int, f32, f32, f32);
void rotate_matrix_x(int, int);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(int);
void set_texture_num(int);
extern Pos_8019806C lbl_80445FA0;
extern Uv_8019806C lbl_80445FD0;
extern u8 lbl_8050DD24[];
extern u32 lbl_805D5C58;
void render__12TObjSinBoardFv(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
extern u8 lbl_8050DDAC[];
void TWindowTimer__sub_8019841C(void *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK set_shake_preset__11TCameraCtrlFi(int);
M2C_UNK spawn_particle_effect_with_flags(void *, int, int);
M2C_UNK TWindowTimer__sub_80198CF8(void *, void *, s16, s32, s32, s32);
M2C_UNK play_sound_effect(int, void *, int, int);
void *__nw__7TObjectFUl(int);
M2C_UNK construct_timed_sound_voice(void *, void *, int, int, int, s32);
extern u8 lbl_8050DD58[];
extern void *tl_05;
extern s32 tl_06;
extern const f32 lbl_805DBF40;
void update_effects__14TOSwitchAttackFPv(void *self);
}

extern "C" {

void *TObjSinBoard__create(void *arg0);
void *__dt__12TObjSinBoardFv(void *arg0, s16 arg1);
void run_task__12TObjSinBoardFv(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void render__12TObjSinBoardFv(u8 *arg0) {
    Pos_8019806C pos;
    Uv_8019806C uv;
    Desc_8019806C d;
    s16 col[8];
    if (get_state_flag__9TMainTaskFv() != 1 && lbl_805D5C58 != 0) {
        pos = lbl_80445FA0;
        uv = lbl_80445FD0;
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
        reset_transform_state__10TObjPlayerFv();
        set_global_param__8TObjFishFi((int) lbl_8050DD24);
        set_texture_num(0);
        begin_effect_render__13TParticleCtrlFv();
        push_matrix();
        translate_matrix(0, *(f32 *)(arg0 + 0x38), *(f32 *)(arg0 + 0x3C), *(f32 *)(arg0 + 0x40));
        rotate_matrix_z(0, *(s32 *)(arg0 + 0x64));
        rotate_matrix_x(0, *(s32 *)(arg0 + 0x5C));
        rotate_matrix_y(0, *(s32 *)(arg0 + 0x60));
        scale_matrix(0, *(f32 *)(arg0 + 0x68), *(f32 *)(arg0 + 0x6C), *(f32 *)(arg0 + 0x70));
        draw_tri_fan_3d__10TObjPlayerFPviUi(&d, 4, 0xE);
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__12TObjSinBoardFv(void) {  }

extern M2C_UNK __vt__12TObjSinBoard[];

void *__dt__12TObjSinBoardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TObjSinBoard;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_05;

typedef char RecoveredGlobal_80198228___vt__12TObjSinBoard_size[sizeof(RecoveredGlobal_80198228___vt__12TObjSinBoard) == 0x38 ? 1 : -1];
u8 *TObjSinBoard__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80198228___vt__12TObjSinBoard *)&__vt__12TObjSinBoard).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3430;
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
void draw_hinged_model__10TObjPlayerFPv(u8 *arg0) {
    u8 *temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x3C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) + 0x38E);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x38) >= 0x4000) {
            M2C_FIELD(arg0, s32 *, 0x38) = 0x4000;
        }
    } else {
        M2C_FIELD(arg0, s32 *, 0x38) = (s32) (M2C_FIELD(arg0, s32 *, 0x38) - 0x38E);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x38) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x38) = 0;
        }
    }
    temp_r3 = (u8 *)(get_bml_model(lbl_805D5C60, 1));
    if (temp_r3 != NULL) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(&lobby_gvm_texture_handles.value, s32 *, 0x1C)));
        } else {
            set_global_param__8TObjFishFi((int) (M2C_FIELD(&lobby_gvm_texture_handles.value, s32 *, 0x20)));
        }
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x1C));
        draw_ginja_model((void *) (M2C_FIELD(temp_r3, s32 *, 4)));
        push_matrix();
        draw_ginja_model((void *) (M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0x2C), s32 *, 4)));
        pop_matrix();
        push_matrix();
        rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x38)));
        rotate_matrix_y((int) (0), (int) (0x8000));
        draw_ginja_model((void *) (M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0x2C), void **, 0x30), s32 *, 4)));
        pop_matrix();
        push_matrix();
        rotate_matrix_z((int) (0), (int) (-M2C_FIELD(arg0, s32 *, 0x38)));
        draw_ginja_model((void *) (M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 0x2C), void **, 0x30), void **, 0x30), s32 *, 4)));
        pop_matrix();
        pop_matrix();
    }
}
void TWindowTimer__sub_8019841C(void *arg0) {
    s32 t;
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        if (M2C_FIELD(lbl_8050DDAC, s16 *, 0x10) & (M2C_FIELD(arg0, s32 *, 0x40) != 0 ? 0x10 : 1)) {
            M2C_FIELD(arg0, s32 *, 0x3C) = 1;
            update_effects__14TOSwitchAttackFPv((void *)(arg0));
        } else {
            M2C_FIELD(arg0, s32 *, 0x3C) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
        }
    } else {
        if (M2C_FIELD(lbl_8050DDAC, s16 *, 0x10) & (M2C_FIELD(arg0, s32 *, 0x40) != 0 ? 0x20 : 2)) {
            M2C_FIELD(arg0, s32 *, 0x3C) = 1;
            update_effects__14TOSwitchAttackFPv((void *)(arg0));
        } else {
            M2C_FIELD(arg0, s32 *, 0x3C) = 0;
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
        }
    }
    t = M2C_FIELD(arg0, s32 *, 0x2C);
    M2C_FIELD(arg0, s32 *, 0x2C) = t + 1;
    if (t >= M2C_FIELD(arg0, s32 *, 0x34)) {
        queue_destruction__7TObjectFv(arg0);
    }
}
void update_effects__14TOSwitchAttackFPv(void *self) {
    u8 *arg0 = (u8 *)self;
    Vec_80198504 v6;
    Vec_80198504 v2a;
    Vec_80198504 v2b;
    Vec_80198504 vda;
    Vec_80198504 vdb;
    void *o;
    if (M2C_FIELD(lbl_8050DD58, u16 *, 0x48) == 0) {
        M2C_FIELD(arg0, s32 *, 0x30)++;
        if (M2C_FIELD(arg0, s32 *, 0x30) == 1) {
            o = (void *)__nw__7TObjectFUl(0x58);
            if (o != NULL) {
                TWindowTimer__sub_80198CF8(o, arg0 + 0x1C, M2C_FIELD(lbl_8050DD58, s16 *, 0x14), M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, s32 *, 0x40), tl_06);
            }
        }
    } else if (M2C_FIELD(lbl_8050DD58, u16 *, 0x48) == 6) {
        M2C_FIELD(arg0, s32 *, 0x30)++;
        if (M2C_FIELD(arg0, s32 *, 0x30) % 5 == 0 && M2C_FIELD(arg0, s32 *, 0x30) <= 0x1E) {
            VecCopy__FP3VecPC3Vec(&v6, arg0 + 0x1C);
            v6.y += lbl_805DBF40;
            spawn_particle_effect_with_flags(&v6, 0x20D, 0x40);
            play_sound_effect(0x4001A82E, arg0 + 0x1C, 0, 0);
        }
    } else if (M2C_FIELD(lbl_8050DD58, u16 *, 0x48) == 2) {
        M2C_FIELD(arg0, s32 *, 0x30)++;
        if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x30) == 1) {
                set_shake_preset__11TCameraCtrlFi(2);
                VecCopy__FP3VecPC3Vec(&v2a, arg0 + 0x1C);
                v2a.y += lbl_805DBF40;
                spawn_particle_effect_with_flags(&v2a, 0x45, 0x40);
                spawn_particle_effect_with_flags(&v2a, 0x189, 0x40);
                play_sound_effect(0x4001C112, arg0 + 0x1C, 0, 0);
            }
        } else {
            if (M2C_FIELD(arg0, s32 *, 0x30) == 1) {
                set_shake_preset__11TCameraCtrlFi(2);
                VecCopy__FP3VecPC3Vec(&v2b, arg0 + 0x1C);
                v2b.y += lbl_805DBF40;
                spawn_particle_effect_with_flags(&v2b, 0x45, 0x40);
                spawn_particle_effect_with_flags(&v2b, 0x189, 0x40);
                play_sound_effect(0x4001C112, arg0 + 0x1C, 0, 0);
            }
        }
    } else if (M2C_FIELD(lbl_8050DD58, u16 *, 0x48) != 0) {
        M2C_FIELD(arg0, s32 *, 0x30)++;
        if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
            if (M2C_FIELD(arg0, s32 *, 0x30) % 5 == 0 && M2C_FIELD(arg0, s32 *, 0x30) <= 0x32) {
                VecCopy__FP3VecPC3Vec(&vda, arg0 + 0x1C);
                vda.y += lbl_805DBF40;
                spawn_particle_effect_with_flags(&vda, 0x20E, 0x40);
                o = (void *)__nw__7TObjectFUl(0x28);
                if (o != NULL) {
                    construct_timed_sound_voice(o, arg0 + 0x1C, 5, 0x4002A90C, 0, (s32)tl_05);
                }
            }
        } else {
            if (M2C_FIELD(arg0, s32 *, 0x30) % 5 == 0 && M2C_FIELD(arg0, s32 *, 0x30) <= 0x32) {
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
