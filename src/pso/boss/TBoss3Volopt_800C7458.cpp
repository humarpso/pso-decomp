#include "types.h"
#include "pso/boss/TBoss3Volopt.h"
#include "pso/enemy/TObjEnemy.h"
#include "pso/enemy/TObjEneGyaranzo.h"
#include "pso/enemy/TObjEnemyCustom.h"

struct V3_800C7458 { f32 x; s32 y; f32 z; };

struct Obj_800C7458 { u8 pad0[0x38]; u8 pos[0xC]; u8 pad44[0x60 - 0x44]; s32 h; };

extern "C" {
f64 atan2_float(f32, f32);
s32 angle_difference_abs(s32, s32);
s32 approach_angle_limited(s32, s32, void *);
void subtract_vector(void *, void *);
extern const f64 lbl_8043BCC8[];
void turn_toward_point__12TBoss3VoloptFPvPvPvi(Obj_800C7458 *arg0, V3_800C7458 *arg1, void *arg2, s32 arg3);
}

extern "C" {

void turn_toward_point__12TBoss3VoloptFPvPvPvi(Obj_800C7458 *arg0, V3_800C7458 *arg1, void *arg2, s32 arg3) {
    V3_800C7458 v = *arg1;
    subtract_vector(&v, arg0->pos);
    arg3 += (s32)(lbl_8043BCC8[0] * atan2_float(v.x, v.z));
    arg0->h = approach_angle_limited(arg0->h, arg3, arg2);
    angle_difference_abs(arg0->h, arg3);
}

void TBoss3Volopt::clear_flag8_all(u32 **arg0) {
    while (*arg0 != 0) {
        u32 *p = *arg0++;
        *p &= ~8;
    }
}

void TBoss3Volopt::set_flag8_list(u32 **arg0) {
    while (*arg0 != 0) {
        u32 *p = *arg0++;
        *p |= 8;
    }
}

}

extern "C" {

void collect_active_nodes__12TBoss3VoloptFPv(void *arg0);

extern void **volopt_active_node_cursor;
extern s32 volopt_active_node_counter;

void collect_active_nodes__12TBoss3VoloptFPv(void *arg0) {
    void **temp_r3;
    void *var_r31;

    var_r31 = arg0;
    do {
        if (!(*(s32 *)((s8 *)var_r31 + 0) & 8) && ((u32) *(u32 *)((s8 *)var_r31 + 4) != 0U)) {
            temp_r3 = volopt_active_node_cursor;
            volopt_active_node_cursor = temp_r3 + 1;
            *temp_r3 = var_r31;
            volopt_active_node_counter += 1;
        }
        if ((u32) *(u32 *)((s8 *)var_r31 + 0x2C) != 0U) {
            collect_active_nodes__12TBoss3VoloptFPv(*(void **)((s8 *)var_r31 + 0x2C));
        }
        var_r31 = *(void **)((s8 *)var_r31 + 0x30);
    } while (var_r31 != NULL);
}

}

struct RecoveredGlobal_800C7698_lbl_8058D490 {
    s32 value;
    u8 remaining[0x2C];
};

#include <stddef.h>
#include "pso/boss/TBoss3Volopt.h"
#include "pso/player/TObjPlayer.h"
struct Stack_800C762C {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_800C762C_lbl_8043BCA0 {
    s32 value;
    u8 remaining[0x8];
};

extern "C" {
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
f32 post_translate_matrix(void *);
extern RecoveredGlobal_800C7698_lbl_8058D490 identity_matrix;
s32 matrix_mult_vec(int, void *, void *);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_800C762C_lbl_8043BCA0 lbl_8043BCA0;
extern s32 anim_model_matrix_array;
}

extern "C" {

void TObjVoloptCage__sub_800C76F0(void);

s32 TBoss3Volopt::query_field_30(s32 *arg1) {
    s32 temp_r31;

    if (this == NULL) {
        return 0;
    }
    if (arg1 == NULL) {
        return 0;
    }
    temp_r31 = *(s32 *)&this->actorFlags;
    *(s32 *)&this->actorFlags = 0;
    (*(s32 **)&volopt_active_node_cursor) = arg1;
    volopt_active_node_counter = 0;
    ((s32 (*)())collect_active_nodes__12TBoss3VoloptFPv)();
    *(s32 *)&this->actorFlags = temp_r31;
    *(*(s32 **)&volopt_active_node_cursor) = 0;
    return volopt_active_node_counter;
}

typedef char RecoveredGlobal_800C7698_lbl_8058D490_size[sizeof(RecoveredGlobal_800C7698_lbl_8058D490) == 0x30 ? 1 : -1];

typedef char RecoveredGlobal_800C762C_lbl_8043BCA0_size[sizeof(RecoveredGlobal_800C762C_lbl_8043BCA0) == 0xC ? 1 : -1];
void TObjEnemyCustom::vfunc_65(s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_800C762C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800C762C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800C762C, sp10) == 0x8) ? 1 : -1];
    Stack_800C762C stack;
    stack.sp8 = *(s32 *)((s8 *)(&lbl_8043BCA0.value) + 0);
    stack.spC = *(s32 *)((s8 *)(&lbl_8043BCA0.value) + 4);
    stack.sp10 = *(s32 *)((s8 *)(&lbl_8043BCA0.value) + 8);
    push_matrix_from((void *) (anim_model_matrix_array + (arg1 * 0x30)));
    matrix_mult_vec((int) (0), (void *) (&stack.sp8), (void *) (arg2));
    pop_matrix();
}

void TObjEneGyaranzo::render_anim_model_at_pos() {
    push_matrix_from((void *) (&identity_matrix.value));
    post_translate_matrix((void *) (((u8 *)this) + 0x38));
    rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)((u8 *)this) + 0x60)));
    ((TObjEnemy *)((u8 *)this))->render_anim_model((f32) (*(f32 *)((s8 *)((u8 *)this) + 0xC0)));
    pop_matrix();
}

void TObjVoloptCage__sub_800C76F0(void) {  }

}
