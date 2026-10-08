#include "types.h"
struct Entry_800E31C4 { s32 id; u8 data[0xC]; };

struct Vec_800E31C4 { f32 x; f32 y; f32 z; };

struct Obj_800E31C4 { Entry_800E31C4 *list; Vec_800E31C4 *vecs; };

struct Base_800E32C0 { u8 pad[0x18]; };

struct Pair_800E32C0 { s32 a; f32 b; };

struct V_800E32C0 : Base_800E32C0 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual f32 m21(s32, void *, s32, s32, s32);
    virtual void v22();
    virtual void m23(void *);
};

struct Obj_800E32C0 { u8 pad0[0x10]; s32 f10; u8 pad1[0x388-0x14]; V_800E32C0 *f388; f32 f38C; };

struct Base_800E3374 { u8 pad[0x18]; };

struct Pair_800E3374 { s32 a; f32 b; };

struct V_800E3374 : Base_800E3374 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual f32 m21(s32, void *, s32, s32, s32);
    virtual void v22();
    virtual void m23(void *);
};

struct Obj_800E3374 { u8 pad0[0x10]; s32 f10; u8 pad1[0x384-0x14]; V_800E3374 *f384; u8 pad2[4]; f32 f38C; };

struct Vec_800E35C8 { f32 x, y, z; };

struct Obj_800E35C8 { u8 pad0[0x38]; Vec_800E35C8 pos; u8 pad1[0x378 - 0x44]; f32 f378; };

struct Player_800E35C8 { u8 pad0[0x30]; u32 f30; };

struct Vec_800E3428 { f32 x, y, z; };
struct Obj_800E3428 { u8 pad0[0x38]; Vec_800E3428 pos; Vec_800E3428 dir; u8 pad1[0x378 - 0x50]; f32 f378; };

struct Vec_800E322C { f32 x, y, z; };

struct Obj_800E322C { u8 pad0[0x10]; u32 f10; u8 pad1[0x38 - 0x14]; Vec_800E322C pos; u8 pad2[0x378 - 0x44]; f32 f378; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
extern Vec_800E31C4 lbl_80495A88;
Obj_800E31C4 *fn_800E31C4(Obj_800E31C4 *self, Entry_800E31C4 *list, Vec_800E31C4 *vecs);
extern Pair_800E32C0 lbl_8043CDF8[];
void fn_800E32C0(Obj_800E32C0 *arg0, V_800E32C0 *arg1);
extern Pair_800E3374 lbl_8043CDF0[];
void fn_800E3374(Obj_800E3374 *arg0, V_800E3374 *arg1);
Player_800E35C8 *get_player_data__10TObjPlayerFi(s32);
void fn_800E3374(Obj_800E3374 *arg0, V_800E3374 *arg1);
f32 horizontal_distance_squared(void *, void *);
extern s32 lbl_805D586C;
void fn_800E35C8(Obj_800E35C8 *arg0);
u16 find_nearest_hittable_enemy__10TObjPlayerFiPvf(void *, s32, f32);
void VecCopy__FP3VecPC3Vec(void *, void *);
void fn_800E32C0(Obj_800E32C0 *arg0, V_800E32C0 *arg1);
u32 get_enemy_entity(u16);
void fn_800E322C(void *p, void *t);
void vec3_add_to(void *, void *);
f32 vector_length(void *);
void subtract_vector(void *, void *);
void normalize_vector(void *);
}

