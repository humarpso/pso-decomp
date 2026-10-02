#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct LazerFence4Base_801930E8 { char pad[0x18]; };
struct LazerFence4VObj_801930E8 : LazerFence4Base_801930E8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Cnt_801933C8 { s32 pad0; s32 f4; };

struct Obj_801933C8 { u8 padA0[0xAC]; s32 fAC; f32 fB0; u8 padB4[6]; u16 fBA; u8 padBC[8]; Cnt_801933C8 *fC4; };

struct Node_80193188 { u32 flags; void *model; u8 pad8[0x24]; Node_80193188 *child; Node_80193188 *sibling; };

struct Fence_80193188 { u8 pad0[0x8C]; s32 f8C; u8 pad90[0x2C]; Node_80193188 *fBC; Node_80193188 *fC0; s32 fC4; void *fC8[12]; };

extern "C" {
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK free_children__12TObjDoorJungFPvPv(s32, u16);
void rotate_matrix_y(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void pop_matrix(void);
void TOHangerMachine01__sub_803D9C00(void *);
void set_global_param__8TObjFishFi(void *);
void draw_ginja_object(void *);
M2C_UNK draw_ginja_model_with_motion(s32, s32, f32);
extern void *lbl_805D5C28;
void TObjLazerFence4__sub_801932E4(u8 *arg0);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
u8 TODoorAncient08__sub_80229220(int);
extern const f32 lbl_805DBE68;
extern const f32 lbl_805DBE6C;
void TObjLazerFence4__sub_801933C8(Obj_801933C8 *arg0);
s32 TObjFish__sub_8001ED9C(s32, s32);
Node_80193188 *get_bml_model(s32, s32);
extern s32 lbl_805D5C2C;
void TObjLazerFence4__sub_80193188(Fence_80193188 *arg0);
}

extern "C" {

s16 TObjLazerFence4__vt8(u8 *arg0, f32 farg0, f32 farg1);
void draw__15TObjLazerFence4FPv(void *arg0);
void render__15TObjLazerFence4Fv(void *arg0);
void reset_if_door_closed__15TObjLazerFence4FPv(void *arg0);
void TOHangerMachine01__sub_803D9C00(void *);
void draw_ginja_object(void *);
void rotate_matrix_y(int, void *);
void TObjPlayer__sub_803D9B2C(void);
void pop_matrix(void);
f32 xz_distance_squared(void *, s32);
s16 update_object_view_visibility(void *, f32, f32);
s32 get_state_flag__9TMainTaskFv();
void set_global_param__8TObjFishFi(void *);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

extern s32 lbl_805D4DF0;

s16 TObjLazerFence4__vt8(u8 *arg0, f32 farg0, f32 farg1) {
    if (get_state_flag__9TMainTaskFv() == 1) {
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    if (xz_distance_squared(arg0 + 0x38, lbl_805D4DF0 + 0x178) < (farg1 * farg1)) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 1;
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    return update_object_view_visibility(arg0, farg0, farg1);
}

extern void *lbl_805D5C28;

void TObjLazerFence4__sub_80193188(Fence_80193188 *arg0) {
    Node_80193188 *node;
    s32 i;
    s32 j;
    if (arg0->f8C % 2 == 0) {
        arg0->fBC = get_bml_model(lbl_805D5C2C, 4);
        arg0->fC0 = get_bml_model(lbl_805D5C2C, 5);
        arg0->fC4 = TObjFish__sub_8001ED9C(lbl_805D5C2C, 2);
    } else {
        arg0->fBC = get_bml_model(lbl_805D5C2C, 6);
        arg0->fC0 = get_bml_model(lbl_805D5C2C, 7);
        arg0->fC4 = TObjFish__sub_8001ED9C(lbl_805D5C2C, 3);
    }
    for (j = 0; j < 12; j++) {
        arg0->fC8[j] = 0;
    }
    i = 0;
    node = arg0->fBC->child;
    if (node != 0) {
        while (node != 0 && i < 12) {
            arg0->fC8[i++] = node->model;
            node = node->sibling;
        }
    }
}

void draw__15TObjLazerFence4FPv(void *arg0) {
    set_global_param__8TObjFishFi(lbl_805D5C28);
    TObjPlayer__sub_803D9B2C();
    TOHangerMachine01__sub_803D9C00((void *)((char *)arg0 + 56));
    rotate_matrix_y(0, M2C_FIELD(arg0, void **, 0x60));
    draw_ginja_object(M2C_FIELD(arg0, void **, 0xC0));
    pop_matrix();
}

void TObjLazerFence4__sub_801932E4(u8 *arg0) {
  s32 *new_var;
  u16 *new_var2;
  s32 var_r31;
  s32 var_r30;
  var_r30 = 0;
  new_var2 = (u16 *) (((s8 *) arg0) + 0xB8);
  var_r31 = 0;
  do
  {
    free_children__12TObjDoorJungFPvPv(*((s32 *) ((arg0 + var_r31) + 0xC8)), *new_var2);
    var_r30 += 1;
    var_r31 += 4;
  }
  while (var_r30 < 0xC);
  set_global_param__8TObjFishFi((void *)((*(s32 *)&lbl_805D5C28)));
  TObjPlayer__sub_803D9B2C();
  TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
  rotate_matrix_y((int)(0), (void *)(*((s32 *) (((s8 *) arg0) + 0x60))));
  draw_ginja_object((void *)(*((s32 *) (((s8 *) arg0) + 0xC0))));
  begin_effect_render__13TParticleCtrlFv();
  new_var = (s32 *) (((s8 *) arg0) + 0xC4);
  draw_ginja_model_with_motion(*((s32 *) (((s8 *) arg0) + 0xBC)), *new_var, *((f32 *) (((s8 *) arg0) + 0xB0)));
  end_effect_render__13TParticleCtrlFv();
  pop_matrix();
}

void reset_if_door_closed__15TObjLazerFence4FPv(void *arg0) {
    if (TODoorAncient08__sub_80229220((u16)(M2C_FIELD(arg0, u16 *, 0xBA))) == 0) {
        set_indexed_flags(arg0, 0, 1);
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
}

extern const f32 lbl_805DBE70;
extern const f32 lbl_805DBE74;

void TObjLazerFence4__sub_801933C8(Obj_801933C8 *arg0) {
    arg0->fB0 = arg0->fB0 + lbl_805DBE68;
    if (arg0->fB0 > (f32)(u32)(arg0->fC4->f4 - 1)) {
        arg0->fB0 = lbl_805DBE6C;
    }
    if (TODoorAncient08__sub_80229220(arg0->fBA) == 1) {
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 1);
        arg0->fAC = 1;
    }
}

void render__15TObjLazerFence4Fv(void *arg0) {
    s32 temp_r0;

    if (((LazerFence4VObj_801930E8*)arg0)->m8(lbl_805DBE70, lbl_805DBE74) != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0xAC);
        switch (temp_r0) {
        case 0:
            TObjLazerFence4__sub_801932E4((u8 *)(arg0));
            return;
        case 1:
            draw__15TObjLazerFence4FPv((void *)(arg0));
            break;
        }
    }
}

}
