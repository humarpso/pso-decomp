#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_802CE68C {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_802CE68C_lbl_804724A8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802CE68C_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Vec_802CE740 { s32 a, b, c; };

struct VBase_802CE740 { char pad[0x18]; };

struct VObj_802CE740 : VBase_802CE740 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

typedef s32 M2C_UNK;
struct Node_802CE8CC;
struct FadeBase_802CE8CC { char pad[0x14]; };

struct Fade_802CE8CC : FadeBase_802CE8CC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
    u32 f18;
};

struct ObjBase_802CE8CC { char pad[0x18]; };

struct Obj_802CE8CC : ObjBase_802CE8CC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
    virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14();
    virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29();
    virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34();
    virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44();
    virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49();
    virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54();
    virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64();
    virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69();
    virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74();
    virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84();
    virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89();
    virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93(); virtual void m94();
    virtual void m95(); virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual void m100(); virtual void m101(); virtual void m102(); virtual void m103();
    virtual void m104();
};

struct Node_802CE8CC { u8 pad0[4]; Node_802CE8CC *n4; u8 pad8[2]; s16 fA; u8 padC[0x20]; Node_802CE8CC *n2C; Node_802CE8CC *n30; };

struct Self_802CE8CC {
    u8 pad0[0x24];
    s32 **f24;
    u8 pad28[0xC];
    Node_802CE8CC *f34;
    u8 pos[0x24];
    s32 f5C_pad;
    s32 f60;
    u8 pad64[0x298];
    u8 cam[0x2A];
    s16 f326;
    u8 pad328[0xA0];
    Fade_802CE8CC fades[4];
    s32 f438;
    f32 f43C;
    u8 pad440[0x2C];
    Fade_802CE8CC f46C;
};