extern "C" {

Obj_800E31C4 *fn_800E31C4(Obj_800E31C4 *self, Entry_800E31C4 *list, Vec_800E31C4 *vecs) {
    Entry_800E31C4 *p;
    Vec_800E31C4 *q;
    self->list = list;
    self->vecs = vecs;
    p = self->list;
    q = self->vecs;
    while (p->id != -1) {
        VecCopy__FP3VecPC3Vec(q, &lbl_80495A88);
        p++;
        q++;
    }
    return self;
}

void fn_800E322C(void *p, void *t) {
    Obj_800E322C *arg0 = (Obj_800E322C *)p;
    Vec_800E322C sp = arg0->pos;
    s32 r;
    u32 ent;
    VecCopy__FP3VecPC3Vec(&arg0->pos, t);
    if ((r = find_nearest_hittable_enemy__10TObjPlayerFiPvf(arg0, 0, arg0->f378)) != 0xFFFF) {
        if ((ent = get_enemy_entity(r)) != 0 && ent != arg0->f10) {
            fn_800E32C0((Obj_800E32C0 *)arg0, (V_800E32C0 *)ent);
        }
    }
    VecCopy__FP3VecPC3Vec(&arg0->pos, &sp);
}

void fn_800E32C0(Obj_800E32C0 *arg0, V_800E32C0 *arg1) {
    Pair_800E32C0 sp10 = lbl_8043CDF8[0];
    Pair_800E32C0 sp8;
    sp10.b = arg0->f38C;
    if (arg0->f388 != arg1) {
        sp8.a = sp10.a; *(s32 *)&sp8.b = *(s32 *)&sp10.b;
        if (0.0f != arg1->m21(arg0->f10, &sp8, 0, -1, -1)) {
            arg1->m23(arg0);
        }
        arg0->f388 = arg1;
    }
}
void fn_800E3374(Obj_800E3374 *arg0, V_800E3374 *arg1) {
    Pair_800E3374 sp10 = lbl_8043CDF0[0];
    Pair_800E3374 sp8;
    sp10.b = arg0->f38C;
    if (arg0->f384 != arg1) {
        sp8.a = sp10.a; *(s32 *)&sp8.b = *(s32 *)&sp10.b;
        if (0.0f != arg1->m21(arg0->f10, &sp8, 0, -1, -1)) {
            arg1->m23(arg0);
        }
        arg0->f384 = arg1;
    }
}
#pragma push
#pragma opt_loop_invariants off
void fn_800E3428(Obj_800E3428 *self) {
    Vec_800E3428 d;
    f32 len;
    f32 lim;
    f32 dist;
    s32 i;
    Player_800E35C8 *p;

    lim = self->f378 * self->f378;
    VecCopy__FP3VecPC3Vec(&d, &self->dir);
    subtract_vector(&d, &self->pos);
    len = vector_length(&d);
    if (0.0f == len) {
        d.x = (1.0f);
    }
    normalize_vector(&d);
    d.x *= self->f378;
    d.z *= self->f378;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && !(p->f30 & 0x02000A00)) {
            Vec_800E3428 v = self->pos;
            for (dist = 0.0f; dist < len; ) {
                if (!(horizontal_distance_squared(&v, (u8 *)p + 0x2FC) > lim)) {
                    fn_800E3374((Obj_800E3374 *)self, (V_800E3374 *)p);
                    break;
                }
                dist += self->f378;
                vec3_add_to(&v, &d);
            }
        }
    }
    {
    Vec_800E3428 w = self->pos;
    f32 dist2;
    for (dist2 = 0.0f; dist2 < len; ) {
        fn_800E322C(self, &w);
        dist2 += self->f378;
        vec3_add_to(&w, &d);
    }
    }
}

#pragma pop

void fn_800E35C8(Obj_800E35C8 *arg0) {
    s32 i;
    Player_800E35C8 *p;
    f32 lim = arg0->f378 * arg0->f378;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && !(p->f30 & 0x02000A00) && !(horizontal_distance_squared(&arg0->pos, (u8 *) p + 0x2FC) > lim)) {
            fn_800E3374((Obj_800E3374 *)(arg0), (V_800E3374 *)(p));
        }
    }
    fn_800E322C((void *)(arg0), (void *)(&arg0->pos));
}

}

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_beae68
{
  char pad[0x18];
};

struct VObj_18_beae68 : VBase_18_beae68 {
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
    virtual M2C_UNK m92();
};

struct VBase_18_f56c51
{
  char pad[0x18];
};

struct VObj_18_f56c51 : VBase_18_f56c51 {
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
    virtual M2C_UNK m100(f32);
};

