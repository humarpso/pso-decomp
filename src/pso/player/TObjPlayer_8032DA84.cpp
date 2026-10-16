#include "types.h"
#include "pso/player/TUnk_804EDD20.h"
#include "pso/item/TUnk_804EDD44.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TParticleCtrl.h"
#include "pso/item/TItemWpnCardEffect.h"
#include "pso/misc/TNowLoading.h"

struct RecoveredGlobal_8032DC94_lbl_8050BEC0
{
  s32 value;
  u8 remaining[0x1C];
};

struct RecoveredGlobal_8032DC94_lbl_8058D4C0
{
  s32 value;
  u8 remaining[0xC];
};

extern "C" {
void start_card_effect_trail__13TUnk_804EDD20Fv(u8 *arg0);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(s32);
extern s32 tl_05;
u8 *create_guardianna(u8 *arg0);
extern const f32 lbl_805DF7D8;
extern const f32 lbl_805DF7DC;
extern const f32 lbl_805DF7E0;
void vfunc_8__13TUnk_804EDD20Fv(u8 *arg0);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 *query_game_join_id__10TObjPlayerFv(s32 *);
s32 all_parents_unqueued_for_destruction__7TObjectFv();
s32 notify_fish_if_valid__10TObjPlayerFUl();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(int);
s32 post_translate_matrix(int);
s32 draw_ginja_object(int);
s32 set_chunk_material_color(int);
extern RecoveredGlobal_8032DC94_lbl_8050BEC0 saved_model_draw_color;
extern RecoveredGlobal_8032DC94_lbl_8058D4C0 model_material_color;
extern s32 lbl_805D5660;
extern s32 model_render_flags;
extern const f32 lbl_805DF7D8;
void TObjPlayer__sub_8032DC94(u8 *arg0);
}

extern "C" {

void *item_equip_variant_deleting_dtor_8032DBE4(void *arg0, s16 arg1);
void *TObjPlayer__sub_8032DC3C(void *arg0, s16 arg1);
void start_card_effect_flash__13TUnk_804EDD20Fv(void* p);
s32 fire_shot_at_target__11TItemWeaponFv(void *, s32 *, s32, s32);
s32 get_attack_stage__11TItemWeaponFv(void *);
void TItemWeapon__ct(void *);
s16 get_validated_attack_stage(s32);
void __dl__7TObjectFPv(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_8032DBE4(void *arg0, s16 arg1);
void set_status_flags__10TObjPlayerFPvUi(void *, int);
s32 spawn_cane_effect__10TObjPlayerFiUii(s32, void *, s32);

extern s32 tl_05;

void TObjPlayer::launch_guardianna_colliders() {
    s32 sp8;

    draw_icon((s32)4, (s32)(&sp8));
    if (get_validated_attack_stage(*(s32 *)((s8 *)this + 0xF0) + 0x7CC) == 2) {
        fire_shot_at_target__11TItemWeaponFv(this, &sp8, *(s32 *)&this->m_f4, 0);
        fire_shot_at_target__11TItemWeaponFv(this, &sp8, *(s32 *)&this->m_f4, 0x1555);
        fire_shot_at_target__11TItemWeaponFv(this, &sp8, *(s32 *)&this->m_f4, -0x1555);
    } else {
        fire_shot_at_target__11TItemWeaponFv(this, &sp8, *(s32 *)&this->m_f4, 0);
    }
    if (get_attack_stage__11TItemWeaponFv(this) == 0) {
        spawn_cane_effect__10TObjPlayerFiUii(tl_05, this, 4);
    }
}

extern s32 lbl_804EDC28[];

void *TObjPlayer::construct_guardianna(s32 _w1, void * _w2) {
    TItemWeapon__ct(this);
    *(s32 **)((s8 *)this + 0x18) = lbl_804EDC28;
    set_status_flags__10TObjPlayerFPvUi(this, 2);
    return this;
}

extern s32 lbl_804EDC28[];

extern s32 lbl_804EDD20[];

u8 *create_guardianna(u8 *arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != NULL) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x1F8));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(((u8 *)((TObjPlayer *)temp_r3)->construct_guardianna((s32)(tl_05), (void *)(arg0))));
        }
        return var_r0;
    }
    return NULL;
}

