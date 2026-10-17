#include "types.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/object/TObjMotion.h"
#include "pso/boss/TBoss3VoloptHiraisin.h"
extern "C" void has_flag_0x800__13TUnk_804806E8Fv();
extern "C" void test_flag30_512__13TUnk_804806E8Fv();
extern "C" void test_flag_1000__13TUnk_804806E8Fv();
extern "C" void test_flag_256__13TUnk_804806E8Fv();
#include "pso/system/vector.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/player/TUnk_804806E8.h"
#include "pso/object/TObjMotion.h"

extern "C" {
void *TBoss3VoloptHiraisin__init_param_table[45] = {
    (void *)0x14, (void *)0x3d75c28f, (void *)0x3fc00000, (void *)0x3f666666,
    (void *)0x3df5c28f, (void *)0x3f0ccccd, (void *)0x3f000000, (void *)0x10000,
    (void *)0x6, (void *)0x3f333333, (void *)0x0, (void *)0x10000,
    (void *)0x6, (void *)0x3f333333, (void *)0x1, (void *)0x20000,
    (void *)0x6, (void *)0x3f333333, (void *)0x4, (void *)0x20000,
    (void *)0x8, (void *)0x3f333333, (void *)0x8, (void *)0x30004,
    (void *)0x7, (void *)0x3f000000, (void *)0x10, (void *)0x43160000,
    (void *)0x3f0e38e3, (void *)0x400, (void *)0x1e0000, (void *)0x0,
    (void *)0x1, (void *)0x0, (void *)0x0, (void *)0xc0a00000,
    (void *)0x0, (void *)0x40c00000, (void *)0x0, (void *)0x0,
    (void *)0x8005, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x0
};
extern void *__vt__20TBoss3VoloptHiraisin[];
s32 lbl_805D4C70;
s32 volopt_hiraisin_shared_handler_b;
s32 volopt_hiraisin_object_handle;
s32 lbl_805D4C7C;
s32 TBoss3VoloptHiraisin__resource_bundle;
u8 *volopt_hiraisin_model_data;
s32 TBoss3VoloptHiraisin__breakup_model;
}

struct VBase_18_345191 { char pad[0x18]; };

struct VObj_18_345191 : VBase_18_345191 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual s32 m57();
};

extern "C" {
s32 advance_animation_playback(int);
s32 play_sound_effect(int, void *, int, int, int);
void fn_80040FDC(u8 *arg0);
void fn_80040FDC(u8 *arg0) {
    u8 *p;
    switch (*(s32 *)((s8 *)arg0 + 0x37C)) {
    case -1:
        break;
    case 0:
        *(s32 *)((s8 *)arg0 + 0x388) |= 1;
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        ((void (*)(u8 *))advance_animation_playback)(arg0);
        *(f32 *)((s8 *)arg0 + 0x3C) = 80.0f;
        *(s32 *)((s8 *)arg0 + 0x30) |= 0x40000;
        p = *(u8 **)((s8 *)arg0 + 0xA4);
        *(s32 *)((s8 *)p + 0x18) |= 4;
        p = *(u8 **)((s8 *)arg0 + 0xA4);
        *(s32 *)((s8 *)p + 0x18) &= ~2;
        ((void (*)(int, void *, int, int))play_sound_effect)(0x4003A306, arg0 + 0x38, 0, 0);
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
    case 1:
        *(f32 *)((s8 *)arg0 + 0x3C) -= 0.5f;
        if (*(f32 *)((s8 *)arg0 + 0x3C) <= 50.0f) {
            *(f32 *)((s8 *)arg0 + 0x3C) = 50.0f;
            *(s32 *)((s8 *)arg0 + 0x388) &= ~1;
            *(s32 *)((s8 *)arg0 + 0x30) &= ~0x40000;
            ((VObj_18_345191 *)(arg0))->m57();
        }
        break;
    }
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
}

}
#define play_sound_effect ((s32 (*)(s32, void *, s32, s32))play_sound_effect)
#define TBoss3VoloptHiraisin__init_param_table ((s32 *)TBoss3VoloptHiraisin__init_param_table)

#include <stddef.h>
struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredFields_800413C8_arg0 {
    u8 unknown_0[0x24];
    s32 field_24;
    u8 unknown_28[0x8];
    s32 field_30;
    s32 field_34;
    f32 field_38;
    f32 field_3C;
    f32 field_40;
    u8 unknown_44[0x1C];
    s32 field_60;
    u8 unknown_64[0x50];
    u32 field_B4;
    u8 unknown_B8[0x2D4];
    s32 field_38C;
};

struct Obj_8004118C { u8 pad[0xb8]; s16 anim; u8 pad2[0x37c - 0xba]; s32 state; u8 pad3[0x38c - 0x380]; s32 angle; };

struct VBase18 { char pad[0x18]; };

struct VObj18 : VBase18 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); };

typedef struct Sub_800411F0 {
    u8 pad0[0x18];
    u32 flags;
} Sub_800411F0;

typedef struct Hira_800411F0 {
    u8 pad0[0x38];
    f32 x;
    f32 y;
    u8 pad40[0xA4 - 0x40];
    Sub_800411F0 *sub;
    u8 padA8[0xB8 - 0xA8];
    s16 unkB8;
    u8 padBA[0xC0 - 0xBA];
    f32 unkC0;
    f32 unkC4;
    u8 padC8[0x30C - 0xC8];
    f32 speed;
    u8 pad310[0x37C - 0x310];
    s32 state;
    u8 pad380[0x38C - 0x380];
    s32 unk38C;
} Hira_800411F0;

