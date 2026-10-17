#include "types.h"
#include "pso/system/vector.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TUnk_804B27D8.h"
#include "pso/misc/TUnk_804AFBF8.h"
#include "pso/misc/TOHealGeneral.h"
#include "pso/TObject.h"
#include "pso/TParticleCtrl.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/misc/TOKey.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct Base_801695a8_80169520 { char pad[0x18]; };
struct VObj_801695a8_80169520 : Base_801695a8_80169520 {
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

struct RecoveredGlobal_80169710_lbl_804B2748
{
  s32 value;
  u8 remaining[0xC];
};

struct RecoveredGlobal_80169710_lbl_804B2760
{
  s32 value;
  u8 remaining[0xC];
};

typedef struct TOHealGeneral_801697C0 {
    u8 pad0[0x18];
    void **vtable;
    u8 pad1C[0xEC - 0x1C];
    u32 handles[2];
} TOHealGeneral_801697C0;

struct Vec_80169858 { f32 x, y, z; };

struct Heal_80169858 {
    s32 f0;
    u8 pad4[0x18 - 0x4];
    void **vtable;
    u16 f1c;
    u8 pad1e[0x24 - 0x1E];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    Vec_80169858 pos;
    u8 pad44[0xC4 - 0x44];
    f32 fC4;
    u8 padC8[0xCC - 0xC8];
    s32 fCC;
    f32 fD0;
    Vec_80169858 pts[2];
    u32 handles[2];
    u16 fF4;
};

extern "C" {
u8 *load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
extern RecoveredGlobal_80169710_lbl_804B2748 bm_fe_obj_kaifuku_moto_resource_descriptor;
extern RecoveredGlobal_80169710_lbl_804B2760 fe_obj_kaifuku_moto_2_resource_descriptor;
extern u32 TOHealGeneral__model_archive;
void free_collision_body_parts(void *);
void __dl__7TObjectFPv(void *);
extern void *__vt__13TOHealGeneral[];
TOHealGeneral_801697C0 *__dt__13TOHealGeneralFv(TOHealGeneral_801697C0 *self, s16 flag);
u32 spawn_continuous_particle_effect_with_flags(void *, s32, s32);
u32 create_particle_emitter(void *, s32);
void init_collision_body_parts(void *, void *, s32, void *);
void init_map_object_base(void *, s32);
extern u8 lbl_804B2770[];
extern s32 TOHealGeneral__class_name;
extern s32 tl_05;
extern const f32 lbl_805DB6BC;
extern const f32 lbl_805DB6C0;
extern const f32 lbl_805DB6CC;
extern const f32 lbl_805DB6D0;
void *TOHealGeneral__ct(void *arg0, void *arg1);
void play_effect_default__10TObjPlayerFii(void *, s32);
void *get_player_by_client_id(s32);
extern s32 local_client_id;
void TLobby__sub_8001FE7C(void*, int);
u8 is_current_floor_switch_set(u16);
s32 is_any_player_within_radius_xz(f32);
s32 TOHangerMachine01__sub_80169168(void *);
s32 post_translate_matrix(void *);
void draw_ginja_model(s32 model);
s32 find_heal_target__13TOHealGeneralFPv(void *);
s32 rotate_matrix_y(int, int);
void translate_matrix(u32 arg0, f32 x, f32 y, f32 z);
s32 push_matrix();
s32 pop_matrix();
void *__nw__7TObjectFUl(int);

void TOHealGeneral::run_task() {
    s32 temp_r0;

    if (TObjPlayer::check_demo_mode() == 1) {
        TOHangerMachine01__sub_80169168(this);
        return;
    }
    temp_r0 = *(s32 *)&this->m_ac;
    switch (temp_r0) {
    case 0:
        find_heal_target__13TOHealGeneralFPv(this);
        return;
    case 1:
        update_opening();
        return;
    case 2:
        update_closing();
        return;
    }
}

void TOHealGeneral::render() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;

    if (((VObj_801695a8_80169520 *)arg0)->m8(this->m_c0, *(f32 *)&this->m_c4) != 0) {
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (this->rotation_y));
        TObjFish::set_global_param((int) (this->texture_id));
        temp_r31 = (unsigned char *) (*(void * *)&this->model);
        post_translate_matrix((void *) (temp_r31 + 8));
        draw_ginja_model((*(s32 *)((s8 *)temp_r31 + 4)));
        push_matrix();
        temp_r31_2 = (unsigned char *) (*(void **)((s8 *)temp_r31 + 0x2C));
        post_translate_matrix((void *) (temp_r31_2 + 8));
        rotate_matrix_y((int) (0), (int) (*(s32 *)&this->m_cc));
        draw_ginja_model((*(s32 *)((s8 *)temp_r31_2 + 4)));
        pop_matrix();
        push_matrix();
        temp_r31_3 = (unsigned char *) (*(void **)((s8 *)temp_r31_2 + 0x30));
        translate_matrix((0), (f32) (*(f32 *)((s8 *)temp_r31_3 + 8)), (f32) (*(f32 *)((s8 *)temp_r31_3 + 0xC) - *(f32 *)&this->_padD0), (f32) (*(f32 *)((s8 *)temp_r31_3 + 0x10)));
        rotate_matrix_y((int) (0), (int) (-*(s32 *)&this->m_cc));
        draw_ginja_model((*(s32 *)((s8 *)temp_r31_3 + 4)));
        pop_matrix();
        pop_matrix();
    }
}

