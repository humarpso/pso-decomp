#include "types.h"

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
void copy_position__20TBoss3VoloptHiraisinFi(s32 arg0);
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
s32 refresh_collision_body_centers(void *);
s32 play_sound_effect(int, void *, int, int, int);
void fn_80040FDC(u8 *arg0);
}

extern "C" {

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
    refresh_collision_body_centers((void *) (arg0));
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
s32 check_demo_mode__10TObjPlayerFv();
s32 toggle_particle_effect__10TObjPlayerFv();
s32 restore_scene_lighting();
s32 select_actor_lighting(void *);
s32 draw__16TObjEneRe7BeruraFv(void *);
s32 end_effect_render__13TParticleCtrlFv();
f32 sin_table_lookup(int);
s32 scale_matrix(int, f32, f32, f32);
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(int);
s32 draw_chunk_object(int);
extern s32 lbl_805D5660;
extern s32 model_render_flags;
void render__20TBoss3VoloptHiraisinFv(u8 *arg0);
s32 refresh_collision_body_centers(void *);
void TBoss3VoloptHiraisin__sub_8004118C(Obj_8004118C *self);
#define advance_animation_playback ((void (*)(void *))advance_animation_playback)
s32 refresh_collision_body_centers(void *);
void TBoss3VoloptHiraisin__sub_80041314(void *arg0);
void update_collisions__10TObjPlayerFv(void *);
void update_drop__20TBoss3VoloptHiraisinFPv(Hira_800411F0 *self);
}

extern "C" {

void start_attack__20TBoss3VoloptHiraisinFPv(u8 *arg0);
s32 TObjFish__sub_8001EDB0(s32, s32);
s32 TObjEnemyCustom__sub_800C7860(void *, s32);
s32 create_breakup_mdl__12TBoss3VoloptFlllll(s32, s32 *, s32, void *, s32);
s32 trigger_dell_biter_events__10TObjPlayerFv(void *);

void start_attack__20TBoss3VoloptHiraisinFPv(u8 *arg0) {
    s16 temp_r4;
    s32 temp_r4_2;

    create_breakup_mdl__12TBoss3VoloptFlllll(TBoss3VoloptHiraisin__breakup_model, TBoss3VoloptHiraisin__init_param_table, TObjFish__sub_8001EDB0(TBoss3VoloptHiraisin__resource_bundle, 0x10), arg0 + 0x2FC, *(s32 *)((s8 *)arg0 + 0x60));
    trigger_dell_biter_events__10TObjPlayerFv(arg0 + 0x2FC);
    play_sound_effect(0x4001C112, arg0 + 0x38, 0, 0);
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) & 0xFFFFFFFE);
    temp_r4 = *(s16 *)((s8 *)arg0 + 0x2B8);
    *(s16 *)((s8 *)arg0 + 0x33E) = temp_r4;
    *(s16 *)((s8 *)arg0 + 0x32C) = temp_r4;
    temp_r4_2 = *(s32 *)((s8 *)arg0 + 0x30);
    *(s32 *)((s8 *)arg0 + 0x30) = (s32) (temp_r4_2 & ~0xA00);
    TObjEnemyCustom__sub_800C7860(arg0, temp_r4_2);
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

void TBoss3VoloptHiraisin__sub_8004118C(Obj_8004118C *self) {
    switch (self->state) {
    case 0:
        self->anim = 0;
        self->state = 1;
        break;
    case 1:
        break;
    case -1:
        break;
    }
    refresh_collision_body_centers(self);
    self->angle += 0x800;
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
            play_sound_effect((s32)(0x4003A808), (void *)(&self->x), (s32)(0), (s32)(0));
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
    update_collisions__10TObjPlayerFv(self);
}

void TBoss3VoloptHiraisin__sub_80041314(void *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x37C);
    switch (temp_r0) {
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
    refresh_collision_body_centers(arg0);
}

