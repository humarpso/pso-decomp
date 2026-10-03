#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V_8005CBA4 { f32 x, y, z; };

struct Pl_8005CBA4 { u8 pad0[0x38]; V_8005CBA4 pos; };

struct Obj_8005CBA4 {
    u8 pad0[0x1C];
    u16 f1c;
    u8 pad1e[0x1A];
    V_8005CBA4 pos;
    u8 pad44[0x374 - 0x44];
    s32 f374;
    u8 pad378[0x388 - 0x378];
    s32 f388;
    V_8005CBA4 vel;
    f32 f398;
    f32 f39c;
    u8 pad3a0[4];
    s32 f3a4;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK spawn_particle_effect(void *, int);
extern const f32 lbl_805D8CB8;
extern const f32 lbl_805D8CBC;
extern const f32 lbl_805D8CC0;
void TBoss4Zako__vt3(u8 *arg0);
Pl_8005CBA4 *get_player_by_client_id(s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void vec3_add_to(void *, void *);
f32 vector_length(void *);
void normalize_vector(void *);
extern const f32 lbl_805D8D0C;
extern const f32 lbl_805D8D14;
void TBoss4Zako__vt2(u8 *p);
}

extern "C" {

void TBoss4Zako__vt0(u8 *arg0);
void set_state3__10TBoss4ZakoFPv(void *arg0);
M2C_UNK TBoss4Uro__sub_8005D6D4(s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

void set_state3__10TBoss4ZakoFPv(void *arg0) {
    TBoss4Uro__sub_8005D6D4(M2C_FIELD(arg0, s32 *, 0x378));
    M2C_FIELD(arg0, s32 *, 0x3A8) = 0;
    M2C_FIELD(arg0, s32 *, 0x374) = 3;
}

extern const f32 lbl_805D8CC8;
extern const f32 TBoss4Zako__data_805D8D24;

void TBoss4Zako__vt3(u8 *arg0) {
    f32 temp_f1;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805D8CB8);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    if ((temp_f1 < lbl_805D8CBC) && (temp_f1 >= lbl_805D8CB8)) {
        spawn_particle_effect((void *) (arg0 + 0x38), (int) (0xF3));
    }
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) (M2C_FIELD(arg0, s32 *, 0x5C) + 0x111);
    if (M2C_FIELD(arg0, f32 *, 0x3C) < lbl_805D8CC0) {
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

#pragma push
#pragma fp_contract on
#pragma opt_common_subs off
void TBoss4Zako__vt2(u8 *p) {
#define o ((Obj_8005CBA4 *)p)
    Pl_8005CBA4 *pl;
    s32 ang;
    pl = get_player_by_client_id(o->f388);
    if (pl == NULL) {
        o->f3a4 = 0x3C;
        o->f374 = 1;
        return;
    }
    V_8005CBA4 t = pl->pos;
    ang = o->f1c << 0xD;
    t.x = lbl_805D8D0C * sin_table_lookup(ang) + t.x;
    t.z = lbl_805D8D0C * cos_table_lookup(ang) + t.z;
    if (o->pos.x < t.x) {
        o->vel.x += lbl_805D8D14;
    } else {
        o->vel.x -= lbl_805D8D14;
    }
    if (o->pos.z < t.z) {
        o->vel.z += lbl_805D8D14;
    } else {
        o->vel.z -= lbl_805D8D14;
    }
    o->f398 = vector_length(&o->vel);
    if (o->f398 > o->f39c) {
        normalize_vector(&o->vel);
        o->vel.x *= o->f39c;
        o->vel.z *= o->f39c;
        o->f398 = o->f39c;
    }
    vec3_add_to(&o->pos, &o->vel);
    if (--o->f3a4 < 0) {
        o->f3a4 = 0x3C;
        o->f374 = 1;
    }
#undef o
}
#pragma pop

void TBoss4Zako__vt0(u8 *arg0) {
    f32 temp_f0;
    f32 temp_f2;

    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x3C);
    if (temp_f2 < lbl_805D8CC8) {
        temp_f0 = temp_f2 + TBoss4Zako__data_805D8D24;
        M2C_FIELD(arg0, f32 *, 0x3C) = temp_f0;
        if (temp_f0 > lbl_805D8CC8) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805D8CC8;
            M2C_FIELD(arg0, s32 *, 0x374) = 1;
        }
    }
}

}