void *item_equip_variant_deleting_dtor_8032DBE4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804EDC28;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}
void *TObjPlayer__sub_8032DC3C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804EDD20;
        ((TItemWpnCardEffect *)arg0)->destroy(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef struct RecoveredGlobal_8032DC94_lbl_8050BEC0 RecoveredGlobal_8032DC94_lbl_8050BEC0;
typedef struct RecoveredGlobal_8032DC94_lbl_8058D4C0 RecoveredGlobal_8032DC94_lbl_8058D4C0;
typedef char RecoveredGlobal_8032DC94_lbl_8050BEC0_size[((sizeof(RecoveredGlobal_8032DC94_lbl_8050BEC0)) == 0x20) ? (1) : (-1)];
typedef char RecoveredGlobal_8032DC94_lbl_8058D4C0_size[((sizeof(RecoveredGlobal_8032DC94_lbl_8058D4C0)) == 0x10) ? (1) : (-1)];
void TObjPlayer__sub_8032DC94(u8 *arg0) {
  s32 *var_r30;
  s32 *var_r31;
  s32 *var_r3;
  s32 *var_r4;
  s32 *new_var;
  f32 var_f0;
  f32 var_f1;
  u8 *var_r29;
  var_f0 = lbl_805DF7D8;
  var_r29 = (u8 *) arg0;
  var_f1 = *((f32 *) (((s8 *) arg0) + 0x80));
  if ((!(var_f1 <= var_f0)) && (all_parents_unqueued_for_destruction__7TObjectFv() != 0))
  {
    var_r3 = (s32 *) (*((s32 **) (((s8 *) var_r29) + 0x60)));
    var_r31 = (s32 *) query_game_join_id__10TObjPlayerFv(var_r3);
    if (var_r31 != 0)
    {
      new_var = (s32 *) (*((s32 **) (((s8 *) var_r31) + 0x188)));
      var_r30 = new_var;
      if (var_r30 != 0)
      {
        var_r3 = (s32 *) (&saved_model_draw_color.value);
        var_r4 = (s32 *) (&model_material_color.value);
        lbl_805D5660 = model_render_flags;
        var_r3 = (s32 *) (&saved_model_draw_color.value);
        var_r4 = (s32 *) (&model_material_color.value);
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&saved_model_draw_color.value), (void *) (&model_material_color.value));
        var_r3 = (s32 *) (var_r29 + 0x80);
        model_render_flags |= 0x20;
        set_chunk_material_color((int) var_r3);
        var_r3 = (s32 *) var_r31;
        ((TObjPlayer *)var_r3)->get_entity_id();
        notify_fish_if_valid__10TObjPlayerFUl();
        push_matrix();
        var_r3 = (s32 *) (var_r29 + 0x64);
        post_translate_matrix((int) var_r3);
        var_r4 = (s32 *) (*((s32 **) (((s8 *) var_r29) + 0x58)));
        var_r3 = (s32 *) ((u8 *) 0);
        rotate_matrix_y((int) 0, (int) var_r4);
        var_r3 = (s32 *) (var_r29 + 0x74);
        scale_current_matrix((int) var_r3);
        var_r3 = (s32 *) var_r30;
        draw_ginja_object((int) var_r3);
        pop_matrix();
        var_r3 = (s32 *) (&model_material_color.value);
        var_r4 = (s32 *) (&saved_model_draw_color.value);
        var_r3 = (s32 *) (&model_material_color.value);
        var_r4 = (s32 *) (&saved_model_draw_color.value);
        copy_vec4__13TRaderMapCoreFPvPv((void *) (&model_material_color.value), (void *) (&saved_model_draw_color.value));
        model_render_flags = lbl_805D5660;
      }
    }
  }
}

