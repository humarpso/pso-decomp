#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct RecoveredGlobal_800790F0_lbl_804F5800 {
    M2C_UNK value;
    u8 remaining[0xFC];
};

struct Obj_8007A32C { s32 f0; f32 f4; s32 f8; u8 fc[4]; };

struct E_80079580 { u8 pad[0x24]; u32 f24; };

struct Vec_80079608 {
    f32 x;
    f32 y;
    f32 z;
};

struct Hit_80079608 {
    Vec_80079608 pos;
    Vec_80079608 normal;
    u8 pad18[4];
};

struct Query_80079608 {
    s32 count;
    u8 pad4[4];
    void *flags;
    Vec_80079608 origin;
    Vec_80079608 *offsets;
};

struct Result_80079608 {
    s32 hit;
    Hit_80079608 *hits;
    s32 index;
    f32 best;
};

typedef s32 M2C_UNK;
struct Poly_8007970C { u8 pad[0x24]; };

struct Mesh_8007970C {
    u8 pad0[4];
    u32 flags;
    s32 count;
    Poly_8007970C *polys;
};

struct Node_8007970C {
    Mesh_8007970C *mesh;
};

struct Poly_800797DC { u8 pad[0x24]; };

struct Mesh_800797DC {
    u8 pad0[4];
    u32 flags;
    s32 count;
    Poly_800797DC *polys;
};

struct Node_800797DC {
    Mesh_800797DC *mesh;
};

struct Vec_800798A0 {
    f32 x;
    f32 y;
    f32 z;
};

struct Face_800798A0 {
    u16 idx[3];
    u16 flags;
    Vec_800798A0 n;
};

