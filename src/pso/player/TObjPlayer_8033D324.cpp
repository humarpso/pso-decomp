#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK reset_fish_globals__8TObjFishFv();
M2C_UNK TBoss6PlotFalz__sub_802ABF44(f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern const f32 lbl_805DFA70;
extern const f32 lbl_805DFA74;
extern const f32 lbl_805DFA78;
void TObjPlayer__sub_8033D380(void *arg0);
M2C_UNK reset_fish_globals__8TObjFishFv();
M2C_UNK TBoss6PlotFalz__sub_802ABF44(f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern M2C_UNK lbl_80477F2C[];
extern const f32 lbl_805DFA70;
extern const f32 lbl_805DFA74;
extern const f32 lbl_805DFA7C;
void TObjPlayer__sub_8033D590(void *arg0);
}

extern "C" {

void draw_mesh_group__10TObjPlayerFPv(void *arg0);
void update_all__10TObjPlayerFPv(void* p);
void update_hp_gauge_fade__10TObjPlayerFPv(void *arg0);
M2C_UNK TBoss6PlotFalz__sub_802ABF44(f32);
M2C_UNK TOHangerMachine01__sub_803D9C00(M2C_UNK *);
M2C_UNK TObjEneSlimeOne__sub_803E4AF4(s32, s32, f32);
M2C_UNK TObjFish__sub_800E3074(u32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK clear_global_state__10TObjPlayerFv();
M2C_UNK clear_render_callback__8TObjFishFv(u32);
M2C_UNK reset_fish_globals__8TObjFishFv();
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK set_global_param__8TObjFishFi(s32);

extern M2C_UNK lbl_80477F2C[];

void draw_mesh_group__10TObjPlayerFPv(void *arg0) {
    TObjPlayer__sub_803D9B2C();
    set_global_flag__10TObjPlayerFv();
    TOHangerMachine01__sub_803D9C00(lbl_80477F2C);
    set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xD8));
    TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0xD4), M2C_FIELD(arg0, s32 *, 0xDC), M2C_FIELD(arg0, f32 *, 0xE0));
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
}

extern M2C_UNK lbl_80477F2C[];
extern const f64 lbl_80478080[];
extern const f32 lbl_805DFA70;
extern const f32 lbl_805DFA74;
extern const f32 lbl_805DFA7C;

void TObjPlayer__sub_8033D380(void *arg0) {
    f32 var_f31;
    union { f64 d; u32 w[2]; } cvt;
    s32 temp_r3;
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_r3 < 0x181) {
        var_f31 = lbl_805DFA70;
    } else if (temp_r3 >= 0x190) {
        var_f31 = lbl_805DFA74;
    } else {
        var_f31 = (f32) (temp_r3 - 0x181) / lbl_805DFA78;
    }
    if (lbl_805DFA70 != var_f31) {
        if (var_f31 < lbl_805DFA74) {
            TBoss6PlotFalz__sub_802ABF44(var_f31);
        }
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xCC));
        set_global_flag__10TObjPlayerFv();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((M2C_UNK *)((u8 *)arg0 + 0x4C));
        TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0xC8), M2C_FIELD(arg0, s32 *, 0xD0), M2C_FIELD(arg0, f32 *, 0xE4));
        pop_matrix();
        TObjPlayer__sub_803D9B2C();
        TOHangerMachine01__sub_803D9C00((M2C_UNK *)((u8 *)arg0 + 0x58));
        TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0xC8), M2C_FIELD(arg0, s32 *, 0xD0), M2C_FIELD(arg0, f32 *, 0xE4));
        pop_matrix();
        clear_global_state__10TObjPlayerFv();
        if (var_f31 < lbl_805DFA74) {
            reset_fish_globals__8TObjFishFv();
        }
    }
}

void update_hp_gauge_fade__10TObjPlayerFPv(void *arg0) {
    f32 var_f31;
    s32 temp_r3;
    union { f64 d; u32 w[2]; } cvt;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_r3 < 0x72) {
        var_f31 = lbl_805DFA70;
    } else if (temp_r3 >= 0x8E) {
        var_f31 = lbl_805DFA74;
    } else {
        var_f31 = (f32)(temp_r3 - 0x72) / lbl_805DFA7C;
    }
    if ((lbl_805DFA70 != var_f31) && ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 0U)) {
        if (var_f31 < lbl_805DFA74) {
            TBoss6PlotFalz__sub_802ABF44(var_f31);
        }
        TObjPlayer__sub_803D9B2C();
        set_global_flag__10TObjPlayerFv();
        TOHangerMachine01__sub_803D9C00(lbl_80477F2C);
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0xC0));
        TObjFish__sub_800E3074(M2C_FIELD(arg0, u32 *, 0x7C));
        TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(arg0, s32 *, 0xBC), M2C_FIELD(arg0, s32 *, 0xC4), M2C_FIELD(arg0, f32 *, 0xE0));
        clear_render_callback__8TObjFishFv(M2C_FIELD(arg0, u32 *, 0x7C));
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        if (var_f31 < lbl_805DFA74) {
            reset_fish_globals__8TObjFishFv();
        }
    }
}

void TObjPlayer__sub_8033D590(void *arg0) {
    f32 var_f31;
    s32 temp_r0;
    s32 var_r31;
    u8 *temp_r30;
    s32 var_r29;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xE8);
    if (temp_r0 < 0x72) {
        var_f31 = lbl_805DFA74;
    } else if (temp_r0 >= 0x8E) {
        var_f31 = lbl_805DFA70;
    } else {
        var_f31 = (f32) (0x8E - temp_r0) / lbl_805DFA7C;
    }
    if (lbl_805DFA70 != var_f31) {
        if (var_f31 < lbl_805DFA74) {
            TBoss6PlotFalz__sub_802ABF44(var_f31);
        }
        TObjPlayer__sub_803D9B2C();
        set_global_flag__10TObjPlayerFv();
        TOHangerMachine01__sub_803D9C00(lbl_80477F2C);
        var_r29 = 0;
        var_r31 = 0;
        do {
            temp_r30 = (u8 *)arg0 + var_r31;
            set_global_param__8TObjFishFi(M2C_FIELD(temp_r30, s32 *, 0xA8));
            TObjEneSlimeOne__sub_803E4AF4(M2C_FIELD(temp_r30, s32 *, 0xA4), M2C_FIELD(temp_r30, s32 *, 0xAC), M2C_FIELD(arg0, f32 *, 0xE0));
            var_r29 += 1;
            var_r31 += 0xC;
        } while (var_r29 < 2);
        clear_global_state__10TObjPlayerFv();
        pop_matrix();
        if (var_f31 < lbl_805DFA74) {
            reset_fish_globals__8TObjFishFv();
        }
    }
}

void update_all__10TObjPlayerFPv(void* p) { draw_mesh_group__10TObjPlayerFPv((void *)(p)); update_hp_gauge_fade__10TObjPlayerFPv((void *)(p)); TObjPlayer__sub_8033D590((void *)(p)); TObjPlayer__sub_8033D380((void *)(p)); }

}