#pragma push
#pragma opt_common_subs off
void TUnk_804EDD20::vfunc_8() {
    u8 *arg0 = (u8 *)this;
    if (*(s32 *)((s8 *)arg0 + 0x70) & 1) {
        this->m_80 = (f32) (this->m_80 + lbl_805DF7DC);
        if (this->m_80 > lbl_805DF7E0) {
            this->m_80 = (f32) lbl_805DF7E0;
        }
    } else {
        this->m_80 = (f32) (this->m_80 - lbl_805DF7DC);
        if (this->m_80 < lbl_805DF7D8) {
            this->m_80 = (f32) lbl_805DF7D8;
        }
    }
}
#pragma pop

void TUnk_804EDD20::start_card_effect_trail() {
    u8 *arg0 = (u8 *)this;
    *(s32 *)((s8 *)arg0 + 0x70) = (s32) (*(s32 *)((s8 *)arg0 + 0x70) & 0xFFFFFFFE);
}

void TUnk_804EDD20::start_card_effect_flash() { *(u32*)((char*)this + 0x70) |= 0x1; }

}

extern "C" {

    extern const float lbl_805DF7D8;
    extern const float lbl_805DF7E0;
    extern const float lbl_805DF7E4;
void TObjPlayer::init_offset_vectors() { this->m_70 = 0; *(float*)((char*)this + 0x74) = lbl_805DF7E4; this->m_78 = lbl_805DF7E4; *(float*)((char*)this + 0x7c) = lbl_805DF7E4; this->m_80 = lbl_805DF7D8; *(float*)((char*)this + 0x84) = lbl_805DF7E0; this->m_88 = lbl_805DF7E0; *(float*)((char*)this + 0x8c) = lbl_805DF7E0; }

}

extern "C" {

void *init_offsets_object__10TObjPlayerFPv(void *arg0);
void *init_effect_object__10TObjPlayerFPv(void *arg0);
void construct_card_effect_at_point(void *);
void construct_card_effect_on_target(void *);

extern s32 lbl_804EDD20[];

void *init_offsets_object__10TObjPlayerFPv(void *arg0) {
    construct_card_effect_at_point(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804EDD20;
    ((TObjPlayer *)arg0)->init_offset_vectors();
    return arg0;
}

extern s32 lbl_804EDD20[];

void *init_effect_object__10TObjPlayerFPv(void *arg0) {
    construct_card_effect_on_target(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = lbl_804EDD20;
    ((TObjPlayer *)arg0)->init_offset_vectors();
    return arg0;
}

}

extern "C" {

void *__nw__7TObjectFUl(s32);

extern s32 tl_05;

void TObjPlayer::alloc_and_init(s32 arg0, s32 arg1, s32 arg2) {
    void* obj = __nw__7TObjectFUl((s32)(0x90));
    if (obj != 0) {
        ((s32 (*)(void *, s32, s32, s32, s32, s32))init_offsets_object__10TObjPlayerFPv)(obj, tl_05, arg1, arg2, 0, arg0);
    }
}

extern s32 tl_05;

void TObjPlayer::create_and_init_effect(s32 arg0, u32 *arg1, s32 arg2) {
    void *obj;

    if ((arg1 != NULL) && ((u32) *arg1 != 0U)) {
        obj = __nw__7TObjectFUl((s32)(0x90));
        if (obj != NULL) {
            ((s32 (*)(void *, s32, u32 *, s32, s32, s32))init_effect_object__10TObjPlayerFPv)(obj, tl_05, arg1, arg2, 0, arg0);
        }
    }
}

}

struct O_8032DFF8 { u8 pad[0x1C]; void *o[3]; };

extern "C" {
u32 create_particle_emitter(void *, int);
u32 spawn_particle_effect_with_rotation(void *, void *, int, int);
s32 spawn_particle_effect(void *, int);
extern const f32 lbl_805DF7E8;
void start_card_effect_flash__13TUnk_804EDD44Fv(u8 *arg0);
u8 *find_entity_by_id(u16);
void anchor_card_effect(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
void queue_destruction__7TObjectFv(void *);
u32 find_item_by_id(s32);
s8 TObjPlayer__sub_80102C30();
void anchor_card_effect(u8 *arg0);
void run_card_effect(u8 *arg0);
}

extern "C" {

void vfunc_8__13TUnk_804EDD44Fv(void);

void anchor_card_effect(u8 *arg0) {
  u16 temp_r3;
  u8 *temp_r3_2;
  temp_r3 = *((u16 *) (((s8 *) arg0) + 0x34));
  if (temp_r3 != ((-1U) & 0xFFFFu))
  {
    if (find_entity_by_id(temp_r3) != 0)
    {
      temp_r3_2 = (u8 *) ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0x28)))) + 0xA4))) + ((*((s32 *) (((s8 *) arg0) + 0x2C))) * 0x2C));
      *((f32 *) (((s8 *) arg0) + 0x64)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x1C))) - (*((f32 *) (((s8 *) arg0) + 0x44))));
      *((f32 *) (((s8 *) arg0) + 0x68)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x20))) - (*((f32 *) (((s8 *) arg0) + 0x48))));
      *((f32 *) (((s8 *) arg0) + 0x6C)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x24))) - (*((f32 *) (((s8 *) arg0) + 0x4C))));
    }
  }
}