extern "C" {
void TObjPlayer__sub_8007A0E4(u8 *arg0, u8 *arg1);
extern RecoveredGlobal_800790F0_lbl_804F5800 lbl_804F5800;
s32 TAdEndText__sub_800790F0(u8 arg0);
void TObjPlayer__sub_80079108(void);
M2C_UNK TObjPlayer__sub_80079118(M2C_UNK *);
void TObjPlayer__sub_8007911C(void);
void TObjPlayer__sub_80079120(s32);
s32 evaluate_ground_triangles(s32, s32, u32 *);
u32 refill_csn_candidate_cache(s32, u32 *, s32);
extern M2C_UNK lbl_804389CC[];
extern M2C_UNK lbl_80500140[];
M2C_UNK *csnVectorUnder(s32 arg0, u32 *arg1, s32 arg2);
void TObjPlayer__sub_80079108(void);
M2C_UNK TObjPlayer__sub_80079118(M2C_UNK * _w0);
void TObjPlayer__sub_8007911C(void);
void TObjPlayer__sub_80079120(s32 _w0);
s32 evaluate_ground_triangles(s32, s32, u32 *);
u32 select_ground_query_groups(s32, s32);
extern M2C_UNK lbl_80500140[];
extern u32 lbl_804FFD40[];
extern s32 lbl_804389E8[];
s32 *csnVecterUnder(s32 arg0, s32 arg1);
void TObjPlayer__sub_8007911C(void);
M2C_UNK TObjPlayer__sub_80079118(M2C_UNK * _w0);
extern s32 lbl_80500148[];
extern s32 lbl_80438988[];
void *TObjPlayer__sub_8007A2D0(void *self);
void TObjPlayer__sub_8007911C(void);
M2C_UNK TObjPlayer__sub_80079118(M2C_UNK * _w0);
s32 prepare_wall_query_polygons(void *, f32, s32);
extern s32 lbl_80500148[];
extern s32 lbl_804389A8[];
void *TObjPlayer__sub_8007A32C(Obj_8007A32C *self);
M2C_UNK TObjPlayer__sub_80079118(M2C_UNK * _w0);
void TObjPlayer__sub_8007911C(void);
void TObjPlayer__sub_80079124(void *, void *);
u32 TObjPlayer__sub_80079DE0(void *, void *);
extern M2C_UNK lbl_804389C0[];
extern u32 lbl_804FFD40[];
extern M2C_UNK lbl_80500140[];
M2C_UNK *csnLookAt(s32 arg0, s32 arg1);
void vsub(void *, void *, void *);
s32 intersect_wall_triangle_one_sided(void *, void *, void *, E_80079580 *, u32, s32);
extern E_80079580 *lbl_805D4E6C;
extern f32 lbl_805D4E74;
extern s32 lbl_805D4E7C;
extern const f32 lbl_805D91F4;
s32 query_wall_segment(void *arg0, void *arg1, void *arg2, s32 arg3);
f32 get_random_float__8TObjFishFv(f32);
s32 query_wall_segment(void *arg0, void *arg1, void *arg2, s32 arg3);
extern const f32 lbl_805D9204;
s32 select_deepest_wall_ray(Query_80079608 *q, Result_80079608 *r);
void TObjPlayer__sub_80079124(void * _w0, void * _w1);
s32 intersect_wall_triangle_one_sided(void *, void *, void *, E_80079580 *, u32, s32);
void vsub(void *, void *, void *);
extern M2C_UNK lbl_80500140[];
extern f32 lbl_805D4E74;
extern M2C_UNK *lbl_805D4E78;
extern s32 lbl_805D4E7C;
extern const f32 lbl_805D91F4;
s32 TObjPlayer__sub_8007970C(void *arg0, void *arg1, u32 arg2, Node_8007970C **list);
s32 intersect_wall_triangle_one_sided(void *, void *, void *, E_80079580 *, u32, s32);
void vsub(void *, void *, void *);
extern M2C_UNK lbl_80500140[];
extern M2C_UNK *lbl_805D4E78;
extern s32 lbl_805D4E7C;
s32 TObjPlayer__sub_800797DC(void *arg0, void *arg1, int arg2, Node_800797DC **list);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 vec3_dot(void *, void *);
void vec3_cross(void *, void *, void *);
extern Vec_800798A0 lbl_8050BEE0;
extern Vec_800798A0 lbl_8050BF00;
extern Vec_800798A0 lbl_8050BF20;
extern Vec_800798A0 lbl_8050BF40;
extern Vec_800798A0 lbl_8050BF60;
extern s32 lbl_805D4E70;
extern const f32 lbl_805D91F0;
extern const f32 lbl_805D91FC;
extern const f32 lbl_805D9208;
extern const f32 lbl_805D920C;
}

