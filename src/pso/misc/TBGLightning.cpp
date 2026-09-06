#include "pso/TBGLightning.h"

TBGLightning::~TBGLightning() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_802AA0A4 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
s32 get_state_flag__9TMainTaskFv();
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK init_xyz_limits__10TObjPlayerFv();
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_802A9DF4(s32, f32 *);
M2C_UNK fn_802A9F48(s32, f32 *);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern void *lbl_805D4DF0;
extern const f32 lbl_805DE060;
void render__12TBGLightningFv(s32 arg0);
}

extern "C" {

struct VTBlob_802AA21C_802AA12C { void *slots[8]; };

u8 *__ct__12TBGLightningFv(u8 *arg0, void *arg1, s32 arg2, f32 farg0);
void run_task__12TBGLightningFv(void *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, s32, s8, f32, f32);
M2C_UNK __ct__7TObjectFP7TObject(u8 *, void *);
M2C_UNK queue_destruction__7TObjectFv();
s32 rand__11TOBoss4RockFv();

void render__12TBGLightningFv(s32 arg0) {
    Stack_802AA0A4 stack;
    s32 temp_r31;
    if (get_state_flag__9TMainTaskFv() != 0) {
        temp_r31 = M2C_FIELD(lbl_805D4DF0, s32 *, 0x194) + 0x4000;
        stack.sp8 = TBoss8Dragon__sub_803D64C0(temp_r31);
        stack.spC = lbl_805DE060;
        stack.sp10 = TBoss8Dragon__sub_803D64DC(temp_r31);
        begin_effect_render__13TParticleCtrlFv();
        init_xyz_limits__10TObjPlayerFv();
        fn_802A9F48(arg0, &stack.sp8);
        fn_802A9DF4(arg0, &stack.sp8);
        reset_transform_state__10TObjPlayerFv();
        end_effect_render__13TParticleCtrlFv();
    }
}

void run_task__12TBGLightningFv(void *arg0) {
    int temp_r4;

    temp_r4 = M2C_FIELD(arg0, u8 *, 0x1D) + 1;
    M2C_FIELD(arg0, u8 *, 0x1D) = (u8) temp_r4;
    if ((s8) temp_r4 >= 0xC) {
        queue_destruction__7TObjectFv();
    }
}

extern const f64 lbl_8046FC98;
extern struct VTBlob_802AA21C_802AA12C __vt__12TBGLightning;
extern s32 lbl_805D3E38;
extern const f32 lbl_805DE038;
extern const f32 lbl_805DE064;

u8 *__ct__12TBGLightningFv(u8 *arg0, void *arg1, s32 arg2, f32 farg0) {
    f32 temp_f1;
    f32 temp_f2;
    s8 temp_r5;

    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, void **, 0x18) = (void *) &__vt__12TBGLightning;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3E38;
    temp_f2 = (f32) rand__11TOBoss4RockFv();
    temp_f1 = lbl_805DE038 * temp_f2;
    temp_r5 = (s8) (lbl_805DE064 * temp_f1);
    M2C_FIELD(arg0, s8 *, 0x1C) = temp_r5;
    M2C_FIELD(arg0, s8 *, 0x1D) = 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x20, arg2, temp_r5, temp_f1, temp_f2);
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    return arg0;
}

}
