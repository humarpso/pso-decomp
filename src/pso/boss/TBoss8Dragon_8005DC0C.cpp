#include "types.h"
struct V_8005DC0C { f32 x, y, z; };

struct Obj_8005DC0C {
    u8 pad0[0x326];
    s16 f326;
    u8 pad328[0x3C0 - 0x328];
    V_8005DC0C pts[8];
    u8 pad420[0x4E4 - 0x420];
    s32 f4e4;
};

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Obj_8005DC0C;
struct VBase_14 { char pad[0x14]; };

struct VObj_14 : VBase_14 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    u32 f18;
};

struct Boss_8005DD68 { u8 pad[0x580]; VObj_14 fades[4]; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_bit6__12TBoss8DragonFPv();
s32 TBoss8Dragon__sub_8005E1E8(void *, void *, f32);
void TCameraCtrl__sub_80069094(s32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
u8 *find_entity_by_id();
void TBoss6Type1__sub_803D9370(void *, void *);
extern s32 lbl_80437E94[];
extern u8 lbl_804FF5CC[];
extern u8 lbl_804FF5D8[];
extern f32 lbl_805D4DC0;
extern u8 *lbl_805D4DF0;
extern const f32 lbl_805D8D5C;
extern const f32 lbl_805D8D80;
s32 TBoss8Dragon__sub_8005DC0C(Obj_8005DC0C *arg0);
s32 TBoss8Dragon__sub_8005DC0C(Obj_8005DC0C *arg0);
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
s32 isFading__15RenderFadeStateCFv(int);
M2C_UNK restore__15RenderFadeStateFv(void *);
M2C_UNK fadeOut__15RenderFadeStateFv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK TObjLight__sub_801337F8(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK rotate_matrix_z(int, int);
M2C_UNK rotate_matrix_x(int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_current_scene__6TSceneFi(int);
M2C_UNK set_chunk_material_override_pair(int, int);
extern s32 lbl_805D5560;
extern s32 lbl_805D5660;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D8D58;
void TBoss8Dragon__sub_8005DD68(u8 *arg0, s32 arg1);
}

extern "C" {

s32 TBoss8Dragon__sub_8005DC0C(Obj_8005DC0C *arg0) {
    V_8005DC0C cam;
    V_8005DC0C dir;
    f32 len;
    u8 *pl;
    s32 i;
    if (lbl_805D4DF0 == 0) {
        return 0;
    }
    if (arg0->f326 == 4) {
        return 0;
    }
    if (get_flag_bit6__12TBoss8DragonFPv() != 0) {
        return 0;
    }
    if (arg0->f4e4 != 0) {
        return 0;
    }
    TCameraCtrl__sub_80069094(-1);
    pl = find_entity_by_id();
    if (pl == 0) {
        return 0;
    }
    VecCopy__FP3VecPC3Vec(&cam, lbl_805D4DF0 + 0x178);
    cam.y = lbl_805D8D5C;
    VecCopy__FP3VecPC3Vec(&dir, pl + 0x38);
    TBoss6Type1__sub_803D9370(&dir, &cam);
    dir.y = lbl_805D8D5C;
    len = clamp_velocity__15TObjBoss2TunnelFPv(&dir);
    VecCopy__FP3VecPC3Vec(lbl_804FF5CC, &cam);
    VecCopy__FP3VecPC3Vec(lbl_804FF5D8, &dir);
    lbl_805D4DC0 = len;
    for (i = 0; i < 4; i++) {
        if (TBoss8Dragon__sub_8005E1E8(arg0, &arg0->pts[lbl_80437E94[i]], lbl_805D8D80) != 0) {
            return 1;
        }
    }
    return 0;
}
void TBoss8Dragon__sub_8005DD68(u8 *arg0, s32 arg1) {
    u8 *temp_r31;
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
    clear_global_flag_400__9TObjEneDDFv();
    lbl_805D5660 = some_id_805c6f74;
    set_current_scene__6TSceneFi((int) (0));
    if (TBoss8Dragon__sub_8005DC0C((Obj_8005DC0C *) (arg0)) != 0) {
        fadeOut__15RenderFadeStateFv(&((Boss_8005DD68 *)arg0)->fades[arg1]);
    } else {
        restore__15RenderFadeStateFv(&((Boss_8005DD68 *)arg0)->fades[arg1]);
    }
    temp_r31 = (u8 *)&((Boss_8005DD68 *)arg0)->fades[arg1];
    if (isFading__15RenderFadeStateCFv((int) (temp_r31)) != 0) {
        ((VObj_14 *)(temp_r31))->m6();
    }
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_matrix_x((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x5C)));
    rotate_matrix_z((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x64)));
    scale_matrix((int) (0), (f32) (lbl_805D8D58), (f32) (lbl_805D8D58), (f32) (lbl_805D8D58));
    toggle_particle_effect__10TObjPlayerFv();
    draw__16TObjEneRe7BeruraFPv((void *) (arg0));
    end_effect_render__13TParticleCtrlFv();
    TObjLight__sub_801337F8((void *) (lbl_805D5560));
    pop_matrix();
    set_chunk_material_override_pair((int) (0xFF00), (int) (0));
    set_current_scene__6TSceneFi((int) (0xBF));
    some_id_805c6f74 = lbl_805D5660;
}

}