extern "C" {

void TObjPlayer__sub_80079108(void);
void TObjPlayer__sub_8007910C(void);
void TObjPlayer__sub_80079110(void);
void TObjPlayer__sub_80079114(void);
void TObjPlayer__sub_8007911C(void);

typedef char RecoveredGlobal_800790F0_lbl_804F5800_size[sizeof(RecoveredGlobal_800790F0_lbl_804F5800) == 0x100 ? 1 : -1];
s32 TAdEndText__sub_800790F0(u8 arg0) {
    return M2C_FIELD(((u8 *)(&lbl_804F5800.value) + arg0), u8 *, 0) & 0xC0;
}

void TObjPlayer__sub_80079108(void) {  }
void TObjPlayer__sub_8007910C(void) {  }
void TObjPlayer__sub_80079110(void) {  }
void TObjPlayer__sub_80079114(void) {  }
M2C_UNK TObjPlayer__sub_80079118(M2C_UNK * _w0) {  }
void TObjPlayer__sub_8007911C(void) {  }
void TObjPlayer__sub_80079120(s32 _w0) {  }
void TObjPlayer__sub_80079124(void * _w0, void * _w1) {  }

s32 query_wall_segment(void *arg0, void *arg1, void *arg2, s32 arg3) {
    u8 sp8[12];
    s32 r;
    E_80079580 *p = lbl_805D4E6C;
    vsub(arg0, arg1, sp8);
    r = 0;
    lbl_805D4E7C = arg3;
    lbl_805D4E74 = lbl_805D91F4;
    for (; p->f24 != 0; p = (E_80079580 *)((u8 *)p + 0x28)) {
        if (intersect_wall_triangle_one_sided(arg0, sp8, arg2, p, p->f24, 3) != 0) {
            r = 1;
        }
    }
    return r;
}

#pragma push
#pragma fp_contract on
s32 select_deepest_wall_ray(Query_80079608 *q, Result_80079608 *r) {
    Vec_80079608 end;
    s32 i;
    s32 n;
    Vec_80079608 *off;
    Hit_80079608 *hit;
    f32 d;
    i = 0;
    r->hit = 0;
    r->index = -1;
    r->best = lbl_805D9204;
    off = q->offsets;
    hit = r->hits;
    n = q->count;
    for (; i < n; off++, hit++, i++) {
        end.x = q->origin.x + off->x;
        end.y = q->origin.y + off->y;
        end.z = q->origin.z + off->z;
        if (query_wall_segment(&q->origin, &end, q->flags, (s32)hit) != 0) {
            f32 dz = end.z - hit->pos.z;
            f32 dx = end.x - hit->pos.x;
            d = get_random_float__8TObjFishFv(dx * hit->normal.x + dz * hit->normal.z);
            if (r->best < d) {
                r->hit = 1;
                r->best = d;
                r->index = i;
            }
        }
    }
    return r->hit;
}
#pragma pop

s32 TObjPlayer__sub_8007970C(void *arg0, void *arg1, u32 arg2, Node_8007970C **list) {
    u8 dir[12];
    Mesh_8007970C *mesh;
    s32 i;
    s32 n;
    u32 flags;
    Poly_8007970C *poly;
    TObjPlayer__sub_80079124(arg0, arg1);
    lbl_805D4E78 = lbl_80500140;
    lbl_805D4E78[0] = 0;
    lbl_805D4E7C = lbl_805D4E78[1];
    lbl_805D4E74 = lbl_805D91F4;
    vsub(arg0, arg1, dir);
    for (; *list != NULL; list++) {
        mesh = (*list)->mesh;
        i = 0;
        n = mesh->count;
        poly = mesh->polys;
        flags = mesh->flags;
        for (; i < n; i++, poly++) {
            intersect_wall_triangle_one_sided(arg0, dir, (void *)arg2, (E_80079580 *)poly, flags, 0);
        }
    }
    return lbl_805D4E78[0];
}

s32 TObjPlayer__sub_800797DC(void *arg0, void *arg1, int arg2, Node_800797DC **list) {
    u8 dir[12];
    Mesh_800797DC *mesh;
    s32 i;
    s32 n;
    u32 flags;
    Poly_800797DC *poly;
    lbl_805D4E78 = lbl_80500140;
    lbl_805D4E78[0] = 0;
    lbl_805D4E7C = lbl_805D4E78[1];
    vsub(arg0, arg1, dir);
    for (; *list != NULL; list++) {
        mesh = (*list)->mesh;
        i = 0;
        n = mesh->count;
        poly = mesh->polys;
        flags = mesh->flags;
        for (; i < n; i++, poly++) {
            if (intersect_wall_triangle_one_sided(arg0, dir, (void *)arg2, (E_80079580 *)poly, flags, 1) != 0) {
                return 1;
            }
        }
    }
    return 0;
}

#pragma push
#pragma fp_contract on
#define FACE ((Face_800798A0 *)arg3)
#define ORG ((Vec_800798A0 *)arg0)
#define DIR ((Vec_800798A0 *)arg1)
#define VERTS ((Vec_800798A0 *)arg4)

s32 intersect_wall_triangle_one_sided(void *arg0, void *arg1, void *arg2, E_80079580 *arg3, u32 arg4, s32 arg5) {
    Vec_800798A0 n;
    Vec_800798A0 *v;
    Vec_800798A0 *v1;
    f32 denom;
    f32 t;

    if ((FACE->flags & (u32)arg2) == 0) {
        return 0;
    }
    n.x = FACE->n.x;
    n.y = FACE->n.y;
    n.z = FACE->n.z;
    denom = vec3_dot(DIR, &n);
    if (denom >= lbl_805D9208) {
        return 0;
    }
    v = &VERTS[FACE->idx[0]];
    lbl_8050BEE0.x = ORG->x - v->x;
    lbl_8050BEE0.y = ORG->y - v->y;
    lbl_8050BEE0.z = ORG->z - v->z;
    t = vec3_dot(&lbl_8050BEE0, &n);
    if (t <= lbl_805D91FC) {
        return 0;
    }
    t = -(t / denom);
    if (t > lbl_805D920C || t < lbl_805D91F0) {
        return 0;
    }
    lbl_8050BF60.x = DIR->x * t + ORG->x;
    lbl_8050BF60.y = DIR->y * t + ORG->y;
    lbl_8050BF60.z = DIR->z * t + ORG->z;
    v1 = &VERTS[FACE->idx[1]];
    vsub(&lbl_8050BF60, v, &lbl_8050BEE0);
    vsub(&lbl_8050BF60, v1, &lbl_8050BF00);
    vec3_cross(&lbl_8050BEE0, &lbl_8050BF00, &lbl_8050BF40);
    if (vec3_dot(&lbl_8050BF40, &n) < lbl_805D91F0) {
        return 0;
    }
    vsub(&lbl_8050BF60, &VERTS[FACE->idx[2]], &lbl_8050BF20);
    vec3_cross(&lbl_8050BF00, &lbl_8050BF20, &lbl_8050BF40);
    if (vec3_dot(&lbl_8050BF40, &n) < lbl_805D91F0) {
        return 0;
    }
    vec3_cross(&lbl_8050BF20, &lbl_8050BEE0, &lbl_8050BF40);
    if (vec3_dot(&lbl_8050BF40, &n) < lbl_805D91F0) {
        return 0;
    }
    switch (arg5) {
    case 0:
        if (t < lbl_805D4E74) {
            lbl_805D4E74 = t;
            *lbl_805D4E78 = 1;
            VecCopy__FP3VecPC3Vec((void *)lbl_805D4E7C, &lbl_8050BF60);
            VecCopy__FP3VecPC3Vec((void *)(lbl_805D4E7C + 0xC), &n);
            M2C_FIELD(lbl_805D4E7C, u32 *, 0x18) = FACE->flags;
        }
        break;
    case 1:
        *lbl_805D4E78 = 1;
        VecCopy__FP3VecPC3Vec((void *)lbl_805D4E7C, &lbl_8050BF60);
        VecCopy__FP3VecPC3Vec((void *)(lbl_805D4E7C + 0xC), &n);
        M2C_FIELD(lbl_805D4E7C, u32 *, 0x18) = FACE->flags;
        break;
    case 2:
        if (lbl_805D4E70 >= 0x20) {
            return 0;
        }
        *lbl_805D4E78 = 1;
        VecCopy__FP3VecPC3Vec((void *)lbl_805D4E7C, &lbl_8050BF60);
        VecCopy__FP3VecPC3Vec((void *)(lbl_805D4E7C + 0xC), &n);
        M2C_FIELD(lbl_805D4E7C, u32 *, 0x18) = FACE->flags;
        lbl_805D4E7C += 0x1C;
        lbl_805D4E70++;
        break;
    case 3:
        if (t < lbl_805D4E74) {
            lbl_805D4E74 = t;
            VecCopy__FP3VecPC3Vec((void *)lbl_805D4E7C, &lbl_8050BF60);
            VecCopy__FP3VecPC3Vec((void *)(lbl_805D4E7C + 0xC), &n);
            M2C_FIELD(lbl_805D4E7C, u32 *, 0x18) = FACE->flags;
        }
        break;
    }
    return 1;
}
#pragma pop
#undef FACE
#undef ORG
#undef DIR
#undef VERTS

void TObjPlayer__sub_8007A0E4(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(arg0, u16 *, 4) = (u16) M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 6) = (u16) M2C_FIELD(arg1, u16 *, 6);
    *(M2CCopy_C *)((s32) arg0 + 8) = *(const M2CCopy_C *)((s32) arg1 + 8);
    *(M2CCopy_C *)((s32) arg0 + 0x14) = *(const M2CCopy_C *)((s32) arg1 + 0x14);
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) M2C_FIELD(arg1, f32 *, 0x20);
}