void render__20TBoss3VoloptHiraisinFv(u8 *arg0) {
    f32 temp_f31;
    if (!(((RecoveredFields_800413C8_arg0 *)arg0)->field_30 & 0x02000000) && (((VObj_18_26a62c *)(arg0))->m8((4e+02f), (4e+01f)) != 0)) {
        set_global_param__8TObjFishFl((int) (((RecoveredFields_800413C8_arg0 *)arg0)->field_24));
        lbl_805D5660 = model_render_flags;
        model_render_flags |= 0x01000000;
        select_actor_lighting((void *) (arg0));
        toggle_particle_effect__10TObjPlayerFv();
        push_matrix();
        model_render_flags &= 0xFFFFFBFF;
        post_translate_matrix((void *) (arg0 + 0x38));
        if ((u32) ((RecoveredFields_800413C8_arg0 *)arg0)->field_B4 == 8U) {
            translate_matrix((int) (0), (f32) ((0.0f)), (f32) ((2e+01f)), (f32) ((0.0f)));
        }
        translate_matrix((int) (0), (f32) ((0.0f)), (f32) (sin_table_lookup((int) (((RecoveredFields_800413C8_arg0 *)arg0)->field_38C))), (f32) ((0.0f)));
        rotate_matrix_y((int) (0), (int) (((RecoveredFields_800413C8_arg0 *)arg0)->field_60));
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            draw_chunk_object((int) (((RecoveredFields_800413C8_arg0 *)arg0)->field_34));
        } else {
            draw__16TObjEneRe7BeruraFv((void *) (arg0));
        }
        pop_matrix();
        restore_scene_lighting();
        end_effect_render__13TParticleCtrlFv();
        model_render_flags = lbl_805D5660;
        if (((RecoveredFields_800413C8_arg0 *)arg0)->field_3C < (5e+01f)) {
            push_matrix();
            temp_f31 = (1.0f) - ((0.02202643f) * (((RecoveredFields_800413C8_arg0 *)arg0)->field_3C - (4.6f)));
            translate_matrix((int) (0), (f32) (((RecoveredFields_800413C8_arg0 *)arg0)->field_38), (f32) ((4.5f)), (f32) (((RecoveredFields_800413C8_arg0 *)arg0)->field_40));
            scale_matrix((int) (0), (f32) (temp_f31), (f32) (temp_f31), (f32) (temp_f31));
            set_global_param__8TObjFishFl((int) (TObjFish__sub_8001EDB0((s32)((int) (TBoss3VoloptHiraisin__resource_bundle)), (s32)((int) (0)))));
            draw_chunk_object((int) (get_bml_model((int) (TBoss3VoloptHiraisin__resource_bundle), (int) (0))));
            pop_matrix();
        }
    }
}
#pragma pop

}
#undef play_sound_effect
#undef TBoss3VoloptHiraisin__init_param_table
#undef advance_animation_playback
#define copy_position__20TBoss3VoloptHiraisinFi ((s32 (*)(void *))copy_position__20TBoss3VoloptHiraisinFi)
#define TBoss3VoloptHiraisin__sub_8004118C ((s32 (*)())TBoss3VoloptHiraisin__sub_8004118C)
#define update_drop__20TBoss3VoloptHiraisinFPv ((s32 (*)())update_drop__20TBoss3VoloptHiraisinFPv)
#define TBoss3VoloptHiraisin__sub_80041314 ((s32 (*)())TBoss3VoloptHiraisin__sub_80041314)
#define fn_80040FDC ((s32 (*)())fn_80040FDC)
#define TBoss3VoloptHiraisin__breakup_model (*(void **)&TBoss3VoloptHiraisin__breakup_model)

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
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void dispatch_state__20TBoss3VoloptHiraisinFPv(void *arg0);
s32 check_demo_mode__10TObjPlayerFv();
s32 submit_cursor_candidate(void *, int);
s32 minimap_render_dot(void *, int, int, int);
extern u8 *volopt_hiraisin_model_data;
void run_task__20TBoss3VoloptHiraisinFv(u8 *arg0);
}