extern "C" {
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 get_bml_model(int, int);
void restore_scene_lighting(void);
void select_actor_lighting(s32 obj);
f32 sin_table_lookup(int);
s32 scale_matrix(int, f32, f32, f32);
s32 rotate_matrix_y(int, int);
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
void draw_chunk_object(void *child);
extern s32 lbl_805D5660;
extern s32 model_render_flags;
void render__20TBoss3VoloptHiraisinFv(u8 *arg0);
void sub_8004118C__20TBoss3VoloptHiraisinFv(Obj_8004118C *self);
#define advance_animation_playback ((void (*)(void *))advance_animation_playback)
void TBoss3VoloptHiraisin__sub_80041314(void *arg0);
void update_drop__20TBoss3VoloptHiraisinFPv(Hira_800411F0 *self);
void start_attack__20TBoss3VoloptHiraisinFPv(u8 *arg0);
s32 sub_800C7860__15TObjEnemyCustomFv(void *, s32);

void start_attack__20TBoss3VoloptHiraisinFPv(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r4_2;

    TBoss3Volopt::create_breakup_mdl((s32)TBoss3VoloptHiraisin__breakup_model, (s32)TBoss3VoloptHiraisin__init_param_table, (s32)(TObjFish__sub_8001EDB0(TBoss3VoloptHiraisin__resource_bundle, 0x10)), (s32)(arg0 + 0x2FC), (s32)(*(s32 *)((s8 *)arg0 + 0x60)));
    ((TObjPlayer *)(arg0 + 0x2FC))->trigger_dell_biter_events();
    play_sound_effect(0x4001C112, arg0 + 0x38, 0, 0);
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) & 0xFFFFFFFE);
    temp_r4 = *(s16 *)((s8 *)arg0 + 0x2B8);
    *(s16 *)((s8 *)arg0 + 0x33E) = temp_r4;
    *(s16 *)((s8 *)arg0 + 0x32C) = temp_r4;
    temp_r4_2 = *(s32 *)((s8 *)arg0 + 0x30);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (temp_r4_2 & ~0xA00);
    sub_800C7860__15TObjEnemyCustomFv(arg0, temp_r4_2);
}
#pragma push
#pragma fp_contract on
typedef char RecoveredFields_800413C8_arg0_24_offset[offsetof(RecoveredFields_800413C8_arg0, field_24) == 0x24 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_30_offset[offsetof(RecoveredFields_800413C8_arg0, field_30) == 0x30 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_34_offset[offsetof(RecoveredFields_800413C8_arg0, field_34) == 0x34 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_38_offset[offsetof(RecoveredFields_800413C8_arg0, field_38) == 0x38 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_3C_offset[offsetof(RecoveredFields_800413C8_arg0, field_3C) == 0x3C ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_40_offset[offsetof(RecoveredFields_800413C8_arg0, field_40) == 0x40 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_60_offset[offsetof(RecoveredFields_800413C8_arg0, field_60) == 0x60 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_B4_offset[offsetof(RecoveredFields_800413C8_arg0, field_B4) == 0xB4 ? 1 : -1];
typedef char RecoveredFields_800413C8_arg0_38C_offset[offsetof(RecoveredFields_800413C8_arg0, field_38C) == 0x38C ? 1 : -1];

void TBoss3VoloptHiraisin::sub_8004118C() {
    switch (this->state) {
    case 0:
        ((Obj_8004118C *)this)->anim = 0;
        this->state = 1;
        break;
    case 1:
        break;
    case -1:
        break;
    }
    refresh_collision_body_centers();
    ((Obj_8004118C *)this)->angle += 0x800;
}

void update_drop__20TBoss3VoloptHiraisinFPv(Hira_800411F0 *self) {
    switch (self->state) {
    case 0:
        self->unkB8 = 4;
        self->speed = (-2.27f);
        self->state = 1;
        self->unk38C = 0;
        break;
    case 1:
        advance_animation_playback(self);
        self->y = self->y + self->speed;
        if (self->y <= 4.6f) {
            self->y = 4.6f;
            self->state = 2;
            self->sub->flags &= ~4;
            self->sub->flags |= 2;
            play_sound_effect(0x4003A808, &self->x, 0, 0);
        }
        break;
    case 2:
        advance_animation_playback(self);
        if (self->unkC0 >= self->unkC4 - (1.5f)) {
            self->state = 3;
        }
        break;
    case -1:
        return;
    case 3:
        break;
    }
    ((TObjPlayer *)self)->update_collisions();
}

void TBoss3VoloptHiraisin__sub_80041314(void *arg0) {
    switch (*(s32 *)((s8 *)arg0 + 0x37C)) {
    case -1:
        break;
    case 0:
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFDFFFFF);
        *(s16 *)((s8 *)arg0 + 0xB8) = 3;
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        if ((u32) *(u32 *)((s8 *)arg0 + 0xB4) != 8U) {
            *(s16 *)((s8 *)arg0 + 0x33E) = (s16) *(s16 *)((s8 *)arg0 + 0x32C);
            *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFFFDFF);
            *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) & 0xFFFFFFFE);
            ((VObj18*)arg0)->m57();
        }
        break;
    }
    ((TUnk_804AF8A0 *)arg0)->refresh_collision_body_centers();
}

void render__20TBoss3VoloptHiraisinFv(u8 *arg0) {
    f32 temp_f31;
    if (!(((RecoveredFields_800413C8_arg0 *)arg0)->field_30 & 0x02000000) && (((VObj_18_26a62c *)(arg0))->m8((4e+02f), (4e+01f)) != 0)) {
        TObjFish::set_global_param((int) (((RecoveredFields_800413C8_arg0 *)arg0)->field_24));
        lbl_805D5660 = model_render_flags;
        model_render_flags |= 0x01000000;
        select_actor_lighting((s32)arg0);
        TObjPlayer::toggle_particle_effect();
        push_matrix();
        model_render_flags &= 0xFFFFFBFF;
        post_translate_matrix(arg0 + 0x38);
        if ((u32) ((RecoveredFields_800413C8_arg0 *)arg0)->field_B4 == 8U) {
            translate_matrix(0, (f32) ((0.0f)), (f32) ((2e+01f)), (f32) ((0.0f)));
        }
        translate_matrix(0, (f32) ((0.0f)), (f32) (sin_table_lookup((int) (((RecoveredFields_800413C8_arg0 *)arg0)->field_38C))), (f32) ((0.0f)));
        rotate_matrix_y(0, (int) (((RecoveredFields_800413C8_arg0 *)arg0)->field_60));
        if (TObjPlayer::check_demo_mode() == 1) {
            draw_chunk_object((void *)(((RecoveredFields_800413C8_arg0 *)arg0)->field_34));
        } else {
            ((TObjEneRe7Berura *)arg0)->draw();
        }
        pop_matrix();
        restore_scene_lighting();
        TParticleCtrl::end_effect_render();
        model_render_flags = lbl_805D5660;
        if (((RecoveredFields_800413C8_arg0 *)arg0)->field_3C < (5e+01f)) {
            push_matrix();
            temp_f31 = (1.0f) - ((0.02202643f) * (((RecoveredFields_800413C8_arg0 *)arg0)->field_3C - (4.6f)));
            translate_matrix(0, (f32) (((RecoveredFields_800413C8_arg0 *)arg0)->field_38), (f32) ((4.5f)), (f32) (((RecoveredFields_800413C8_arg0 *)arg0)->field_40));
            scale_matrix(0, temp_f31, temp_f31, temp_f31);
            TObjFish::set_global_param((int) (TObjFish__sub_8001EDB0(TBoss3VoloptHiraisin__resource_bundle, 0)));
            draw_chunk_object((void *)(get_bml_model(TBoss3VoloptHiraisin__resource_bundle, 0)));
            pop_matrix();
        }
    }
}
#pragma pop

}
#undef play_sound_effect
#undef TBoss3VoloptHiraisin__init_param_table
#undef advance_animation_playback
#define sub_8004118C__20TBoss3VoloptHiraisinFv ((s32 (*)())sub_8004118C__20TBoss3VoloptHiraisinFv)
#define update_drop__20TBoss3VoloptHiraisinFPv ((s32 (*)())update_drop__20TBoss3VoloptHiraisinFPv)
#define TBoss3VoloptHiraisin__sub_80041314 ((s32 (*)())TBoss3VoloptHiraisin__sub_80041314)
#define fn_80040FDC ((s32 (*)())fn_80040FDC)

struct Base_8004172C_8004155C { char pad[0xC]; };
struct VObj_8004172C_8004155C : Base_8004172C_8004155C {
    virtual void m0(int);
};

struct VBase_18_6fcf4f
{
  char pad[0x18];
};

struct VObj_18_6fcf4f : VBase_18_6fcf4f {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual s32 m30();
    virtual s32 m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual s32 m53(s32, void *);
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual s32 m60();
    virtual s32 m61();
};

extern "C" {
s32 submit_cursor_candidate(void *, int);
s32 minimap_render_dot(void *, int, int, int);
extern u8 *volopt_hiraisin_model_data;
void run_task__20TBoss3VoloptHiraisinFv(u8 *arg0);
void destroy__20TBoss3VoloptHiraisinFv(void);

void TBoss3VoloptHiraisin::dispatch_state() {

    switch (this->mode) {
    case 0:
    case 1:
        sub_8004118C__20TBoss3VoloptHiraisinFv();
        break;
    case 4:
        TBoss3VoloptHiraisin__sub_80041314();
        break;
    case 5:
        update_drop__20TBoss3VoloptHiraisinFPv();
        break;
    case 7:
        fn_80040FDC();
        break;
    }
}

typedef struct VBase_18_6fcf4f VBase_18_6fcf4f;
typedef struct VObj_18_6fcf4f VObj_18_6fcf4f;
void run_task__20TBoss3VoloptHiraisinFv(u8 *arg0) {
  s32 temp_r4;
  u8 *new_var;
  if (TObjPlayer::check_demo_mode() != 1)
  {
    if (((s16) (((TBoss3VoloptHiraisin *)arg0)->mode)) != 5)
    {
      if ((((TBoss3VoloptHiraisin *)(arg0))->has_flag_0x800()) != 0)
      {
        (((TBoss3VoloptHiraisin *)(arg0))->vfunc_63());
      }
      else
        if ((((TBoss3VoloptHiraisin *)(arg0))->test_flag30_512()) != 0)
      {
        (((TBoss3VoloptHiraisin *)(arg0))->vfunc_62());
      }
    }
    if (((s16) (((TBoss3VoloptHiraisin *)arg0)->mode)) != ((s32) (((TBoss3VoloptHiraisin *)arg0)->next_action)))
    {
      if (((s32) (((TBoss3VoloptHiraisin *)arg0)->state)) != (-1))
      {
        ((TBoss3VoloptHiraisin *)arg0)->state = -1;
        ((TBoss3VoloptHiraisin *)arg0)->dispatch_state();
      }
      ((TBoss3VoloptHiraisin *)arg0)->mode = (s16) (((TBoss3VoloptHiraisin *)arg0)->next_action);
      ((TBoss3VoloptHiraisin *)arg0)->state = 0;
    }
    ((TBoss3VoloptHiraisin *)arg0)->dispatch_state();
    VecCopy((Vec *)(arg0 + 0x2FC), (const Vec *)(arg0 + 0x38));
    if (((s16) (*((s16 *) (((s8 *) arg0) + (0x326 & 0xFFFFFFFFu))))) != 5)
    {
      ((TBoss3VoloptHiraisin *)arg0)->m_300 = (f32) ((((TBoss3VoloptHiraisin *)arg0)->m_300) - (3e+01f));
    }
    ((TBoss3VoloptHiraisin *)arg0)->copy_position();
    submit_cursor_candidate((void *) arg0, -1);
    minimap_render_dot(arg0 + 0x38, -0x5DB4, 1, 0);
    temp_r4 = *((s32 *) (((s8 *) volopt_hiraisin_model_data) + 0x18));
    new_var = volopt_hiraisin_model_data;
    *((s32 *) (((s8 *) new_var) + 0x18)) = (temp_r4 + 0x4000);
    (((VObj_18_6fcf4f *)(arg0))->m53((temp_r4), (new_var)));
  }
}

void destroy__20TBoss3VoloptHiraisinFv(void) {
    struct VObj_8004172C_8004155C *o = (struct VObj_8004172C_8004155C *)(*(void **)&TBoss3VoloptHiraisin__breakup_model);
    if (o != NULL) {
        o->m0(1);
    }
    (*(void **)&TBoss3VoloptHiraisin__breakup_model) = NULL;
}

}
#undef sub_8004118C__20TBoss3VoloptHiraisinFv
#undef update_drop__20TBoss3VoloptHiraisinFPv
#undef TBoss3VoloptHiraisin__sub_80041314
#undef fn_80040FDC
#define __vt__20TBoss3VoloptHiraisin ((s32 *)__vt__20TBoss3VoloptHiraisin)
#define sub_800C7860__15TObjEnemyCustomFv ((void (*)(void *))sub_800C7860__15TObjEnemyCustomFv)
#define TBoss3VoloptHiraisin__init_param_table (*(Param_800418C8 *)TBoss3VoloptHiraisin__init_param_table)
#define play_sound_effect ((int (*)(int, void *, int, int))play_sound_effect)

#include <stddef.h>
#include "pso/enemy/TObjEneLappy.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
struct Stack_80041BB4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80041AA0___vt__20TBoss3VoloptHiraisin {
    s32 value;
    u8 remaining[0x148];
};

struct E_80041B34 { s32 f0; s32 f4; s32 f8; s32 fc; };

struct G_80041B34 { u8 pad[0x42c]; E_80041B34 *entries; };

struct O_80041B34 { u8 pad[0x24]; s32 f24; u8 pad2[0x34 - 0x28]; s32 f34; };

struct O_80041D0C { u8 pad[0x30]; u32 f30; u8 pad2[0x37c - 0x34]; s32 f37c; };

struct S_80041A08 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    s16 f1c;
    u8 pad1e[0x0a];
    s16 f28, f2a, f2c;
    u8 pad2e[0x0a];
    f32 f38, f3c, f40;
    u8 pad44[0x3c];
    s32 f80;
};

struct HBase_800418C8 { char pad[0x18]; };

struct Hira_800418C8 : HBase_800418C8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4();
    virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9();
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
    virtual void m80();
    u8 pad1C[0x38 - 0x1C];
    f32 pos[3];
    u8 pad44[0xB8 - 0x44];
    s16 unkB8;
    u8 padBA[0xD8 - 0xBA];
    void *unkD8;
    s32 unkDC;
    u8 padE0[0x2B8 - 0xE0];
    s16 hp2B8;
    s16 hp2BA;
    u8 pad2BC[0x2FC - 0x2BC];
    f32 home[3];
    u8 pad308[0x32C - 0x308];
    s16 hp32C;
    s16 hp32E;
    u8 pad330[0x33E - 0x330];
    s16 unk33E;
    u8 pad340[0x350 - 0x340];
    void *unk350;
    u8 pad354[0x368 - 0x354];
    s32 unk368;
};

