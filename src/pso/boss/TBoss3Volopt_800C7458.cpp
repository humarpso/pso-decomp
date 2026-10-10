#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V3_800C7458 { f32 x; s32 y; f32 z; };

struct Obj_800C7458 { u8 pad0[0x38]; u8 pos[0xC]; u8 pad44[0x60 - 0x44]; s32 h; };

extern "C" {
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 angle_difference_abs(s32, s32);
s32 approach_angle_limited(s32, s32, void *);
void subtract_vector(void *, void *);
extern const f64 lbl_8043BCC8[];
void turn_toward_point__12TBoss3VoloptFPvPvPvi(Obj_800C7458 *arg0, V3_800C7458 *arg1, void *arg2, s32 arg3);
}

extern "C" {

void clear_flag8_all__12TBoss3VoloptFPv(u32 **arg0);
void set_flag8_list__12TBoss3VoloptFPv(u32 **arg0);

void turn_toward_point__12TBoss3VoloptFPvPvPvi(Obj_800C7458 *arg0, V3_800C7458 *arg1, void *arg2, s32 arg3) {
    V3_800C7458 v = *arg1;
    subtract_vector(&v, arg0->pos);
    arg3 += (s32)(lbl_8043BCC8[0] * get_ad_end_text_start__10TObjPlayerFv(v.x, v.z));
    arg0->h = approach_angle_limited(arg0->h, arg3, arg2);
    angle_difference_abs(arg0->h, arg3);
}

void clear_flag8_all__12TBoss3VoloptFPv(u32 **arg0) {
    while (*arg0 != 0) {
        u32 *p = *arg0++;
        *p &= ~8;
    }
}

void set_flag8_list__12TBoss3VoloptFPv(u32 **arg0) {
    while (*arg0 != 0) {
        u32 *p = *arg0++;
        *p |= 8;
    }
}

}

extern "C" {

void collect_active_nodes__12TBoss3VoloptFPv(void *arg0);

extern void **lbl_805D5190;
extern s32 lbl_805D5194;

void collect_active_nodes__12TBoss3VoloptFPv(void *arg0) {
    void **temp_r3;
    void *var_r31;

    var_r31 = arg0;
    do {
        if (!(M2C_FIELD(var_r31, s32 *, 0) & 8) && ((u32) M2C_FIELD(var_r31, u32 *, 4) != 0U)) {
            temp_r3 = lbl_805D5190;
            lbl_805D5190 = temp_r3 + 1;
            *temp_r3 = var_r31;
            lbl_805D5194 += 1;
        }
        if ((u32) M2C_FIELD(var_r31, u32 *, 0x2C) != 0U) {
            collect_active_nodes__12TBoss3VoloptFPv(M2C_FIELD(var_r31, void **, 0x2C));
        }
        var_r31 = M2C_FIELD(var_r31, void **, 0x30);
    } while (var_r31 != NULL);
}

}

struct RecoveredGlobal_800C7698_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

#include <stddef.h>
struct Stack_800C762C {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_800C762C_lbl_8043BCA0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
f32 post_translate_matrix(void *);
extern RecoveredGlobal_800C7698_lbl_8058D490 identity_matrix;
void render_anim_model_at_pos__12TBoss3VoloptFPv(u8 *arg0);
s32 matrix_mult_vec(int, void *, void *);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_800C762C_lbl_8043BCA0 lbl_8043BCA0;
extern s32 anim_model_matrix_array;
void TBoss3Volopt__sub_800C762C(M2C_UNK arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TObjVoloptCage__sub_800C76F0(void);
s32 query_field_30__12TBoss3VoloptFPvPv(void *arg0, s32 *arg1);

s32 query_field_30__12TBoss3VoloptFPvPv(void *arg0, s32 *arg1) {
    s32 temp_r31;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 == NULL) {
        return 0;
    }
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    (*(s32 **)&lbl_805D5190) = arg1;
    lbl_805D5194 = 0;
    ((M2C_UNK (*)())collect_active_nodes__12TBoss3VoloptFPv)();
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r31;
    *(*(s32 **)&lbl_805D5190) = 0;
    return lbl_805D5194;
}

typedef char RecoveredGlobal_800C7698_lbl_8058D490_size[sizeof(RecoveredGlobal_800C7698_lbl_8058D490) == 0x30 ? 1 : -1];

typedef char RecoveredGlobal_800C762C_lbl_8043BCA0_size[sizeof(RecoveredGlobal_800C762C_lbl_8043BCA0) == 0xC ? 1 : -1];
void TBoss3Volopt__sub_800C762C(M2C_UNK arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_800C762C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800C762C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800C762C, sp10) == 0x8) ? 1 : -1];
    Stack_800C762C stack;
    stack.sp8 = M2C_FIELD(&lbl_8043BCA0.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043BCA0.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8043BCA0.value, s32 *, 8);
    push_matrix_from((void *) (anim_model_matrix_array + (arg1 * 0x30)));
    matrix_mult_vec((int) (0), (void *) (&stack.sp8), (void *) (arg2));
    pop_matrix();
}

void render_anim_model_at_pos__12TBoss3VoloptFPv(u8 *arg0) {
    push_matrix_from((void *) (&identity_matrix.value));
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    render_anim_model__10TObjPlayerFPvf((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    pop_matrix();
}

void TObjVoloptCage__sub_800C76F0(void) {  }

}
