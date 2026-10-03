#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct P_80042ED0 {
    u8 pad0[0x38];
    f32 f38, f3c, f40;
    u8 pad44[0x1c];
    s32 f60;
    u8 pad64[0x5c];
    f32 fc0;
    u8 padc4[0x38c - 0xc4];
    f32 f38c;
};

struct V_80042ED0 { s32 a, b, c; };

struct E_80042ED0 { u8 b[0x30]; };

typedef struct Vec_80042DE8 {
    f32 x, y, z;
} Vec_80042DE8;

typedef struct Obj_80042DE8 {
    u8 pad0[0x38];
    Vec_80042DE8 pos;
} Obj_80042DE8;

extern "C" {
void render_anim_model__10TObjPlayerFPvf(void *, f32);
void matrix_mult_vec(s32, void *, s32);
void rotate_matrix_y(s32, s32);
void translate_matrix(s32, f32, f32, f32);
void push_matrix_from(void *);
void pop_matrix();
extern V_80042ED0 lbl_80436630;
extern u8 lbl_8058D490[];
extern E_80042ED0 *lbl_805D5678;
void TObjPlayer__sub_80042ED0(P_80042ED0 *o, s32 idx, s32 arg2);
Obj_80042DE8 *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void);
void scale_velocity__19TObjGyaranzoMissileFPvf(Vec_80042DE8 *, f32);
void vec3_add_to(Vec_80042DE8 *, Vec_80042DE8 *);
void subtract_vector(Vec_80042DE8 *, Vec_80042DE8 *);
extern s32 lbl_805D586C;
extern const f32 lbl_805D8760;
extern const f32 lbl_805D8764;
extern const f32 lbl_805D8768;
void TObjPlayer__sub_80042DE8(Obj_80042DE8 *self);
}

extern "C" {

u8 TObjPlayer__sub_80042EC0(void *arg0);
void set_target_id__10TObjPlayerFPvi(void *arg0, s32 arg1);
s32 obj_testFlags30(void *, M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, M2C_UNK);

void set_target_id__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    if (obj_testFlags30(arg0, 0x800) == 0) {
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 2);
        M2C_FIELD(arg0, s32 *, 0x3A8) = arg1;
    }
}

void TObjPlayer__sub_80042DE8(Obj_80042DE8 *self) {
    f32 r2;
    s32 i;
    Obj_80042DE8 *pl;
    r2 = lbl_805D8760;
    for (i = 0; i < lbl_805D586C; i++) {
        pl = get_player_data__10TObjPlayerFi(i);
        if (pl == NULL || obj_getField1c() >= 0x1000) {
            break;
        }
        {
            Vec_80042DE8 v = pl->pos;
            subtract_vector(&v, &self->pos);
            if (v.x * v.x + v.z * v.z <= r2) {
                v.y = lbl_805D8764;
                scale_velocity__19TObjGyaranzoMissileFPvf(&v, lbl_805D8768);
                vec3_add_to(&pl->pos, &v);
            }
        }
    }
}

u8 TObjPlayer__sub_80042EC0(void *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 0x326) == 0);
}
void TObjPlayer__sub_80042ED0(P_80042ED0 *o, s32 idx, s32 arg2) {
    push_matrix_from(lbl_8058D490);
    translate_matrix(0, o->f38, o->f3c + o->f38c, o->f40);
    rotate_matrix_y(0, o->f60);
    render_anim_model__10TObjPlayerFPvf(o, o->fc0);
    pop_matrix();
    V_80042ED0 v = lbl_80436630;
    push_matrix_from(&lbl_805D5678[idx]);
    matrix_mult_vec(0, &v, arg2);
    pop_matrix();
}

}