typedef struct Param_800418C8 {
    u8 pad0[0x1C];
    u8 unk1C[0x6C - 0x1C];
    u8 unk6C[0x88 - 0x6C];
    u8 unk88[4];
} Param_800418C8;

struct Hira_80041D3C {
    u8 pad0[0x38];
    u8 pos[0x37C - 0x38];
    s32 state;
    u8 pad380[0x38C - 0x380];
    s16 idx;
};

extern "C" {
extern f32 boss3_volopt_spawn_pos[];
void obj_setFlags30(void *, u32);
void *spawn_directional_particle(void *pos, void *dir, s32 id);
void *spawn_particle_effect(void *pos, s32 id);
u8 *TObjEnemyCustom__ct(u8 *arg0);
extern s32 lbl_805D2738;
u8 *TBoss3VoloptHiraisin__sub_80041AA0(u8 *arg0, s32 arg1, s32 arg2);
void TBoss3VoloptHiraisin__sub_80041D0C(O_80041D0C *self);
void set_animation__10TObjMotionFs(void *, s16);
void init_collision_body_parts(void *, void *, s32);
void init_params__20TBoss3VoloptHiraisinFv(Hira_800418C8 *self);
void *find_entity_by_id(u16 id);
extern s8 volopt_target_slot_used[];
extern u16 boss3_volopt_monitor_base_actor_id;
void TBoss3VoloptHiraisin__sub_80041D3C(Hira_80041D3C *self);
void *__dt__20TBoss3VoloptHiraisinFv(void *arg0, s16 arg1);
s32 init_from_model__11TBreakUpMdlFl(s32, s32);
void free_collision_body_parts(void *);
#define get_bml_model ((s32 (*)(s32, s32))get_bml_model)
void __dl__7TObjectFPv(void *);
void *__dt__15TObjEnemyCustomFv(void *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);
s32 *collect_and_count__12TBoss3VoloptFUll(s32, s32);
s32 dispatch_shared_handler_a__6TLobbyFl(s32);
s32 dispatch_shared_handler_b__6TLobbyFl(s32);
s32 link_photon__10TObjPlayerFUs(u16, s32);
s32 register_boss__6TLobbyFl(s32);
s32 register_object__6TLobbyFl(s32);

extern s32 boss3_volopt_resources;

void TBoss3VoloptHiraisin::init_models() {
    s32 *temp_r3;
    s32 var_r31;

    TBoss3VoloptHiraisin__resource_bundle = boss3_volopt_resources;
    temp_r3 = collect_and_count__12TBoss3VoloptFUll(get_bml_model(boss3_volopt_resources, 0x10), 0xB);
    (*(s32 **)&volopt_hiraisin_model_data) = temp_r3;
    *temp_r3 &= 0xFFFFFFFD;
    var_r31 = ((TAdSinglePlyChrSelectGC *)0x10)->alloc();
    if (var_r31 != 0) {
        var_r31 = init_from_model__11TBreakUpMdlFl(var_r31, get_bml_model(TBoss3VoloptHiraisin__resource_bundle, 0x10));
    }
    TBoss3VoloptHiraisin__breakup_model = var_r31;
    lbl_805D4C70 = register_boss__6TLobbyFl(0x24);
    volopt_hiraisin_shared_handler_b = dispatch_shared_handler_b__6TLobbyFl(0x24);
    volopt_hiraisin_object_handle = register_object__6TLobbyFl(0x24);
    lbl_805D4C7C = dispatch_shared_handler_a__6TLobbyFl(0x24);
}

extern void *tl_04;

void *TBoss3VoloptHiraisin::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x390);
    if (o != NULL) {
        o = TBoss3VoloptHiraisin__sub_80041AA0((u8 *)o, (s32)tl_04, (s32)arg0);
    }
    return o;
}

