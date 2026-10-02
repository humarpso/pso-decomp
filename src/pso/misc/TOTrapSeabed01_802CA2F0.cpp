#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_802CA550 {
    u8 pad0[0x326];
    s16 f326;
    u8 pad328[0x340 - 0x328];
    s32 f340;
    u8 pad344[0x34C - 0x344];
    s32 f34C;
};

extern "C" {
s32 disable_if_single_screen__13TParticleCtrlFv();
s32 setup_particle_tev(int);
s32 TOTrapAncient02__sub_800837D4(int);
f32 TObjPlayer__sub_803D99F8(void *, void *);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
s32 TBoss7Tentacle__sub_803D9BA0(void *);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(void *);
s32 draw_ginja_model(int);
extern s32 TOTrapSeabed01__data_805D6814;
void TOTrapSeabed01__sub_802CA3EC(u8 *arg0, u8 *arg1);
s32 is_split_screen();
s32 get_state_flag__9TMainTaskFv();
void render_effect_layers__14TOTrapSeabed01FPv(u8 *arg0);
void draw__14TOTrapSeabed01FPv(u8 *arg0);
s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(void *);
void render__14TOTrapSeabed01Fv(S_802CA550 *arg0);
}

extern "C" {

void draw__14TOTrapSeabed01FPv(u8 *arg0);
void render_effect_layers__14TOTrapSeabed01FPv(u8 *arg0);
M2C_UNK PPCSync();
M2C_UNK scroll_ginja_mesh_uvs(int, int, int, void *, int);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
void TOTrapSeabed01__vt82(void);
M2C_UNK draw_ginja_model_with_motion(int, int, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_80141A30();
M2C_UNK func_80141618__Fv();
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK set_depth_buffer_settings_1__Fv();
M2C_UNK set_depth_buffer_settings_3__Fv();
M2C_UNK set_depth_buffer_settings_id__FUl(int);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK set_npc_enemy_param(void *);

extern M2C_UNK trigger_by_id__14TOTrapSeabed01FUi[];
extern s32 lbl_805D53A4;
extern s32 TOTrapSeabed01__data_805D6814;
extern u8 *lbl_805D6818;
extern s32 lbl_805D681C;
extern s32 lbl_805D6820;

void render_effect_layers__14TOTrapSeabed01FPv(u8 *arg0) {
    set_global_param__8TObjFishFi((void *)((void *) (TOTrapSeabed01__data_805D6814)));
    if ((s32) lbl_805D53A4 != (s32) lbl_805D681C) {
        if (((void *) lbl_805D6818 != NULL) && ((s32) lbl_805D6820 != -1)) {
            scroll_ginja_mesh_uvs((int) (M2C_FIELD(lbl_805D6818, s32 *, 4)), (int) (0), (int) (-0x14), (void *) ((u16) lbl_805D6820), (int) (1));
            PPCSync();
        }
        lbl_805D681C = lbl_805D53A4;
    }
    set_npc_enemy_param((void *) (trigger_by_id__14TOTrapSeabed01FUi));
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_y((int)((int) (0)), (int)((int) (M2C_FIELD(arg0, s32 *, 0x60))));
    set_depth_buffer_settings_3__Fv();
    set_depth_buffer_settings_id__FUl((int)((int) (1)));
    draw_ginja_model_with_motion((int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xF8)), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    func_80141618__Fv();
    fn_80141A30();
    begin_effect_render__13TParticleCtrlFv();
    set_depth_buffer_settings_1__Fv();
    set_depth_buffer_settings_id__FUl((int)((int) (2)));
    draw_ginja_model_with_motion((int) (M2C_FIELD(arg0, s32 *, 0x34)), (int) (M2C_FIELD(arg0, s32 *, 0xF8)), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    func_80141618__Fv();
    fn_80141A30();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
    set_npc_enemy_param((void *) (NULL));
}

extern s32 TOTrapSeabed01__data_805D6814;

void TOTrapSeabed01__sub_802CA3EC(u8 *arg0, u8 *arg1) {
    s32 temp_r31;
    u8 *temp_r4;
    u8 *var_r30;
    var_r30 = (u8 *)(arg1);
    do {
        temp_r31 = M2C_FIELD(var_r30, s32 *, 0);
        TObjPlayer__sub_803D9B2C();
        if (!(temp_r31 & 1)) {
            TOHangerMachine01__sub_803D9C00((void *) (var_r30 + 8));
        }
        if (!(temp_r31 & 2)) {
            TObjPlayer__sub_803D99F8((void *) (var_r30 + 0x14), (void *) (temp_r31 & 0x20));
        }
        if (!(temp_r31 & 4)) {
            TBoss7Tentacle__sub_803D9BA0((void *) (var_r30 + 0x20));
        }
        if (!(temp_r31 & 8)) {
            if ((s32) M2C_FIELD(arg0, s32 *, 0x34C) != 0) {
                setup_particle_tev((int) (0));
                set_global_param__8TObjFishFi((void *)((int) (TOTrapSeabed01__data_805D6814)));
                TOTrapAncient02__sub_800837D4((int) (0x38E));
                draw_ginja_model((int) (M2C_FIELD(var_r30, s32 *, 4)));
                disable_if_single_screen__13TParticleCtrlFv();
            } else {
                draw_ginja_model((int) (M2C_FIELD(var_r30, s32 *, 4)));
            }
        }
        if (!(temp_r31 & 0x10)) {
            temp_r4 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x2C));
            if (temp_r4 != NULL) {
                TOTrapSeabed01__sub_802CA3EC(arg0, temp_r4);
            }
        }
        pop_matrix();
        var_r30 = (u8 *)(M2C_FIELD(var_r30, u8 **, 0x30));
    } while (var_r30 != NULL);
}

void draw__14TOTrapSeabed01FPv(u8 *arg0) {
    if ((is_not_split_screen__13TRaderMapCoreFv() != 1) || ((s32) M2C_FIELD(arg0, s32 *, 0x34C) == 0)) {
        set_depth_buffer_settings_3__Fv();
        set_depth_buffer_settings_id__FUl((int)(1));
        begin_effect_render__13TParticleCtrlFv();
        set_global_param__8TObjFishFi((void *)(TOTrapSeabed01__data_805D6814));
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y((int)(0), (int)(M2C_FIELD(arg0, s32 *, 0x60)));
        TOTrapSeabed01__sub_802CA3EC((u8 *)(arg0), (u8 *)(M2C_FIELD(arg0, s32 *, 0x34)));
        pop_matrix();
        end_effect_render__13TParticleCtrlFv();
        func_80141618__Fv();
        fn_80141A30();
    }
}
void render__14TOTrapSeabed01Fv(S_802CA550 *arg0) {
    if (get_state_flag__9TMainTaskFv() != 1 && (arg0->f34C == 0 || is_split_screen() != 0 || dispatch_input_to_instance__18TAdEnterPasswordGCFi(arg0) == 0) && arg0->f340 == 1) {
        switch (arg0->f326) {
        case 0:
        case 1:
            draw__14TOTrapSeabed01FPv((u8 *)(arg0));
            break;
        case 2:
        case 3:
            render_effect_layers__14TOTrapSeabed01FPv((u8 *)(arg0));
            break;
        }
    }
}

}
