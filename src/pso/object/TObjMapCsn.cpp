#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80194988___vt__10TObjMapCsn { M2C_UNK value; u8 remaining[0x38]; };
typedef char RecoveredGlobal_80194988___vt__10TObjMapCsn_size[sizeof(RecoveredGlobal_80194988___vt__10TObjMapCsn) == 0x3C ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_801949FC___vt__10TObjMapCsn { M2C_UNK value; u8 remaining[0x38]; };

struct Vec_801946D0 { f32 x, y, z; };

struct Tri_801946D0 {
    u16 a, b, c;
    s16 f6;
    Vec_801946D0 n;
    Vec_801946D0 center;
    f32 r2;
};

struct Csn_801946D0 {
    u8 pad0[0x38];
    Vec_801946D0 pos;
    u8 pad44[0x60 - 0x44];
    s32 f60;
    u8 pad64[4];
    f32 f68, f6c, f70;
    u8 pad74[0x88 - 0x74];
    s32 f88;
    u8 pad8c[0xD4 - 0x8C];
    Tri_801946D0 tris[8];
    Vec_801946D0 verts[8];
};

extern "C" {
s32 get_map_count__10TObjMapCsnFv();
s32 fn_80140DFC(int, void *);
s32 destroy_particle_controller__10TObjPlayerFPvs(void *, int);
s32 __dl__7TObjectFPv(void *);
extern RecoveredGlobal_80194988___vt__10TObjMapCsn __vt__10TObjMapCsn;
u8 *__dt__10TObjMapCsnFv(u8 *arg0, s16 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_map_count__10TObjMapCsnFv();
s32 fn_80140EA8(int, void *);
s32 TObjPlayer__sub_801569F4(void *);
void update_state__10TObjMapCsnFPv(void *arg0);
extern RecoveredGlobal_80194988___vt__10TObjMapCsn __vt__10TObjMapCsn;
extern s32 lbl_805D2CD0;
extern const f32 lbl_805DBEC0;
u8 *TObjMapCsn__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK matrix_mult_vec(int, void *, void *);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK rotate_vector_by_matrix(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrix();
extern s8 lbl_804B8448[];
extern Vec_801946D0 lbl_804B8460[];
extern M2C_UNK lbl_8058D490[];
s32 TObjMapCsn__sub_801946D0(void *self);
}

extern "C" {

s32 create__10TObjMapCsnFi(s32 arg0);
void render__10TObjMapCsnFv(void);
void update_state__10TObjMapCsnFPv(void *arg0);
s32 __nw__7TObjectFUl(M2C_UNK);
s32 get_map_count__10TObjMapCsnFv();

void render__10TObjMapCsnFv(void) {  }

extern M2C_UNK lbl_804B84C0[];

void update_state__10TObjMapCsnFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r0 == 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x88) == 0) {
            M2C_FIELD(arg0, s32 *, 0x88) = 1;
        }
    } else {
        if ((u32) temp_r0 > 5U) {
            M2C_FIELD(arg0, s32 *, 0x84) = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x88) = (s32) lbl_804B84C0[M2C_FIELD(arg0, s32 *, 0x84)];
    }
    M2C_FIELD(arg0, s32 *, 0x88) = (s32) (M2C_FIELD(arg0, s32 *, 0x88) | 0x40000000);
}