void *TObjPlayer__sub_8007A2D0(void *self) {
    void *r;
    TObjPlayer__sub_8007911C();
    r = lbl_80500148;
    if (select_deepest_wall_ray((Query_80079608 *)(self), (Result_80079608 *)(r)) == 0) {
        r = 0;
    }
    TObjPlayer__sub_80079118((M2C_UNK *)(lbl_80438988));
    return r;
}

void *TObjPlayer__sub_8007A32C(Obj_8007A32C *self) {
    void *r;
    TObjPlayer__sub_8007911C();
    r = lbl_80500148;
    if (prepare_wall_query_polygons(self->fc, self->f4, self->f8) == 0) {
        r = 0;
    } else if (select_deepest_wall_ray((Query_80079608 *)(self), (Result_80079608 *)(r)) == 0) {
        r = 0;
    }
    TObjPlayer__sub_80079118((M2C_UNK *)(lbl_804389A8));
    return r;
}

M2C_UNK *csnLookAt(s32 arg0, s32 arg1) {
    M2C_UNK *var_r31;
    TObjPlayer__sub_8007911C();
    var_r31 = (M2C_UNK *)(lbl_80500140);
    TObjPlayer__sub_80079124((void *)((void *) (arg0)), (void *)((void *) (arg1)));
    if (TObjPlayer__sub_80079DE0((void *) (arg0), (void *) (arg1)) == 0U) {
        var_r31 = (M2C_UNK *)((u8 *)(NULL));
    } else if (TObjPlayer__sub_800797DC((void *)((void *) (arg0)), (void *)((void *) (arg1)), (int)((int) (0x8000)), (Node_800797DC **)((void *) (((M2C_UNK *)&lbl_804FFD40)))) == 0) {
        var_r31 = (M2C_UNK *)((u8 *)(NULL));
    }
    TObjPlayer__sub_80079118((M2C_UNK *)((void *) (lbl_804389C0)));
    return var_r31;
}