extern "C" {

void destroy__20TBoss3VoloptHiraisinFv(void);
void dispatch_state__20TBoss3VoloptHiraisinFPv(void *arg0);

void dispatch_state__20TBoss3VoloptHiraisinFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = *(s16 *)((s8 *)arg0 + 0x326);
    switch (temp_r0) {
    case 0:
    case 1:
        TBoss3VoloptHiraisin__sub_8004118C();
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
#define PSO_VCALL_VObj_18_6fcf4f_m31(_self) (((VObj_18_6fcf4f *)(_self))->m31())
#define PSO_VCALL_VObj_18_6fcf4f_m61(_self) (((VObj_18_6fcf4f *)(_self))->m61())
#define PSO_VCALL_VObj_18_6fcf4f_m30(_self) (((VObj_18_6fcf4f *)(_self))->m30())
#define PSO_VCALL_VObj_18_6fcf4f_m60(_self) (((VObj_18_6fcf4f *)(_self))->m60())
#define PSO_VCALL_VObj_18_6fcf4f_m53(_self, _arg0, _arg1) (((VObj_18_6fcf4f *)(_self))->m53((_arg0), (_arg1)))
void run_task__20TBoss3VoloptHiraisinFv(u8 *arg0) {
  s32 temp_r4;
  u8 *new_var;
  if (check_demo_mode__10TObjPlayerFv() != 1)
  {
    if (((s16) (*((s16 *) (((s8 *) arg0) + 0x326)))) != 5)
    {
      if (PSO_VCALL_VObj_18_6fcf4f_m31(arg0) != 0)
      {
        PSO_VCALL_VObj_18_6fcf4f_m61(arg0);
      }
      else
        if (PSO_VCALL_VObj_18_6fcf4f_m30(arg0) != 0)
      {
        PSO_VCALL_VObj_18_6fcf4f_m60(arg0);
      }
    }
    if (((s16) (*((s16 *) (((s8 *) arg0) + 0x326)))) != ((s32) (*((s32 *) (((s8 *) arg0) + 0x374)))))
    {
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x37C)))) != (-1))
      {
        *((s32 *) (((s8 *) arg0) + 0x37C)) = -1;
        dispatch_state__20TBoss3VoloptHiraisinFPv((void *) arg0);
      }
      *((s16 *) (((s8 *) arg0) + 0x326)) = (s16) (*((s32 *) (((s8 *) arg0) + 0x374)));
      *((s32 *) (((s8 *) arg0) + 0x37C)) = 0;
    }
    dispatch_state__20TBoss3VoloptHiraisinFPv((void *) arg0);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    if (((s16) (*((s16 *) (((s8 *) arg0) + (0x326 & 0xFFFFFFFFu))))) != 5)
    {
      *((f32 *) (((s8 *) arg0) + 0x300)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x300))) - (3e+01f));
    }
    copy_position__20TBoss3VoloptHiraisinFi((void *) arg0);
    submit_cursor_candidate((void *) arg0, (int) (-1));
    minimap_render_dot((void *) (arg0 + 0x38), (int) (-0x5DB4), (int) 1, (int) 0);
    temp_r4 = *((s32 *) (((s8 *) volopt_hiraisin_model_data) + 0x18));
    new_var = volopt_hiraisin_model_data;
    *((s32 *) (((s8 *) new_var) + 0x18)) = (s32) (temp_r4 + 0x4000);
    PSO_VCALL_VObj_18_6fcf4f_m53(arg0, temp_r4, new_var);
  }
}

void destroy__20TBoss3VoloptHiraisinFv(void) {
    struct VObj_8004172C_8004155C *o = (struct VObj_8004172C_8004155C *)TBoss3VoloptHiraisin__breakup_model;
    if (o != NULL) {
        o->m0(1);
    }
    TBoss3VoloptHiraisin__breakup_model = NULL;
}

}
#undef copy_position__20TBoss3VoloptHiraisinFi
#undef TBoss3VoloptHiraisin__sub_8004118C
#undef update_drop__20TBoss3VoloptHiraisinFPv
#undef TBoss3VoloptHiraisin__sub_80041314
#undef fn_80040FDC
#undef TBoss3VoloptHiraisin__breakup_model
#define __vt__20TBoss3VoloptHiraisin ((s32 *)__vt__20TBoss3VoloptHiraisin)
#define VecCopy__FP3VecPC3Vec ((int (*)(s32, s32))VecCopy__FP3VecPC3Vec)
#define TObjEnemyCustom__sub_800C7860 ((void (*)(void *))TObjEnemyCustom__sub_800C7860)
#define TBoss3VoloptHiraisin__init_param_table (*(Param_800418C8 *)TBoss3VoloptHiraisin__init_param_table)
#define play_sound_effect ((int (*)(int, void *, int, int))play_sound_effect)
#define volopt_hiraisin_model_data (*(s32 **)&volopt_hiraisin_model_data)

