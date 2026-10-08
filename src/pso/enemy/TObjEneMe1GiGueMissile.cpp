#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802CE428___vt__22TObjEneMe1GiGueMissile {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
int queue_destruction__7TObjectFv(void*);
s32 get_bml_motion(void *, int);
s32 get_bml_model(void *, int);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_x(int, int);
s32 push_matrix();
s32 pop_matrix();
f32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFi(void *);
s32 draw_model_motion(void *, int, f32);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern int lbl_805D6858;
void render__22TObjEneMe1GiGueMissileFv(u8 *arg0);
u16 obj_getField1c(void *);
s32 play_sound_effect(s32, u32, s16, s32);
u8 * TNeedleShoot__ct(void *, s32, void *, void *);
extern M2C_UNK __vt__22TObjEneMe1GiGueMissile[];
extern s32 lbl_805D3F20;
extern const f32 lbl_805DE6DC;
u8 *TObjEneMe1GiGueMissile__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, f32 farg0, f32 farg1);
int queue_destruction__7TObjectFv(void*);
u32 find_entity_by_id(int);
M2C_UNK TObjPlayer__sub_802A445C(void *, int);
M2C_UNK update_lifetime__22TObjEneMe1GiGueMissileFPv(void *);
M2C_UNK update_position__12TNeedleShootFPv(void *);
extern const f32 lbl_805DE6DC;
extern const f32 lbl_805DE6E0;
void run_task__22TObjEneMe1GiGueMissileFv(u8 *arg0);
}

