#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80173330_lbl_804B3A18 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80173330_lbl_804B3A18_size[sizeof(RecoveredGlobal_80173330_lbl_804B3A18) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_801733D8___vt__15TORainbowCave01 { M2C_UNK value; u8 remaining[0x34]; };

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

typedef s32 M2C_UNK;
struct Cave_801731F8 { u8 pad[0xC8]; f32 speed; f32 alpha; f32 range; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80173330_lbl_804B3A18 lbl_804B3A18;
extern u32 TORainbowCave01__data_805D5A70;
void load_resource_instance__15TORainbowCave01Fv(void);
u8 * init_map_object_base(void *);
void init_light_params__15TORainbowCave01FPviff(u8 *arg0, int, f32, f32);
extern M2C_UNK __vt__15TORainbowCave01[];
extern s32 lbl_805D30D4;
extern u32 TORainbowCave01__data_805D5A70;
u8 *TORainbowCave01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 check_demo_mode__10TObjPlayerFv(void);
void begin_effect_render__13TParticleCtrlFv(void);
void end_effect_render__13TParticleCtrlFv(void);
void rotate_matrix_y(s32, s32);
void push_matrix(void);
void pop_matrix(void);
void scale_current_matrix(void *);
void post_translate_matrix(void *);
void set_global_param__8TObjFishFi(s32);
void draw_ginja_object(s32);
void set_chunk_material_color(void *);
extern Color_8017310C chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
void render__15TORainbowCave01Fv(Cave_8017310C *self);
void update__15TORainbowCave01FPv(void *);
s32 is_player_in_range__15TORainbowCave01Fif(s32 arg0, f32 farg0);
void run_task__15TORainbowCave01Fv(Cave_801731F8 *self);
}

extern "C" {

void *__dt__15TORainbowCave01Fv(void *arg0, s16 arg1);
void *create__15TORainbowCave01FPv(void *arg0);
void free_static_data__15TORainbowCave01Fv(void);
s32 is_player_in_range__15TORainbowCave01Fif(s32 arg0, f32 farg0);
void TLobby__sub_8001FE7C(void*, int);
f32 horizontal_distance_squared(s32, s32);
s32 find_entity_by_id(u16);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_key_base__5TOKeyFPvs(void *, int);

extern s32 lbl_805D53A0;

s32 is_player_in_range__15TORainbowCave01Fif(s32 arg0, f32 farg0) {
    s32 temp_r3;

    temp_r3 = find_entity_by_id((u16) lbl_805D53A0);
    if ((temp_r3 != 0) && (horizontal_distance_squared(arg0 + 0x38, temp_r3 + 0x38) < farg0)) {
        return 1;
    }
    return 0;
}

extern void *tl_05;

#pragma push
#pragma fp_contract on
void init_light_params__15TORainbowCave01FPviff(u8 *arg0, int _w1, f32 _w2, f32 _w3) {
    f32 k = 0.0009765625f;
    M2C_FIELD(arg0, f32 *, 0xC8) = 1.0f / ((f32) M2C_FIELD(arg0, s32 *, 0x84) * k + 29.999998f);
    M2C_FIELD(arg0, f32 *, 0xD0) = 4e+04f + (f32) M2C_FIELD(arg0, s32 *, 0x8C);
    VecCopy__FP3VecPC3Vec(arg0 + 0xD4, arg0 + 0x68);
}
#pragma pop

void render__15TORainbowCave01Fv(Cave_8017310C *self) {
    Color_8017310C c;
    s32 old;
    if (self->m8(self->fC0, self->fC4) != 0 && -1.0f < self->fCC) {
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi(self->f24);
        old = some_id_805c6f74;
        lbl_805D5660 = old;
        some_id_805c6f74 = old | 0x20;
        c.d = c.c = c.b = 0.0f;
        if (check_demo_mode__10TObjPlayerFv() == 1) {
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
        some_id_805c6f74 = lbl_805D5660;
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__15TORainbowCave01Fv(Cave_801731F8 *self) {
    s32 in = (is_player_in_range__15TORainbowCave01Fif((s32)self, self->range) == 1) ? 1 : 0;
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
    update__15TORainbowCave01FPv(self);
}

void *create__15TORainbowCave01FPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0xE0);
    if (o != NULL) {
        o = TORainbowCave01__ct((u8 *)(o), (M2C_UNK)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TORainbowCave01__data_805D5A70;

void free_static_data__15TORainbowCave01Fv(void) {
    if ((u32) TORainbowCave01__data_805D5A70 != 0U) {
        TLobby__sub_8001FE7C((void*)TORainbowCave01__data_805D5A70, 1);
        TORainbowCave01__data_805D5A70 = 0U;
    }
}

extern M2C_UNK __vt__15TORainbowCave01[];

void load_resource_instance__15TORainbowCave01Fv(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &lbl_804B3A18.value, 0, 0, 0));
    }
    (*(s32 *)&TORainbowCave01__data_805D5A70) = var_r0;
}

void *__dt__15TORainbowCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TORainbowCave01;
        destroy_key_base__5TOKeyFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TORainbowCave01__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    u8 *temp_r4;
    init_map_object_base(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801733D8___vt__15TORainbowCave01 *)&__vt__15TORainbowCave01).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D30D4;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD((*(u8 * *)&TORainbowCave01__data_805D5A70), u8 **, 0x42C), s32 *, 8);
    temp_r4 = (u8 *)(M2C_FIELD((*(u8 * *)&TORainbowCave01__data_805D5A70), u8 **, 0x42C));
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(temp_r4, s32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) 400.0f;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (4e+04f);
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) (0.0f);
    init_light_params__15TORainbowCave01FPviff((u8 *)((void *) (arg0)), (int)((int) (temp_r4)), (f32) ((4e+04f)), (f32) (400.0f));
    return arg0;
}

}