struct Base_80041C78_80041770 { char pad[0x18]; };
struct VObj_80041C78_80041770 : Base_80041C78_80041770 {
    virtual void pad0(); virtual void pad1(); virtual void pad2(); virtual void pad3();
    virtual void pad4(); virtual void pad5(); virtual void pad6(); virtual void pad7();
    virtual void pad8(); virtual void pad9(); virtual void pad10(); virtual void pad11();
    virtual void pad12(); virtual void pad13(); virtual void pad14(); virtual void pad15();
    virtual void pad16(); virtual void pad17(); virtual void pad18(); virtual void pad19();
    virtual void pad20(); virtual void pad21(); virtual void pad22(); virtual void pad23();
    virtual void pad24(); virtual void pad25(); virtual void pad26(); virtual void pad27();
    virtual void pad28(); virtual void pad29(); virtual void pad30(); virtual void pad31();
    virtual void pad32(); virtual void pad33(); virtual void pad34(); virtual void pad35();
    virtual void pad36(); virtual void pad37(); virtual void pad38(); virtual void pad39();
    virtual void pad40(); virtual void pad41(); virtual void pad42(); virtual void pad43();
    virtual void pad44(); virtual void pad45(); virtual void pad46(); virtual void pad47();
    virtual void pad48(); virtual void pad49(); virtual void pad50(); virtual void pad51();
    virtual void pad52(); virtual void pad53(); virtual void pad54(); virtual void pad55();
    virtual void pad56(); virtual void m57();
};

struct VBase_18_8712ff { char pad[0x18]; };

struct VObj_18_8712ff : VBase_18_8712ff {
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
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual s32 m61();
};

#include <stddef.h>
#include "pso/boss/TBoss3VoloptHiraisin.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEneLappy.h"
#include "pso/enemy/TObjEnePanarms.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"
struct Stack_80041BB4 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct VBase_18_aa4667 { char pad[0x18]; };

struct VObj_18_aa4667 : VBase_18_aa4667 {
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
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual s32 m79(s32);
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
s32 spawn_directional_particle(void *, void *, int);
s32 spawn_particle_effect(void *, int);
s32 TObjEnemyCustom__ct(void *);
extern s32 lbl_805D2738;
u8 *TBoss3VoloptHiraisin__sub_80041AA0(u8 *arg0, s32 arg1, s32 arg2);
void TBoss3VoloptHiraisin__sub_80041D0C(O_80041D0C *self);
void recalc_combat_stats__10TObjPlayerFv(void *, s32, s32, s32, f32, f32);
void obj_setFlags30(void *, u32);
void copy_position__20TBoss3VoloptHiraisinFi(s32 arg0);
void set_animation__10TObjPlayerFPvs(void *, s16);
void init_collision_body_parts(void *, void *, s32);
void init_params__20TBoss3VoloptHiraisinFPv(Hira_800418C8 *self);
u8 *find_entity_by_id(u16);
extern s8 volopt_target_slot_used[];
extern u16 boss3_volopt_monitor_base_actor_id;
void TBoss3VoloptHiraisin__sub_80041D3C(Hira_80041D3C *self);
}

