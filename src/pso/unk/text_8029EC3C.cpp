#include "types.h"
struct Vec_8029EC3C { f32 x; f32 y; f32 z; };

struct Ray_8029EC3C { Vec_8029EC3C o; Vec_8029EC3C d; };

struct Hit_8029EC3C {
    u8 pad0[4];
    struct HitE_8029EC3C {
        f32 v[6];
        u32 flags;
    } *e;
};

extern "C" {
void *get_player_by_client_id(s32);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 get_stat_by_key_state__10TObjPlayerFPv(void *);
void VecCopy__FP3VecPC3Vec(void *, const void *);
f32 TCameraCtrl__sub_803D8D00(void *);
void reflect_matrix_in_plane(s32, void *);
Hit_8029EC3C *csnVecterUnder(void *, s32);
Hit_8029EC3C *csnVector(void *, void *, s32);
extern s32 lbl_805D53A0;
extern Vec_8029EC3C lbl_804DC7B8;
extern const f32 lbl_805DDD88;
extern const f32 lbl_805DDD8C;
extern const f32 lbl_805DDD98;
extern const f32 lbl_805DDD9C;
s32 fn_8029EC3C(Vec_8029EC3C *pos, s32 arg1);
}

extern "C" {

#pragma push
#pragma fp_contract on
s32 fn_8029EC3C(Vec_8029EC3C *pos, s32 arg1) {
    Ray_8029EC3C ray;
    Vec_8029EC3C a;
    Vec_8029EC3C b;
    Vec_8029EC3C d;
    void *p;
    Hit_8029EC3C *r;
    Hit_8029EC3C::HitE_8029EC3C *e;
    f32 scale;
    p = get_player_by_client_id(lbl_805D53A0);
    if (p == 0) return 0;
    scale = lbl_805DDD98;
    if (get_global_state__14TOKeyMachine01Fv() == 0x1C) {
        if ((s16)get_stat_by_key_state__10TObjPlayerFPv(p) == 0x5A) {
            scale = lbl_805DDD9C;
        } else {
            scale = lbl_805DDD98;
        }
    }
    VecCopy__FP3VecPC3Vec(&a, pos);
    b.x = scale * lbl_804DC7B8.x + a.x;
    b.y = a.y - lbl_805DDD88 * lbl_804DC7B8.y;
    b.z = scale * lbl_804DC7B8.z + a.z;
    d.x = b.x - pos->x;
    d.z = b.z - pos->z;
    d.y = b.y - pos->y;
    if (lbl_805DDD8C == TCameraCtrl__sub_803D8D00(&d)) {
        ray.o.x = pos->x;
        ray.o.y = pos->y;
        ray.o.z = pos->z;
        ray.d.x = lbl_804DC7B8.x;
        ray.d.y = lbl_804DC7B8.y;
        ray.d.z = lbl_804DC7B8.z;
        reflect_matrix_in_plane(0, &ray);
        return 1;
    }
    if (lbl_805DDD8C == lbl_804DC7B8.x && lbl_805DDD8C == lbl_804DC7B8.z) {
        r = csnVecterUnder(&a, arg1);
    } else {
        r = csnVector(&a, &b, arg1);
    }
    if (r != 0) {
        e = r->e;
        if (!(e->flags & 0x4000)) return 0;
        ray.o.x = e->v[0];
        ray.o.y = e->v[1];
        ray.o.z = e->v[2];
        ray.d.x = e->v[3];
        ray.d.y = e->v[4];
        ray.d.z = e->v[5];
        reflect_matrix_in_plane(0, &ray);
        return 1;
    }
    return 0;
}
#pragma pop

}
