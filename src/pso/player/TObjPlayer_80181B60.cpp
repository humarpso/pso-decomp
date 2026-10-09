#include "types.h"

extern "C" {

void TObjPlayer__sub_80181B60(void);
void dispatch_lobby_action__10TObjPlayerFi(s32 arg0);
s32 process_lobby_action_14__6TLobbyFPv(s32);
s32 build_door_collision_triangles__10TObjPlayerFi(s32);
s32 is_phase_e__9TObjEneDDFPv();

void TObjPlayer__sub_80181B60(void) {  }
void dispatch_lobby_action__10TObjPlayerFi(s32 arg0) {
    if (is_phase_e__9TObjEneDDFPv() != 0) {
        build_door_collision_triangles__10TObjPlayerFi(arg0);
        return;
    }
    process_lobby_action_14__6TLobbyFPv(arg0);
}

#pragma push
#pragma fp_contract on
typedef struct { f32 x, y, z; } Vec_80181BAC;

typedef struct {
    u16 idx[3];
    s16 f6;
    Vec_80181BAC normal;
    Vec_80181BAC center;
    f32 dist;
} Tri_80181BAC;

typedef struct {
    u8 pad0[0x38];
    u8 f38[0x60 - 0x38];
    s32 f60;
    u8 pad64[0x94 - 0x64];
    Vec_80181BAC f94;
    u8 padA0[0xB8 - 0xA0];
    Tri_80181BAC tris[8];
    Vec_80181BAC verts[10];
} Obj_80181BAC;

void VecCopy__FP3VecPC3Vec(void *, const void *);
f32 newton_sqrtf(f32);
void calc_triangle_normal__10TObjPlayerFPvPv(Vec_80181BAC *, Vec_80181BAC *);
void vec3_add_to(Vec_80181BAC *, Vec_80181BAC *);
void mult_vec_array__10TObjPlayerFUii(s32, Vec_80181BAC *, Vec_80181BAC *, s32);
void set_matrix_identity__10TObjPlayerFPv(s32);
s32 rotate_matrix_y(int, int);
void push_matrix(void);
void pop_matrix(void);
void post_translate_matrix(void *);
extern Vec_80181BAC lbl_80443FBC[];
extern const u16 lbl_80444034[];
extern const f32 lbl_805DBBE8;
extern const f32 lbl_805DBBEC;

#define self ((Obj_80181BAC *)arg0)

s32 build_door_collision_triangles__10TObjPlayerFi(s32 arg0) {
    Vec_80181BAC v[3];
    Vec_80181BAC sum;
    Tri_80181BAC *t1;
    Tri_80181BAC *t;
    s32 m;
    s32 k;
    s32 j;
    s32 i;
    f32 three;
    f32 zero;

    VecCopy__FP3VecPC3Vec(&self->f94, (void *)(arg0 + 0x38));
    push_matrix();
    set_matrix_identity__10TObjPlayerFPv(0);
    post_translate_matrix(self->f38);
    rotate_matrix_y(0, self->f60);
    t1 = self->tris;
    j = 0;
    for (i = 0; i < 4; i++) {
        t1[0].idx[0] = j + lbl_80444034[0];
        t1[0].idx[1] = j + lbl_80444034[1];
        t1[0].idx[2] = j + lbl_80444034[2];
        VecCopy__FP3VecPC3Vec(&v[0], &lbl_80443FBC[t1[0].idx[0]]);
        VecCopy__FP3VecPC3Vec(&v[1], &lbl_80443FBC[t1[0].idx[1]]);
        VecCopy__FP3VecPC3Vec(&v[2], &lbl_80443FBC[t1[0].idx[2]]);
        calc_triangle_normal__10TObjPlayerFPvPv(v, &t1[0].normal);
        t1[1].idx[0] = j + lbl_80444034[3];
        t1[1].idx[1] = j + lbl_80444034[4];
        t1[1].idx[2] = j + lbl_80444034[5];
        VecCopy__FP3VecPC3Vec(&v[0], &lbl_80443FBC[t1[1].idx[0]]);
        VecCopy__FP3VecPC3Vec(&v[1], &lbl_80443FBC[t1[1].idx[1]]);
        VecCopy__FP3VecPC3Vec(&v[2], &lbl_80443FBC[t1[1].idx[2]]);
        calc_triangle_normal__10TObjPlayerFPvPv(v, &t1[1].normal);
        t1 += 2;
        j += 2;
    }
    mult_vec_array__10TObjPlayerFUii(0, lbl_80443FBC, self->verts, 10);
    zero = lbl_805DBBE8;
    t = (Tri_80181BAC *)(arg0 + 0xB8);
    three = lbl_805DBBEC;
    for (m = 0; m < 8; m++, t++) {
        f32 dz;
        f32 dx;
        sum.x = zero;
        sum.y = zero;
        sum.z = zero;
        for (k = 0; k < 3; k++) {
            vec3_add_to(&sum, &self->verts[t->idx[k]]);
        }
        sum.x /= three;
        sum.y /= three;
        sum.z /= three;
        VecCopy__FP3VecPC3Vec(&t->center, &sum);
        dx = self->verts[t->idx[0]].x - sum.x;
        dz = self->verts[t->idx[0]].z - sum.z;
        t->dist = newton_sqrtf(dx * dx + dz * dz);
        t->f6 = 0xDE0;
    }
    pop_matrix();
}
#undef self
#pragma pop

}
