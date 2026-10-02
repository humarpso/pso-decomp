#include "types.h"
struct Vec_80325F7C { f32 x, y, z; };

struct Ray_80325F7C { Vec_80325F7C o; Vec_80325F7C d; };

struct Ctl_80325F7C { u8 pad[0x38]; Vec_80325F7C pos; };

struct Stk_80325F7C { Vec_80325F7C dir; Vec_80325F7C hit; Vec_80325F7C wing; Vec_80325F7C pos; Ray_80325F7C ray; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
typedef struct Vec_80326074 { f32 x; f32 y; f32 z; } Vec_80326074;

typedef struct Seg_80326074 { Vec_80326074 pos; f32 pad; } Seg_80326074;

typedef struct Hit_80326074 { u8 pad[4]; f32 *pos; } Hit_80326074;

typedef struct Wing_80326074 {
    u8 pad0[0x48];
    Seg_80326074 segs[4];
    u8 pad88[8];
    s32 n;
    u8 pad94[4];
    Vec_80326074 vel;
} Wing_80326074;

extern "C" {
void TBoss8Dragon__sub_80063FB8(s32, void *, f32);
s32 get_instance_count__12TBoss8DragonFv(void);
void update_scale__15TObjBoss2TunnelFPv(void *);
Ctl_80325F7C *get_player_by_client_id(s32);
void get_wing_position__26TBoss5GryphonLightningWingFii(void *, void *);
void copy_position__12TBoss8DragonFii(void *, void *);
void TObjPlayer__sub_80325D58(void *, void *, void *, void *);
void TNpcPlayer__sub_803E18C0(void *, void *, void *);
extern const f32 lbl_805DF630;
extern const f32 lbl_805DF638;
void fn_80325F7C(void *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
Hit_80326074 *csnVecterUnder(void *, s32);
void update_scale__15TObjBoss2TunnelFPv(void *);
void get_wing_position__26TBoss5GryphonLightningWingFii(void *, void *);
void copy_position__12TBoss8DragonFii(void *, void *);
void update_wing_segments(void *);
s32 rand(void);
void TBoss4Zako__sub_803D8910(void *, void *);
void TBoss6Type1__sub_803D9370(void *, void *);
extern const f32 lbl_805D8D48;
extern const f32 lbl_805DF63C;
extern const f32 lbl_805DF640;
extern const f32 lbl_805DF644;
extern const f32 lbl_805DF648;
extern const f32 lbl_805DF64C;
void fn_80326074(Wing_80326074 *self);
}

extern "C" {

void fn_80325F7C(void *arg0) {
    Ray_80325F7C ray;
    Vec_80325F7C pos;
    Vec_80325F7C wing;
    Vec_80325F7C hit;
    Vec_80325F7C dir;
    s32 inst;
    s32 i;
    Ctl_80325F7C *c;
    inst = get_instance_count__12TBoss8DragonFv();
    if (inst != 0) {
        i = 0;
        do {
            c = get_player_by_client_id(i);
            if (c != 0) {
                copy_position__12TBoss8DragonFii(arg0, &pos);
                get_wing_position__26TBoss5GryphonLightningWingFii(arg0, &wing);
                ray.o.x = pos.x;
                ray.o.y = c->pos.y;
                ray.o.z = pos.z;
                ray.d.x = wing.x - pos.x;
                ray.d.y = lbl_805DF630;
                ray.d.z = wing.z - pos.z;
                TNpcPlayer__sub_803E18C0(&c->pos, &ray, &hit);
                dir.x = ray.d.x;
                dir.y = ray.d.y;
                dir.z = ray.d.z;
                update_scale__15TObjBoss2TunnelFPv(&dir);
                TObjPlayer__sub_80325D58(arg0, &pos, &dir, &hit);
                TBoss8Dragon__sub_80063FB8(inst, &hit, lbl_805DF638);
            }
            i++;
        } while (i < 4);
    }
}
#pragma push
#pragma fp_contract on
void fn_80326074(Wing_80326074 *self) {
    Vec_80326074 q;
    Vec_80326074 p;
    Vec_80326074 d;
    Hit_80326074 *hit;
    f32 h;
    f32 len;
    s32 i;
    f32 r;
    get_wing_position__26TBoss5GryphonLightningWingFii(self, &p);
    p.x += self->vel.x;
    p.y += self->vel.y;
    p.z += self->vel.z;
    p.y = lbl_805DF63C;
    hit = csnVecterUnder(&p, 0x16EF);
    if (hit == NULL || (h = hit->pos[1]) > lbl_805D8D48) {
        get_wing_position__26TBoss5GryphonLightningWingFii(self, &p);
        self->vel.x *= lbl_805DF640;
        self->vel.y *= lbl_805DF640;
        self->vel.z *= lbl_805DF640;
    } else {
        p.y = h;
    }
    copy_position__12TBoss8DragonFii(self, &q);
    VecCopy__FP3VecPC3Vec(&d, &p);
    TBoss6Type1__sub_803D9370(&d, &q);
    len = ((f32 (*)(void *))update_scale__15TObjBoss2TunnelFPv)(&d) / (f32)(self->n - 1);
    d.x *= len;
    d.y *= len;
    d.z *= len;
    VecCopy__FP3VecPC3Vec(&p, &q);
    for (i = 0; i < self->n; i++) {
        VecCopy__FP3VecPC3Vec(&self->segs[i].pos, &p);
        TBoss4Zako__sub_803D8910(&p, &d);
    }
    r = lbl_805DF648 * (lbl_805DF64C * (f32)rand()) + lbl_805DF644;
    for (i = 1; i < self->n - 1; i++) {
        self->segs[i].pos.y += r;
    }
    update_wing_segments(self);
}
#pragma pop

}
