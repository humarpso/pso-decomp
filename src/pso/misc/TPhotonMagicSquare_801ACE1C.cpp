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
s32 TObjPlayer__sub_803D9214(int, int);
s32 TObjPlayer__sub_803D9B2C();
s32 TObjPlayer__sub_803D9B78();
s32 TBoss7Tentacle__sub_803D9BA0(void *);
s32 TOHangerMachine01__sub_803D9C00(void *);
s32 set_global_param__8TObjFishFi(int);
s32 set_chunk_material_color(void *);
s32 TObjEneSlimeOne__sub_803E4AF4(int, int, f32);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern Color_801ACE1C lbl_804A7418;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805DC1E0;
void render__18TPhotonMagicSquareFv(Self_801ACE1C *self);
}

extern "C" {

void render__18TPhotonMagicSquareFv(Self_801ACE1C *self) {
    begin_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(&self->vB8);
    TObjPlayer__sub_803D9214(0, self->f60);
    set_global_param__8TObjFishFi(self->f24);
    TBoss7Tentacle__sub_803D9BA0(&self->v68);
    Color_801ACE1C saved = self->color;
    if ((self->fB0 % self->fCC) == 0) {
        self->color.r = lbl_805DC1E0;
        self->color.g = lbl_805DC1E0;
        self->color.b = lbl_805DC1E0;
    }
    lbl_805D5660 = some_id_805c6f74;
    some_id_805c6f74 |= 0x10;
    if (self->color.a > 1.0f) {
        self->color.a = 1.0f;
    }
    set_chunk_material_color(&self->color);
    set_global_flag__10TObjPlayerFv();
    TObjEneSlimeOne__sub_803E4AF4(self->f34, self->f90, self->f9C);
    clear_global_state__10TObjPlayerFv();
    set_chunk_material_color(&lbl_804A7418);
    some_id_805c6f74 = lbl_805D5660;
    copy_vec4__13TRaderMapCoreFPvPv(&self->color, &saved);
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
}

}
