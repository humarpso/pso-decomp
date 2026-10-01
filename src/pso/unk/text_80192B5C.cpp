#include "types.h"
struct Obj_80192B5C { u8 pad0[0x38]; u8 f38[0x24]; s32 f5C; s32 f60; u8 pad64[0x48]; s32 fAC; u8 padB0[8]; f32 fB8; s32 fBC; s32 fC0; s32 fC4; s32 fC8[4]; };

extern "C" {
void begin_effect_render__13TParticleCtrlFv();
void end_effect_render__13TParticleCtrlFv();
void free_children__12TObjDoorJungFPvPv(s32, int);
void rotate_matrix_y(int, int);
void TObjPlayer__sub_803D9B2C();
void TObjPlayer__sub_803D9B78();
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(s32);
void TObjBoss2Tunnel__sub_803DB470(s32);
void TObjDoor__sub_803DC894(s32, s32, f32);
extern u16 lbl_80445B7C[];
extern s32 lbl_805D5C28;
void fn_80192B5C(Obj_80192B5C *arg0);
}

extern "C" {

void fn_80192B5C(Obj_80192B5C *arg0) {
    s32 i;
    for (i = 0; i < 4; i++) {
        free_children__12TObjDoorJungFPvPv(arg0->fC8[i], lbl_80445B7C[arg0->fAC]);
    }
    set_global_param__8TObjFishFi(lbl_805D5C28);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00(arg0->f38);
    rotate_matrix_y(0, arg0->f60);
    TObjBoss2Tunnel__sub_803DB470(arg0->fBC);
    begin_effect_render__13TParticleCtrlFv();
    TObjDoor__sub_803DC894(arg0->fC0, arg0->fC4, arg0->fB8);
    end_effect_render__13TParticleCtrlFv();
    TObjPlayer__sub_803D9B78();
}

}
