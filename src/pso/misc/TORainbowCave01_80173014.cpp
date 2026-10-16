#include "types.h"
#include "pso/misc/TORainbowCave01.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TOKey.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_80173330_lbl_804B3A18 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80173330_lbl_804B3A18_size[sizeof(RecoveredGlobal_80173330_lbl_804B3A18) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_801733D8___vt__15TORainbowCave01 { s32 value; u8 remaining[0x34]; };

struct Color_8017310C { f32 a, b, c, d; };

struct VBase_8017310C { u8 pad[0x18]; };

struct Cave_8017310C : VBase_8017310C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    s32 f34;
    u8 pos38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0xC0 - 0x64];
    f32 fC0;
    f32 fC4;
    f32 fC8;
    f32 fCC;
    u8 padD0[0xD4 - 0xD0];
    u8 fD4[4];
};

struct Cave_801731F8 { u8 pad[0xC8]; f32 speed; f32 alpha; f32 range; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
extern RecoveredGlobal_80173330_lbl_804B3A18 abeniji_fe_obj001_niji_resource_descriptor;
extern u32 TORainbowCave01__static_model_resource;
u8 * init_map_object_base(void *);
extern s32 __vt__15TORainbowCave01[];
extern s32 TORainbowCave01__name;
extern u32 TORainbowCave01__static_model_resource;
u8 *TORainbowCave01__ct(u8 *arg0, s32 arg1, s32 arg2);
void rotate_matrix_y(s32, s32);
void push_matrix(void);
void pop_matrix(void);
void scale_current_matrix(void *);
void post_translate_matrix(void *);
void draw_ginja_object(s32);
void set_chunk_material_color(void *);
extern Color_8017310C chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 model_render_flags;
}

extern "C" {

void *__dt__15TORainbowCave01Fv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
f32 horizontal_distance_squared(s32, s32);
s32 find_entity_by_id(u16);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);

extern s32 local_client_id;

s32 TORainbowCave01::is_player_in_range(f32 farg0) {
    s32 arg0 = (s32)this;
    s32 temp_r3;

    temp_r3 = find_entity_by_id((u16) local_client_id);
    if ((temp_r3 != 0) && (horizontal_distance_squared(arg0 + 0x38, temp_r3 + 0x38) < farg0)) {
        return 1;
    }
    return 0;
}

extern void *tl_05;

#pragma push
#pragma fp_contract on
void TORainbowCave01::init_light_params(int _w1, f32 _w2, f32 _w3) {
    u8 *arg0 = (u8 *)this;
    f32 k = 0.0009765625f;
    *(f32 *)((s8 *)arg0 + 0xC8) = 1.0f / ((f32) this->m_84 * k + 29.999998f);
    this->m_d0 = 4e+04f + (f32) *(s32 *)&this->unk_8C;
    VecCopy__FP3VecPC3Vec(arg0 + 0xD4, arg0 + 0x68);
}
#pragma pop

void TORainbowCave01::render() {
    Cave_8017310C *self = (Cave_8017310C *)this;
    Color_8017310C c;
    s32 old;
    if (self->m8(self->fC0, self->fC4) != 0 && -1.0f < self->fCC) {
        TParticleCtrl::begin_effect_render();
        TObjFish::set_global_param(self->f24);
        old = model_render_flags;
        lbl_805D5660 = old;
        model_render_flags = old | 0x20;
        c.d = c.c = c.b = 0.0f;
        if (TObjPlayer::check_demo_mode() == 1) {
            c.a = 0.0f;
        } else {
            c.a = self->fCC;
        }
        set_chunk_material_color(&c);
        push_matrix();
        post_translate_matrix(self->pos38);
        rotate_matrix_y(0, self->f60);
        scale_current_matrix(self->fD4);
        draw_ginja_object(self->f34);
        pop_matrix();
        set_chunk_material_color(chunk_material_color_half_alpha_f32);
        model_render_flags = lbl_805D5660;
        TParticleCtrl::end_effect_render();
    }
}

void TORainbowCave01::run_task() {
    Cave_801731F8 *self = (Cave_801731F8 *)this;
    s32 in = (is_player_in_range(self->range) == 1) ? 1 : 0;
    switch (in + 1) {
    case 1:
        self->alpha += self->speed;
        if (0.0f <= self->alpha) {
            self->alpha = 0.0f;
        }
        break;
    case 2:
        self->alpha -= self->speed;
        if (self->alpha <= -1.0f) {
            self->alpha = -1.0f;
        }
        break;
    }
    ((TORainbowCave01 *)self)->TUnk_804AFBF8::run_task();
}

void *TORainbowCave01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TORainbowCave01__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TORainbowCave01__static_model_resource;

void TORainbowCave01::free_static_data() {
    if ((u32) TORainbowCave01__static_model_resource != 0U) {
        TLobby__sub_8001FE7C((void*)TORainbowCave01__static_model_resource, 1);
        TORainbowCave01__static_model_resource = 0U;
    }
}

extern s32 __vt__15TORainbowCave01[];

void TORainbowCave01::load_resource_instance() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x440))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &abeniji_fe_obj001_niji_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TORainbowCave01__static_model_resource) = var_r0;
}

void *__dt__15TORainbowCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TORainbowCave01;
        ((TOKey *)arg0)->destroy_key_base(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TORainbowCave01__ct(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *temp_r4;
    init_map_object_base(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_801733D8___vt__15TORainbowCave01 *)&__vt__15TORainbowCave01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TORainbowCave01__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TORainbowCave01__static_model_resource) + 0x42C)) + 8);
    temp_r4 = (u8 *)(*(u8 **)((s8 *)(*(u8 * *)&TORainbowCave01__static_model_resource) + 0x42C));
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(s32 *)((s8 *)temp_r4 + 0xC);
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) 400.0f;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) (4e+04f);
    *(f32 *)((s8 *)arg0 + 0xCC) = (f32) (0.0f);
    ((TORainbowCave01 *)arg0)->init_light_params((int)((int) (temp_r4)), (f32) ((4e+04f)), (f32) (400.0f));
    return arg0;
}

}
