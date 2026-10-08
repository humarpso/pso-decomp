#include "types.h"

struct Part_800BA934 { u8 pad[0x1c]; u8 f1c[0x10]; };

struct Obj_800BA934 { u8 pad[0x38]; u8 f38[0x28]; void *f60; u8 pad2[0x40]; Part_800BA934 *parts; s32 count; };

struct Vec_800BAAE4 { f32 x, y, z; };

struct Part_800BAAE4 { Vec_800BAAE4 a; u8 pad[0x10]; Vec_800BAAE4 b; u8 pad2[4]; };

struct Obj_800BAAE4 { u8 pad[0x38]; Vec_800BAAE4 pos; u8 pad2[0x1c]; s32 angle; u8 pad3[0x40]; Part_800BAAE4 *parts; };

struct Vec_800BA9BC { f32 x, y, z; };

struct Part_800BA9BC { Vec_800BA9BC a; u8 pad[0x10]; Vec_800BA9BC b; u8 pad2[4]; };

struct Obj_800BA9BC { u8 pad[0x38]; Vec_800BA9BC pos; u8 pad2[0x1c]; s32 angle; u8 pad3[0x40]; Part_800BA9BC *parts; };

struct V3_800BAA2C { f32 x; f32 y; f32 z; };

struct Col_800BAA2C { u8 pad0[0x1C]; V3_800BAA2C pos; u8 pad28[4]; };

struct Obj_800BAA2C { u8 pad0[0x38]; f32 x; f32 y; f32 z; u8 pad44[0x60 - 0x44]; s32 rot; u8 pad64[0xA4 - 0x64]; Col_800BAA2C *cols; s32 count; };

extern "C" {
int push_matrix(void);
int set_matrix_identity__10TObjPlayerFPv(void *);
f32 post_translate_matrix(void *);
int rotate_matrix_y(void *, void *);
int set_global_flag__10TObjPlayerFv(void);
int matrix_mult_vec(void *, void *, void *);
void clear_global_state__10TObjPlayerFv(void);
int pop_matrix(void);
void transform_part_positions__9TObjEneDDFPv(Obj_800BA934 *self);
void VecCopy__FP3VecPC3Vec(Vec_800BAAE4 *dst, const Vec_800BAAE4 *src);
void rotate_xz_pair_by_angle(f32 *x, f32 *z, s32 angle);
void subtract_vector(Vec_800BAAE4 *a, Vec_800BAAE4 *b);
void set_part_local_pos__9TObjEneDDFPvPvi(Obj_800BAAE4 *self, Vec_800BAAE4 *v, s32 i);
void VecCopy__FP3VecPC3Vec(Vec_800BAAE4 *dst, const Vec_800BAAE4 *src);
void rotate_xz_pair_by_angle(f32 *x, f32 *z, s32 angle);
void vec3_add_to(Vec_800BA9BC *a, Vec_800BA9BC *b);
void set_part_position__9TObjEneDDFPvPvi(Obj_800BA9BC *self, Vec_800BA9BC *v, s32 i);
void VecCopy__FP3VecPC3Vec(Vec_800BAAE4 *dst, const Vec_800BAAE4 *src);
int matrix_mult_vec(void *, void *, void *);
int set_matrix_identity__10TObjPlayerFPv(void *);
int rotate_matrix_y(void *, void *);
void translate_matrix(int, f32, f32, f32);
int push_matrix(void);
int pop_matrix(void);
void update_local_colliders_from_world(Obj_800BAA2C *arg0, V3_800BAA2C *arg1);
}

extern "C" {

void clear_field_388__9TObjEneDDFPv(void* p);
void init_model__9TObjEneDDFPv(void* p);
void set_active__9TObjEneDDFPv(void* p);
void TObjEneDD__vt85(void);
int init_collision_body_parts(void*);

void transform_part_positions__9TObjEneDDFPv(Obj_800BA934 *self) {
    s32 i;
    push_matrix();
    set_matrix_identity__10TObjPlayerFPv(0);
    post_translate_matrix(self->f38);
    rotate_matrix_y(0, self->f60);
    set_global_flag__10TObjPlayerFv();
    for (i = 0; i < self->count; i++) {
        matrix_mult_vec(0, &self->parts[i], self->parts[i].f1c);
    }
    clear_global_state__10TObjPlayerFv();
    pop_matrix();
}

void set_part_position__9TObjEneDDFPvPvi(Obj_800BA9BC *self, Vec_800BA9BC *v, s32 i) {
    Vec_800BA9BC *p;
    VecCopy__FP3VecPC3Vec((Vec_800BAAE4 *)(&self->parts[i].a), (const Vec_800BAAE4 *)(v));
    p = &self->parts[i].b;
    VecCopy__FP3VecPC3Vec((Vec_800BAAE4 *)(p), (const Vec_800BAAE4 *)(v));
    rotate_xz_pair_by_angle(&p->x, &p->z, self->angle);
    vec3_add_to(p, &self->pos);
}

void update_local_colliders_from_world(Obj_800BAA2C *arg0, V3_800BAA2C *arg1) {
    s32 i;
    push_matrix();
    set_matrix_identity__10TObjPlayerFPv((void *)(0));
    rotate_matrix_y((void *)(0), (void *)(-arg0->rot));
    translate_matrix(0, -arg0->x, -arg0->y, -arg0->z);
    for (i = 0; i < arg0->count; i++) {
        VecCopy__FP3VecPC3Vec((Vec_800BAAE4 *)(&arg0->cols[i].pos), (const Vec_800BAAE4 *)(arg1));
        matrix_mult_vec(0, arg1, &arg0->cols[i]);
        arg1++;
    }
    pop_matrix();
}

void set_part_local_pos__9TObjEneDDFPvPvi(Obj_800BAAE4 *self, Vec_800BAAE4 *v, s32 i) {
    Vec_800BAAE4 *p;
    VecCopy__FP3VecPC3Vec(&self->parts[i].b, v);
    p = &self->parts[i].a;
    VecCopy__FP3VecPC3Vec(p, v);
    subtract_vector(p, &self->pos);
    rotate_xz_pair_by_angle(&p->x, &p->z, -self->angle);
}

void init_model__9TObjEneDDFPv(void* p) { init_collision_body_parts(p); transform_part_positions__9TObjEneDDFPv((Obj_800BA934 *)((void*)(p))); }
void clear_field_388__9TObjEneDDFPv(void* p) { *(s32*)((char*)p + 0x388) = 0; }
void set_active__9TObjEneDDFPv(void* p) { *(s32*)((char*)p + 0x388) = 1; }

}
