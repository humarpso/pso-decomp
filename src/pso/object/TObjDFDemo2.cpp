#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef s32 M2C_UNK;
extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK request_destroy__11TBoss4Type2FUi(void *);
u32 spawn_particle_effect(void *, M2C_UNK);
u32 TBoss4Type2__sub_800874F4(void *, M2C_UNK);
M2C_UNK set_flags__11TBoss4Type2FPvUi(void *, M2C_UNK);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805D89D0;
extern const f32 lbl_805D89DC;
void TBoss4Type2__sub_8004EE74(u8 *arg0);
M2C_UNK sync_player_globals__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_80052390(f32);
M2C_UNK clear_render_callback__8TObjFishFv(s32);
M2C_UNK TObjFish__sub_800E3074(s32);
M2C_UNK rotate_matrix_y(s32, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK func_803e11e8__FUl(u32);
M2C_UNK func_803e11f0__Fv();
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
void TObjPlayer__sub_8004ED28(u8 *arg0);
}

extern "C" {

void *TObjDFDemo2__sub_8004EB20(void *arg0, s16 arg1);
void * create_demo2__14TBoss4DarkFalzFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TObjDFDemo2__ct(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern M2C_UNK lbl_8048568C[];

void *TObjDFDemo2__sub_8004EB20(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048568C;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void * create_demo2__14TBoss4DarkFalzFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0xC4);
    if (o != NULL) {
        o = TObjDFDemo2__ct(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

void TObjPlayer__sub_8004ED28(u8 *arg0) {
    f32 a = 1.0f;
    s32 t = M2C_FIELD(arg0, s32 *, 0xB0);
    if (t < 5) {
        a = (f32)t / 5.0f;
    } else if (t > 0x86) {
        a = (f32)(0x8B - t) / 5.0f;
    }
    if (a <= 0.0f) {
        return;
    }
    if (a < 1.0f) {
        TObjPlayer__sub_80052390(a);
    }
    TObjPlayer__sub_803D9B2C();
    set_global_flag__10TObjPlayerFv();
    TOHangerMachine01__sub_803D9C00(arg0 + 0xA0);
    rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0xAC));
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x98));
    TObjFish__sub_800E3074(M2C_FIELD(arg0, s32 *, 0xB8));
    func_803e11e8__FUl(1);
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x94), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xB4));
    clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, s32 *, 0xB8));
    func_803e11e8__FUl(2);
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0x94), M2C_FIELD(arg0, s32 *, 0x9C), M2C_FIELD(arg0, f32 *, 0xB4));
    func_803e11f0__Fv();
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
    if (a < 1.0f) {
        sync_player_globals__10TObjPlayerFv();
    }
}

#pragma push
#pragma opt_common_subs off
void TBoss4Type2__sub_8004EE74(u8 *arg0) {
    f32 cur;
    f32 nxt;
    s32 temp_r0;
    s32 temp_r0_2;
    u32 temp_r3;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) >= 0x5A) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
            request_destroy__11TBoss4Type2FUi(M2C_FIELD(arg0, void **, 0x90));
            M2C_FIELD(arg0, u32 *, 0x90) = 0U;
        }
    } else {
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x90);
        if (temp_r3 == 0U) {
            M2C_FIELD(arg0, u32 *, 0x90) = TBoss4Type2__sub_800874F4(arg0 + 0xBC, 0x1BD);
            if ((u32) M2C_FIELD(arg0, u32 *, 0x90) != 0U) {
                set_flags__11TBoss4Type2FPvUi((void *) M2C_FIELD(arg0, u32 *, 0x90), 0x40);
            }
        } else if (temp_r3 != 0U) {
            copy_pos__11TNowLoadingFPvPv((void *) temp_r3, arg0 + 0xBC);
        }
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) == 0x86) {
        temp_r3 = spawn_particle_effect(arg0 + 0xA0, 0x9B);
        if (temp_r3 != 0U) {
            set_flags__11TBoss4Type2FPvUi((void *) temp_r3, 0x40);
        }
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xB0);
    if ((temp_r0 == 0x28) || (temp_r0 == 0x3C)) {
        TBoss3Volopt__sub_8022675C(0x4003D03A, arg0 + 0xA0, 0, 1);
    }
    cur = M2C_FIELD(arg0, f32 *, 0xB4);
    nxt = cur + lbl_805D89D0;
    M2C_FIELD(arg0, f32 *, 0xB4) = nxt;
    if (nxt > lbl_805D89DC) {
        M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805D89DC;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0xB0) + 1;
    M2C_FIELD(arg0, s32 *, 0xB0) = temp_r0_2;
    if (temp_r0_2 >= 0x8C) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

}
