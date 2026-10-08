#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_PTR18_8030A400 { char pad[0x18]; };

struct VObj_PTR18_8030A400 : VBase_PTR18_8030A400 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62();
    virtual M2C_UNK m63(M2C_UNK, s32);
};

struct Stack_8030A1E4
{
  s32 sp8;
  s32 spC;
  s32 sp10;
};

struct V_80309E9C { f32 x, y, z; };

struct Fol_80309E9C { u16 a; u16 b; u8 pad[0x8]; V_80309E9C v[3]; };

extern "C" {
int spawn_particle_effect(void*, void*);
void *__nw__7TObjectFUl(int);
void *TPlyPtclObjectRightHand__ct(void *, void *);
void TObjPlayer__sub_8030A030(void *arg0, void *arg1);
void *__nw__7TObjectFUl(int);
void *TPlyPtclObjectLeftHand__ct(void *, void *);
void TObjPlayer__sub_8030A07C(void *arg0, void *arg1);
void *get_player_by_client_id(u16);
u16 get_lifetime__22TPlyFollowParticleCtrlFPv();
s32 get_position_ptr__10TObjPlayerFPv(s32);
extern M2C_UNK __vt__22TPlyPtclObjectLeftHand[];
s32 TPlyPtclObjectRightHand__vt7(s32 arg0);
s32 create_oneshot_particle_emitter(s32, s32, s32, s32);
M2C_UNK set_owner_id__13TParticleCtrlFPvUs(s32, s32);
u32 find_entity_by_id(s32);
s32 create_attached_oneshot_emitter(unsigned long long arg1, s32 arg2);
s32 spawn_particle_effect_with_flags(s32, s32, M2C_UNK);
void emit_player_sprite_particle(M2C_UNK arg0, s32 arg1, s32 arg2);
void emit_sand_step_particles(s32 arg0, s32 arg1);
void emit_water_step_particles(s32 arg0, s32 arg1);
void emit_player_sprite_particle(M2C_UNK arg0, s32 arg1, s32 arg2);
void emit_idle_water_splash(s32 arg0, s32 arg1);
s32 emit_player_particle(void* p, void* a1, void* a2);
s32 get_instance__13TParticleCtrlFv();
s32 get_particle_model__13TParticleCtrlFi(s32);
void attach_particle_model(s32, s32, s32, s32, s32, f32);
extern f32 lbl_805DF134;
s32 emit_player_model_particle(s32 owner, s32 position, s32 entry, s32 model);
void* init_follow_particle_ctrl__10TObjPlayerFPv(void* p);
extern const f32 lbl_805DF130;
Fol_80309E9C *TObjPlayer__sub_80309E9C(Fol_80309E9C *o);
}

extern "C" {

struct VOff_80309DD0_arg0_80309dd0_80309D80 { char pad_0[0x4]; char f_4[1]; };

s32 TObjPlayer__sub_80309E4C(s32 arg0, s16 arg1);
s32 check_hit_by_id_431__10TObjPlayerFPvi(void* p, int a1);
s32 check_hit_by_id__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2);
void clear_foot_stamp__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 dt_follow_particle_ctrl__10TObjPlayerFis(s32 arg0, s16 arg1);
void enable_foot_stamp__10TObjPlayerFii(s32 arg1, s32 arg2);
void* init_follow_particle_ctrl__10TObjPlayerFPv(void* p);
void update_child__10TObjPlayerFPvPv(void *arg0, void *arg1);
void update_follow_particle__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 spawn_particle_effect_with_flags(s32, s32, M2C_UNK);
M2C_UNK set_owner_id__13TParticleCtrlFPvUs(s32, s32);
u32 find_entity_by_id(s32);
int TPlyFollowParticleCtrl__sub_8030A694(void*);
s32 __dl__FPv(s32 a0 = 0);
s32 __dt__22TPlyFollowParticleCtrlFis(s32 a0 = 0, s32 a1 = 0);
M2C_UNK create__16TPlayerFootStampFPvPv(s32, M2C_UNK);
s32 obj_getField1c(void *);
M2C_UNK set_type__22TPlyFollowParticleCtrlFPvs(void *, void *);

void enable_foot_stamp__10TObjPlayerFii(s32 arg1, s32 arg2) {
    create__16TPlayerFootStampFPvPv(arg2, 1);
}

void clear_foot_stamp__10TObjPlayerFii(s32 arg0, s32 arg1) {
    create__16TPlayerFootStampFPvPv(arg1, 0);
}

void update_child__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    struct VOff_80309DD0_arg0_80309dd0_80309D80 *self = (struct VOff_80309DD0_arg0_80309dd0_80309D80 *)arg0;
    TObjPlayer__sub_8030A07C((void *)((void *)(self->f_4)), (void *)(arg1));
    TObjPlayer__sub_8030A030((void *)((void *)(self->f_4)), (void *)((void *)(arg1)));
}

void update_follow_particle__10TObjPlayerFii(s32 arg0, s32 arg1) {
    set_type__22TPlyFollowParticleCtrlFPvs((void *) (arg0), (void *) (obj_getField1c((void *) (arg1))));
}

s32 TObjPlayer__sub_80309E4C(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        dt_follow_particle_ctrl__10TObjPlayerFis((s32)(arg0 + 4), (s16)(-1));
        if (arg1 > 0) {
            __dl__FPv((s32)(arg0));
        }
    }
    return arg0;
}

