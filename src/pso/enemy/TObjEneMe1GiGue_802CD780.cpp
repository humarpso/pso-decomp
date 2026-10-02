#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_802CDAEC { s32 a; s32 b; s32 c; s32 d; };

struct G_802CDAEC { u8 pad[0x42c]; E_802CDAEC *e; };

struct O_802CDAEC { u8 pad[0x24]; s32 f24; u8 pad2[0xc]; s32 f34; };

struct G_802CDAC4 { u8 pad[0x18]; s32 v[1]; };

struct Vec_802CDEB4 { f32 x, y, z; };

struct Ang_802CDEB4 { s32 x; s32 y; s32 z; };

struct Rot_802CDEB4 { s32 a; s32 b; };

extern "C" {
extern s32 TObjEneMe1GiGue__data_805D6834;
f32 TObjEneMe1GiGue__sub_802CDAD8(M2C_UNK arg0, s32 arg1);
extern G_802CDAEC *TObjEneMe1GiGue__data_805D6838;
void TObjEneMe1GiGue__sub_802CDAEC(O_802CDAEC *self, s32 i);
extern s32 TObjEneMe1GiGue__data_805D6834;
s32 TObjEneMe1GiGue__sub_802CDAC4(void *self, s32 i);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TObjParticle__sub_800870BC(Vec_802CDEB4 *, Ang_802CDEB4 *, int, int);
f32 TObjPlayer__sub_8013153C(Vec_802CDEB4 *, Vec_802CDEB4 *);
f32 xz_distance_squared(Vec_802CDEB4 *, Vec_802CDEB4 *);
u8 *find_entity_by_id(s16);
M2C_UNK TObjPlayer__sub_801569F4(void *, s32);
M2C_UNK TCameraCtrl__sub_803D8934(void *, Vec_802CDEB4 *, void *);
M2C_UNK rotate_matrix_y(void *, s32);
M2C_UNK rotate_matrix_x(void *, s32);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrix();
extern Vec_802CDEB4 lbl_804722A8;
extern const f64 lbl_804722C8[];
extern M2C_UNK lbl_804E14E8[];
extern u8 lbl_8058D490[];
extern s32 tl_04;
extern f32 lbl_805D6844;
extern f32 lbl_805D6848;
extern const f32 lbl_805DE6C0;
extern const f32 lbl_805DE6C4;
extern const f32 lbl_805DE6C8;
u8 *TObjPlayer__sub_802CDEB4(u8 *arg0, Vec_802CDEB4 *arg1, s16 arg2, Rot_802CDEB4 *arg3, s32 arg4, s32 arg5, s16 arg6);
}

extern "C" {

void TObjEneMe1GiGue__sub_802CDAB4(void);
void TObjEneMe1GiGue__sub_802CDAB8(void);
void TObjEneMe1GiGue__sub_802CDABC(void);
void TObjEneMe1GiGue__sub_802CDAC0(void);
void TObjEneMe1GiGue__sub_802CDAE8(void);
void *TObjPlayer__sub_802CDE28(void *arg0, s16 arg1);
void *deleting_dtor__15TObjEneMe1GiGueFPvs(void *arg0, s16 arg1);
void TObjEneGibbles__sub_80156720(void *);
void TObjPlayer__sub_800D7C58(void *, int);
void __dl__7TObjectFPv(void *);
void __dt__15TObjEnemyCustomFv(void *, int);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804E135C[];

void *deleting_dtor__15TObjEneMe1GiGueFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E135C;
        TObjEneGibbles__sub_80156720(arg0);
        TObjPlayer__sub_800D7C58((s8 *)arg0 + 0x418, -1);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3FC, -1);
        __dt__15TObjEnemyCustomFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjEneMe1GiGue__sub_802CDAB4(void) {  }
void TObjEneMe1GiGue__sub_802CDAB8(void) {  }
void TObjEneMe1GiGue__sub_802CDABC(void) {  }
void TObjEneMe1GiGue__sub_802CDAC0(void) {  }

s32 TObjEneMe1GiGue__sub_802CDAC4(void *self, s32 i) {
    return (*(G_802CDAC4 * *)&TObjEneMe1GiGue__data_805D6834)->v[i];
}

f32 TObjEneMe1GiGue__sub_802CDAD8(M2C_UNK arg0, s32 arg1) {
    return M2C_FIELD((TObjEneMe1GiGue__data_805D6834 + (arg1 * 4)), f32 *, 0);
}

void TObjEneMe1GiGue__sub_802CDAE8(void) {  }

extern M2C_UNK lbl_804E14E8[];

void TObjEneMe1GiGue__sub_802CDAEC(O_802CDAEC *self, s32 i) {
    self->f34 = TObjEneMe1GiGue__data_805D6838->e[i].c;
    self->f24 = TObjEneMe1GiGue__data_805D6838->e[i].d;
}

void *TObjPlayer__sub_802CDE28(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E14E8;
        if (M2C_FIELD(arg0, void **, 0xF8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF8)); M2C_FIELD(arg0, M2C_UNK *, 0xF8) = 0; }
        if (M2C_FIELD(arg0, void **, 0xFC) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xFC)); M2C_FIELD(arg0, M2C_UNK *, 0xFC) = 0; }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjPlayer__sub_802CDEB4(u8 *arg0, Vec_802CDEB4 *arg1, s16 arg2, Rot_802CDEB4 *arg3, s32 arg4, s32 arg5, s16 arg6) {
    Vec_802CDEB4 *pos;
    TObjPlayer__sub_801569F4(arg0, tl_04);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804E14E8;
    M2C_FIELD(arg0, s16 *, 0x108) = arg2;
    M2C_FIELD(arg0, s16 *, 0x10A) = arg6;
    M2C_FIELD(arg0, s32 *, 0x104) = arg5;
    M2C_FIELD(arg0, Vec_802CDEB4 **, 0xF0) = arg1;
    M2C_FIELD(arg0, f32 *, 0xE8) = lbl_805DE6C0;
    push_matrix_from(lbl_8058D490);
    {
        Vec_802CDEB4 v = lbl_804722A8;
        v.z = lbl_805D6844;
        rotate_matrix_y(0, arg3->b);
        rotate_matrix_x(0, arg3->a);
        TCameraCtrl__sub_803D8934(0, &v, arg0 + 0xC4);
    }
    pop_matrix();
    M2C_FIELD(arg0, s32 *, 0xEC) = arg4;
    pos = (Vec_802CDEB4 *)(find_entity_by_id(arg2) + 0x2FC);
    {
    Ang_802CDEB4 ang;
    ang.x = 0;
    ang.y = (s32)(lbl_804722C8[0] * get_ad_end_text_start__10TObjPlayerFv(pos->x - arg1->x, pos->z - arg1->z)) + 0x4000;
    ang.z = 0x4000 - (s32)(lbl_804722C8[0] * get_ad_end_text_start__10TObjPlayerFv(pos->y - arg1->y, TObjPlayer__sub_8013153C(pos, arg1)));
    M2C_FIELD(arg0, s32 *, 0xF8) = TObjParticle__sub_800870BC(arg1, &ang, 0x201, 2);
    M2C_FIELD(arg0, s32 *, 0xFC) = TObjParticle__sub_800870BC(arg1, &ang, 0x202, 2);
    }
    M2C_FIELD(arg0, f32 *, 0xF4) = lbl_805D6848;
    if (xz_distance_squared(pos, arg1) < lbl_805DE6C4) {
        M2C_FIELD(arg0, f32 *, 0xF4) *= lbl_805DE6C8;
    }
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    return arg0;
}

}