struct RecoveredFields_800E3970_arg0
{
  u8 unknown_0[0x30];
  s32 field_30;
  u8 unknown_34[0x8];
  f32 field_3C;
  u8 unknown_40[0x8];
  f32 field_48;
  u8 unknown_4C[0x58];
  u8 *field_A4;
  u8 unknown_A8[0x31C];
  s32 field_3C4;
  u8 unknown_3C8[0x68];
  f32 field_430;
};

struct Vec_800E37E4 { f32 x, y, z; };

struct Obj_800E37E4 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    u8 pad1C[0x1C];
    Vec_800E37E4 pos;
    u8 pad44[0x308 - 0x44];
    Vec_800E37E4 scale;
    u8 pad314[0x374 - 0x314];
    s32 type;
    f32 f378;
    f32 f37C;
    s32 f380;
    s32 f384;
    s32 f388;
    f32 f38C;
};

extern "C" {
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
M2C_UNK play_persistent_sound(M2C_UNK, void *, void *, M2C_UNK, M2C_UNK);
void run_task__22TObjEnePanarmsAtkColliFv(u8 *arg0);
M2C_UNK set_flag_0x100__23TObjEneMe3ShinowaMirageFPv();
extern f32 TObjEneMe3ShinowaMirage__data_805DA5B8;
extern const f32 lbl_805DA5BC;
extern const f32 lbl_805DA5C0;
extern f32 TObjEneMe3ShinowaMirage__data_805DA5C4;
void TObjEneMe3ShinowaMirage__vt113(u8 *arg0, s32 arg1);
u8 *dispatch_shared_handler_a__6TLobbyFPv(int);
void set_param__12TObjEneLappyFPvi(void *, int);
M2C_UNK copy_target_state__14TObjEnePanarmsFPvPv(void *, M2C_UNK);
void initialize__9TObjEnemyFPv(void *, void *);
int play_sound_effect(void *, void *, void *, void *);
extern s32 lbl_80495A80[];
extern M2C_UNK __vt__22TObjEnePanarmsAtkColli[];
extern s32 lbl_805D2AC0;
void *TObjEnePanarmsAtkColli__ct(Obj_800E37E4 *arg0, void *arg1, void *arg2, void *arg3, void *arg4);
}

extern "C" {

void *__dt__22TObjEnePanarmsAtkColliFv(void *arg0, s16 arg1);
void * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void __dl__7TObjectFPv(void *);
void __dt__9TObjEnemyFv(void *, int);
void *__nw__7TObjectFUl(int);

void run_task__22TObjEnePanarmsAtkColliFv(u8 *arg0) {
    s32 temp_r0_2;
    if (--M2C_FIELD(arg0, s32 *, 0x380) < 0) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x38);
    vec3_add_to(arg0 + 0x38, arg0 + 0x308);
    M2C_FIELD(arg0, f32 *, 0x378) = (f32) (M2C_FIELD(arg0, f32 *, 0x378) + M2C_FIELD(arg0, f32 *, 0x37C));
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x374);
    switch (temp_r0_2) {
    case 0:
        ((void (*)(void *))fn_800E35C8)(arg0);
        return;
    case 1:
        play_persistent_sound(copy_target_state__14TObjEnePanarmsFPvPv(arg0, 0x4003BA2A), arg0, arg0 + 0x38, 0, 0);
        ((void (*)(void *))fn_800E3428)(arg0);
        return;
    }
}

void * create__22TObjEnePanarmsAtkColliFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x390);
    if (o != NULL) {
        o = TObjEnePanarmsAtkColli__ct((Obj_800E37E4 *)(o), (void *)(arg0), (void *)(arg1), (void *)(arg2), (void *)(arg3));
    }
    return o;
}

extern M2C_UNK __vt__22TObjEnePanarmsAtkColli[];

void *__dt__22TObjEnePanarmsAtkColliFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjEnePanarmsAtkColli;
        __dt__9TObjEnemyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef struct RecoveredFields_800E3970_arg0 RecoveredFields_800E3970_arg0;
