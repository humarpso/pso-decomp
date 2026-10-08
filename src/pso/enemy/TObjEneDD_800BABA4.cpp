#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void * m15();
};
struct VBase_18_3f4583 { char pad[0x18]; };

struct VObj_18_3f4583 : VBase_18_3f4583 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void * m101();
};

struct VBase_18_807e53 { char pad[0x18]; };

struct VObj_18_807e53 : VBase_18_807e53 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual M2C_UNK m99(M2C_UNK *);
};

struct Vec_800BAF1C { f32 x, y, z; };

struct Node_800BAF1C { u8 pad0[4]; Vec_800BAF1C *pos; };

struct Ene_800BAF1C {
    u8 pad0[0x38];
    Vec_800BAF1C pos;
    u8 pad44[0x37C - 0x44];
    f32 reach;
    s32 count;
};

struct Vec_800BB000 { f32 x, y, z; };

struct Node_800BB000 { u8 pad0[4]; u8 *wall; };

struct Ene_800BB000 {
    u8 pad0[0x38];
    Vec_800BB000 pos;
    u8 pad44[0x37C - 0x44];
    f32 reach;
    s32 count;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *TObjEneDD__vt99(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *TObjEneDD__vt98(u8 *arg0, u8 *arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
u8 *try_move_actor_xz_on_ground(u8 *arg0, u8 *arg1);
u8 *try_move_actor_xz_on_ground(u8 *arg0, u8 *arg1);
void calc_shot_position__9TObjEneDDFPvPvfff(void *, void *, f32, f32, f32);
void move_to_shot_position__9TObjEneDDFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
void calc_shot_position__9TObjEneDDFPvPvfff(void *, void *, f32, f32, f32);
void move_with_wall_stop__9TObjEneDDFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
void move_to_wall_clamped_destination__9TObjEneDDFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
void move_with_wall_slide_commit__9TObjEneDDFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
u8 *try_move_actor_xz_on_ground(u8 *arg0, u8 *arg1);
void move_clamped_on_ground__9TObjEneDDFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
u8 *try_move_actor_xz_on_ground(u8 *arg0, u8 *arg1);
void move_with_wall_slide_on_ground__9TObjEneDDFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
int has_move_failures__9TObjEneDDFPvi(u8 *arg0, s32 arg1);
f32 newton_sqrtf(f32);
s32 enemy_probe_wall_ahead(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
void calc_wall_clamped_destination(void *arg0, void *arg1, f32 dx, f32 dz, f32 dist);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 enemy_probe_wall_ahead(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
extern const f32 TObjEneDD__data_805D9E8C;
void calc_wall_slide_destination(void *arg0, void *arg1, f32 dx, f32 dz, f32 dist);
}

extern "C" {

int init_collision_body_parts(void*);
int transform_part_positions__9TObjEneDDFPv(void* a0 = 0);
void init_model__9TObjEneDDFPv(void* p);
void TObjEneDD__vt85(void);
void clear_field_388__9TObjEneDDFPv(void* p);
void set_active__9TObjEneDDFPv(void* p);

int has_move_failures__9TObjEneDDFPvi(u8 *arg0, s32 arg1) {
    u8 var_r5;
    var_r5 = 0;
    if (((s32) M2C_FIELD(arg0, s32 *, 0x380) >= arg1) || ((s32) M2C_FIELD(arg0, s32 *, 0x384) >= arg1)) {
        var_r5 = 1;
    }
    return var_r5;
}

void move_to_wall_clamped_destination__9TObjEneDDFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_UNK sp8;
    calc_wall_clamped_destination((void *)(arg0), (void *)(&sp8), farg0, farg1, farg2);
    ((VObj_18_807e53 *)(arg0))->m99(&sp8);
}

void move_with_wall_slide_commit__9TObjEneDDFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_UNK sp8;
    calc_wall_slide_destination((void *)(arg0), (void *)(&sp8), farg0, farg1, farg2);
    ((VObj_18_807e53 *)(arg0))->m99(&sp8);
}

void move_with_wall_stop__9TObjEneDDFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_UNK sp8;
    calc_shot_position__9TObjEneDDFPvPvfff(arg0, &sp8, farg0, farg1, farg2);
    ((VObj_18_807e53 *)(arg0))->m99(&sp8);
}

void move_clamped_on_ground__9TObjEneDDFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_UNK sp8;
    calc_wall_clamped_destination((void *)(arg0), (void *)(&sp8), farg0, farg1, farg2);
    try_move_actor_xz_on_ground((u8 *)(arg0), (u8 *)(&sp8));
}

void move_with_wall_slide_on_ground__9TObjEneDDFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_UNK sp8;
    calc_wall_slide_destination((void *)(arg0), (void *)(&sp8), farg0, farg1, farg2);
    try_move_actor_xz_on_ground((u8 *)(arg0), (u8 *)(&sp8));
}