void *__dt__20TBoss3VoloptHiraisinFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TBoss3VoloptHiraisin;
        free_collision_body_parts(arg0);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

struct O_80041B34;
#pragma opt_propagation off
void TBoss3VoloptHiraisin::init_params() {
    Param_800418C8 *prm;
    prm = &TBoss3VoloptHiraisin__init_param_table;
    VecCopy((Vec *)((s32)((Hira_800418C8 *)this)->home), (const Vec *)((s32)((Hira_800418C8 *)this)->pos));
    ((Hira_800418C8 *)this)->home[1] -= (3e+01f);
    copy_position();
    ((Hira_800418C8 *)this)->unkDC = *(s32 *)(TBoss3VoloptHiraisin__resource_bundle + 0x430);
    ((Hira_800418C8 *)this)->unkD8 = prm->unk1C;
    ((TObjMotion *)((Hira_800418C8 *)this))->set_field_d8((s32)(((Hira_800418C8 *)this)->unkD8));
    init_collision_body_parts(this, prm->unk88, 1);
    ((Hira_800418C8 *)this)->unk368 = 0;
    ((Hira_800418C8 *)this)->unk350 = prm->unk6C;
    recalc_combat_stats((void *)lbl_805D4C70, (void *)volopt_hiraisin_shared_handler_b, (void *)volopt_hiraisin_object_handle, (f32)((1.0f)), (f32)((1.0f)));
    ((Hira_800418C8 *)this)->unkB8 = 0;
    set_animation__10TObjMotionFs(((Hira_800418C8 *)this), ((Hira_800418C8 *)this)->unkB8);
    ((TObjMotion *)((Hira_800418C8 *)this))->set_field_b8(((Hira_800418C8 *)this)->unkB8);
    ((Hira_800418C8 *)this)->hp32C = ((Hira_800418C8 *)this)->hp2B8;
    ((Hira_800418C8 *)this)->hp32E = ((Hira_800418C8 *)this)->hp2BA;
    ((Hira_800418C8 *)this)->unk33E = ((Hira_800418C8 *)this)->hp32C;
    ((TObjEnemy *)this)->set_param(0x2E);
    ((TBoss3Volopt *)this)->reset_photon_effect();
    this->load_params_from_table(0x10);
    sub_800C7860__15TObjEnemyCustomFv(this);
    this->add_flags_2e4(4);
    obj_setFlags30(this, 0x8000);
    this->clear_lobby_object_state();
}