extern "C" {

void TObjEneMe1GiGueMissile__vt4(void* p);
void TObjEneMe1GiGueMissile__vt7(void* p, void* a1);
void TObjEneMe1GiGue__sub_802CE4E8(void);
void TObjEneMe1GiGue__sub_802CE4EC(void);
void *__dt__22TObjEneMe1GiGueMissileFv(void *arg0, s16 arg1);
void create__22TObjEneMe1GiGueMissileFiiiff(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1);
void explode__22TObjEneMe1GiGueMissileFPvPv(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__12TNeedleShootFv(void *, int);
u32 __nw__7TObjectFUl(M2C_UNK);
int get_barrier_count__15TObjEneMe1GiGueFv(void);
int queue_destruction__7TObjectFv(void*);

struct Hit_802CE088 { s32 kind; f32 power; };
struct VBase_802CE088 { u8 pad[0x18]; };
struct VEnt_802CE088 : VBase_802CE088 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20();
    virtual f32 m21(void *src, Hit_802CE088 *hit, s32 a, s32 b, s32 c);
};
u8 *get_player_by_client_id(s32);
f32 horizontal_distance_squared(void *, void *);
void obj_setFlags30(void *, int);
s32 get_global_state__14TOKeyMachine01Fv();
void create_fire_explosion_effect(void *, f32, void *, int, void *);
extern void *tl_07;
extern const f32 lbl_805DE6D0;
extern const f32 lbl_805DE6D4;
extern const f32 lbl_805DE6D8;

#pragma push
#pragma opt_common_subs off
void explode__22TObjEneMe1GiGueMissileFPvPv(void *self, void *pos) {
    void *fx;
    VEnt_802CE088 *p;
    s32 i;
    fx = (void *)__nw__7TObjectFUl(0x64);
    if (fx != NULL) {
        create_fire_explosion_effect(fx, lbl_805DE6D0, pos, 0, tl_07);
    }
    for (i = 0; i < 4; i++) {
        p = (VEnt_802CE088 *)get_player_by_client_id(i);
        if (p != NULL && horizontal_distance_squared((u8 *)p + 0x38, pos) <= lbl_805DE6D4) {
            Hit_802CE088 h;
            h.kind = 0;
            h.power = M2C_FIELD(self, f32 *, 0xC0);
            {
                Hit_802CE088 h1 = h;
                if (p->m21(M2C_FIELD(self, void **, 0x1C), &h1, 0, -1, -1) > lbl_805DE6D8) {
                    obj_setFlags30(p, 0x600);
                }
            }
            if (get_global_state__14TOKeyMachine01Fv() == 0x23) {
                play_sound_effect(0x4003A312, (u32)((u8 *)p + 0x38), 0, 0);
            } else {
                play_sound_effect(0x3A81F, (u32)((u8 *)p + 0x38), 0, 0);
            }
        }
    }
}
#pragma pop

void TObjEneMe1GiGueMissile__vt4(void* p) { explode__22TObjEneMe1GiGueMissileFPvPv(p, (char*)p + 0x6c); queue_destruction__7TObjectFv(p); }

void TObjEneMe1GiGueMissile__vt7(void* p, void* a1) { explode__22TObjEneMe1GiGueMissileFPvPv(p, (char*)a1 + 0x38); queue_destruction__7TObjectFv(p); }

void create__22TObjEneMe1GiGueMissileFiiiff(s32 arg0, s32 arg1, s32 arg2, f32 farg0, f32 farg1) {
    void *temp_r3;
    temp_r3 = (void *) __nw__7TObjectFUl(0xC4);
    if ((u32) temp_r3 != 0U) {
        TObjEneMe1GiGueMissile__ct((u8 *)(temp_r3), (s32)(arg0), (u8 *)(arg1), (u8 *)(arg2), farg0, farg1);
    }
}

extern M2C_UNK __vt__22TObjEneMe1GiGueMissile[];

void *__dt__22TObjEneMe1GiGueMissileFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__22TObjEneMe1GiGueMissile;
        __dt__12TNeedleShootFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void render__22TObjEneMe1GiGueMissileFv(u8 *arg0) {
  s32 temp_r31;
  if (((void *) (*(u8 * *)&lbl_805D6858)) == 0)
  {
    queue_destruction__7TObjectFv((void*)((void *) arg0));
    return;
  }
  push_matrix();
  begin_effect_render__13TParticleCtrlFv();
  post_translate_matrix((void *) (arg0 + 0x6C));
  temp_r31 = (int) (*((s32 *) (((s8 *) arg0) + 0xA4)));
  rotate_matrix_y((int) 0, temp_r31);
  rotate_matrix_x((int) 0, (int) (*((s32 *) (((s8 *) arg0) + 0xA0))));
  set_global_param__8TObjFishFi((void *) (*((s32 *) (((s8 *) (*((u8 **) (((s8 *) (*(u8 * *)&lbl_805D6858)) + 0x42C)))) + 0x1C))));
  set_global_flag__10TObjPlayerFv();
  temp_r31 = get_bml_motion((void *) (*(u8 * *)&lbl_805D6858), (int) 5);
  draw_model_motion((void *) get_bml_model((void *) (*(u8 * *)&lbl_805D6858), (int) 1), (int) temp_r31, (f32) (*((f32 *) (((s8 *) arg0) + 0xBC))));
  clear_global_state__10TObjPlayerFv();
  end_effect_render__13TParticleCtrlFv();
  pop_matrix();
}

typedef char RecoveredGlobal_802CE428___vt__22TObjEneMe1GiGueMissile_size[sizeof(RecoveredGlobal_802CE428___vt__22TObjEneMe1GiGueMissile) == 0x28 ? 1 : -1];

#pragma push
#pragma opt_common_subs off
void run_task__22TObjEneMe1GiGueMissileFv(u8 *arg0) {
    f32 temp_f1;
    M2C_FIELD(arg0, u32 *, 0x1C) = find_entity_by_id((int) (M2C_FIELD(arg0, u16 *, 0x34)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void*)((void *) (arg0)));
        return;
    }
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) (M2C_FIELD(arg0, f32 *, 0xBC) + lbl_805DE6DC);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xBC);
    if (temp_f1 >= lbl_805DE6E0) {
        M2C_FIELD(arg0, f32 *, 0xBC) = (f32) (temp_f1 - lbl_805DE6E0);
    }
    update_position__12TNeedleShootFPv((void *) (arg0));
    update_lifetime__22TObjEneMe1GiGueMissileFPv((void *) (arg0));
    TObjPlayer__sub_802A445C((void *) (arg0), (int) (1));
}
#pragma pop

u8 *TObjEneMe1GiGueMissile__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, f32 farg0, f32 farg1) {
    u8 *temp_r3;
    u8 *temp_r3_2;
    TNeedleShoot__ct(arg0, arg1, arg2, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802CE428___vt__22TObjEneMe1GiGueMissile *)&__vt__22TObjEneMe1GiGueMissile).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3F20;
    M2C_FIELD(arg0, f32 *, 0xC0) = farg1;
    M2C_FIELD(arg0, f32 *, 0xAC) = farg0;
    play_sound_effect(0x4002A600, (u32) (arg0 + 0x6C), 0, 0);
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x1C));
    if (temp_r3 != NULL) {
        M2C_FIELD(arg0, u16 *, 0x34) = obj_getField1c(temp_r3);
    }
    temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x68));
    if (temp_r3_2 != NULL) {
        M2C_FIELD(M2C_FIELD(temp_r3_2, u8 **, 0xA4), f32 *, 0xC) = (f32) lbl_805DE6DC;
    }
    M2C_FIELD(arg0, s32 *, 0xB0) = 1;
    return arg0;
}

void TObjEneMe1GiGue__sub_802CE4E8(void) {  }

    extern int lbl_805D6858;
void TObjEneMe1GiGue__sub_802CE4EC(void) { lbl_805D6858 = get_barrier_count__15TObjEneMe1GiGueFv(); }

}
