#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Vec_80099F0C { f32 x, y, z; };

struct Col_80099F0C { u8 pad0[0xC]; f32 fC; f32 f10; u8 pad14[4]; u32 flags; };

struct Base_80099F0C { u8 pad[0x18]; };

struct Bringer_80099F0C : Base_80099F0C {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(void *, void *, s32);
    u8 pad1C[0x38 - 0x1C];
    Vec_80099F0C pos;
    u8 pad44[0xA4 - 0x44];
    Col_80099F0C *col;
    u8 padA8[0xB0 - 0xA8];
    s32 active;
    s32 timer;
    f32 dirx;
    s32 fBC;
    f32 dirz;
    s32 fC4;
    f32 dist;
    f32 next;
    f32 fD0;
};

struct Arg_80099F0C { s32 a; f32 b; };

extern "C" {
int fn_800BC4C8(void);
extern M2C_UNK lbl_8048FE08[];
    extern int lbl_805D29AC;
extern const f32 lbl_805D9860;
void* init__17TObjEneDf2BringerFPviii(void* a0, int a1, int a2, int a3);
void TObjEneDf2Bringer__sub_8009A2A0(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
extern M2C_UNK lbl_8048FE64[];
void *TObjEneDf2Bringer__sub_8009A340(void *arg0, s16 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, const void *);
void queue_destruction__7TObjectFv(void *);
extern const f32 lbl_805D9864;
extern const f32 lbl_805D9868;
void TObjEneDf2Bringer__sub_8009A2A4(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, const void *);
void *csnVector(void *, void *, s32);
f32 update_scale__15TObjBoss2TunnelFPv(void *);
void create_timed_particle_emitter(void *, s32, s32, s32);
void TObjEneDf2Bringer__sub_8009A11C(void* p);
void update_enemy_collision_flags__10TObjPlayerFPv(void *);
void TBoss6Type1__sub_803D9370(void *, void *);
extern u8 lbl_8043A164[];
extern s32 lbl_8043A16C[];
extern const f32 lbl_805D9850;
extern const f32 lbl_805D9854;
extern const f32 lbl_805D9858;
extern const f32 lbl_805D985C;
void TObjEneDf2Bringer__sub_80099F0C(Bringer_80099F0C *self);
}

extern "C" {

void TObjEneDf2Bringer__sub_8009A11C(void* p);
void *TObjEneDf2Bringer__sub_8009A1BC(void *arg0, s16 arg1);
void setup_dir_shot__17TObjEneDf2BringerFPvPvif(u8 *arg0, const void *arg1, s32 arg2, f32 farg0);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, const void *);
void __dl__7TObjectFPv(void *);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
M2C_UNK fn_8002B094(int);

#pragma push
#pragma fp_contract on
void TObjEneDf2Bringer__sub_80099F0C(Bringer_80099F0C *self) {
    Vec_80099F0C v;
    Vec_80099F0C d;
    Vec_80099F0C e;
    Arg_80099F0C arg;
    s32 hit;
    f32 step;
    if (self->active == 0) {
        return;
    }
    hit = 0;
    VecCopy__FP3VecPC3Vec(&v, &self->pos);
    step = lbl_805D9850;
    v.x = lbl_805D9850 * self->dirx + v.x;
    v.z = lbl_805D9850 * self->dirz + v.z;
    void *res = csnVector(&self->pos, &v, 0x16EF);
    if (res != 0) {
        VecCopy__FP3VecPC3Vec(&v, *(void **)((u8 *)res + 4));
        VecCopy__FP3VecPC3Vec(&d, &self->pos);
        TBoss6Type1__sub_803D9370(&d, &v);
        step = update_scale__15TObjBoss2TunnelFPv(&d);
        hit = 1;
    }
    f32 inc = lbl_805D9854;
    self->dist += step;
    while (self->dist > self->next) {
        VecCopy__FP3VecPC3Vec(&e, &self->pos);
        e.x = self->next * self->dirx + e.x;
        e.z = self->next * self->dirz + e.z;
        create_timed_particle_emitter(&e, 0xEE, 0, 1);
        self->next += inc;
    }
    self->next -= step;
    self->dist -= step;
    VecCopy__FP3VecPC3Vec(&self->pos, &v);
    self->col->f10 = lbl_805D9858;
    self->col->fC = lbl_805D985C * step;
    update_enemy_collision_flags__10TObjPlayerFPv(self);
    if (self->col->flags & 0x200000) {
        TObjEneDf2Bringer__sub_8009A11C((void*)(self));
        return;
    }
    arg.a = lbl_8043A16C[0];
    arg.b = self->fD0;
    self->m12(lbl_8043A164, &arg, self->fC4);
    self->timer--;
    if (hit != 0 || self->timer < 0) {
        TObjEneDf2Bringer__sub_8009A11C((void*)(self));
    }
}
#pragma pop

void TObjEneDf2Bringer__sub_8009A11C(void* p) { *(s32*)((char*)p + 0xb0) = 0; }

extern const f32 lbl_805D9860;

void setup_dir_shot__17TObjEneDf2BringerFPvPvif(u8 *arg0, const void *arg1, s32 arg2, f32 farg0) {
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), arg1);
    M2C_FIELD(arg0, s32 *, 0x60) = arg2;
    M2C_FIELD(arg0, f32 *, 0xB8) = TBoss8Dragon__sub_803D64C0((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0xC0) = TBoss8Dragon__sub_803D64DC((int) (M2C_FIELD(arg0, s32 *, 0x60)));
    M2C_FIELD(arg0, s32 *, 0xB0) = 1;
    fn_8002B094((int) (M2C_FIELD(arg0, s32 *, 0xC4)));
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805D9860;
    M2C_FIELD(arg0, f32 *, 0xD0) = farg0;
    M2C_FIELD(arg0, s32 *, 0xB4) = 0x19;
}