S_80041A08 *TBoss3VoloptHiraisin__ct(S_80041A08 *o, S_80041A08 *src, s16 a, s16 b) {
    s32 g;
    TObjEnemyCustom__ct((u8 *)o);
    o->vt = __vt__20TBoss3VoloptHiraisin;
    g = lbl_805D2738;
    o->f0 = g;
    o->f1c = a;
    o->f2c = b;
    o->f80 = 0;
    o->f28 = src->f28;
    o->f2a = src->f2a;
    o->f3c = (8e+01f);
    o->f38 = boss3_volopt_spawn_pos[0];
    o->f40 = boss3_volopt_spawn_pos[2];
    ((s32 (*)(void *, void *, s32))init_params__20TBoss3VoloptHiraisinFv)(o, boss3_volopt_spawn_pos, g);
    return o;
}

typedef char RecoveredGlobal_80041AA0___vt__20TBoss3VoloptHiraisin_size[sizeof(RecoveredGlobal_80041AA0___vt__20TBoss3VoloptHiraisin) == 0x14C ? 1 : -1];
u8 *TBoss3VoloptHiraisin__sub_80041AA0(u8 *arg0, s32 arg1, s32 arg2) {
    TObjEnemyCustom__ct((arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TBoss3VoloptHiraisin;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2738;
    ((TBoss3VoloptHiraisin *)(arg0))->apply_set_data((void *)arg2);
    init_params__20TBoss3VoloptHiraisinFv((Hira_800418C8 *)(arg0));
    return arg0;
}

void TBoss3VoloptHiraisin::copy_position() {
    s32 arg0 = (s32)this;
    VecCopy((Vec *)(arg0 + 0x74), (const Vec *)(arg0 + 0x2FC));
}

extern s32 vol_opt_active_hit_zone;

void TBoss3VoloptHiraisin::load_params_from_table(s32 i) {
    O_80041B34 *self = (O_80041B34 *)this;
    self->f34 = (*(G_80041B34 * *)&TBoss3VoloptHiraisin__resource_bundle)->entries[i].f8;
    self->f24 = (*(G_80041B34 * *)&TBoss3VoloptHiraisin__resource_bundle)->entries[i].fc;
}

void TBoss3VoloptHiraisin::set_hit_flags_and_notify() {
    u8 *arg0 = (u8 *)this;
    this->m_388 = (s32) (this->m_388 | 0x40000);
    obj_setFlags30(arg0, 0x800U);
    this->vfunc_63();
}

void TBoss3VoloptHiraisin::spawn_effects() {
    u8 *arg0 = (u8 *)this;
    typedef char sp8_offset[(offsetof(Stack_80041BB4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80041BB4, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80041BB4, sp10) == 0x8) ? 1 : -1];
    Stack_80041BB4 stack;
    stack.sp8 = 0;
    stack.spC = this->rotation_y;
    stack.sp10 = 0;
    spawn_directional_particle(((u8 *)&this->m_2fc), (&stack.sp8), (((u32)__cntlzw(*(s16 *)((s8 *)arg0 + 0x38C) & 3) >> 5) + 0x61));
    spawn_particle_effect(((u8 *)&this->m_2fc), 0x45);
}

void TBoss3VoloptHiraisin::damage_player_if_aligned() {
    if (!(this->m_388 & 0x40000) && ((s32) vol_opt_active_hit_zone >= 0) && ((s32) ((s32) vol_opt_active_hit_zone / 4) == (s32) ((s16) *(s16 *)((s8 *)this + 0x38C) / 4))) {
        link_photon__10TObjPlayerFUs(this->m_2d4, 0);
    }
}

void TBoss3VoloptHiraisin::update_state() {
    s16 temp_r4;

    switch (*(s32 *)&this->state) {
    case 0:
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags | 0x02040000);
        *(s32 *)&this->state = 1;
    case 1:
        temp_r4 = *(s16 *)&this->timer;
        temp_r4 -= 1;
        *(s16 *)&this->timer = temp_r4;
        if (temp_r4 <= 0) {
            this->vfunc_59();
        }
        break;
    case -1:
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFDFBFFFF);
        break;
    }
}
void TBoss3VoloptHiraisin__sub_80041D0C(O_80041D0C *self) {
    switch (self->f37c) {
    case -1:
        break;
    case 0:
        self->f30 &= ~0x40000;
        self->f37c = 1;
        break;
    case 1:
        break;
    }
}
void TBoss3VoloptHiraisin__sub_80041D3C(Hira_80041D3C *self) {
    s32 base;
    s32 all;
    s32 j;
    u8 *p;
    switch (self->state) {
    case 0:
        play_sound_effect(0x4003A804, self->pos, 0, 0);
        ((TBoss3VoloptHiraisin *)self)->damage_player_if_aligned();
        ((TBoss3VoloptHiraisin *)self)->spawn_effects();
        volopt_target_slot_used[self->idx] = 1;
        if (self->idx % 4 > 0) {
            all = 1;
            base = (self->idx / 4) * 4;
            for (j = base + 1; j < base + 4; j++) {
                if (volopt_target_slot_used[j] == 0) {
                    all = 0;
                }
            }
            if (all != 0) {
                p = (u8 *)find_entity_by_id(boss3_volopt_monitor_base_actor_id + base);
                if (p != NULL) {
                    ((TBoss3VoloptHiraisin *)p)->set_hit_flags_and_notify();
                }
            }
        } else {
            for (j = self->idx + 1; j < self->idx + 4; j++) {
                p = (u8 *)find_entity_by_id(boss3_volopt_monitor_base_actor_id + j);
                if (p != NULL) {
                    ((TBoss3VoloptHiraisin *)p)->set_hit_flags_and_notify();
                }
            }
        }
        self->state = 1;
        break;
    case -1:
        return;
    case 1:
        break;
    case 2:
        break;
    }
}

}
#undef __vt__20TBoss3VoloptHiraisin
#undef sub_800C7860__15TObjEnemyCustomFv
#undef TBoss3VoloptHiraisin__init_param_table
#undef play_sound_effect

