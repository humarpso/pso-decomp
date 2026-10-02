#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Wb_8019F2C0 { u8 pad0[0x88]; s32 f88; u8 pad8C[0xE0]; s32 f16C; };

extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_8019EE14(void *);
void update__12TObjWarpBossFPv(void *arg0);
extern const f32 lbl_805DC000;
extern const f32 lbl_805DC004;
extern const f32 lbl_805DC02C;
void run_task__12TObjWarpBossFv(u8 *arg0);
s32 get_global_state__14TOKeyMachine01Fv();
void set_global_count__12TObjNpcEnemyFi(int);
void TObjEneBm5GibonU__sub_803D853C(int, void *, ...);
extern u8 lbl_8044663C[];
extern u8 lbl_80446650[];
void TObjWarpBoss__vt18(Wb_8019F2C0 *arg0);
}

extern "C" {

struct Base2_8019f358_8019F22C { char pad[0x18]; };
struct VObj2_8019f358_8019F22C : Base2_8019f358_8019F22C { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

void render__12TObjWarpBossFv(u8 *arg0);
void update__12TObjWarpBossFPv(void *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjBoss2Tunnel__sub_803DB470(s32);
M2C_UNK draw_ginja_model_with_motion(u32, s32, f32);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TObjWarpBossMulti__sub_8019E798(void *);
M2C_UNK TObjWarpBossMulti__sub_8019EB94(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
f32 xz_distance_squared(s32, void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK update_state__17TObjWarpBossMultiFPv(void *);
M2C_UNK update_warp_boss_visibility();
M2C_UNK update_warp_state__17TObjWarpBossMultiFPv(void *);
M2C_UNK warp_boss_handle_window(void *);

void update__12TObjWarpBossFPv(void *arg0) {
    s16 temp_r0;

    update_warp_boss_visibility();
    temp_r0 = M2C_FIELD(arg0, s16 *, 0xDE);
    switch (temp_r0) {
    case 0:
        TObjWarpBossMulti__sub_8019EB94(arg0);
        return;
    case 1:
        update_warp_state__17TObjWarpBossMultiFPv(arg0);
        return;
    case 2:
        update_state__17TObjWarpBossMultiFPv(arg0);
        return;
    case 3:
        warp_boss_handle_window(arg0);
        return;
    case 4:
        TObjWarpBossMulti__sub_8019E798(arg0);
        return;
    }
}

extern s32 lbl_805D4DF0;
extern s32 lbl_805D5C8C;
extern s32 lbl_805D5CA0;
extern s32 lbl_805D5CA4;
extern const f32 lbl_805DC008;
extern const f32 lbl_805DC00C;
extern const f32 lbl_805DC010;

void TObjWarpBoss__vt18(Wb_8019F2C0 *arg0) {
    s32 t = arg0->f88;
    if (t < 0 || t > 0xFF) {
        arg0->f16C = -1;
    } else {
        arg0->f16C = t;
    }
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    if (get_global_state__14TOKeyMachine01Fv() == 0) {
        TObjEneBm5GibonU__sub_803D853C(0x130020, lbl_8044663C);
    }
    TObjEneBm5GibonU__sub_803D853C(0x130021, lbl_80446650, arg0->f16C);
}

void render__12TObjWarpBossFv(u8 *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0xBC) == 0xE) {
        if (xz_distance_squared(lbl_805D4DF0 + 0x178, arg0 + 0x38) > lbl_805DC008) {
            return;
        }
        goto block_4;
    }
    if (((VObj2_8019f358_8019F22C*)arg0)->m8(lbl_805DC00C, lbl_805DC010) != 0) {
block_4:
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        set_global_param__8TObjFishFi(lbl_805D5CA0);
        TObjBoss2Tunnel__sub_803DB470(lbl_805D5C8C);
        if (M2C_FIELD(arg0, void **, 0xD0) != 0) {
            begin_effect_render__13TParticleCtrlFv();
            set_global_param__8TObjFishFi(lbl_805D5CA4);
            draw_ginja_model_with_motion(M2C_FIELD(arg0, u32 *, 0xD0), M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, f32 *, 0xC4));
            end_effect_render__13TParticleCtrlFv();
        }
        pop_matrix();
    }
}
void run_task__12TObjWarpBossFv(u8 *arg0) {
    if (check_demo_mode__10TObjPlayerFv() != 1) {
        if (!(M2C_FIELD(arg0, s16 *, 0xE2) & 1) && ((s16) M2C_FIELD(arg0, s16 *, 0xDE) != (s16) M2C_FIELD(arg0, s16 *, 0xDC))) {
            if ((s16) M2C_FIELD(arg0, s16 *, 0xE0) != -1) {
                M2C_FIELD(arg0, s16 *, 0xE0) = -1;
                update__12TObjWarpBossFPv((void *) (arg0));
            }
            M2C_FIELD(arg0, s16 *, 0xDE) = (s16) M2C_FIELD(arg0, s16 *, 0xDC);
            M2C_FIELD(arg0, s16 *, 0xE0) = 0;
        }
        TObjPlayer__sub_8019EE14((void *) (arg0));
        update__12TObjWarpBossFPv((void *) (arg0));
        if ((void *) M2C_FIELD(arg0, u8 **, 0xD4) != NULL) {
            M2C_FIELD(arg0, f32 *, 0xC4) = (f32) (M2C_FIELD(arg0, f32 *, 0xC4) + lbl_805DC004);
            if ((lbl_805DC02C + M2C_FIELD(arg0, f32 *, 0xC4)) >= (f32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xD4), u32 *, 4)) {
                M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DC000;
            }
        }
    }
}

}