void *TOHealGeneral::create() {
    void *o = __nw__7TObjectFUl(0xF8);
    if (o != NULL) {
        o = TOHealGeneral__ct((void *)(o), (void *)(this));
    }
    return o;
}

void TOHealGeneral::close_dialog_window() {
    if ((u32) TOHealGeneral__model_archive != 0U) {
        TLobby__sub_8001FE7C((void*)TOHealGeneral__model_archive, 1);
        TOHealGeneral__model_archive = 0U;
    }
}

typedef struct RecoveredGlobal_80169710_lbl_804B2748 RecoveredGlobal_80169710_lbl_804B2748;
typedef struct RecoveredGlobal_80169710_lbl_804B2760 RecoveredGlobal_80169710_lbl_804B2760;
void TOHealGeneral::load_resources() {
  s32 global_state;
  s32 temp_r3_2;
  s32 temp_r3_3;
  s32 var_r0;
  s32 var_r0_2;
  int new_var;
  global_state = TOKeyMachine01::get_global_state();
  if (global_state < 0x22)
  {
    if (global_state < 0x1E)
    {
      if (global_state < 0x17)
      {
        temp_r3_2++;
        temp_r3_2--;
        goto block_8;
      }
      goto block_5;
    }
    goto block_8;
  }
  if (global_state < 0x24)
  {
    block_5:
    temp_r3_2 = ((TAdSinglePlyChrSelectGC *)((void *) 0x440))->alloc();
    var_r0 = temp_r3_2;
    if (var_r0 != 0)
    {
      var_r0 = (long) load_resource_from_descriptor((void *) temp_r3_2, 1, &fe_obj_kaifuku_moto_2_resource_descriptor.value, 0, 0, 0);
    }
    (*(s32 *)&TOHealGeneral__model_archive) = var_r0;
    return;
  }
  block_8:
  temp_r3_3 = (new_var = ((TAdSinglePlyChrSelectGC *)((void *) 0x440))->alloc());
  var_r0_2 = temp_r3_3;
  if (var_r0_2 != 0)
  {
    var_r0_2 = (long) load_resource_from_descriptor((void *) temp_r3_3, 1, &bm_fe_obj_kaifuku_moto_resource_descriptor.value, 0, 0, 0);
  }
  (*(s32 *)&TOHealGeneral__model_archive) = var_r0_2;
}

