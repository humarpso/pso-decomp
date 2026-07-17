#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_particle_chain__15TOTrapAncient02FPv(u8 *arg0);
void draw_effect_chain__15TOTrapAncient02FPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOSignCave03__sub_803DB510(int);
M2C_UNK TOTrapAncient02__sub_800837D4(int);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK TObjPlayer__sub_803D9214(int, int);
M2C_UNK TObjPlayer__sub_803D9624(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK disable_if_single_screen__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK setup_particle_tev(int);

void render_particle_chain__15TOTrapAncient02FPv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;

    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
    TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(temp_r31, f32 *, 8)), (f32) (M2C_FIELD(temp_r31, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x344)), (f32) (M2C_FIELD(temp_r31, f32 *, 0x10)));
    setup_particle_tev((int) (0));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    TOTrapAncient02__sub_800837D4((int) (0x38E));
    TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31, s32 *, 4)));
    disable_if_single_screen__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B2C();
    temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
    TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(temp_r31_2, f32 *, 8)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x348)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0x10)));
    setup_particle_tev((int) (0));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    TOTrapAncient02__sub_800837D4((int) (0x38E));
    TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
    disable_if_single_screen__13TParticleCtrlFv();
    begin_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B2C();
    temp_r31_3 = (unsigned char *) (M2C_FIELD(temp_r31_2, void **, 0x2C));
    TOHangerMachine01__sub_803D9C00((void *) (temp_r31_3 + 8));
    setup_particle_tev((int) (1));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    TOTrapAncient02__sub_800837D4((int) (0x38E));
    TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
    disable_if_single_screen__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B2C();
    temp_r31_4 = (unsigned char *) (M2C_FIELD(temp_r31_3, void **, 0x30));
    TOHangerMachine01__sub_803D9C00((void *) (temp_r31_4 + 8));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x34C)));
    setup_particle_tev((int) (0));
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    TOTrapAncient02__sub_800837D4((int) (0x38E));
    TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_4, s32 *, 4)));
    disable_if_single_screen__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B78();
}

void draw_effect_chain__15TOTrapAncient02FPv(u8 *arg0) {
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    u8 *temp_r31_4;

    TObjPlayer__sub_803D9B2C();
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    temp_r31 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x34));
    TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(temp_r31, f32 *, 8)), (f32) (M2C_FIELD(temp_r31, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x344)), (f32) (M2C_FIELD(temp_r31, f32 *, 0x10)));
    TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31, s32 *, 4)));
    TObjPlayer__sub_803D9B2C();
    temp_r31_2 = (unsigned char *) (M2C_FIELD(temp_r31, void **, 0x2C));
    TObjPlayer__sub_803D9624((int) (0), (f32) (M2C_FIELD(temp_r31_2, f32 *, 8)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0xC) + M2C_FIELD(arg0, f32 *, 0x348)), (f32) (M2C_FIELD(temp_r31_2, f32 *, 0x10)));
    TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_2, s32 *, 4)));
    begin_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B2C();
    temp_r31_3 = (unsigned char *) (M2C_FIELD(temp_r31_2, void **, 0x2C));
    TOHangerMachine01__sub_803D9C00((void *) (temp_r31_3 + 8));
    TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_3, s32 *, 4)));
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B2C();
    temp_r31_4 = (unsigned char *) (M2C_FIELD(temp_r31_3, void **, 0x30));
    TOHangerMachine01__sub_803D9C00((void *) (temp_r31_4 + 8));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x34C)));
    TOSignCave03__sub_803DB510((int) (M2C_FIELD(temp_r31_4, s32 *, 4)));
    TObjPlayer__sub_803D9B78();
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
    TObjPlayer__sub_803D9B78();
}

}
