#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Vec_8029EA4C { f32 x, y, z; };

#include <stddef.h>
struct Stack_8029E960 {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
};

extern "C" {
void restore_render_scissor(s32 arg0);
M2C_UNK GXSetScissor(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void TParticleCtrl__sub_803D8D1C(s32, void *, void *);
extern u16 lbl_805D65F8;
extern const f32 lbl_805DDD8C;
extern const f32 lbl_805DDD94;
s32 TObjEneRecon__sub_8029EA4C(void *arg0, M2C_UNK _w1);
s32 TObjEneRecon__sub_8029EA4C(void *arg0, M2C_UNK _w1);
M2C_UNK reflect_matrix_in_plane(M2C_UNK, M2C_UNK *);
M2C_UNK TObjPlayer__sub_803D9B2C();
extern u16 lbl_805D65F8;
extern const f32 lbl_805DDD8C;
extern const f32 lbl_805DDD90;
s32 TObjEneRecon__sub_8029E960(u8 *arg0);
}

extern "C" {

s32 render_player_marker__12TObjEneReconFUsi(u16 arg0, s32 arg1);
void restore_render_scissor(s32 arg0);
void update_particle_if_active__12TObjEneReconFv(void);
M2C_UNK GXSetScissor(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK reflect_matrix_in_plane(M2C_UNK, M2C_UNK *);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
u32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 fn_8029E7BC(s32, M2C_UNK *);
u32 get_state__10TSceneSoraFPv(void*);
s32 is_state_active__14TOKeyMachine01Fv();
M2C_UNK reset_ind_tev_stages__13TParticleCtrlFv();

extern u16 lbl_805D65F8;

s32 render_player_marker__12TObjEneReconFUsi(u16 arg0, s32 arg1) {
    M2C_UNK sp8[8];
    s32 var_r3;
    u32 temp_r3;

    if (is_state_active__14TOKeyMachine01Fv() == 0) {
        return 0;
    }
    if ((u16) lbl_805D65F8 == 0) {
        return 1;
    }
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(arg0);
    if (temp_r3 == 0U) {
        return 0;
    }
    if (fn_8029E7BC(temp_r3 + 0x2FC, sp8) == 0) {
        return 0;
    }
    if (arg1 != 0) {
        var_r3 = TObjEneRecon__sub_8029EA4C((void *)(sp8), (M2C_UNK)(1));
    } else {
        var_r3 = 1;
    }
    if (var_r3 != 0) {
        TObjPlayer__sub_803D9B2C();
        reflect_matrix_in_plane(0, sp8);
    }
    return var_r3;
}

extern u16 lbl_805D65F8;

s32 TObjEneRecon__sub_8029E960(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8029E960, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8029E960, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8029E960, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8029E960, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8029E960, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_8029E960, sp1C) == 0x14) ? 1 : -1];
    Stack_8029E960 stack;
    s32 temp_r3;
    if ((u16) lbl_805D65F8 == 0) {
        return 1;
    }
    if (arg0 == NULL) {
        return 0;
    }
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0);
    stack.spC = M2C_FIELD(arg0, f32 *, 4);
    stack.sp10 = M2C_FIELD(arg0, f32 *, 8);
    stack.sp14 = lbl_805DDD8C;
    stack.sp18 = lbl_805DDD90;
    stack.sp1C = stack.sp14;
    temp_r3 = TObjEneRecon__sub_8029EA4C(arg0, 1);
    if (temp_r3 != 0) {
        TObjPlayer__sub_803D9B2C();
        reflect_matrix_in_plane(0, (M2C_UNK *)&stack.sp8);
    }
    return temp_r3;
}

void restore_render_scissor(s32 arg0) {
    if ((u16) lbl_805D65F8 != 0) {
        TObjPlayer__sub_803D9B78();
        if (arg0 != 0) {
            GXSetScissor(0, 0, 0x280, 0x1E0);
        }
    }
}

extern u32 lbl_805D65F4;

s32 TObjEneRecon__sub_8029EA4C(void *arg0, M2C_UNK _w1) {
    Vec_8029EA4C v;
    if (lbl_805D65F8 == 0) {
        return 1;
    }
    restore_render_scissor(1);
    TParticleCtrl__sub_803D8D1C(0, arg0, &v);
    if (v.y >= lbl_805DDD8C && v.y <= lbl_805DDD94) {
        GXSetScissor((M2C_UNK)(0), (M2C_UNK)((u32)v.y), (M2C_UNK)(0x280), (M2C_UNK)((u32)(lbl_805DDD94 - v.y)));
        return 1;
    }
    return 0;
}

void update_particle_if_active__12TObjEneReconFv(void) {
    if (((u32) lbl_805D65F4 != 0U) && (get_state__10TSceneSoraFPv((void*)lbl_805D65F4) != 0U)) {
        reset_ind_tev_stages__13TParticleCtrlFv();
    }
}

}