extern M2C_UNK lbl_8048FE08[];

void *TObjEneDf2Bringer__sub_8009A1BC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048FE08;
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void* init__17TObjEneDf2BringerFPviii(void* a0, int a1, int a2, int a3) { fn_800BC4C8(); *(int*)((char*)a0 + 0x18) = (int)((unsigned char *)&lbl_8048FE08); *(int*)((char*)a0 + 0x0) = lbl_805D29AC; *(int*)((char*)a0 + 0xb0) = 0; *(float*)((char*)a0 + 0xd0) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0xc8) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0xcc) = (*(const float *)&lbl_805D9860); *(int*)((char*)a0 + 0xb4) = 0; *(float*)((char*)a0 + 0x38) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0x3c) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0x40) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0xb8) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0xbc) = (*(const float *)&lbl_805D9860); *(float*)((char*)a0 + 0xc0) = (*(const float *)&lbl_805D9860); *(int*)((char*)a0 + 0xc4) = a3; *(int*)((char*)*(int*)((char*)a0 + 0xa4) + 0x14) = 1; return a0; }
void TObjEneDf2Bringer__sub_8009A2A0(void) {  }

#pragma push
#pragma fp_contract on
void TObjEneDf2Bringer__sub_8009A2A4(u8 *arg0) {
    f32 temp_f2;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) (M2C_FIELD(arg0, f32 *, 0x50) + lbl_805D9864);
    temp_f2 = lbl_805D9868 * M2C_FIELD(arg0, f32 *, 0x50);
    if (temp_f2 >= M2C_FIELD(arg0, f32 *, 0x4C)) {
        VecCopy__FP3VecPC3Vec((void *)(arg0 + 0x1C), (const void *)(arg0 + 0x34));
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x40) * temp_f2) + M2C_FIELD(arg0, f32 *, 0x28));
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) ((M2C_FIELD(arg0, f32 *, 0x44) * temp_f2) + M2C_FIELD(arg0, f32 *, 0x2C));
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) ((M2C_FIELD(arg0, f32 *, 0x48) * temp_f2) + M2C_FIELD(arg0, f32 *, 0x30));
}
#pragma pop

void *TObjEneDf2Bringer__sub_8009A340(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048FE64;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