M2C_UNK *csnVectorUnder(s32 arg0, u32 *arg1, s32 arg2) {
    M2C_UNK *var_r31;
    TObjPlayer__sub_80079108();
    TObjPlayer__sub_8007911C();
    TObjPlayer__sub_80079120((s32)(arg0));
    var_r31 = lbl_80500140;
    if ((u32) *arg1 == 0U) {
        if (refill_csn_candidate_cache(arg0, arg1, arg2) == 0U) {
            var_r31 = NULL;
        } else if (evaluate_ground_triangles(arg0, arg2, arg1) == 0) {
            var_r31 = NULL;
        }
    } else {
        if (evaluate_ground_triangles(arg0, arg2, arg1) != 0) {
            goto done;
        }
        if (refill_csn_candidate_cache(arg0, arg1, arg2) == 0U) {
            var_r31 = NULL;
        } else if (evaluate_ground_triangles(arg0, arg2, arg1) == 0) {
            var_r31 = NULL;
        }
    }
done:
    TObjPlayer__sub_80079118((M2C_UNK *)(lbl_804389CC));
    return var_r31;
}
s32 *csnVecterUnder(s32 arg0, s32 arg1) {
    s32 *var_r31;
    TObjPlayer__sub_80079108();
    TObjPlayer__sub_8007911C();
    TObjPlayer__sub_80079120(arg0);
    var_r31 = ((s32 *)&lbl_80500140);
    if (select_ground_query_groups(arg0, arg1) == 0U) {
        var_r31 = 0;
    } else if (evaluate_ground_triangles(arg0, arg1, lbl_804FFD40) == 0) {
        var_r31 = 0;
    }
    TObjPlayer__sub_80079118((M2C_UNK *)(lbl_804389E8));
    return var_r31;
}

}