s32 TObjMapCsn__sub_801946D0(void *self) {
    Vec_801946D0 corners[8];
    Vec_801946D0 v2;
    Vec_801946D0 v1;
    Vec_801946D0 v0;
    Vec_801946D0 *p1;
    Vec_801946D0 *p2;
    s32 j;
    s32 i;
    s8 *idx;
    Tri_801946D0 *t;
    Vec_801946D0 *nrm;
    Csn_801946D0 *arg0 = (Csn_801946D0 *) self;
    idx = lbl_804B8448;
    nrm = lbl_804B8460;
    t = arg0->tris;
    corners[0].x = -(0.5f * arg0->f68);
    corners[0].y = 0.0f;
    corners[0].z = (0.5f * arg0->f70);
    corners[1].x = -(0.5f * arg0->f68);
    corners[1].y = arg0->f6c;
    corners[1].z = (0.5f * arg0->f70);
    corners[2].x = (0.5f * arg0->f68);
    corners[2].y = arg0->f6c;
    corners[2].z = (0.5f * arg0->f70);
    corners[3].x = (0.5f * arg0->f68);
    corners[3].y = 0.0f;
    corners[3].z = (0.5f * arg0->f70);
    corners[4].x = -(0.5f * arg0->f68);
    corners[4].y = 0.0f;
    corners[4].z = -(0.5f * arg0->f70);
    corners[5].x = -(0.5f * arg0->f68);
    corners[5].y = arg0->f6c;
    corners[5].z = -(0.5f * arg0->f70);
    corners[6].x = (0.5f * arg0->f68);
    corners[6].y = arg0->f6c;
    corners[6].z = -(0.5f * arg0->f70);
    corners[7].x = (0.5f * arg0->f68);
    corners[7].y = 0.0f;
    corners[7].z = -(0.5f * arg0->f70);
    push_matrix_from(lbl_8058D490);
    set_position_vec3__10TObjPlayerFPvPv(0, &arg0->pos);
    rotate_matrix_y(0, arg0->f60);
    for (i = 0; i < 8; i++) {
        matrix_mult_vec(0, &corners[i], &arg0->verts[i]);
    }
    p1 = &v1;
    p2 = &v2;
    for (j = 0; j < 8; j++) {
        t->a = idx[0];
        t->b = idx[1];
        t->c = idx[2];
        idx += 3;
        rotate_vector_by_matrix(0, nrm, &t->n);
        nrm++;
        VecCopy__FP3VecPC3Vec(&v0, &arg0->verts[t->a]);
        VecCopy__FP3VecPC3Vec(p1, &arg0->verts[t->b]);
        VecCopy__FP3VecPC3Vec(p2, &arg0->verts[t->c]);
        t->center.x = (v2.x + (v0.x + v1.x)) / 3.0f;
        t->center.y = (v2.y + (v0.y + v1.y)) / 3.0f;
        t->center.z = (v2.z + (v0.z + v1.z)) / 3.0f;
        if (!(j & 2)) {
            f32 r = 0.5f * arg0->f68;
            t->r2 = r * r;
        } else {
            f32 r = 0.5f * arg0->f70;
            t->r2 = r * r;
        }
        t->f6 = arg0->f88;
        t++;
    }
    return pop_matrix();
}

s32 create__10TObjMapCsnFi(s32 arg0) {
    s32 var_r31;

    var_r31 = __nw__7TObjectFUl(0x254);
    if (var_r31 != 0) {
        var_r31 = ((s32)TObjMapCsn__ct((u8 *)(var_r31), (M2C_UNK)(get_map_count__10TObjMapCsnFv()), (s32)(arg0)));
    }
    return var_r31;
}
u8 *__dt__10TObjMapCsnFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__10TObjMapCsn.value;
        if (((u32)get_map_count__10TObjMapCsnFv()) != 0U) {
            fn_80140DFC((int) (((u32)get_map_count__10TObjMapCsnFv())), (void *) (arg0));
        }
        destroy_particle_controller__10TObjPlayerFPvs((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}
u8 *TObjMapCsn__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f1;
    TObjPlayer__sub_801569F4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801949FC___vt__10TObjMapCsn *)&__vt__10TObjMapCsn).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2CD0;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000000);
    update_state__10TObjMapCsnFPv((void *) (arg0));
    TObjMapCsn__sub_801946D0((void *)((void *) (arg0)));
    M2C_FIELD(arg0, s32 *, 0xC4) = 8;
    M2C_FIELD(arg0, u8 **, 0xC8) = (unsigned char *) ((void *) (arg0 + 0x1F4));
    M2C_FIELD(arg0, s32 *, 0xCC) = 8;
    M2C_FIELD(arg0, u8 **, 0xD0) = (unsigned char *) ((void *) (arg0 + 0xD4));
    M2C_FIELD(arg0, u8 **, 0xAC) = (unsigned char *) ((void *) (arg0 + 0xC4));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xB0), (void *) (arg0 + 0x38));
    temp_f1 = lbl_805DBEC0 * M2C_FIELD(arg0, f32 *, 0x68);
    temp_f0 = lbl_805DBEC0 * M2C_FIELD(arg0, f32 *, 0x70);
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) ((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) M2C_FIELD(arg0, s32 *, 0x88);
    if (((u32)get_map_count__10TObjMapCsnFv()) != 0U) {
        fn_80140EA8((int) (((u32)get_map_count__10TObjMapCsnFv())), (void *) (arg0));
    }
    return arg0;
}

}