extern "C" {
s32 render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 matrix_mult_vec(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern RecoveredGlobal_802CE68C_lbl_804724A8 lbl_804724A8;
extern RecoveredGlobal_802CE68C_lbl_8058D490 identity_matrix;
extern s32 anim_model_matrix_array;
void TObjPlayer__sub_802CE68C(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, Vec_802CE740 *, int);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_default_scene();
M2C_UNK set_scene_override(int);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
M2C_UNK push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_chunk_object(s32);
extern Vec_802CE740 lbl_8047249C;
extern const f32 lbl_805DE700;
extern const f32 lbl_805DE704;
void draw_color_variant__10TObjPlayerFPv(u8 *arg0);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, Vec_802CE740 *, int);
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
s32 updateFromCamera__15RenderFadeStateFPCf(void *, void *);
M2C_UNK update_obstruction_fade(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK restore_default_scene();
M2C_UNK set_scene_override(int);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 get_global_state__14TOKeyMachine01Fv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
s32 get_phase__19TObjEneBm9MericarolFPv(void *);
s32 rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *, int, void *);
void update_particle_effect__19TObjEneBm9MericarolFv(void);
extern Vec_802CE740 lbl_80472490;
extern s32 lbl_805D5660;
extern s32 lbl_805D686C;
extern s32 model_render_flags;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 lbl_805DE700;
extern const f32 lbl_805DE704;
extern const f32 lbl_805DE70C;
void TObjPlayer__sub_802CE8CC(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_802CE68C_lbl_804724A8_size[sizeof(RecoveredGlobal_802CE68C_lbl_804724A8) == 0x10 ? 1 : -1];
typedef char RecoveredGlobal_802CE68C_lbl_8058D490_size[sizeof(RecoveredGlobal_802CE68C_lbl_8058D490) == 0x30 ? 1 : -1];
void TObjPlayer__sub_802CE68C(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_802CE68C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802CE68C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802CE68C, sp10) == 0x8) ? 1 : -1];
    Stack_802CE68C stack;
    set_global_flag__10TObjPlayerFv();
    push_matrix_from((void *) (&identity_matrix.value));
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    set_global_flag__10TObjPlayerFv();
    render_anim_model__10TObjPlayerFPvf((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    push_matrix_from((void *) (anim_model_matrix_array + (arg2 * 0x30)));
    stack.sp8 = M2C_FIELD(&lbl_804724A8.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804724A8.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804724A8.value, s32 *, 8);
    matrix_mult_vec((int) (0), (void *) (&stack.sp8), (void *) (arg1));
    pop_matrix();
    clear_global_state__10TObjPlayerFv();
}
void draw_color_variant__10TObjPlayerFPv(u8 *arg0) {
    s32 s0;
    s32 s1;
    s32 s2;
    if (((VObj_802CE740 *) arg0)->m8(lbl_805DE700, lbl_805DE704) != 0) {
        Vec_802CE740 v = lbl_8047249C;
        update_player_state__9TObjEneDDFPv(arg0, &v, 0);
        switch (M2C_FIELD(arg0, s32 *, 0x368)) {
        case 1:
            s0 = (*M2C_FIELD(arg0, s32 ***, 0x24))[2];
            s1 = (*M2C_FIELD(arg0, s32 ***, 0x24))[5];
            s2 = (*M2C_FIELD(arg0, s32 ***, 0x24))[8];
            (*M2C_FIELD(arg0, s32 ***, 0x24))[2] = (*M2C_FIELD(arg0, s32 ***, 0x24))[11];
            (*M2C_FIELD(arg0, s32 ***, 0x24))[5] = (*M2C_FIELD(arg0, s32 ***, 0x24))[14];
            (*M2C_FIELD(arg0, s32 ***, 0x24))[8] = (*M2C_FIELD(arg0, s32 ***, 0x24))[17];
            break;
        case 2:
            s0 = (*M2C_FIELD(arg0, s32 ***, 0x24))[2];
            s1 = (*M2C_FIELD(arg0, s32 ***, 0x24))[5];
            s2 = (*M2C_FIELD(arg0, s32 ***, 0x24))[8];
            (*M2C_FIELD(arg0, s32 ***, 0x24))[2] = (*M2C_FIELD(arg0, s32 ***, 0x24))[20];
            (*M2C_FIELD(arg0, s32 ***, 0x24))[5] = (*M2C_FIELD(arg0, s32 ***, 0x24))[23];
            (*M2C_FIELD(arg0, s32 ***, 0x24))[8] = (*M2C_FIELD(arg0, s32 ***, 0x24))[26];
            break;
        }
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, void **, 0x24));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        set_scene_override(0);
        draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x34));
        restore_default_scene();
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
        if (M2C_FIELD(arg0, s32 *, 0x368) == 1 || M2C_FIELD(arg0, s32 *, 0x368) == 2) {
            (*M2C_FIELD(arg0, s32 ***, 0x24))[2] = s0;
            (*M2C_FIELD(arg0, s32 ***, 0x24))[5] = s1;
            (*M2C_FIELD(arg0, s32 ***, 0x24))[8] = s2;
        }
    }
}
void TObjPlayer__sub_802CE8CC(u8 *arg0) {
    Self_802CE8CC *self = (Self_802CE8CC *)arg0;
    s32 vis;
    Fade_802CE8CC *fade;
    s16 saved;
    s32 mode;
    s32 cam;
    s32 s0;
    s32 s1;
    s32 s2;
    Node_802CE8CC *n;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((Obj_802CE8CC *)arg0)->m104();
        return;
    }
    cam = 0;
    if (is_split_screen() != 0) {
        cam = get_camera_mode__11TCameraCtrlFv();
    }
    fade = &self->fades[cam];
    update_obstruction_fade(fade);
    vis = updateFromCamera__15RenderFadeStateFPCf(fade, self->cam);
    if (self->f326 == 0xC) {
        return;
    }
    if (is_main_phase_15__9TObjEneDDFv() != 0) {
        if (get_global_state__14TOKeyMachine01Fv() == 0x23) {
            mode = ((Obj_802CE8CC *)arg0)->m9(600.0f, 600.0f, lbl_805DE704);
        } else {
            mode = ((Obj_802CE8CC *)arg0)->m9(lbl_805D9E88, lbl_805D9E84, lbl_805DE704);
        }
    } else if (((Obj_802CE8CC *)arg0)->m8(lbl_805DE700, lbl_805DE704) != 0) {
        mode = 1;
    } else {
        mode = 0;
    }
    if (mode == 0) {
        return;
    }
    if (self->f326 != 0xB) {
        Vec_802CE740 v = lbl_80472490;
        update_player_state__9TObjEneDDFPv(arg0, &v, 0);
    }
    update_secondary_light__9TObjEneDDFPv(arg0);
    switch (get_phase__19TObjEneBm9MericarolFPv(arg0)) {
    case 1:
        s0 = (*self->f24)[2];
        s1 = (*self->f24)[5];
        s2 = (*self->f24)[8];
        (*self->f24)[2] = (*self->f24)[11];
        (*self->f24)[5] = (*self->f24)[14];
        (*self->f24)[8] = (*self->f24)[17];
        break;
    case 2:
        s0 = (*self->f24)[2];
        s1 = (*self->f24)[5];
        s2 = (*self->f24)[8];
        (*self->f24)[2] = (*self->f24)[20];
        (*self->f24)[5] = (*self->f24)[23];
        (*self->f24)[8] = (*self->f24)[26];
        break;
    }
    lbl_805D5660 = model_render_flags;
    set_global_param__8TObjFishFi(self->f24);
    push_matrix();
    post_translate_matrix(self->pos);
    rotate_matrix_y(0, self->f60);
    set_scene_override(0);
    clear_global_flag_400__9TObjEneDDFv();
    translate_matrix(0, lbl_805DE70C, self->f43C, lbl_805DE70C);
    lbl_805D686C = 0;
    toggle_particle_effect__10TObjPlayerFv();
    if (!(self->f438 & 0x10)) {
        n = self->f34->n2C->n30->n30->n30->n4->n4;
        {
            s16 t = n->fA;
            saved = t;
            n->fA = (u8)t;
            set_global_state__16TObjEneRe7BeruraFi((void *)update_particle_effect__19TObjEneBm9MericarolFv, t, n);
        }
    }
    if (self->f438 & 8) {
        if (self->f46C.m8() != 0) {
            self->f46C.m6();
            if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(arg0) == 0) {
                draw__16TObjEneRe7BeruraFPv(arg0);
            }
            self->f46C.m7();
        }
    } else if (vis != 0) {
        fade->m6();
        if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(arg0) == 0) {
            if (mode == 1) {
                draw__16TObjEneRe7BeruraFPv(arg0);
            } else {
                render_world_model__10TObjPlayerFPv(arg0);
            }
        }
        fade->m7();
    } else if (mode == 1) {
        draw__16TObjEneRe7BeruraFPv(arg0);
    } else {
        render_world_model__10TObjPlayerFPv(arg0);
    }
    if (!(self->f438 & 0x10)) {
        ((void (*)(void *))set_global_state__16TObjEneRe7BeruraFi)(NULL);
        self->f34->n2C->n30->n30->n4->n4->fA = saved;
    }
    end_effect_render__13TParticleCtrlFv();
    restore_default_scene();
    pop_matrix();
    model_render_flags = lbl_805D5660;
    update_primary_light__9TObjEneDDFPv(arg0);
    if (get_phase__19TObjEneBm9MericarolFPv(arg0) != 0) {
        (*self->f24)[2] = s0;
        (*self->f24)[5] = s1;
        (*self->f24)[8] = s2;
    }
}

}