#undef get_bml_model
extern "C" void vfunc_65__15TObjEnemyCustomFll();
extern "C" void vfunc_6__13TUnk_804B9870FPsl();
extern "C" void vfunc_63__15TObjEnemyCustomFv();
extern "C" void vfunc_62__15TObjEnemyCustomFv();
extern "C" void vfunc_61__15TObjEnemyCustomFv();
extern "C" void vfunc_58__15TObjEnemyCustomFv();
extern "C" void vfunc_28__15TObjEnemyCustomFv();
extern "C" void vfunc_29__13TUnk_804806E8Fv();
extern "C" void vfunc_73__13TUnk_804806E8Fv();
extern "C" void consume_timer_field__13TUnk_804806E8Fl();
extern "C" void vfunc_67__13TUnk_804806E8Fv();
extern "C" void vfunc_66__13TUnk_804806E8Fv();
extern "C" void apply_slow_status__13TUnk_804806E8Fv();
extern "C" void update_shock_clock__13TUnk_804806E8Fv();
extern "C" void vfunc_43__13TUnk_804806E8Fv();
extern "C" void vfunc_18__13TUnk_804806E8FPUc();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void vfunc_74__9TObjEnemyFl();
extern "C" void apply_hit_message_flags__9TObjEnemyFPv();
extern "C" void add_actor_exp__13TUnk_804806E8Fl();
extern "C" void apply_action_hold_status__13TUnk_804806E8Ff();
extern "C" void apply_anti_technique__13TUnk_804806E8Fl();
extern "C" void apply_attack_stat_status__13TUnk_804806E8FPv();
extern "C" void apply_confusion_status__13TUnk_804806E8Fv();
extern "C" void apply_knockback_from_attacker__13TUnk_804806E8FPUc();
extern "C" void apply_movement_ailment__13TUnk_804806E8Fl();
extern "C" void apply_object_set_data__13TUnk_804B9870FPv();
extern "C" void apply_paralysis__13TUnk_804806E8Fv();
extern "C" void apply_poison_status__13TUnk_804806E8Fv();
extern "C" void apply_set_data__9TObjEnemyFPv();
extern "C" void apply_shock_status__13TUnk_804806E8Fv();
extern "C" void apply_switch_attack__13TUnk_804806E8Fv();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void vfunc_79__15TObjEnemyCustomFv();
extern "C" void classify_actor_view_detail__13TUnk_804B9870Ffff();
extern "C" void clear_all_status_effects__13TUnk_804806E8Fv();
extern "C" void clear_harmful_statuses__13TUnk_804806E8Fv();
extern "C" void cure_paralysis__13TUnk_804806E8Fv();
extern "C" void cure_poison_ailment__13TUnk_804806E8Fv();
extern "C" void enemy_spawn_jellen_effect__13TUnk_804806E8Fv();
extern "C" void enemy_spawn_zalure_effect__13TUnk_804806E8Fv();
extern "C" void vfunc_78__13TUnk_804806E8Fl();
extern "C" void vfunc_77__13TUnk_804806E8Fv();
extern "C" void vfunc_76__13TUnk_804806E8Fv();
extern "C" void vfunc_75__13TUnk_804806E8Ff();
extern "C" void clear_lobby_object_state__9TObjEnemyFv();
extern "C" void vfunc_9__13TUnk_804806E8Fv();
extern "C" void get_actor_level_index__13TUnk_804806E8Fv();
extern "C" void vfunc_12__9TObjEnemyFv();
extern "C" void get_pos__13TUnk_804806E8Fl();
extern "C" void is_actor_cadence_frame__13TUnk_804806E8Fl();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_shadows__9TObjEnemyFv(u8 *arg0);
extern "C" void reset_motion_fields__13TUnk_804806E8Fv();
extern "C" void reset_pose__13TUnk_804806E8Fv();
extern "C" void roll_physical_accuracy__13TUnk_804806E8FPvlf();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void trigger_switch_attack__10TObjPlayerFi(s32 arg0);
extern "C" void try_start_action__13TUnk_804806E8Fll();
extern "C" void update_action_hold_status__13TUnk_804806E8Fv();
extern "C" s32 update_action_timer__10TObjPlayerFPv(u8 *arg0);
extern "C" void update_actor_ground_y__13TUnk_804806E8Fv();
extern "C" s32 update_attack_stat_status(u8 *arg0);
extern "C" s32 update_defense_stat_status(u8 *arg0);
extern "C" void update_flag30_timer__13TUnk_804806E8Fv();
extern "C" void vfunc_60__15TObjEnemyCustomFv();
extern "C" void vfunc_59__15TObjEnemyCustomFv();
extern "C" void update_movement_status__13TUnk_804806E8Fv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void update_poison_status__13TUnk_804806E8Fv();
extern "C" {
void *__vt__20TBoss3VoloptHiraisin[83] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__20TBoss3VoloptHiraisinFv, (void *)&run_task__20TBoss3VoloptHiraisinFv,
    (void *)&render__20TBoss3VoloptHiraisinFv, (void *)&render_shadows__9TObjEnemyFv, (void *)&vfunc_6__13TUnk_804B9870FPsl, (void *)&apply_object_set_data__13TUnk_804B9870FPv,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail__13TUnk_804B9870Ffff,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp__13TUnk_804806E8Fl, (void *)&consume_timer_field__13TUnk_804806E8Fl,
    (void *)&get_actor_level_index__13TUnk_804806E8Fv, (void *)&update_actor_ground_y__13TUnk_804806E8Fv, (void *)&vfunc_18__13TUnk_804806E8FPUc, (void *)&is_actor_cadence_frame__13TUnk_804806E8Fl,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker__13TUnk_804806E8FPUc, (void *)&try_start_action__13TUnk_804806E8Fll, (void *)&roll_physical_accuracy__13TUnk_804806E8FPvlf,
    (void *)&vfunc_28__15TObjEnemyCustomFv, (void *)&vfunc_29__13TUnk_804806E8Fv, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__13TUnk_804806E8Fv,
    (void *)&test_flag30_512__13TUnk_804806E8Fv, (void *)&has_flag_0x800__13TUnk_804806E8Fv, (void *)&test_flag_1000__13TUnk_804806E8Fv, (void *)&update_poison_status__13TUnk_804806E8Fv,
    (void *)&update_action_hold_status__13TUnk_804806E8Fv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__13TUnk_804806E8Fv, (void *)&update_movement_status__13TUnk_804806E8Fv,
    (void *)&update_shock_clock__13TUnk_804806E8Fv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&vfunc_43__13TUnk_804806E8Fv,
    (void *)&apply_poison_status__13TUnk_804806E8Fv, (void *)&apply_paralysis__13TUnk_804806E8Fv, (void *)&apply_slow_status__13TUnk_804806E8Fv, (void *)&apply_confusion_status__13TUnk_804806E8Fv,
    (void *)&apply_movement_ailment__13TUnk_804806E8Fl, (void *)&apply_shock_status__13TUnk_804806E8Fv, (void *)&clear_harmful_statuses__13TUnk_804806E8Fv, (void *)&apply_attack_stat_status__13TUnk_804806E8FPv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment__13TUnk_804806E8Fv, (void *)&cure_paralysis__13TUnk_804806E8Fv, (void *)&clear_all_status_effects__13TUnk_804806E8Fv,
    (void *)&apply_action_hold_status__13TUnk_804806E8Ff, (void *)&apply_anti_technique__13TUnk_804806E8Fl, (void *)&vfunc_58__15TObjEnemyCustomFv, (void *)&vfunc_59__15TObjEnemyCustomFv,
    (void *)&vfunc_60__15TObjEnemyCustomFv, (void *)&vfunc_61__15TObjEnemyCustomFv, (void *)&vfunc_62__15TObjEnemyCustomFv, (void *)&vfunc_63__15TObjEnemyCustomFv,
    (void *)&reset_pose__13TUnk_804806E8Fv, (void *)&vfunc_65__15TObjEnemyCustomFll, (void *)&vfunc_66__13TUnk_804806E8Fv, (void *)&vfunc_67__13TUnk_804806E8Fv,
    (void *)&get_pos__13TUnk_804806E8Fl, (void *)&apply_switch_attack__13TUnk_804806E8Fv, (void *)&enemy_spawn_jellen_effect__13TUnk_804806E8Fv, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect__13TUnk_804806E8Fv, (void *)&vfunc_73__13TUnk_804806E8Fv, (void *)&vfunc_74__9TObjEnemyFl, (void *)&vfunc_75__13TUnk_804806E8Ff,
    (void *)&vfunc_76__13TUnk_804806E8Fv, (void *)&vfunc_77__13TUnk_804806E8Fv, (void *)&vfunc_78__13TUnk_804806E8Fl, (void *)&vfunc_79__15TObjEnemyCustomFv,
    (void *)&apply_hit_message_flags__9TObjEnemyFPv, (void *)&apply_set_data__9TObjEnemyFPv, (void *)&clear_lobby_object_state__9TObjEnemyFv,
};
}
