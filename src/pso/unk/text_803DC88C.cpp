#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803DCBD8_lbl_8058D380 {
    M2C_UNK value;
    u8 remaining[0xEC];
};

typedef M2C_UNK (*RecoveredCallback_92513335c3ed)(void *);
typedef void (*RecoveredCallback_2be3cacebb2e)(void);
struct MotionCtx_803DC894 {
    u8 pad[0xC];
    void (*fn)(void);
};

struct Mtx_803DC994 { f32 m[3][4]; };

struct C_803DCBF0 { u32 a; u32 b; u32 c; u32 d; u32 e; u32 f; u32 g; u32 h; u32 i; };

typedef void (*RecoveredCallback_1268626c296b)(void *);
struct Node_803DCB40 {
    u32 flags;
    u32 f4;
    u8 pad8[0x2C - 0x8];
    struct Node_803DCB40 *child;
    struct Node_803DCB40 *next;
};

struct Tbl_803DCC34 { u32 v[12]; };

struct Reg_803DCC34 { u8 pad[0xC]; u32 mode; };

struct N_803DC9E4 {
    u32 flags;
    s32 m4;
    u8 m8[0xC];
    u8 m14[0xC];
    u8 m20[0xC];
    struct N_803DC9E4 *child;
    struct N_803DC9E4 *next;
    f32 f34;
};

extern "C" {
extern RecoveredGlobal_803DCBD8_lbl_8058D380 lbl_8058D380;
extern u8 *lbl_805D774C;
void TObjPlayer__sub_803DCBD8(s32 arg0);
s32 compose_motion_node_matrix(int);
s32 push_matrix();
s32 pop_matrix();
s32 queue_model_draw_matrix(int, void *);
extern s32 lbl_805D7710;
extern s32 lbl_805D7774;
void draw_ginja_motion_node_tree(u8 *arg0);
void bind_motion_context(void *);
void init_model_draw_queue(void *);
void flush_model_draw_queue(void);
void prepare_ginja_model(void *);
void draw_ginja_motion_node_tree(u8 *arg0);
void draw_ginja_model_lists(void);
extern struct MotionCtx_803DC894 * const lbl_805D4698;
extern RecoveredCallback_2be3cacebb2e lbl_805D76E4;
void draw_ginja_model_with_motion(void *arg0, void *arg1);
extern s32 lbl_805D7774;
void copy_matrix3x3_to_global__10TObjPlayerFPv(struct Mtx_803DC994 *src);
void GXSetBlendMode(int, int, int, int);
extern u32 cached_blend_factor_table[];
extern u8 *lbl_805D774C;
void apply_cached_blend_mode(s32 arg0);
void TObjPlayer__sub_803DCBF0(C_803DCBF0 *arg0);
s32 compose_motion_node_matrix(int);
s32 push_matrix();
s32 pop_matrix();
extern struct MotionCtx_803DC894 * const lbl_805D4698;
extern RecoveredCallback_1268626c296b motion_node_draw_callback;
void draw_motion_node_tree__10TObjPlayerFPv(struct Node_803DCB40 *arg0);
extern const Tbl_803DCC34 gx_blend_mode_table;
extern u8 *lbl_805D774C;
void abs__4cXyzCFv(s32 arg0, s32 arg1);
M2C_UNK get_current_matrix(void *);
M2C_UNK apply_quat_rotation__10TObjPlayerFPvf(void *, f32);
M2C_UNK rotate_matrix_by_node_angles(void *, void *);
s32 push_matrix();
s32 pop_matrix();
M2C_UNK scale_current_matrix(void *);
M2C_UNK post_translate_matrix(void *);
void copy_matrix3x3_to_global__10TObjPlayerFPv(struct Mtx_803DC994 *src);
extern M2C_UNK lbl_8058CE10[];
void traverse_node_tree__10TObjPlayerFv(struct N_803DC9E4 *p, M2C_UNK (*cb)(s32));
}

extern "C" {

extern s32 lbl_805D7710;

void set_npc_enemy_param(s32 arg0) {
    lbl_805D7710 = arg0;
}
typedef char RecoveredGlobal_803DCBD8_lbl_8058D380_size[sizeof(RecoveredGlobal_803DCBD8_lbl_8058D380) == 0xF0 ? 1 : -1];

void draw_ginja_model_with_motion(void *arg0, void *arg1) {
    bind_motion_context(arg1);
    lbl_805D4698->fn = draw_ginja_model_lists;
    prepare_ginja_model(lbl_805D4698);
    init_model_draw_queue((void *) draw_ginja_model_lists);
    draw_ginja_motion_node_tree((u8 *)(arg0));
    flush_model_draw_queue();
    if (lbl_805D76E4 != NULL) {
        lbl_805D76E4();
    }
}

#pragma push
#pragma peephole off
#pragma scheduling off
void draw_ginja_motion_node_tree(u8 *arg0) {
    u32 temp_r3;
    u8 *temp_r3_2;
    u8 *var_r31;
    var_r31 = (u8 *)(arg0);
    do {
        push_matrix();
        compose_motion_node_matrix((int) (var_r31));
        if (((M2C_UNK (*)(void *)) (*(RecoveredCallback_92513335c3ed *)&lbl_805D7710)) != NULL) {
            (*(RecoveredCallback_92513335c3ed *)&lbl_805D7710)(var_r31);
        }
        temp_r3 = M2C_FIELD(var_r31, u32 *, 4);
        if ((temp_r3 != 0U) && ((u32) (M2C_FIELD(var_r31, s32 *, 0) & 8) == 0)) {
            queue_model_draw_matrix((int) (temp_r3), (void *) (lbl_805D7774));
        }
        temp_r3_2 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x2C));
        if (temp_r3_2 != NULL) {
            draw_ginja_motion_node_tree(temp_r3_2);
        }
        pop_matrix();
        var_r31 = (u8 *)(M2C_FIELD(var_r31, u8 **, 0x30));
    } while (var_r31 != NULL);
}
#pragma pop