void move_to_shot_position__9TObjEneDDFPvfff(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_UNK sp8;
    calc_shot_position__9TObjEneDDFPvPvfff(arg0, &sp8, farg0, farg1, farg2);
    try_move_actor_xz_on_ground((u8 *)(arg0), (u8 *)(&sp8));
}

u8 *TObjEneDD__vt99(u8 *arg0) {
    f32 temp_f31;
    u8 *temp_r3;
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x3C);
    temp_r3 = (unsigned char *) (((VObj_18 *)(arg0))->m15());
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x248), (int) (M2C_FIELD(temp_r3, s32 *, 4) + 0xC));
    }
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x48) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x384) = 0;
    return temp_r3;
}
u8 *TObjEneDD__vt98(u8 *arg0, u8 *arg1) {
    f32 temp_f31;
    u8 *temp_r3;
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x3C);
    temp_r3 = (unsigned char *) (((VObj_18_3f4583 *)(arg0))->m101());
    if (temp_r3 != NULL) {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x248), (int) (M2C_FIELD(temp_r3, s32 *, 4) + 0xC));
    }
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x48) = temp_f31;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, s32 *, 0x384) = 0;
    return temp_r3;
}
u8 *try_move_actor_xz_on_ground(u8 *arg0, u8 *arg1) {
    f32 temp_f31;
    u8 *temp_r3;
    temp_f31 = M2C_FIELD(arg0, f32 *, 0x3C);
    temp_r3 = (unsigned char *) (((VObj_18_3f4583 *)(arg0))->m101());
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
        M2C_FIELD(arg0, f32 *, 0x48) = temp_f31;
        M2C_FIELD(arg0, f32 *, 0x4C) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) M2C_FIELD(arg1, f32 *, 8);
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x248), (int) (M2C_FIELD(temp_r3, s32 *, 4) + 0xC));
        M2C_FIELD(arg0, s32 *, 0x384) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x384) = (s32) (M2C_FIELD(arg0, s32 *, 0x384) + 1);
    }
    return temp_r3;
}
#pragma push
#pragma fp_contract on
void calc_wall_clamped_destination(void *arg0, void *arg1, f32 dx, f32 dz, f32 dist) {
    Ene_800BAF1C *e = (Ene_800BAF1C *)arg0;
    Vec_800BAF1C *out = (Vec_800BAF1C *)arg1;
    Node_800BAF1C *n = (Node_800BAF1C *)enemy_probe_wall_ahead((u8 *)e, dx, dz, dist + e->reach);
    if (n == NULL) {
        e->count = 0;
    } else {
        Vec_800BAF1C *p;
        f32 ddx;
        f32 px;
        f32 ddz;
        e->count++;
        p = n->pos;
        px = p->x;
        ddz = p->z - e->pos.z;
        ddx = px - e->pos.x;
        dist = ((f32 (*)(f32, f32, f32))newton_sqrtf)(ddx * ddx + ddz * ddz, px, ddz) - e->reach;
    }
    out->x = dx * dist + e->pos.x;
    out->y = e->pos.y;
    out->z = dz * dist + e->pos.z;
}
#pragma pop

#pragma push
#pragma fp_contract on
#define e ((Ene_800BB000 *)arg0)
#define out ((Vec_800BB000 *)arg1)
void calc_wall_slide_destination(void *arg0, void *arg1, f32 dx, f32 dz, f32 dist) {
    Node_800BB000 *n;
    Vec_800BB000 v;
    n = (Node_800BB000 *)enemy_probe_wall_ahead((u8 *)e, dx, dz, dist + e->reach);
    if (n == NULL) {
        out->x = dx * dist + e->pos.x;
        out->y = e->pos.y;
        out->z = dz * dist + e->pos.z;
        e->count = 0;
        return;
    }
    e->count++;
    v.x = *(f32 *)(n->wall + 0x14);
    v.z = -*(f32 *)(n->wall + 0xC);
    clamp_velocity__15TObjBoss2TunnelFPv(&v);
    if (dx * v.x + dz * v.z >= TObjEneDD__data_805D9E8C) {
        dx = v.x;
        dz = v.z;
    } else {
        dx = -v.x;
        dz = -v.z;
    }
    if ((Node_800BB000 *)enemy_probe_wall_ahead((u8 *)e, dx, dz, dist + e->reach) == NULL) {
        out->x = dx * dist + e->pos.x;
        out->y = e->pos.y;
        out->z = dz * dist + e->pos.z;
        return;
    }
    VecCopy__FP3VecPC3Vec(out, (int)&e->pos);
}
#undef e
#undef out
#pragma pop

}