Fol_80309E9C *TObjPlayer__sub_80309E9C(Fol_80309E9C *o) {
    s32 i;
    V_80309E9C *p;
    init_follow_particle_ctrl__10TObjPlayerFPv((void*)((u8 *)o + 4));
    o->b = 0xFFFF;
    o->a = 0xFFFF;
    for (i = 0; i < 3; i++) {
        p = &o->v[i];
        p->z = lbl_805DF130;
        p->y = lbl_805DF130;
        p->x = lbl_805DF130;
    }
    return o;
}

s32 check_hit_by_id_431__10TObjPlayerFPvi(void* p, int a1) { return check_hit_by_id__10TObjPlayerFiii((s32)(p), (s32)(a1), (s32)(431)); }

void emit_idle_water_splash(s32 arg0, s32 arg1) {
    emit_player_sprite_particle((M2C_UNK)((void *) (arg0)), (s32)((void *) (arg1)), (s32)((int) (0xA2)));
    emit_player_model_particle((s32)((M2C_UNK)((void *) (arg0))), (s32)((M2C_UNK)((void *) (arg1))), (s32)((M2C_UNK)((int) (0xA6))), (s32)((s32)((int) (2))));
}

void emit_sand_step_particles(s32 arg0, s32 arg1) {
    emit_player_model_particle((s32)(arg0), (s32)(arg1), (s32)(0x23D), (s32)(2));
    emit_player_model_particle((s32)(arg0), (s32)(arg1), (s32)(0x23F), (s32)(0));
    emit_player_particle((void*)((void *) (arg0)), (void*)((void *) (arg1)), (void*)((int) (0x23E)));
}

void emit_water_step_particles(s32 arg0, s32 arg1) {
    emit_player_model_particle((s32)(arg0), (s32)(arg1), (s32)(0x237), (s32)(2));
    emit_player_model_particle((s32)(arg0), (s32)(arg1), (s32)(0x239), (s32)(0));
    emit_player_particle((void*)((void *) (arg0)), (void*)((void *) (arg1)), (void*)((int) (0x238)));
}

void TObjPlayer__sub_8030A030(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TPlyPtclObjectRightHand__ct(o, arg1);
    }
    M2C_FIELD(arg0, void **, 0x4) = o;
}

void TObjPlayer__sub_8030A07C(void *arg0, void *arg1) {
    void *o;
    o = __nw__7TObjectFUl(0xB0);
    if (o != NULL) {
        o = TPlyPtclObjectLeftHand__ct(o, arg1);
    }
    M2C_FIELD(arg0, void **, 0x0) = o;
}

s32 dt_follow_particle_ctrl__10TObjPlayerFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__22TPlyFollowParticleCtrlFis(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv((s32)(arg0));
        }
    }
    return arg0;
}
void* init_follow_particle_ctrl__10TObjPlayerFPv(void* p) { TPlyFollowParticleCtrl__sub_8030A694(p); *(int*)(p) = 0; *(int*)((char*)p + 0x4) = 0; return p; }

typedef struct Stack_8030A1E4 Stack_8030A1E4;

void emit_player_sprite_particle(M2C_UNK arg0, s32 arg1, s32 arg2) {
    spawn_particle_effect_with_flags((s32)((void *) (arg1)), (s32)((void *) (arg2)), (M2C_UNK)((int) (0x2000)));
}

s32 emit_player_model_particle(s32 owner, s32 position, s32 entry, s32 model) {
  s32 emitter = emit_player_particle((void*)(owner), (void*)(position), (void*)(entry));
  if (emitter)
  {
    attach_particle_model(emitter, get_particle_model__13TParticleCtrlFi(model), get_instance__13TParticleCtrlFv(), 0, 1, lbl_805DF134);
  }
  return emitter;
}

s32 create_attached_oneshot_emitter(unsigned long long arg1, s32 arg2) {
  Stack_8030A1E4 stack;
  s32 temp_r3;
  u8 *temp_r3_2;
  temp_r3_2 = (u8 *) ((u8 *)find_entity_by_id((s32)(arg1)));
  if (temp_r3_2 == 0)
  {
    return 0;
  }
  stack.spC = 0;
  stack.sp8 = 0;
  stack.sp10 = -0x8000;
  temp_r3 = create_oneshot_particle_emitter((s32) (temp_r3_2 + 0x74), (s32) (&stack.sp8), arg2, 0x50);
  if (temp_r3 != 0)
  {
    set_owner_id__13TParticleCtrlFPvUs((s32)((void *) temp_r3), (s32)(arg1));
  }
  return temp_r3;
}

s32 check_hit_by_id__10TObjPlayerFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    u32 temp_r3_2;

    temp_r3_2 = find_entity_by_id(arg1);
    if (temp_r3_2 == 0U) {
        return 0;
    }
    temp_r3 = spawn_particle_effect_with_flags(temp_r3_2 + 0x74, arg2, 0x50);
    if (temp_r3 != 0) {
        set_owner_id__13TParticleCtrlFPvUs(temp_r3, arg1);
    }
    return temp_r3;
}

s32 emit_player_particle(void* p, void* a1, void* a2) { return spawn_particle_effect(a1, a2); }
s32 TPlyPtclObjectRightHand__vt7(s32 arg0) {
    void *temp_r3;
    temp_r3 = get_player_by_client_id((u16) get_lifetime__22TPlyFollowParticleCtrlFPv());
    if (temp_r3 == NULL) {
        return 0;
    }
    ((VObj_PTR18_8030A400 *) temp_r3)->m63(0x30, get_position_ptr__10TObjPlayerFPv(arg0));
    return get_position_ptr__10TObjPlayerFPv(arg0);
}

}
