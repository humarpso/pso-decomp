#include "types.h"

struct Part_800BA934 { u8 pad[0x1c]; u8 f1c[0x10]; };

struct Obj_800BA934 { u8 pad[0x38]; u8 f38[0x28]; void *f60; u8 pad2[0x40]; Part_800BA934 *parts; s32 count; };

struct Vec_800BAAE4 { f32 x, y, z; };

struct Part_800BAAE4 { Vec_800BAAE4 a; u8 pad[0x10]; Vec_800BAAE4 b; u8 pad2[4]; };

struct Obj_800BAAE4 { u8 pad[0x38]; Vec_800BAAE4 pos; u8 pad2[0x1c]; s32 angle; u8 pad3[0x40]; Part_800BAAE4 *parts; };

struct Vec_800BA9BC { f32 x, y, z; };

struct Part_800BA9BC { Vec_800BA9BC a; u8 pad[0x10]; Vec_800BA9BC b; u8 pad2[4]; };

struct Obj_800BA9BC { u8 pad[0x38]; Vec_800BA9BC pos; u8 pad2[0x1c]; s32 angle; u8 pad3[0x40]; Part_800BA9BC *parts; };

extern "C" {
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D8CD4(void *);
f32 TOHangerMachine01__sub_803D9C00(void *);
int TObjPlayer__sub_803D9214(void *, void *);
int set_global_flag__10TObjPlayerFv(void);
int TCameraCtrl__sub_803D8934(void *, void *, void *);
void clear_global_state__10TObjPlayerFv(void);
int TObjPlayer__sub_803D9B78(void);
void TObjEneDD__sub_800BA934(Obj_800BA934 *self);
void VecCopy__FP3VecPC3Vec(Vec_800BAAE4 *dst, const Vec_800BAAE4 *src);
void TObjBoss2Tunnel__sub_8007E7D8(f32 *x, f32 *z, s32 angle);
void TBoss6Type1__sub_803D9370(Vec_800BAAE4 *a, Vec_800BAAE4 *b);
void TObjEneDD__sub_800BAAE4(Obj_800BAAE4 *self, Vec_800BAAE4 *v, s32 i);
void VecCopy__FP3VecPC3Vec(Vec_800BAAE4 *dst, const Vec_800BAAE4 *src);
void TObjBoss2Tunnel__sub_8007E7D8(f32 *x, f32 *z, s32 angle);
void TBoss4Zako__sub_803D8910(Vec_800BA9BC *a, Vec_800BA9BC *b);
void TObjEneDD__sub_800BA9BC(Obj_800BA9BC *self, Vec_800BA9BC *v, s32 i);
}

extern "C" {

int TObjEneDD__sub_800BAA2C(void);
void clear_field_388__9TObjEneDDFPv(void* p);
void init_model__9TObjEneDDFPv(void* p);
void set_active__9TObjEneDDFPv(void* p);
void TObjEneDD__vt85(void);
int TObjEneGibbles__sub_80156780(void*);

void TObjEneDD__sub_800BA934(Obj_800BA934 *self) {
    s32 i;
    TObjPlayer__sub_803D9B2C();
    TObjPlayer__sub_803D8CD4(0);
    TOHangerMachine01__sub_803D9C00(self->f38);
    TObjPlayer__sub_803D9214(0, self->f60);
    set_global_flag__10TObjPlayerFv();
    for (i = 0; i < self->count; i++) {
        TCameraCtrl__sub_803D8934(0, &self->parts[i], self->parts[i].f1c);
    }
    clear_global_state__10TObjPlayerFv();
    TObjPlayer__sub_803D9B78();
}

void TObjEneDD__sub_800BA9BC(Obj_800BA9BC *self, Vec_800BA9BC *v, s32 i) {
    Vec_800BA9BC *p;
    VecCopy__FP3VecPC3Vec((Vec_800BAAE4 *)(&self->parts[i].a), (const Vec_800BAAE4 *)(v));
    p = &self->parts[i].b;
    VecCopy__FP3VecPC3Vec((Vec_800BAAE4 *)(p), (const Vec_800BAAE4 *)(v));
    TObjBoss2Tunnel__sub_8007E7D8(&p->x, &p->z, self->angle);
    TBoss4Zako__sub_803D8910(p, &self->pos);
}

int TObjEneDD__sub_800BAA2C(void) { return 0; }

void TObjEneDD__sub_800BAAE4(Obj_800BAAE4 *self, Vec_800BAAE4 *v, s32 i) {
    Vec_800BAAE4 *p;
    VecCopy__FP3VecPC3Vec(&self->parts[i].b, v);
    p = &self->parts[i].a;
    VecCopy__FP3VecPC3Vec(p, v);
    TBoss6Type1__sub_803D9370(p, &self->pos);
    TObjBoss2Tunnel__sub_8007E7D8(&p->x, &p->z, -self->angle);
}

void init_model__9TObjEneDDFPv(void* p) { TObjEneGibbles__sub_80156780(p); TObjEneDD__sub_800BA934((Obj_800BA934 *)((void*)(p))); }
void clear_field_388__9TObjEneDDFPv(void* p) { *(s32*)((char*)p + 0x388) = 0; }
void set_active__9TObjEneDDFPv(void* p) { *(s32*)((char*)p + 0x388) = 1; }

}
