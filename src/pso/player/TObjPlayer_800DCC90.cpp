#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK;
struct Vec_800DCD04 { f32 x, y, z; };

struct Obj_800DCD04 {
    u8 pad0[0x18];
    void *vt;
    u8 pad1c[0xc4 - 0x1c];
    Vec_800DCD04 fc4;
    u8 padd0[0xe8 - 0xd0];
    f32 fe8;
    s32 fec;
    Vec_800DCD04 *pos;
    f32 ff4;
    s32 ff8;
    s32 ffc;
    s16 id;
    s16 f102;
};

extern "C" {
f32 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 spawn_particle_effect_with_rotation(Vec_800DCD04 *, s32 *, s32, s32);
f32 TObjPlayer__sub_8013153C(Vec_800DCD04 *, Vec_800DCD04 *);
f32 xz_distance_squared(Vec_800DCD04 *, Vec_800DCD04 *);
u8 *find_entity_by_id(s16);
void TObjPlayer__sub_801569F4(void *, void *);
void TCameraCtrl__sub_803D8934(s32, Vec_800DCD04 *, Vec_800DCD04 *);
void rotate_matrix_y(s32, s32);
void rotate_matrix_x(s32, s32);
void push_matrix_from(void *);
void pop_matrix(void);
extern Vec_800DCD04 lbl_8043C920;
extern const f64 lbl_8043C940[];
extern M2C_UNK lbl_80494E48[];
extern u8 lbl_8058D490[];
extern const f32 lbl_805D5260;
extern f32 lbl_805D5264;
extern void *tl_04;
extern const f32 lbl_805DA480;
extern const f32 lbl_805DA484;
extern const f32 lbl_805DA488;
Obj_800DCD04 *TObjPlayer__sub_800DCD04(Obj_800DCD04 *self, Vec_800DCD04 *pos, s16 id, s32 *rot, s32 arg4, s16 arg5);
}

extern "C" {

void *destroy_particle_obj__10TObjPlayerFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_80494E48[];

void *destroy_particle_obj__10TObjPlayerFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80494E48;
        if (M2C_FIELD(arg0, void **, 0xF8) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xF8)); M2C_FIELD(arg0, M2C_UNK *, 0xF8) = 0; }
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_800DCD04 *TObjPlayer__sub_800DCD04(Obj_800DCD04 *self, Vec_800DCD04 *pos, s16 id, s32 *rot, s32 arg4, s16 arg5) {
    Vec_800DCD04 *pp;
    TObjPlayer__sub_801569F4(self, tl_04);
    self->vt = lbl_80494E48;
    self->id = id;
    self->f102 = arg5;
    self->pos = pos;
    self->fe8 = lbl_805DA480;
    push_matrix_from(lbl_8058D490);
    {
        Vec_800DCD04 v = lbl_8043C920;
        s32 ang[3];
        v.z = lbl_805D5260;
        rotate_matrix_y(0, rot[1]);
        rotate_matrix_x(0, rot[0]);
        TCameraCtrl__sub_803D8934(0, &v, &self->fc4);
        pop_matrix();
        self->fec = arg4;
        pp = (Vec_800DCD04 *)(find_entity_by_id(id) + 0x2fc);
        ang[0] = 0;
        ang[1] = (s32)(lbl_8043C940[0] * get_ad_end_text_start__10TObjPlayerFv(pp->x - pos->x, pp->z - pos->z)) + 0x4000;
        ang[2] = 0x4000 - (s32)(lbl_8043C940[0] * get_ad_end_text_start__10TObjPlayerFv(pp->y - pos->y, TObjPlayer__sub_8013153C(pp, pos)));
        self->ff8 = spawn_particle_effect_with_rotation(pos, ang, 0xf4, 2);
    }
    self->ff4 = lbl_805D5264;
    if (xz_distance_squared(pp, pos) < lbl_805DA484) {
        self->ff4 *= lbl_805DA488;
    }
    self->ffc = 0;
    return self;
}

}