typedef struct VBase_18_beae68 VBase_18_beae68;
typedef struct VBase_18_f56c51 VBase_18_f56c51;
typedef struct VObj_18_beae68 VObj_18_beae68;
typedef struct VObj_18_f56c51 VObj_18_f56c51;
#define PSO_VCALL_VObj_18_beae68_m92(_self) (((VObj_18_beae68 *)(_self))->m92())
#define PSO_VCALL_VObj_18_f56c51_m100(_self, _arg0) (((VObj_18_f56c51 *)(_self))->m100((_arg0)))

#define self arg0
extern const f32 lbl_805DA5A8 = 10.0f;
extern const f32 lbl_805DA5AC = 2.8f;
void *TObjEnePanarmsAtkColli__ct(Obj_800E37E4 *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    f32 scale;
    initialize__9TObjEnemyFPv(self, arg1);
    self->vt = __vt__22TObjEnePanarmsAtkColli;
    self->f0 = lbl_805D2AC0;
    VecCopy__FP3VecPC3Vec(&self->pos, arg2);
    VecCopy__FP3VecPC3Vec(&self->scale, arg3);
    self->type = (s32)arg4;
    self->f384 = 0;
    self->f388 = 0;
    set_param__12TObjEneLappyFPvi(self, 0x15);
    self->f38C = ((f32 *)dispatch_shared_handler_a__6TLobbyFPv(0x31))[lbl_80495A80[self->type]];
    if (self->f38C < 0.0f) {
        self->f38C = 0.0f;
    }
    self->scale.y = (0.0f);
    if ((0.0f) == vector_length(&self->scale)) {
        self->scale.x = (1.0f);
    }
    normalize_vector(&self->scale);
    switch (self->type) {
    case 0:
        play_sound_effect((void *)copy_target_state__14TObjEnePanarmsFPvPv(self, 0x4003BC2B), &self->pos, 0, 0);
        self->f378 = (5.0f);
        self->f37C = (1.0416666f);
        self->f380 = 0xC;
        scale = *(const volatile f32 *)&lbl_805DA5AC;
        break;
    case 1:
        self->f378 = (5.0f);
        self->f37C = (0.0f);
        self->f380 = 0xC;
        scale = *(const volatile f32 *)&lbl_805DA5A8;
        break;
    }
    self->scale.x *= scale;
    self->scale.z *= scale;
    return arg0;
}
#undef self

void TObjEneMe3ShinowaMirage__vt113(u8 *arg0, s32 arg1) {
  f32 temp_f1;
  long new_var;
  switch (arg1)
  {
    case 4:
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_3C4 = (s32) (((RecoveredFields_800E3970_arg0 *) arg0)->field_3C4 & 0xFFFFFFFC);
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_3C4 = (s32) (((RecoveredFields_800E3970_arg0 *) arg0)->field_3C4 | 0x200);
      PSO_VCALL_VObj_18_beae68_m92(arg0);
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_430 = (f32) TObjEneMe3ShinowaMirage__data_805DA5B8;
      return;
    case 3:
      if (((RecoveredFields_800E3970_arg0 *) arg0)->field_430 <= lbl_805DA5BC)
    {
      new_var = ((RecoveredFields_800E3970_arg0 *) arg0)->field_3C4 & 0xFFFFFDFF;
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_3C4 = (s32) new_var;
      set_flag_0x100__23TObjEneMe3ShinowaMirageFPv();
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_3C = (f32) lbl_805DA5C0;
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_48 = (f32) lbl_805DA5C0;
      *((f32 *) (((s8 *) ((RecoveredFields_800E3970_arg0 *) arg0)->field_A4) + 0x20)) = (f32) lbl_805DA5C0;
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_30 = (s32) (((RecoveredFields_800E3970_arg0 *) arg0)->field_30 | 0x800);
    }
    case 5:
      return;
    case 0:
      temp_f1 = ((RecoveredFields_800E3970_arg0 *) arg0)->field_430;
      ((RecoveredFields_800E3970_arg0 *) arg0)->field_430 = (f32) (temp_f1 - TObjEneMe3ShinowaMirage__data_805DA5C4);
      PSO_VCALL_VObj_18_f56c51_m100(arg0, temp_f1);
      break;
  }
  return;
}

}
