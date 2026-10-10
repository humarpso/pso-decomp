#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 queue_destruction__7TObjectFv(void *);
u32 get_enemy_entity(int);
s32 TBoss8Dragon__sub_802FB1B0(int, f32, void *);
extern const f32 lbl_805DF150;
extern const f32 lbl_805DF154;
void run_task__15TObjBoss8PillerFv(u8 *arg0);
}

extern "C" {

void render__15TObjBoss8PillerFv(u8 *arg0);
M2C_UNK post_translate_matrix(void *);
M2C_UNK scale_matrix(int, f32, f32, f32);
M2C_UNK draw_model_motion(int, int, f32);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK reset_transform_state__10TObjPlayerFv();
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
s32 is_any_teammate_in_state__10TObjPlayerFv();
s32 is_split_screen();

extern u8 *TObjBoss8Piller__shared_resource;
extern const f32 lbl_805DF150;

void render__15TObjBoss8PillerFv(u8 *arg0) {
    s32 var_r31;

    if (is_any_teammate_in_state__10TObjPlayerFv() == 0) {
        if (is_split_screen() != 0) {
            var_r31 = M2C_FIELD(M2C_FIELD(TObjBoss8Piller__shared_resource, void **, 0x42C), s32 *, 0x28);
        } else {
            var_r31 = M2C_FIELD(M2C_FIELD(TObjBoss8Piller__shared_resource, void **, 0x42C), s32 *, 8);
        }
        set_global_param__8TObjFishFi((void *) (M2C_FIELD(M2C_FIELD(TObjBoss8Piller__shared_resource, void **, 0x42C), s32 *, 0xC)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x1C));
        scale_matrix((int) (0), (f32) (lbl_805DF150), (f32) (lbl_805DF150), (f32) (lbl_805DF150));
        draw_model_motion((int) (var_r31), (int) (M2C_FIELD(arg0, s32 *, 0x2C)), (f32) (M2C_FIELD(arg0, f32 *, 0x28)));
        pop_matrix();
        reset_transform_state__10TObjPlayerFv();
    }
}
void run_task__15TObjBoss8PillerFv(u8 *arg0) {
    u32 temp_r3;
    u32 temp_r3_2;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) (M2C_FIELD(arg0, f32 *, 0x28) + lbl_805DF150);
    temp_r3 = get_enemy_entity((int) (M2C_FIELD(arg0, u16 *, 0x30)));
    if (temp_r3 != 0U) {
        TBoss8Dragon__sub_802FB1B0((int) (temp_r3), (f32) (lbl_805DF154), (void *) (arg0 + 0x1C));
    }
    temp_r3_2 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2C), s32 *, 4) - 1;
    if (M2C_FIELD(arg0, f32 *, 0x28) >= (f32) temp_r3_2) {
        M2C_FIELD(arg0, f32 *, 0x28) = (f32) temp_r3_2;
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

}