TOHealGeneral_801697C0 *__dt__13TOHealGeneralFv(TOHealGeneral_801697C0 *self, s16 flag) {
    s32 i;
    if (self != NULL) {
        self->vtable = __vt__13TOHealGeneral;
        for (i = 0; i < 2; i++) {
            if (self->handles[i] != 0) {
                TBoss4Type2::request_destroy(self->handles[i]);
            }
        }
        ((TUnk_804AF8A0 *)self)->unregister_object_by_id();
        free_collision_body_parts(self);
        ((TUnk_804AFBF8 *)self)->destroy_key_base(0);
        if (flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}

void *TOHealGeneral__ct(void *arg0, void *arg1) {
    Heal_80169858 *self = (Heal_80169858 *)arg0;
    s32 i;
    u8 *model;
    init_map_object_base(self, tl_05);
    self->vtable = __vt__13TOHealGeneral;
    self->f0 = TOHealGeneral__class_name;
    ((TOHealGeneral *)self)->apply_object_set_data(arg1);
    self->f34 = *(s32 *)((s8 *)(*(u8 **)((s8 *)TOHealGeneral__model_archive + 0x42C)) + 8);
    model = *(u8 **)((s8 *)TOHealGeneral__model_archive + 0x42C);
    self->f24 = *(s32 *)((s8 *)model + 0xC);
    self->fC4 = lbl_805DB6CC;
    init_collision_body_parts(self, lbl_804B2770, 1, model);
    ((TUnk_804AF8A0 *)self)->refresh_collision_body_centers();
    ((TObjPlayer *)self)->reset_photon_effect();
    ((TObjPlayer *)self)->clear_player_status_flag(0, 1);
    self->fCC = 0;
    self->fD0 = lbl_805DB6C0;
    for (i = 0; i < 2; i++) {
        VecCopy((Vec *)&self->pts[i], (const Vec *)&self->pos);
    }
    self->pts[0].y += lbl_805DB6D0;
    self->pts[1].y += lbl_805DB6BC;
    self->handles[0] = create_particle_emitter(&self->pts[0], 0x63);
    if (self->handles[0] != 0 && ((TObject *)(self->handles[0]))->all_parents_unqueued_for_destruction() == 0) {
        self->handles[0] = 0;
    }
    self->handles[1] = spawn_continuous_particle_effect_with_flags(&self->pts[1], 0x63, 0x10);
    if (self->handles[1] != 0 && ((TObject *)(self->handles[1]))->all_parents_unqueued_for_destruction() != 0) {
        ((TParticleCtrl *)(self->handles[1]))->set_owner_id(self->f1c);
    } else {
        self->handles[1] = 0;
    }
    self->fF4 = 0xFFFF;
    return self;
}

void*TOHealGeneral::vfunc_9() { return (char*)this + 0xe0; }

void TUnk_804B27D8::vfunc_16() {  }

extern f32 lbl_805DB6D8;

void TUnk_804B27D8::vfunc_6(s16 *arg1, s32) {
    *(s32 *)&this->m_ac = (s32) *arg1;
}

void TOHealGeneral::accept_player(u16 arg1) {
    void *p;
    if (*(s32 *)((s8 *)this + 0xD8) > 0) {
        if (arg1 == local_client_id) {
            p = get_player_by_client_id(arg1);
            if (p == NULL || *(s32 *)&this->m_ac != 1) {
                return;
            }
            *(s32 *)&this->m_ac = 2;
            this->m_94 = arg1;
            play_effect_default__10TObjPlayerFii(p, -1);
        } else {
            this->m_94 = 0xFFFF;
        }
    }
}

s32 TOHealGeneral::update_active_state() {
    s32 temp_r0;

    temp_r0 = *(s32 *)&this->unk_C8;
    switch (temp_r0) {
    case 1:
        if (is_any_player_within_radius_xz(lbl_805DB6D8) != 0) {
            *(s32 *)&this->m_cc = 1;
        } else {
            *(s32 *)&this->m_cc = 0;
        }
        break;
    case 2:
        if (is_current_floor_switch_set((u16) *(s32 *)&this->_padD0) == 1) {
            *(s32 *)&this->m_cc = 1;
        } else {
            *(s32 *)&this->m_cc = 0;
        }
        break;
    }
    return *(s32 *)&this->m_cc;
}

void TOHealGeneral::set_enable_count(s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    *(s32 *)((s8 *)this + 0xD8) = var_r4;
}

void TOHealGeneral::set_script_entry(s32 arg1) {
    s32 var_r4;

    var_r4 = arg1;
    if (var_r4 < 0) {
        var_r4 = 0;
    }
    *(s32 *)&this->m_d4 = var_r4;
}

s32 TOHealGeneral::update_heal_gauge_state() {
    s32 temp_r0;

    *(s32 *)&this->_padD0 = (s32) this->m_84;
    temp_r0 = *(s32 *)&this->_padD0;
    if (temp_r0 > 0xFF) {
        *(s32 *)&this->unk_C8 = 0;
    } else if (temp_r0 < 0) {
        *(s32 *)&this->unk_C8 = 1;
    } else {
        *(s32 *)&this->unk_C8 = 2;
    }
    set_script_entry((s32)((s32)(*(s32 *)&this->m_88)));
    set_enable_count((s32)(*(s32 *)&this->m_8c));
    return *(s32 *)&this->_padD0;
}

}
