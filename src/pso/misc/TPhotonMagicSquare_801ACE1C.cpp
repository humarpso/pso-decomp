#include "types.h"
struct Color_801ACE1C { f32 a, r, g, b; };

struct Vec_801ACE1C { f32 x, y, z; };

struct Self_801ACE1C {
    u8 pad0[0x24];
    s32 f24;
    u8 pad1[0x34 - 0x28];
    s32 f34;
    u8 pad2[0x60 - 0x38];
    s32 f60;
    u8 pad3[0x68 - 0x64];
    Vec_801ACE1C v68;
    u8 pad4[0x90 - 0x74];
    s32 f90;
    u8 pad5[0x9C - 0x94];
    f32 f9C;
    Color_801ACE1C color;
    u32 fB0;
    u8 pad6[0xB8 - 0xB4];
    Vec_801ACE1C vB8;
    u8 pad7[0xCC - 0xC4];
    u32 fCC;
};

extern "C" {
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(int);
s32 set_chunk_material_color(void *);
s32 draw_model_motion(int, int, f32);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern Color_801ACE1C chunk_material_color_half_alpha_f32;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
void render__18TPhotonMagicSquareFv(Self_801ACE1C *self);
}

extern "C" {

void render__18TPhotonMagicSquareFv(Self_801ACE1C *self) {
    begin_effect_render__13TParticleCtrlFv();
    push_matrix();
    post_translate_matrix(&self->vB8);
    rotate_matrix_y(0, self->f60);
    set_global_param__8TObjFishFi(self->f24);
    scale_current_matrix(&self->v68);
    Color_801ACE1C saved = self->color;
    if ((self->fB0 % self->fCC) == 0) {
        self->color.r = (0.5f);
        self->color.g = (0.5f);
        self->color.b = (0.5f);
    }
    lbl_805D5660 = some_id_805c6f74;
    some_id_805c6f74 |= 0x10;
    if (self->color.a > 1.0f) {
        self->color.a = 1.0f;
    }
    set_chunk_material_color(&self->color);
    set_global_flag__10TObjPlayerFv();
    draw_model_motion(self->f34, self->f90, self->f9C);
    clear_global_state__10TObjPlayerFv();
    set_chunk_material_color(&chunk_material_color_half_alpha_f32);
    some_id_805c6f74 = lbl_805D5660;
    copy_vec4__13TRaderMapCoreFPvPv(&self->color, &saved);
    pop_matrix();
    end_effect_render__13TParticleCtrlFv();
}

struct Self_801ACF24 {
    u8 pad0[0x68];
    f32 f68;
    u8 pad6c[4];
    f32 f70;
    u8 pad74[0x94 - 0x74];
    f32 f94;
    f32 f98;
    f32 f9C;
    f32 fA0;
    u8 padA4[0xb0 - 0xa4];
    u32 fB0;
    s32 fB4;
    u8 padB8[0xc4 - 0xb8];
    u32 fC4;
    f32 fC8;
};

void queue_destruction__7TObjectFv(void *);

#pragma push
#pragma fp_contract on
void run_task__18TPhotonMagicSquareFv(Self_801ACF24 *self) {
    if (self->fB0 > self->fC4) {
        self->fB4 = 1;
    }
    switch (self->fB4) {
    case 0:
        if (self->fA0 < (1.0f)) {
            self->fA0 = (2.0f) * self->fC8 + self->fA0;
        }
        if (self->f68 < (1.0f)) {
            self->f68 = (2.0f) * self->fC8 + self->f68;
            self->f70 = (2.0f) * self->fC8 + self->f70;
        }
        break;
    case 1:
        if (self->fA0 > (0.0f)) {
            self->fA0 = self->fA0 - self->fC8;
        }
        if (self->f68 > (0.0f)) {
            self->f68 = self->f68 - self->fC8;
            self->f70 = self->f70 - self->fC8;
        }
        if ((f32)self->fB0 > (f32)self->fC4 + (1.0f) / self->fC8) {
            queue_destruction__7TObjectFv(self);
            return;
        }
        break;
    }
    self->fB0++;
    if (self->f9C < self->f94) {
        self->f9C = self->f9C + self->f98;
    } else {
        self->f9C = (0.0f);
    }
}
#pragma pop

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_801AD0F0_TPhotonMagicSquare__data_804C3940 { M2C_UNK value; u8 remaining[0x5C]; };

struct RecoveredGlobal_801AD0F0___vt__18TPhotonMagicSquare { M2C_UNK value; u8 remaining[0x34]; };

struct RecoveredGlobal_801AD218_TPhotonMagicSquare__data_804C3940 { M2C_UNK value; u8 remaining[0x5C]; };

struct RecoveredGlobal_801AD218___vt__18TPhotonMagicSquare { M2C_UNK value; u8 remaining[0x34]; };

struct RecoveredGlobal_801AD330_TPhotonMagicSquare__data_804C3940 { M2C_UNK value; u8 remaining[0x5C]; };

struct RecoveredGlobal_801AD330___vt__18TPhotonMagicSquare { M2C_UNK value; u8 remaining[0x34]; };

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 construct_world_actor_base(void *);
extern RecoveredGlobal_801AD0F0_TPhotonMagicSquare__data_804C3940 TPhotonMagicSquare__color_palette;
extern RecoveredGlobal_801AD0F0___vt__18TPhotonMagicSquare __vt__18TPhotonMagicSquare;
extern s32 TPhotonMagicSquare__data_805D3508;
extern u8 *photon_blast_shared_resource;
u8 *TPhotonMagicSquare__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 construct_world_actor_base(void *);
extern RecoveredGlobal_801AD0F0_TPhotonMagicSquare__data_804C3940 TPhotonMagicSquare__color_palette;
extern RecoveredGlobal_801AD0F0___vt__18TPhotonMagicSquare __vt__18TPhotonMagicSquare;
extern s32 TPhotonMagicSquare__data_805D3508;
extern u8 *photon_blast_shared_resource;
u8 *construct_photon_magic_square_normal(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 find_entity_by_id(void *);
s32 construct_world_actor_base(void *);
s32 play_sound_effect(int, int, int, int);
extern RecoveredGlobal_801AD0F0_TPhotonMagicSquare__data_804C3940 TPhotonMagicSquare__color_palette;
extern RecoveredGlobal_801AD0F0___vt__18TPhotonMagicSquare __vt__18TPhotonMagicSquare;
extern s32 TPhotonMagicSquare__data_805D3508;
extern u8 *photon_blast_shared_resource;
u8 *construct_at_owner__18TPhotonMagicSquareFPviii(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3);
}

extern "C" {

void *__dt__18TPhotonMagicSquareFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

void *__dt__18TPhotonMagicSquareFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)&__vt__18TPhotonMagicSquare;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

extern "C" {

u8 *TPhotonMagicSquare__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    construct_world_actor_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__18TPhotonMagicSquare.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TPhotonMagicSquare__data_805D3508;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(photon_blast_shared_resource, u8 **, 0x42C), s32 *, 0x28);
    M2C_FIELD(arg0, u8 **, 0x90) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD(photon_blast_shared_resource, u8 **, 0x430), void **, 0x14));
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x90), u32 *, 4) - (1.0f));
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) (0.1f);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(photon_blast_shared_resource, u8 **, 0x42C), s32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) (0.0f);
    copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0xA0), (void *) ((u8 *)&TPhotonMagicSquare__color_palette.value + (arg2 * 0x10)));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB8), (void *) (arg3));
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = arg4;
    M2C_FIELD(arg0, f32 *, 0xC8) = farg0;
    M2C_FIELD(arg0, s32 *, 0xCC) = 0xFFFFFF;
    return arg0;
}
u8 *construct_photon_magic_square_normal(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3, s32 arg4) {
    construct_world_actor_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801AD218___vt__18TPhotonMagicSquare *)&__vt__18TPhotonMagicSquare).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TPhotonMagicSquare__data_805D3508;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(photon_blast_shared_resource, u8 **, 0x42C), s32 *, 0x28);
    M2C_FIELD(arg0, u8 **, 0x90) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD(photon_blast_shared_resource, u8 **, 0x430), void **, 0x14));
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x90), u32 *, 4) - (1.0f));
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) (0.1f);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(photon_blast_shared_resource, u8 **, 0x42C), s32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) (0.0f);
    copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0xA0), (void *) ((u8 *)&(*(RecoveredGlobal_801AD218_TPhotonMagicSquare__data_804C3940 *)&TPhotonMagicSquare__color_palette).value + (arg2 * 0x10)));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB8), (void *) (arg3));
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = arg4;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (0.04f);
    M2C_FIELD(arg0, s32 *, 0xCC) = 0xFFFFFF;
    return arg0;
}
u8 *construct_at_owner__18TPhotonMagicSquareFPviii(u8 *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;
    construct_world_actor_base((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801AD330___vt__18TPhotonMagicSquare *)&__vt__18TPhotonMagicSquare).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TPhotonMagicSquare__data_805D3508;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(M2C_FIELD(photon_blast_shared_resource, u8 **, 0x42C), s32 *, 0x28);
    M2C_FIELD(arg0, u8 **, 0x90) = (unsigned char *) ((void *) M2C_FIELD(M2C_FIELD(photon_blast_shared_resource, u8 **, 0x430), void **, 0x14));
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) ((f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x90), u32 *, 4) - (1.0f));
    M2C_FIELD(arg0, f32 *, 0x98) = (f32) (0.1f);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(M2C_FIELD(photon_blast_shared_resource, u8 **, 0x42C), s32 *, 0x2C);
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (0.0f);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) (0.0f);
    copy_vec4__13TRaderMapCoreFPvPv((void *) (arg0 + 0xA0), (void *) ((u8 *)&(*(RecoveredGlobal_801AD330_TPhotonMagicSquare__data_804C3940 *)&TPhotonMagicSquare__color_palette).value + (arg2 * 0x10)));
    temp_r3 = find_entity_by_id((void *) (arg3));
    if (temp_r3 != 0) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB8), (void *) (temp_r3 + 0x38));
    }
    M2C_FIELD(arg0, f32 *, 0xBC) += (2.0f);
    M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xC4) = 0x37;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (0.1f);
    M2C_FIELD(arg0, s32 *, 0xCC) = 2;
    play_sound_effect((int) (0x4002AD2E), (int) (0), (int) (0), (int) (0));
    return arg0;
}

}
