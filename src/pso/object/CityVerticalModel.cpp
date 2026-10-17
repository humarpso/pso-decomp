#include "types.h"
#include "pso/object/TUnk_804B5C08.h"
#include "pso/TParticleCtrl.h"
#include "pso/object/TObjFish.h"
extern const f32 lbl_805DBC00;

struct VBase_18_26a62c
{
  char pad[0x18];
};

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

struct RecoveredFields_80182E90_arg0
{
  u8 unknown_0[0x60];
  s32 field_60;
  u8 unknown_64[0x2C];
  s32 field_90;
  u8 unknown_94[0x8];
  f32 field_9C;
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_801830BC_lbl_804B5C08 {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
void vfunc_13__13TUnk_804B5C08Fl(void* a0);
s32 get_city_common_model(int);
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_object();
extern s32 city_common_texture_list;
extern const f32 lbl_805DBC04;
extern const f32 lbl_805DBC08;
void render__13TUnk_804B5C08Fv(u8 *arg0);
extern const f32 city_vertical_model_min_y_offset;
extern const f32 city_vertical_model_max_y_offset;
extern const f32 city_vertical_model_y_step;
void run_task__13TUnk_804B5C08Fv(u8 *arg0);
void *__nw__7TObjectFUl(int);
extern void *tl_05;
void *create_city_vertical_model(void *arg0);
void __dl__7TObjectFPv(void *);
extern s32 city_vertical_model_vtable[];
void *destroy_city_vertical_model(void *arg0, s16 arg1);
s32 construct_world_actor_base(void *, void *);
u8 *construct_city_vertical_model(u8 *arg0, s32 arg1, s32 arg2);
void TUnk_804B5C08::vfunc_13(s32) { this->m_9c = lbl_805DBC00; *(int*)((char*)this + 0x90) = 1; }
typedef struct RecoveredFields_80182E90_arg0 RecoveredFields_80182E90_arg0;
typedef struct VBase_18_26a62c VBase_18_26a62c;
typedef struct VObj_18_26a62c VObj_18_26a62c;
#pragma fp_contract on
#define PSO_VCALL_VObj_18_26a62c_m8(_self, _arg0, _arg1) (((VObj_18_26a62c *)(_self))->m8((_arg0), (_arg1)))
void TUnk_804B5C08::render() {
    u8 *arg0 = (u8 *)this;
  u8 *new_var2;
  unsigned char new_var;
  new_var = ((s32) ((RecoveredFields_80182E90_arg0 *) arg0)->field_90) != 0;
  if (new_var)
  {
    if (PSO_VCALL_VObj_18_26a62c_m8(arg0, lbl_805DBC04, lbl_805DBC08) == 0)
    {
      ((RecoveredFields_80182E90_arg0 *) arg0)->field_9C = ((RecoveredFields_80182E90_arg0 *) arg0)->field_9C;
      return;
    }
    TObjFish::set_global_param((s32)((void *) city_common_texture_list));
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    translate_matrix((int) 0, (f32) lbl_805DBC00, (f32) ((RecoveredFields_80182E90_arg0 *) arg0)->field_9C, (f32) lbl_805DBC00);
    new_var2 = arg0;
    rotate_matrix_y((int) 0, (int) ((RecoveredFields_80182E90_arg0 *) new_var2)->field_60);
    get_city_common_model((int) 8);
    draw_ginja_object();
    pop_matrix();
  }
}
#pragma fp_contract on
#define PSO_VCALL_VObj_18_26a62c_m8(_self, _arg0, _arg1) (((VObj_18_26a62c *)(_self))->m8((_arg0), (_arg1)))
void TUnk_804B5C08::run_task() {
    u8 *arg0 = (u8 *)this;
  s32 temp_r0;
  temp_r0 = *((s32 *) (((s8 *) arg0) + 0x90));
  switch (temp_r0)
  {
    case 0:
      *((s32 *) (((s8 *) arg0) + 0x98)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x98))) - 1);
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x98)))) <= 0)
    {
      *((s32 *) (((s8 *) arg0) + 0x98)) = 0x12C;
      if (((s32) (this->m_94)) == 2)
      {
        *((s32 *) (((s8 *) arg0) + 0x90)) = 1;
        *(f32 *)&this->m_9c = (f32) city_vertical_model_min_y_offset;
        return;
        return;
      }
      *((s32 *) (((s8 *) arg0) + 0x90)) = 2;
      *(f32 *)&this->m_9c = (f32) city_vertical_model_max_y_offset;
    }
      return;
    case 1:
      *(f32 *)&this->m_9c = (f32) ((*(f32 *)&this->m_9c) + city_vertical_model_y_step);
      if ((*(f32 *)&this->m_9c) >= city_vertical_model_max_y_offset)
    {
      this->m_94 = 1;
      *((s32 *) (((s8 *) arg0) + 0x90)) = 0;
      return;
    }
      break;
    case 2:
      *(f32 *)&this->m_9c = (f32) ((*(f32 *)&this->m_9c) - city_vertical_model_y_step);
      if ((*(f32 *)&this->m_9c) <= city_vertical_model_min_y_offset)
    {
      this->m_94 = 2;
      *((s32 *) (((s8 *) arg0) + 0x90)) = 0 * 0;
      return;
    }
      break;
  }
}
void *create_city_vertical_model(void *arg0) {
    void *o = __nw__7TObjectFUl(0xA0);
    if (o != NULL) {
        o = construct_city_vertical_model((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}
void *destroy_city_vertical_model(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = city_vertical_model_vtable;
        TParticleCtrl::destroy_particle(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_801830BC_lbl_804B5C08_size[sizeof(RecoveredGlobal_801830BC_lbl_804B5C08) == 0x38 ? 1 : -1];
u8 *construct_city_vertical_model(u8 *arg0, s32 parent, s32 arg2) {
    construct_world_actor_base((void *) (arg0), (void *) (parent));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_801830BC_lbl_804B5C08 *)&city_vertical_model_vtable).value;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x90) = 1;
    *(s32 *)((s8 *)arg0 + 0x94) = 2;
    *(s32 *)((s8 *)arg0 + 0x98) = 0;
    *(f32 *)((s8 *)arg0 + 0x9C) = (f32) lbl_805DBC00;
    return arg0;
}

__declspec(section ".sdata2") extern const f32 lbl_805DBC00 = 0.0f;
__declspec(section ".sdata2") extern const f32 lbl_805DBC04 = 600.0f;
__declspec(section ".sdata2") extern const f32 lbl_805DBC08 = 50.0f;
__declspec(section ".sdata2") extern const f32 city_vertical_model_min_y_offset = -200.0f;
__declspec(section ".sdata2") extern const f32 city_vertical_model_max_y_offset = 200.0f;
__declspec(section ".sdata2") extern const f32 city_vertical_model_y_step = 2.0f;
void render_shadows__7TObjectFv();
void vfunc_6__13TUnk_804B9870FPsl();
void apply_object_set_data();
void reset_motion_fields__13TUnk_804B9870Fv();
void vfunc_9__13TUnk_804B9870Fv();
void update_object_view_visibility__13TUnk_804B9870Fff();
void classify_actor_view_detail__13TUnk_804B9870Ffff();
void vfunc_12__13TUnk_804B9870Fv();
s32 city_vertical_model_vtable[14] = {
    0,
    0,
    (s32)destroy_city_vertical_model,
    (s32)run_task__13TUnk_804B5C08Fv,
    (s32)render__13TUnk_804B5C08Fv,
    (s32)render_shadows__7TObjectFv,
    (s32)vfunc_6__13TUnk_804B9870FPsl,
    (s32)apply_object_set_data,
    (s32)reset_motion_fields__13TUnk_804B9870Fv,
    (s32)vfunc_9__13TUnk_804B9870Fv,
    (s32)update_object_view_visibility__13TUnk_804B9870Fff,
    (s32)classify_actor_view_detail__13TUnk_804B9870Ffff,
    (s32)vfunc_12__13TUnk_804B9870Fv,
    (s32)vfunc_13__13TUnk_804B5C08Fl,
};
}
