#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_needle_timer__20TBoss7TentacleNeedleFPv(void *arg0);
void render__20TBoss7TentacleNeedleFv(void *arg0);
void post_translate_matrix(void *);
void draw_model_motion(void *, void *, f32);
void rotate_matrix_by_node_angles(void *, int);
void push_matrix(void);
void pop_matrix(void);
void clear_global_state__10TObjPlayerFv(void);
void draw_effect__10TObjPlayerFv(void *);
void set_global_flag__10TObjPlayerFv(void);

extern const f32 lbl_805DEC1C;

void advance_needle_timer__20TBoss7TentacleNeedleFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x3C);
    if (temp_r4 == 0x1E) {
        M2C_FIELD(arg0, s32 *, 0x38) = 1;
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) lbl_805DEC1C;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x3C) = (s32) (temp_r4 + 1);
}

extern void *lbl_805D6948;

void render__20TBoss7TentacleNeedleFv(void *arg0) {
    draw_effect__10TObjPlayerFv(arg0);
    set_global_flag__10TObjPlayerFv();
    push_matrix();
    post_translate_matrix((void *)((char *)arg0 + 28));
    rotate_matrix_by_node_angles((void *)((char *)arg0 + 40), 1);
    draw_model_motion(lbl_805D6948, M2C_FIELD(arg0, void **, 0x78), M2C_FIELD(arg0, f32 *, 0x74));
    pop_matrix();
    clear_global_state__10TObjPlayerFv();
}

}
