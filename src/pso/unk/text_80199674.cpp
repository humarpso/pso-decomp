#include "types.h"
struct Vec_8019978C { f32 x, y, z; };

struct Tri_8019978C {
    Vec_8019978C p;
    Vec_8019978C n;
};

struct Hit_8019978C {
    u8 pad0[4];
    Tri_8019978C *tri;
};

struct Obj_8019978C {
    u8 pad0[0x340];
    f32 f340;
    u8 pad344[0x394 - 0x344];
    f32 f394;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_8019978C *, Vec_8019978C *);
Hit_8019978C *csnVector(Vec_8019978C *, Vec_8019978C *, s32);
f32 vec3_dot(Vec_8019978C *, Vec_8019978C *);
f32 vector_length(Vec_8019978C *);
void normalize_vector(Vec_8019978C *);
extern const f32 lbl_805DBF4C;
extern const f32 lbl_805DBF58;
extern const f32 lbl_805DBF64;
extern const f32 lbl_805DBF74;
extern const f32 lbl_805DBF78;
s32 fn_8019978C(Obj_8019978C *o, Vec_8019978C *p, Vec_8019978C *v);
}

extern "C" {

#pragma push
#pragma fp_contract on
s32 fn_8019978C(Obj_8019978C *o, Vec_8019978C *p, Vec_8019978C *v) {
    Vec_8019978C end;
    Vec_8019978C dir;
    Vec_8019978C a;
    Vec_8019978C r;
    Vec_8019978C q;
    Vec_8019978C s;
    Hit_8019978C *hit;
    Tri_8019978C *tri;
    f32 len;
    f32 d;
    f32 px, py, pz, nx, ny, nz;
    end.x = p->x + v->x;
    end.y = p->y + v->y;
    end.z = p->z + v->z;
    VecCopy__FP3VecPC3Vec(&dir, v);
    len = vector_length(&dir);
    if (lbl_805DBF58 != len) {
        normalize_vector(&dir);
        VecCopy__FP3VecPC3Vec(&a, p);
        a.x -= lbl_805DBF78 * (dir.x * len);
        a.y -= lbl_805DBF78 * (dir.y * len);
        a.z -= lbl_805DBF78 * (dir.z * len);
    } else {
        return 0;
    }
    hit = csnVector(&a, &end, 0x17EF);
    if (hit != NULL) {
    tri = hit->tri;
    px = tri->p.x;
    py = tri->p.y;
    pz = tri->p.z;
    nx = tri->n.x;
    ny = tri->n.y;
    nz = tri->n.z;
    r.x = v->x;
    r.y = v->y;
    r.z = v->z;
    d = lbl_805DBF74 * vec3_dot(&r, &tri->n);
    r.x -= d * nx;
    r.y -= d * ny;
    r.z -= d * nz;
    q.x = px - p->x;
    q.z = pz - p->z;
    q.y = lbl_805DBF58;
    vector_length(&q);
    v->x = r.x * o->f340;
    v->z = r.z * o->f340;
    normalize_vector(&r);
    o->f394 *= o->f340;
    v->y = r.y * o->f394;
    s.x = v->x;
    s.z = v->z;
    s.y = o->f394;
    if (vector_length(&s) < lbl_805DBF64 - o->f340) {
        v->x = lbl_805DBF58;
        v->y = lbl_805DBF58;
        v->z = lbl_805DBF58;
    }
    p->x += v->x;
    p->z += v->z;
    p->y = lbl_805DBF4C * r.y + py;
    return 1;
    }
    return 0;
}
#pragma pop

}