void TObjPlayer::destroy_effect_objects() {
    O_8032DFF8 *arg0 = (O_8032DFF8 *)this;
    s32 i;
    for (i = 0; i != 3; i++) {
        if (arg0->o[i] != 0) {
            queue_destruction__7TObjectFv(arg0->o[i]);
            arg0->o[i] = 0;
        }
    }
}

void TUnk_804EDD44::vfunc_8() {  }
#pragma push
#pragma fp_contract on
void TUnk_804EDD44::start_card_effect_trail() {
    u8 *arg0 = (u8 *)this;
    this->m_24 = create_particle_emitter((void *) (arg0 + 0x64), (int) (0x1B6));
    if ((u32) this->m_24 != 0U) {
        ((TParticleCtrl *)(this->m_24))->set_tint_color((int) (-0x78));
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TUnk_804EDD44::start_card_effect_flash() {
    u8 *arg0 = (u8 *)this;
    u32 p;
    u32 q;
    *(u32 *)((s8 *)arg0 + 0x1C) = spawn_particle_effect_with_rotation((void *) (arg0 + 0x64), (void *) (arg0 + 0x54), (int) (0x1B9), (int) (0x104));
    p = *(u32 *)((s8 *)arg0 + 0x1C);
    if (p != 0U) {
        ((TObjPlayer *)p)->set_position_xy((f32) (lbl_805DF7E8), (f32) (lbl_805DF7E8));
        q = this->m_50;
        if (q != 0U) {
            ((TParticleCtrl *)(*(u32 *)((s8 *)arg0 + 0x1C)))->set_tint_color((int)(q));
        }
    }
    spawn_particle_effect((void *) (arg0 + 0x64), (int) (0x30));
}
#pragma pop

void run_card_effect(u8 *arg0) {
    s32 i;
    if (find_item_by_id(*(s32 *)((s8 *)arg0 + 0x60)) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if (TObjPlayer__sub_80102C30() != 2) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    anchor_card_effect(arg0);
    for (i = 0; i != 3; i++) {
        if (((O_8032DFF8 *)arg0)->o[i] != NULL) {
            ((TNowLoading *)(((O_8032DFF8 *)arg0)->o[i]))->copy_pos(arg0 + 0x64);
        }
    }
    if (*(s32 *)((s8 *)arg0 + 0x30) == 0) {
        ((TUnk_804EDD44 *)arg0)->start_card_effect_flash();
    } else if (*(s32 *)((s8 *)arg0 + 0x30) == 6) {
        ((TObjPlayer *)arg0)->destroy_effect_objects();
        ((TUnk_804EDD44 *)arg0)->start_card_effect_trail();
    } else if (*(s32 *)((s8 *)arg0 + 0x30) == 12) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    ((TUnk_804EDD44 *)arg0)->vfunc_8();
    (*(s32 *)((s8 *)arg0 + 0x30))++;
}

}