void copy_matrix3x3_to_global__10TObjPlayerFPv(struct Mtx_803DC994 *src) {
    struct Mtx_803DC994 *dst = (struct Mtx_803DC994 *)lbl_805D7774;
    dst->m[0][0] = src->m[0][0];
    dst->m[0][1] = src->m[0][1];
    dst->m[0][2] = src->m[0][2];
    dst->m[1][0] = src->m[1][0];
    dst->m[1][1] = src->m[1][1];
    dst->m[1][2] = src->m[1][2];
    dst->m[2][0] = src->m[2][0];
    dst->m[2][1] = src->m[2][1];
    dst->m[2][2] = src->m[2][2];
}

struct Mtx_803DC994;
void traverse_node_tree__10TObjPlayerFv(struct N_803DC9E4 *p, M2C_UNK (*cb)(s32)) {
    do {
        u32 f = p->flags;
        if (f & 0x800) {
            get_current_matrix((void *) (lbl_8058CE10));
        }
        if ((f & 7) == 7) {
            if (!(f & 8)) {
                cb(p->m4);
            }
            if (!(f & 0x10)) {
                traverse_node_tree__10TObjPlayerFv(p->child, cb);
            }
        } else {
            push_matrix();
            if (!(f & 1)) {
                post_translate_matrix(p->m8);
            }
            if (!(f & 2)) {
                if (f & 0x1000) {
                    copy_matrix3x3_to_global__10TObjPlayerFPv((struct Mtx_803DC994 *) (lbl_8058CE10));
                } else if (f & 0x400) {
                    ((M2C_UNK (*)(f32, void *))apply_quat_rotation__10TObjPlayerFPvf)(p->f34, p->m14);
                } else {
                    rotate_matrix_by_node_angles(p->m14, (void *) (f & 0x20));
                }
            }
            if (!(f & 4)) {
                scale_current_matrix(p->m20);
            }
            if (!(f & 8)) {
                cb(p->m4);
            }
            if (!(f & 0x10)) {
                traverse_node_tree__10TObjPlayerFv(p->child, cb);
            }
            pop_matrix();
        }
        p = p->next;
    } while (p != NULL);
}

void draw_motion_node_tree__10TObjPlayerFPv(struct Node_803DCB40 *arg0) {
    u32 t;
    do {
        push_matrix();
        compose_motion_node_matrix((int) arg0);
        if (motion_node_draw_callback != NULL) {
            motion_node_draw_callback(arg0);
        }
        t = arg0->f4;
        if (t != 0 && (arg0->flags & 8) == 0) {
            ((void (*)(u32, struct MotionCtx_803DC894 *))lbl_805D4698->fn)(t, lbl_805D4698);
        }
        if (arg0->child != NULL) {
            draw_motion_node_tree__10TObjPlayerFPv(arg0->child);
        }
        pop_matrix();
        arg0 = arg0->next;
    } while (arg0 != NULL);
}

void TObjPlayer__sub_803DCBD8(s32 arg0) {
    lbl_805D774C = (u8 *)&lbl_8058D380.value + (arg0 * 0x28);
}

void TObjPlayer__sub_803DCBF0(C_803DCBF0 *arg0) {
    arg0->a = 0x808C0000;
    arg0->c = 0;
    arg0->d = 0x949004C0;
    arg0->e = 0x80012;
    arg0->f = -1;
    arg0->g = -1;
    arg0->h = 0x20000000;
    arg0->i = 0;
}

#define REG_803DCC34 ((Reg_803DCC34 *) lbl_805D774C)
void abs__4cXyzCFv(s32 arg0, s32 arg1) {
    Tbl_803DCC34 tbl = gx_blend_mode_table;
    if (arg1 == 0) {
        REG_803DCC34->mode = (REG_803DCC34->mode & 0x03FFFFFF) | 0xB0000000;
    } else if (arg1 == 0) {
        REG_803DCC34->mode = (REG_803DCC34->mode & 0x03FFFFFF) | 0x94000000;
    } else if (arg0 == 0) {
        REG_803DCC34->mode = (REG_803DCC34->mode & 0x1FFFFFFF) | (tbl.v[arg1] << 29);
    } else {
        REG_803DCC34->mode = (REG_803DCC34->mode & 0xE3FFFFFF) | (tbl.v[arg1] << 26);
    }
}

void apply_cached_blend_mode(s32 arg0) {
    u32 v = M2C_FIELD(lbl_805D774C, u32 *, 0xC);
    int src = cached_blend_factor_table[(v & 0xE0000000) >> 29];
    int dst = cached_blend_factor_table[(v & 0x1C000000) >> 26];
    if (arg0 != 0) {
        GXSetBlendMode(1, src, dst, 0);
    } else {
        GXSetBlendMode(0, src, dst, 0);
    }
}

}