extern "C" {

void *__dt__20TBoss3VoloptHiraisinFv(void *arg0, s16 arg1);
void copy_position__20TBoss3VoloptHiraisinFi(s32 arg0);
s32 init_from_model__11TBreakUpMdlFPvi(s32, s32);
void free_collision_body_parts(void *);
#define get_bml_model ((s32 (*)(s32, s32))get_bml_model)
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
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
    volopt_hiraisin_model_data = temp_r3;
    *temp_r3 &= 0xFFFFFFFD;
    var_r31 = ((TAdSinglePlyChrSelectGC *)0x10)->alloc();
    if (var_r31 != 0) {
        var_r31 = init_from_model__11TBreakUpMdlFPvi(var_r31, get_bml_model(TBoss3VoloptHiraisin__resource_bundle, 0x10));
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
        o = TBoss3VoloptHiraisin__sub_80041AA0((u8 *)(o), (s32)(tl_04), (s32)(arg0));
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
void init_params__20TBoss3VoloptHiraisinFPv(Hira_800418C8 *self) {
    Param_800418C8 *prm;
    prm = &TBoss3VoloptHiraisin__init_param_table;
    VecCopy__FP3VecPC3Vec((s32)self->home, (s32)self->pos);
    self->home[1] -= (3e+01f);
    copy_position__20TBoss3VoloptHiraisinFi((s32)self);
    self->unkDC = *(s32 *)(TBoss3VoloptHiraisin__resource_bundle + 0x430);
    self->unkD8 = prm->unk1C;
    ((TObjPlayer *)self)->set_field_d8((s32)(self->unkD8));
    init_collision_body_parts(self, prm->unk88, 1);
    self->unk368 = 0;
    self->unk350 = prm->unk6C;
    recalc_combat_stats__10TObjPlayerFv(self, lbl_805D4C70, volopt_hiraisin_shared_handler_b, volopt_hiraisin_object_handle, (1.0f), (1.0f));
    self->unkB8 = 0;
    set_animation__10TObjPlayerFPvs(self, self->unkB8);
    ((TObjEnePanarms *)self)->set_field_b8(self->unkB8);
    self->hp32C = self->hp2B8;
    self->hp32E = self->hp2BA;
    self->unk33E = self->hp32C;
    ((TObjEneLappy *)self)->set_param(0x2E);
    ((TBoss3Volopt *)self)->reset_photon_effect();
    ((TBoss3VoloptHiraisin *)self)->load_params_from_table((s32)(0x10));
    TObjEnemyCustom__sub_800C7860(self);
    ((TObjPlayer *)self)->add_flags_2e4(4);
    obj_setFlags30(self, 0x8000);
    self->m80();
}

S_80041A08 *TBoss3VoloptHiraisin__ct(S_80041A08 *o, S_80041A08 *src, s16 a, s16 b) {
    s32 g;
    TObjEnemyCustom__ct(o);
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
    ((s32 (*)(void *, void *, s32))init_params__20TBoss3VoloptHiraisinFPv)(o, boss3_volopt_spawn_pos, g);
    return o;
}

typedef char RecoveredGlobal_80041AA0___vt__20TBoss3VoloptHiraisin_size[sizeof(RecoveredGlobal_80041AA0___vt__20TBoss3VoloptHiraisin) == 0x14C ? 1 : -1];
u8 *TBoss3VoloptHiraisin__sub_80041AA0(u8 *arg0, s32 arg1, s32 arg2) {
    TObjEnemyCustom__ct((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__20TBoss3VoloptHiraisin;
    *(s32 *)((s8 *)arg0 + 0) = (s32) lbl_805D2738;
    ((VObj_18_aa4667 *)(arg0))->m79(arg2);
    init_params__20TBoss3VoloptHiraisinFPv((Hira_800418C8 *)((void *) (arg0)));
    return arg0;
}

void copy_position__20TBoss3VoloptHiraisinFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

extern s32 vol_opt_active_hit_zone;

void TBoss3VoloptHiraisin::load_params_from_table(s32 i) {
    O_80041B34 *self = (O_80041B34 *)this;
    self->f34 = (*(G_80041B34 * *)&TBoss3VoloptHiraisin__resource_bundle)->entries[i].f8;
    self->f24 = (*(G_80041B34 * *)&TBoss3VoloptHiraisin__resource_bundle)->entries[i].fc;
}

void TBoss3VoloptHiraisin::set_hit_flags_and_notify() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 | 0x40000);
    obj_setFlags30(arg0, 0x800U);
    ((VObj_18_8712ff *)(arg0))->m61();
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
    spawn_directional_particle((void *) (arg0 + 0x2FC), (void *) (&stack.sp8), (int) (((u32)__cntlzw(*(s16 *)((s8 *)arg0 + 0x38C) & 3) >> 5) + 0x61));
    spawn_particle_effect((void *) (arg0 + 0x2FC), (int) (0x45));
}

void TBoss3VoloptHiraisin::damage_player_if_aligned() {
    if (!(*(s32 *)&this->m_388 & 0x40000) && ((s32) vol_opt_active_hit_zone >= 0) && ((s32) ((s32) vol_opt_active_hit_zone / 4) == (s32) ((s16) *(s16 *)((s8 *)this + 0x38C) / 4))) {
        link_photon__10TObjPlayerFUs(this->m_2d4, 0);
    }
}

void TBoss3VoloptHiraisin::update_state() {
    s16 temp_r4;
    s32 temp_r0;

    temp_r0 = *(s32 *)&this->state;
    switch (temp_r0) {
    case 0:
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags | 0x02040000);
        *(s32 *)&this->state = 1;
    case 1:
        temp_r4 = *(s16 *)&this->timer;
        temp_r4 -= 1;
        *(s16 *)&this->timer = temp_r4;
        if (temp_r4 <= 0) {
            ((VObj_80041C78_80041770 *)this)->m57();
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
                p = find_entity_by_id(boss3_volopt_monitor_base_actor_id + base);
                if (p != NULL) {
                    ((TBoss3VoloptHiraisin *)p)->set_hit_flags_and_notify();
                }
            }
        } else {
            for (j = self->idx + 1; j < self->idx + 4; j++) {
                p = find_entity_by_id(boss3_volopt_monitor_base_actor_id + j);
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
#undef VecCopy__FP3VecPC3Vec
#undef TObjEnemyCustom__sub_800C7860
#undef TBoss3VoloptHiraisin__init_param_table
#undef play_sound_effect
#undef volopt_hiraisin_model_data

#undef get_bml_model
extern "C" void vfunc_65__15TObjEnemyCustomFll();
extern "C" void TLobby__sub_801A1FD8();
extern "C" void vfunc_63__15TObjEnemyCustomFv();
extern "C" void vfunc_62__15TObjEnemyCustomFv();
extern "C" void vfunc_61__15TObjEnemyCustomFv();
extern "C" void vfunc_58__15TObjEnemyCustomFv();
extern "C" void vfunc_28__15TObjEnemyCustomFv();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void vfunc_13__13TUnk_804AF8A0Fl();
extern "C" void update_and_send_enemy_hit_state();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_set_data__9TObjEnemyFPvPv();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void vfunc_79__15TObjEnemyCustomFv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void clear_lobby_object_state__9TObjEnemyFv();
extern "C" void vfunc_9__13TUnk_804806E8Fv();
extern "C" void get_actor_level_index();
extern "C" void vfunc_12__9TObjEnemyFv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" void receive_direct_attack__10TObjPlayerFv();
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_motion_fields__13TUnk_804806E8Fv();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void vfunc_60__15TObjEnemyCustomFv();
extern "C" void vfunc_59__15TObjEnemyCustomFv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility__13TUnk_804B9870Fff();
extern "C" void update_poison_status__10TObjPlayerFv();
extern "C" {
void *__vt__20TBoss3VoloptHiraisin[83] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__20TBoss3VoloptHiraisinFv, (void *)&run_task__20TBoss3VoloptHiraisinFv,
    (void *)&render__20TBoss3VoloptHiraisinFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_motion_fields__13TUnk_804806E8Fv, (void *)&vfunc_9__13TUnk_804806E8Fv, (void *)&update_object_view_visibility__13TUnk_804B9870Fff, (void *)&classify_actor_view_detail,
    (void *)&vfunc_12__9TObjEnemyFv, (void *)&vfunc_13__13TUnk_804AF8A0Fl, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&receive_direct_attack__10TObjPlayerFv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&vfunc_28__15TObjEnemyCustomFv, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&TObjPlayer::test_flag_256,
    (void *)&TObjPlayer::test_flag30_512, (void *)&TObjPlayer::has_flag_0x800, (void *)&TObjPlayer::test_flag_1000, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&TObjPlayer::apply_defense_stat_status, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&vfunc_58__15TObjEnemyCustomFv, (void *)&vfunc_59__15TObjEnemyCustomFv,
    (void *)&vfunc_60__15TObjEnemyCustomFv, (void *)&vfunc_61__15TObjEnemyCustomFv, (void *)&vfunc_62__15TObjEnemyCustomFv, (void *)&vfunc_63__15TObjEnemyCustomFv,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&vfunc_65__15TObjEnemyCustomFll, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&update_and_send_enemy_hit_state, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&vfunc_79__15TObjEnemyCustomFv,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state__9TObjEnemyFv,
};
}
