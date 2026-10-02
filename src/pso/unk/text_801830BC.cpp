#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5(s32);
};

struct RecoveredGlobal_801830BC_lbl_804B5C08 {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
s32 TPhotonMagicSquare__sub_801A2640(void *, void *);
extern RecoveredGlobal_801830BC_lbl_804B5C08 lbl_804B5C08;
extern const f32 lbl_805DBC00;
u8 *fn_801830BC(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_801830BC_lbl_804B5C08_size[sizeof(RecoveredGlobal_801830BC_lbl_804B5C08) == 0x38 ? 1 : -1];
u8 *fn_801830BC(u8 *arg0, s32 arg1, s32 arg2) {
    TPhotonMagicSquare__sub_801A2640((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804B5C08.value;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    M2C_FIELD(arg0, s32 *, 0x94) = 2;
    M2C_FIELD(arg0, s32 *, 0x98) = 0;
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DBC00;
    return arg0;
}

typedef struct V3_80183134 { s32 x, y, z; } V3_80183134;
typedef struct Self_80183134 {
    u8 pad0[0x1C];
    f32 pos[3];
    s32 state;
    void *handle;
    f32 limit;
    s32 timer;
    s32 se;
    f32 time;
} Self_80183134;

void queue_destruction__7TObjectFv(void *);
s32 calc_random_scaled__10TObjPlayerFv(void);
void TBoss7LaserPtcl__sub_80086C6C(void *, void *, s32, s32);
void spawn_particle_effect_with_flags(void *, s32, s32);
void *spawn_continuous_particle_effect_with_flags(void *, s32, s32);
void copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 rand(void);
extern const f32 lbl_805DBC18;
extern const f32 lbl_805DBC1C;
extern const f32 lbl_805DBC20;
extern const f32 lbl_805DBC24;
extern const f32 lbl_805DBC28;
extern const f32 lbl_805DBC2C;

void fn_80183134(Self_80183134 *self) {
    switch (self->state) {
    case 0:
        if (self->handle == NULL) {
            self->handle = spawn_continuous_particle_effect_with_flags(self->pos, 0x84, 0x40);
        }
        if (self->handle != NULL) {
            self->time += lbl_805DBC18;
            self->pos[1] += lbl_805DBC18;
            if (self->time >= self->limit) {
                self->time = lbl_805DBC1C;
                self->timer = 0;
                self->state = 1;
                queue_destruction__7TObjectFv(self->handle);
                self->handle = NULL;
            } else {
                copy_pos__11TNowLoadingFPvPv(self->handle, self->pos);
            }
        }
        break;
    case 1:
        if (self->timer == 10) {
            spawn_particle_effect_with_flags(self->pos, 0x85, 0x40);
            spawn_particle_effect_with_flags(self->pos, 0x86, 0x40);
        }
        self->timer++;
        if (self->timer >= 15) {
            f32 r = lbl_805DBC20 * (f32)rand();
            self->timer = 0;
            if (r < lbl_805DBC24) {
                self->se = 0x87;
                self->state = 2;
            } else if (r < lbl_805DBC28) {
                self->se = 0x88;
                self->state = 2;
            } else {
                self->state = 3;
            }
        }
        break;
    case 2:
        if (self->timer == 0 || self->timer == 4 || self->timer == 8) {
            spawn_particle_effect_with_flags(self->pos, self->se, 0x40);
        }
        self->timer++;
        self->pos[1] -= lbl_805DBC2C;
        if (self->timer > 8) {
            self->state = 4;
        }
        break;
    case 3:
        if (self->timer == 0 || self->timer == 4 || self->timer == 8) {
            V3_80183134 v;
            v.x = 0;
            v.y = calc_random_scaled__10TObjPlayerFv();
            v.z = calc_random_scaled__10TObjPlayerFv();
            TBoss7LaserPtcl__sub_80086C6C(self->pos, &v, 0x89, 0x40);
        }
        self->timer++;
        self->pos[1] -= lbl_805DBC2C;
        if (self->timer > 8) {
            self->state = 4;
        }
        break;
    case 4:
        queue_destruction__7TObjectFv(self);
        break;
    }
}

}

struct Obj_8018355C;
extern "C" void fn_8018355C(struct Obj_8018355C *arg0);
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8018343C_lbl_804B5C40 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804B5C40[];
extern s32 lbl_805D328C;
extern const f32 lbl_805DBC1C;
u8 *TObjEneBm5GibonU__sub_8018343C(u8 *arg0, u8 *arg1, u8 *arg2, f32 farg0);
void set_global_count__12TObjNpcEnemyFi(int);
void TObjEneBm5GibonU__sub_803D853C(int, void *, ...);
extern u8 lbl_80444218[];
extern u8 lbl_80444228[];
extern u8 lbl_80444238[];
extern u8 lbl_80444248[];
void TObjEneBm5GibonU__sub_801834C4(void);
}

extern "C" {

void *destroy__16TObjEneBm5GibonUFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK lbl_804B5C40[];

void *destroy__16TObjEneBm5GibonUFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804B5C40;
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8018343C_lbl_804B5C40_size[sizeof(RecoveredGlobal_8018343C_lbl_804B5C40) == 0x18 ? 1 : -1];
u8 *TObjEneBm5GibonU__sub_8018343C(u8 *arg0, u8 *arg1, u8 *arg2, f32 farg0) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8018343C_lbl_804B5C40 *)&lbl_804B5C40).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D328C;
    VecCopy__FP3VecPC3Vec(arg0 + 0x1C, arg2);
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, f32 *, 0x30) = farg0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DBC1C;
    return arg0;
}
void TObjEneBm5GibonU__sub_801834C4(void) {
    ((void (*)(void))fn_8018355C)();
    set_global_count__12TObjNpcEnemyFi(0xFF00FF);
    TObjEneBm5GibonU__sub_803D853C(0x13001C, lbl_80444218);
    TObjEneBm5GibonU__sub_803D853C(0x13001D, lbl_80444228);
    TObjEneBm5GibonU__sub_803D853C(0x13001E, lbl_80444238);
    TObjEneBm5GibonU__sub_803D853C(0x130020, lbl_80444248);
    set_global_count__12TObjNpcEnemyFi(0xF0F0F0FF);
}

}

struct Stack_80183604
{
  f32 sp8;
  u8 pad_C[0x4];
  f32 sp10;
  f32 sp14;
  u8 trailing_storage[0x8];
};

struct RecoveredGlobal_80183604_lbl_804FF5E8
{
  M2C_UNK value;
  u8 remaining[0x24];
};

struct VBase_8018355C { u8 pad[0x18]; };

struct Obj_8018355C : VBase_8018355C {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual s32 v8(f32, f32);
    u8 pad1[0x38 - 0x1C];
    u8 pos[0x5C - 0x38];
    s32 f5C;
    u8 pad2[4];
    s32 f64;
    f32 f68;
    u8 pad3[4];
    f32 f70;
};

struct V3_8018355C { f32 x; f32 y; f32 z; };

struct V4_8018355C { s32 a; s32 b; s32 c; s32 d; };

extern "C" {
f32 TTecZondeEff__sub_8002DF28();
f32 update_scale__15TObjBoss2TunnelFPv(void *);
s32 TLobby__sub_80184C54();
u32 __nw__7TObjectFUl(int);
s32 rand();
f32 TObjPlayer__sub_803D89C0(void *, void *);
f32 TBoss6Type1__sub_803D9370(void *, void *);
extern RecoveredGlobal_80183604_lbl_804FF5E8 lbl_804FF5E8;
extern s32 lbl_805D4DF0;
extern const f32 lbl_805DBC1C;
extern const f32 lbl_805DBC20;
extern const f32 lbl_805DBC38;
extern const f32 lbl_805DBC3C;
extern const f32 lbl_805DBC40;
void fn_80183604(u8 *arg0);
void TObjMapWarp__sub_80141CB8(void *, void *, void *, void *);
extern V4_8018355C lbl_804441FC[];
extern const f32 lbl_805DBC30;
extern const f32 lbl_805DBC34;
extern const f32 lbl_805DBC38;
void fn_8018355C(Obj_8018355C *arg0);
}

extern "C" {

typedef struct RecoveredGlobal_80183604_lbl_804FF5E8 RecoveredGlobal_80183604_lbl_804FF5E8;
typedef struct Stack_80183604 Stack_80183604;
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma opt_dead_assignments off
#pragma fp_contract on

void fn_8018355C(Obj_8018355C *arg0) {
    if (arg0->v8(lbl_805DBC30, lbl_805DBC34) != 0) {
        V3_8018355C sp18;
        V4_8018355C sp8 = lbl_804441FC[0];
        arg0->f64 = 0;
        arg0->f5C = 0;
        sp18.x = arg0->f68;
        sp18.y = lbl_805DBC38;
        sp18.z = arg0->f70;
        TObjMapWarp__sub_80141CB8(arg0->pos, &arg0->f5C, &sp18, &sp8);
    }
}

void fn_80183604(u8 *arg0) {
  Stack_80183604 stack;
  f32 temp_f30;
  float new_var;
  f32 temp_f31;
  u32 temp_r3;
  f32 temp_f29;
  if (TLobby__sub_80184C54() != 0)
  {
    *((s32 *) (((s8 *) arg0) + 0x90)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x90))) - 1);
    if (((s32) (*((s32 *) (((s8 *) arg0) + 0x90)))) < 0)
    {
      VecCopy__FP3VecPC3Vec((void *) (&stack.sp14), (void *) (arg0 + 0x38));
      TBoss6Type1__sub_803D9370((void *) (&stack.sp14), (void *) (lbl_805D4DF0 + 0x178));
      if ((update_scale__15TObjBoss2TunnelFPv((void *) (&stack.sp14)) < lbl_805DBC3C) && (TObjPlayer__sub_803D89C0((void *) (&stack.sp14), (void *) (((u8 *) (&lbl_804FF5E8.value)) + 0xC)) > lbl_805DBC1C))
      {
        temp_f30 = TTecZondeEff__sub_8002DF28();
        temp_f30 = (*((f32 *) (((s8 *) arg0) + 0x68))) * temp_f30;
        temp_f31 = temp_f30;
        new_var = (*((f32 *) (((s8 *) arg0) + 0x70))) * TTecZondeEff__sub_8002DF28();
        temp_f30 = new_var;
        temp_f29 = (lbl_805DBC40 * (lbl_805DBC20 * ((f32) rand()))) + (*((f32 *) (((s8 *) arg0) + 0x6C)));
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.sp8 += temp_f31;
        stack.sp10 += temp_f30;
        temp_r3 = __nw__7TObjectFUl((int) 0x40);
        if (temp_r3 != 0U)
        {
          ((s32 (*)(int, void *, void *, f32))TObjEneBm5GibonU__sub_8018343C)((int) temp_r3, (void *) arg0, (void *) (&stack.sp8), (f32) temp_f29);
        }
      }
      *((s32 *) (((s8 *) arg0) + 0x90)) = (s32) (lbl_805DBC38 * (((f32) ((*((s32 *) (((s8 *) arg0) + 0x84))) + 0x3C)) * (lbl_805DBC20 * ((f32) rand()))));
    }
  }
}

}
