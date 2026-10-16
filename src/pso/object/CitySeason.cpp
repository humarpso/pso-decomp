#include "types.h"
#include "pso/object/TObjCity_Season_XmasWreath.h"
#include "pso/object/TObjCity_Season_EasterEgg.h"
#include "pso/object/TObjCity_Season_ValentineHeart.h"
#include "pso/object/TObjCity_Season_XmasTree.h"
#include "pso/object/TObjCity_Season_HalloweenPumpkin.h"
#include "pso/object/TObjCity_Season_21_21.h"
#include "pso/object/TObjCity_Season_SonicAdv2.h"
#include "pso/object/TObjCity_Season_Board.h"
#include "pso/object/TObjCity_Season_FireWorkCtrl.h"
struct RecoveredGlobal_80184B44_lbl_804440B0 { s32 value; u8 remaining[0x28]; };
extern "C" {
const RecoveredGlobal_80184B44_lbl_804440B0 city_season_collision_template = {0, {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};
const char TObjCity_Season_EasterEgg__class_name[] = "TObjCity_Season_EasterEgg";
const char TObjCity_Season_ValentineHeart__class_name[] = "TObjCity_Season_ValentineHeart";
const char TObjCity_Season_XmasTree__class_name[] = "TObjCity_Season_XmasTree";
const char TObjCity_Season_XmasWreath__class_name[] = "TObjCity_Season_XmasWreath";
const char TObjCity_Season_HalloweenPumpkin__class_name[] = "TObjCity_Season_HalloweenPumpkin";
const char TObjCity_Season_21_21__class_name[] = "TObjCity_Season_21_21";
const char TObjCity_Season_SonicAdv2__class_name[] = "TObjCity_Season_SonicAdv2";
const char TObjCity_Season_Board__class_name[] = "TObjCity_Season_Board";
const char TObjCity_Season_FireWorkCtrl__class_name[] = "TObjCity_Season_FireWorkCtrl";
const char TObjCity_Season_FireWork__class_name[] = "TObjCity_Season_FireWork";
const u32 lbl_804441FC[5] = {0x3F4CCCCD, 0x3E4CCCCD, 0x3F800000, 0x3F666666, 0x00000000};
}
#include "pso/object/TObjCity_Season_FireWork.h"

#pragma push

#include "types.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_801830BC_lbl_804B5C08 {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
s32 construct_world_actor_base(void *, void *);
extern RecoveredGlobal_801830BC_lbl_804B5C08 city_vertical_model_vtable;
extern const f32 lbl_805DBC00;
}

extern "C" {

typedef char RecoveredGlobal_801830BC_lbl_804B5C08_size[sizeof(RecoveredGlobal_801830BC_lbl_804B5C08) == 0x38 ? 1 : -1];

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
void create_oneshot_particle_emitter(void *, void *, s32, s32);
void spawn_particle_effect_with_flags(void *, s32, s32);
void *spawn_continuous_particle_effect_with_flags(void *, s32, s32);
void copy_pos__11TNowLoadingFPv(void *, void *);
s32 rand(void);
extern const f32 lbl_805DBC18[1];
#define lbl_805DBC18 (*(const f32 *)&lbl_805DBC18)
extern const f32 lbl_805DBC1C[1];
#define lbl_805DBC1C (*(const f32 *)&lbl_805DBC1C)
extern const f32 lbl_805DBC20[1];
#define lbl_805DBC20 (*(const f32 *)&lbl_805DBC20)
extern const f32 lbl_805DBC24[1];
#define lbl_805DBC24 (*(const f32 *)&lbl_805DBC24)
extern const f32 lbl_805DBC28[1];
#define lbl_805DBC28 (*(const f32 *)&lbl_805DBC28)
extern const f32 lbl_805DBC2C[1];
#define lbl_805DBC2C (*(const f32 *)&lbl_805DBC2C)

}

void TObjCity_Season_FireWork::run_task() {
    TObjCity_Season_FireWork *self = this;
    switch (self->state) {
    case 0:
        if (self->handle == NULL) {
            self->handle = spawn_continuous_particle_effect_with_flags(self->pos, 0x84, 0x40);
        }
        if (self->handle != NULL) {
            self->riseDistance += lbl_805DBC18;
            self->pos[1] += lbl_805DBC18;
            if (self->riseDistance >= self->limit) {
                self->riseDistance = lbl_805DBC1C;
                self->timer = 0;
                self->state = 1;
                queue_destruction__7TObjectFv(self->handle);
                self->handle = NULL;
            } else {
                copy_pos__11TNowLoadingFPv(self->handle, self->pos);
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
                self->burstEffectId = 0x87;
                self->state = 2;
            } else if (r < lbl_805DBC28) {
                self->burstEffectId = 0x88;
                self->state = 2;
            } else {
                self->state = 3;
            }
        }
        break;
    case 2:
        if (self->timer == 0 || self->timer == 4 || self->timer == 8) {
            spawn_particle_effect_with_flags(self->pos, self->burstEffectId, 0x40);
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
            create_oneshot_particle_emitter(self->pos, &v, 0x89, 0x40);
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

extern "C" {

}

struct Obj_8018355C;
extern "C" void fn_8018355C(struct Obj_8018355C *arg0);

struct RecoveredGlobal_8018343C_lbl_804B5C40 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern s32 __vt__24TObjCity_Season_FireWork[];
extern s32 TObjCity_Season_FireWork__name;

u8 *__ct__24TObjCity_Season_FireWorkFP7TObjectPvf(u8 *arg0, u8 *arg1, u8 *arg2, f32 farg0);
void set_global_count__12TObjNpcEnemyFl(int);
void debug_printf_at(int, void *, ...);
extern const char lbl_80444218[];
extern const char lbl_80444228[];
extern const char lbl_80444238[];
extern const char lbl_80444248[];
void draw_debug_info__16TObjEneBm5GibonUFv(void);
}

extern "C" {

void *__dt__24TObjCity_Season_FireWorkFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern s32 __vt__24TObjCity_Season_FireWork[];

}

TObjCity_Season_FireWork::~TObjCity_Season_FireWork() {
    if (handle != NULL) { queue_destruction__7TObjectFv(handle); handle = NULL; }
}

extern "C" {

typedef char RecoveredGlobal_8018343C_lbl_804B5C40_size[sizeof(RecoveredGlobal_8018343C_lbl_804B5C40) == 0x18 ? 1 : -1];
}

TObjCity_Season_FireWork::TObjCity_Season_FireWork(TObject* parent, void* position, f32 riseHeight) : TObject(parent) {
    m_name = (const char*)TObjCity_Season_FireWork__name;
    VecCopy__FP3VecPC3Vec(pos, position);
    state = 0;
    handle = NULL;
    limit = riseHeight;
    timer = 0;
    burstEffectId = 0;
    riseDistance = lbl_805DBC1C;
}

extern "C" {

void draw_debug_info__16TObjEneBm5GibonUFv(void) {
    ((void (*)(void))fn_8018355C)();
    set_global_count__12TObjNpcEnemyFl(0xFF00FF);
    debug_printf_at(0x13001C, (void *)lbl_80444218);
    debug_printf_at(0x13001D, (void *)lbl_80444228);
    debug_printf_at(0x13001E, (void *)lbl_80444238);
    debug_printf_at(0x130020, (void *)lbl_80444248);
    set_global_count__12TObjNpcEnemyFl(0xF0F0F0FF);
}
__declspec(section ".rodata") extern const char lbl_80444218[] = "<- AREA WIDTH";
__declspec(section ".rodata") extern const char lbl_80444228[] = "<- RISE HEIGHT";
__declspec(section ".rodata") extern const char lbl_80444238[] = "<- AREA DEPTH";
__declspec(section ".rodata") extern const char lbl_80444248[] = "<- FREQ";

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
  s32 value;
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
f32 rand_signed_unit();
f32 update_scale__15TObjBoss2TunnelFv(void *);
s32 TLobby__sub_80184C54();
u32 __nw__7TObjectFUl(int);
s32 rand();
f32 vec3_dot(void *, void *);
f32 subtract_vector(void *, void *);
extern RecoveredGlobal_80183604_lbl_804FF5E8 lbl_804FF5E8;
extern s32 camera_ctrl_instance;

extern const f32 lbl_805DBC38[1];
#define lbl_805DBC38 (*(const f32 *)&lbl_805DBC38)
extern const f32 lbl_805DBC3C[1];
#define lbl_805DBC3C (*(const f32 *)&lbl_805DBC3C)
extern const f32 lbl_805DBC40[1];
#define lbl_805DBC40 (*(const f32 *)&lbl_805DBC40)
void run_task__28TObjCity_Season_FireWorkCtrlFv(u8 *arg0);
void TObjMapWarp__sub_80141CB8(void *, void *, void *, void *);
extern const u32 lbl_804441FC[5];
#define lbl_804441FC ((const V4_8018355C *)lbl_804441FC)
extern const f32 lbl_805DBC30[1];
#define lbl_805DBC30 (*(const f32 *)&lbl_805DBC30)
extern const f32 lbl_805DBC34[1];
#define lbl_805DBC34 (*(const f32 *)&lbl_805DBC34)

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

void TObjCity_Season_FireWorkCtrl::run_task() {
    u8 *arg0 = (u8 *)this;
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
      subtract_vector((void *) (&stack.sp14), (void *) (camera_ctrl_instance + 0x178));
      if ((update_scale__15TObjBoss2TunnelFv((void *) (&stack.sp14)) < lbl_805DBC3C) && (vec3_dot((void *) (&stack.sp14), (void *) (((u8 *) (&lbl_804FF5E8.value)) + 0xC)) > lbl_805DBC1C))
      {
        temp_f30 = rand_signed_unit();
        temp_f30 = (*((f32 *) (((s8 *) arg0) + 0x68))) * temp_f30;
        temp_f31 = temp_f30;
        new_var = (*((f32 *) (((s8 *) arg0) + 0x70))) * rand_signed_unit();
        temp_f30 = new_var;
        temp_f29 = (lbl_805DBC40 * (lbl_805DBC20 * ((f32) rand()))) + (*((f32 *) (((s8 *) arg0) + 0x6C)));
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.sp8 += temp_f31;
        stack.sp10 += temp_f30;
        temp_r3 = __nw__7TObjectFUl((int) 0x40);
        if (temp_r3 != 0U)
        {
          ((s32 (*)(int, void *, void *, f32))__ct__24TObjCity_Season_FireWorkFP7TObjectPvf)((int) temp_r3, (void *) arg0, (void *) (&stack.sp8), (f32) temp_f29);
        }
      }
      *((s32 *) (((s8 *) arg0) + 0x90)) = (s32) (lbl_805DBC38 * (((f32) ((*((s32 *) (((s8 *) arg0) + 0x84))) + 0x3C)) * (lbl_805DBC20 * ((f32) rand()))));
    }
  }
}

}

#pragma pop

#undef lbl_805DBC1C
#undef lbl_805DBC20
#undef lbl_805DBC24
#undef lbl_805DBC28
#undef lbl_805DBC2C
#undef lbl_805DBC30
#undef lbl_805DBC34
#undef lbl_805DBC38
#undef lbl_805DBC3C
#undef lbl_805DBC40
#pragma push
#include "types.h"

extern "C" {

void *TObjCity_Season_FireWorkCtrl__create(void *arg0);
void *dt__28TObjCity_Season_FireWorkCtrlFPvs(void *arg0, s16 arg1);
u8 *TObjCity_Season_FireWorkCtrl__ct(u8 *arg0, s32 arg1, s32 arg2);
void __dl__7TObjectFPv(void *);

void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern void *tl_05;

void *TObjCity_Season_FireWorkCtrl__create(void *arg0) {
    void *o = ((void * (*)(int))__nw__7TObjectFUl)(0x94);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjCity_Season_FireWorkCtrl__ct)(o, tl_05, arg0);
    }
    return o;
}

extern s32 __vt__28TObjCity_Season_FireWorkCtrl[];

void *dt__28TObjCity_Season_FireWorkCtrlFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__28TObjCity_Season_FireWorkCtrl;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma pop

#define VObj_18_1a504b VObj_18_1a504b_sf2p417
#define VBase_18_1a504b VBase_18_1a504b_sf2p417
#pragma push

#include "types.h"

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_8018386C_lbl_804B5C58 {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
s32 construct_world_actor_base(void *, void *);
#define __vt__28TObjCity_Season_FireWorkCtrl (*(RecoveredGlobal_8018386C_lbl_804B5C58 *)&__vt__28TObjCity_Season_FireWorkCtrl)
extern s32 TObjCity_Season_FireWorkCtrl__name;
u8 *TObjCity_Season_FireWorkCtrl__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_8018386C_lbl_804B5C58_size[sizeof(RecoveredGlobal_8018386C_lbl_804B5C58) == 0x38 ? 1 : -1];
u8 *TObjCity_Season_FireWorkCtrl__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_world_actor_base((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__28TObjCity_Season_FireWorkCtrl.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjCity_Season_FireWorkCtrl__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x90) = 0;
    return arg0;
}

}

#pragma pop

#undef VBase_18_1a504b
#undef VObj_18_1a504b
#undef __vt__28TObjCity_Season_FireWorkCtrl
#pragma push

#include "types.h"

struct Fn801838D4Base_801838d4 { char pad[0x18]; };
struct Fn801838D4VObj_801838d4 : Fn801838D4Base_801838d4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {

void run_task__21TObjCity_Season_BoardFv(void *arg0);
void render__21TObjCity_Season_BoardFv(u8 *arg0);
s32 post_translate_matrix(void *);
s32 draw_chunk_object(s32);
s32 scroll_strip_uvs(s32, s16, s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 set_global_param__8TObjFishFl(s32);

extern u32 lbl_805D5B38;
extern s32 lbl_805D5B3C;
extern s32 lbl_805D5B40;
extern s32 lbl_805D5B44;
extern s32 lbl_805D5B48;
extern const f32 lbl_805DBC44[1];
#define lbl_805DBC44 (*(const f32 *)&lbl_805DBC44)
extern const f32 lbl_805DBC48[1];
#define lbl_805DBC48 (*(const f32 *)&lbl_805DBC48)

void TObjCity_Season_Board::render() {
    u8 *arg0 = (u8 *)this;
    if (((u32) lbl_805D5B38 != 0U) && (((Fn801838D4VObj_801838d4*)arg0)->m8(lbl_805DBC44, lbl_805DBC48) != 0)) {
        set_global_param__8TObjFishFl(lbl_805D5B44);
        scroll_strip_uvs(lbl_805D5B48, (s16) *(s32 *)((s8 *)arg0 + 0x90), 0);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        draw_chunk_object(lbl_805D5B3C);
        draw_chunk_object(lbl_805D5B40);
        pop_matrix();
    }
}

void TObjCity_Season_Board::run_task() {
    s32 temp_r4;

    *(s32 *)((s8 *)this + 0x90) = (s32) (*(s32 *)((s8 *)this + 0x90) + 2);
    temp_r4 = *(s32 *)((s8 *)this + 0x90);
    if (temp_r4 >= 0x100) {
        *(s32 *)((s8 *)this + 0x90) = (s32) (temp_r4 - 0x100);
    }
}

}

#pragma pop

#undef lbl_805DBC44
#undef lbl_805DBC48
#pragma push
#include "types.h"

extern "C" {

void *TObjCity_Season_Board__create(void *arg0);
void *dt__21TObjCity_Season_BoardFPvs(void *arg0, s16 arg1);
u8 *TObjCity_Season_Board__ct(u8 *arg0, s32 arg1, s32 arg2);
void __dl__7TObjectFPv(void *);

void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern void *tl_05;

void *TObjCity_Season_Board__create(void *arg0) {
    void *o = ((void * (*)(int))__nw__7TObjectFUl)(0x94);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjCity_Season_Board__ct)(o, tl_05, arg0);
    }
    return o;
}

extern s32 __vt__21TObjCity_Season_Board[];

void *dt__21TObjCity_Season_BoardFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TObjCity_Season_Board;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma pop

#define VObj_18_1a504b VObj_18_1a504b_sf2p625
#define VBase_18_1a504b VBase_18_1a504b_sf2p625
#pragma push

#include "types.h"
extern "C" {
#undef lbl_805DBC18
__declspec(section ".sdata2") extern const f32 lbl_805DBC18[1] = { 4.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC1C[1] = { 0.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC20[1] = { 3.0517578e-05f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC24[1] = { 0.33f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC28[1] = { 0.66f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC2C[1] = { 0.8f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC30[1] = { 250.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC34[1] = { 10.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC38[1] = { 3.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC3C[1] = { 450.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC40[1] = { 50.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC44[1] = { 800.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC48[1] = { 200.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC4C[1] = { 20.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC50[1] = { 0.037f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC54[1] = { 1.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC58[1] = { 1.3f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC5C[1] = { 0.3f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC60[1] = { 60.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC64[1] = { 23.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC68[1] = { 80.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC6C[1] = { 400.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC70[1] = { 0.2f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC74[1] = { 22.5f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC78[1] = { 13.0f };
__declspec(section ".sdata2") extern const f32 lbl_805DBC7C[1] = { 25.0f };
}
#define lbl_805DBC18 (*(const f32 *)&lbl_805DBC18)
#define lbl_805DBC5C (*(const f32 *)&lbl_805DBC5C)
#define lbl_805DBC60 (*(const f32 *)&lbl_805DBC60)
#define lbl_805DBC64 (*(const f32 *)&lbl_805DBC64)
#define lbl_805DBC68 (*(const f32 *)&lbl_805DBC68)
#define lbl_805DBC6C (*(const f32 *)&lbl_805DBC6C)
#define lbl_805DBC70 (*(const f32 *)&lbl_805DBC70)
#define lbl_805DBC74 (*(const f32 *)&lbl_805DBC74)
#define lbl_805DBC78 (*(const f32 *)&lbl_805DBC78)
#define lbl_805DBC7C (*(const f32 *)&lbl_805DBC7C)
extern "C" {
}

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_80183A38_lbl_804B5C90 {
    s32 value;
    u8 remaining[0x30];
};

struct Vec_80183AF0 { f32 x, y, z; };

struct EntA_80183AF0 { u8 pad[8]; s32 v; u8 padc[4]; };

struct EntB_80183AF0 { u8 pad[4]; s32 v; };

struct Res_80183AF0 { u8 pad[0x42C]; EntA_80183AF0 *a; EntB_80183AF0 *b; };

struct VBase_80183AF0 { u8 pad[0x18]; };

struct Obj_80183AF0 : VBase_80183AF0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
    u8 pad1c[0x38 - 0x1C];
    Vec_80183AF0 pos;
    u8 pad44[0x60 - 0x44];
    s32 x60;
    u8 pad64[0xB0 - 0x64];
    f32 xb0;
};

extern "C" {
s32 construct_world_actor_base(void *, void *);
#define __vt__21TObjCity_Season_Board (*(RecoveredGlobal_80183A38_lbl_804B5C90 *)&__vt__21TObjCity_Season_Board)
extern s32 TObjCity_Season_Board__name;
u8 *TObjCity_Season_Board__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 TObjCity_Season_SonicAdv2__sub_80183C38(void *arg0);

extern const char lbl_80444250[];
void debug_draw_model_index__25TObjCity_Season_SonicAdv2Fv(void *self);

void draw_oriented_shadow__9TObjEneDDFllUl(Vec_80183AF0 *, Vec_80183AF0 *, s32, Vec_80183AF0 *);
s32 TObjCity_Season_SonicAdv2__sub_80183C38(void *arg0);
int get_anim_frame__25TObjCity_Season_EasterEggFPv(void* a0);

void draw_model_motion(s32, s32, f32);
extern s32 city_season_xmas_model_table[];
void render__25TObjCity_Season_SonicAdv2Fv(Obj_80183AF0 *self);
}

extern "C" {

typedef char RecoveredGlobal_80183A38_lbl_804B5C90_size[sizeof(RecoveredGlobal_80183A38_lbl_804B5C90) == 0x34 ? 1 : -1];
u8 *TObjCity_Season_Board__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_world_actor_base((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__21TObjCity_Season_Board.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjCity_Season_Board__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0x90) = 0;
    return arg0;
}
void TObjCity_Season_SonicAdv2::debug_draw_model_index() {
    TObjCity_Season_SonicAdv2__sub_80183C38(this);
    ((void (*)(s32 arg0))set_global_count__12TObjNpcEnemyFl)(0xFF00FF);
    ((void (*)(s32 id, const char *fmt, ...))debug_printf_at)(0x130020, lbl_80444250);
    ((void (*)(s32 arg0))set_global_count__12TObjNpcEnemyFl)(0xF0F0F0FF);
}
__declspec(section ".rodata") extern const char lbl_80444250[] = "<- MDL IDX";
#pragma push
#pragma opt_common_subs off
void TObjCity_Season_SonicAdv2::render() {
    Obj_80183AF0 *self = (Obj_80183AF0 *)this;
    Res_80183AF0 *res;
    s32 idx;
    Vec_80183AF0 pos;
    Vec_80183AF0 a;
    Vec_80183AF0 b;
    res = ((Res_80183AF0 * (*)(void *))get_anim_frame__25TObjCity_Season_EasterEggFPv)(self);
    if (res != NULL && self->m8(lbl_805DBC44[0], lbl_805DBC4C[0]) != 0) {
        ((void (*)(s32))set_global_param__8TObjFishFl)(city_season_xmas_model_table[5]);
        idx = TObjCity_Season_SonicAdv2__sub_80183C38(self);
        ((void (*)())push_matrix)();
        ((void (*)(void *))post_translate_matrix)(&self->pos);
        ((void (*)(int, s32))rotate_matrix_y)(0, self->x60);
        draw_model_motion(res->a[idx].v, res->b[idx].v, self->xb0);
        ((void (*)())pop_matrix)();
        ((void (*)(Vec_80183AF0 *, const Vec_80183AF0 *))VecCopy__FP3VecPC3Vec)(&pos, &self->pos);
        pos.y += lbl_805DBC50[0];
        a.x = lbl_805DBC1C[0];
        a.y = lbl_805DBC54[0];
        a.z = lbl_805DBC1C[0];
        b.x = lbl_805DBC54[0];
        b.y = lbl_805DBC1C[0];
        b.z = lbl_805DBC58[0];
        draw_oriented_shadow__9TObjEneDDFllUl(&pos, &a, self->x60, &b);
    }
}
#pragma pop

}

#pragma pop

#undef VBase_18_1a504b
#undef VObj_18_1a504b
#undef __vt__21TObjCity_Season_Board
#pragma push
#include "types.h"

extern "C" {
s32 TObjCity_Season_SonicAdv2__sub_80183C38(void *arg0);
}

extern "C" {

void run_task__25TObjCity_Season_SonicAdv2Fv(void* a0);
struct Obj_80184A08; s32 advance_anim_time__25TObjCity_Season_EasterEggFPvif(Obj_80184A08 *arg0, s32 arg1, f32 farg0);

void TObjCity_Season_SonicAdv2::run_task() { ((int (*)(void*, int, f32))advance_anim_time__25TObjCity_Season_EasterEggFPvif)(this, TObjCity_Season_SonicAdv2__sub_80183C38((void *)(this)), lbl_805DBC5C); }
s32 TObjCity_Season_SonicAdv2__sub_80183C38(void *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0x84) < 0) {
        return 0;
    }
    if (*(s32 *)((s8 *)arg0 + 0x84) < 4) {
        return *(s32 *)((s8 *)arg0 + 0x84);
    }
    return 3;
}

}

#pragma pop

#pragma push
#include "types.h"

extern "C" {

void *TObjCity_Season_SonicAdv2__create(void *arg0);
void *dt__25TObjCity_Season_SonicAdv2FPvs(void *arg0, s16 arg1);
u8 *TObjCity_Season_SonicAdv2__ct(u8 *arg0, s32 arg1, s32 arg2);
void __dl__7TObjectFPv(void *);

void *destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1);

extern void *tl_05;

void *TObjCity_Season_SonicAdv2__create(void *arg0) {
    void *o = ((void * (*)(int))__nw__7TObjectFUl)(0xB4);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjCity_Season_SonicAdv2__ct)(o, tl_05, arg0);
    }
    return o;
}

extern s32 __vt__25TObjCity_Season_SonicAdv2[];

void *dt__25TObjCity_Season_SonicAdv2FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__25TObjCity_Season_SonicAdv2;
        ((void (*)(void *, int))destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma pop

#pragma push

#include "types.h"

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_80183D4C_lbl_8050DC50 { s32 value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_80183D4C_lbl_8050DC50_size[sizeof(RecoveredGlobal_80183D4C_lbl_8050DC50) == 0x18 ? 1 : -1];

struct RecoveredGlobal_80183D00_lbl_804B5CC4 {
    s32 value;
    u8 remaining[0x38];
};

extern "C" {
struct Obj_80184A08; s32 advance_anim_time__25TObjCity_Season_EasterEggFPvif(Obj_80184A08 *arg0, s32 arg1, f32 farg0);
void run_task__21TObjCity_Season_21_21Fv(u8 *arg0);

int get_anim_frame__25TObjCity_Season_EasterEggFPv(void* a0);

s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);

#define city_season_xmas_model_table (*(RecoveredGlobal_80183D4C_lbl_8050DC50 *)&city_season_xmas_model_table)
extern s32 lbl_805D5B34;
#define lbl_805DBC44 (*(const f32 *)&lbl_805DBC44)
void render__21TObjCity_Season_21_21Fv(u8 *arg0);
u8 *init_city_season_object(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
#define __vt__25TObjCity_Season_SonicAdv2 (*(RecoveredGlobal_80183D00_lbl_804B5CC4 *)&__vt__25TObjCity_Season_SonicAdv2)
extern s32 TObjCity_Season_SonicAdv2__name;
#define lbl_805DBC38 (*(const f32 *)&lbl_805DBC38)
u8 *TObjCity_Season_SonicAdv2__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_80183D00_lbl_804B5CC4_size[sizeof(RecoveredGlobal_80183D00_lbl_804B5CC4) == 0x3C ? 1 : -1];
u8 *TObjCity_Season_SonicAdv2__ct(u8 *arg0, s32 arg1, s32 arg2) {
    ((s32 (*)(void *, void *, void *, int, f32))init_city_season_object)((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (5), (f32) (lbl_805DBC38));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__25TObjCity_Season_SonicAdv2.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjCity_Season_SonicAdv2__name;
    return arg0;
}

void TObjCity_Season_21_21::render() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;
    temp_r3 = (u8 *)(((u8 * (*)())get_anim_frame__25TObjCity_Season_EasterEggFPv)());
    if (temp_r3 != NULL) {
        if (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBC44, lbl_805DBC60) != 0) {
            ((s32 (*)(int))set_global_param__8TObjFishFl)((int) (*(s32 *)((s8 *)(&city_season_xmas_model_table.value) + 0x10)));
            ((s32 (*)(void *, int, int))scroll_strip_uvs)((void *) (lbl_805D5B34), (int) (0), (int) ((s16) *(s32 *)((s8 *)arg0 + 0xB4)));
            push_matrix();
            post_translate_matrix((void *) (arg0 + 0x38));
            ((s32 (*)(int, int))rotate_matrix_y)((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
            ((s32 (*)(void *))draw_chunk_object)((void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 0x42C)) + 0x18)));
            ((s32 (*)(void *, void *, f32))draw_model_motion)((void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 0x42C)) + 8)), (void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 0x430)) + 4)), (f32) (*(f32 *)((s8 *)arg0 + 0xB0)));
            pop_matrix();
        }
    }
}

void TObjCity_Season_21_21::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    if (((s32 (*)(void *, s32, f32))advance_anim_time__25TObjCity_Season_EasterEggFPvif)(arg0, 0, lbl_805DBC5C) != 0) {
        *(s32 *)((s8 *)arg0 + 0xB4) = (s32) (*(s32 *)((s8 *)arg0 + 0xB4) + 2);
        temp_r3 = *(s32 *)((s8 *)arg0 + 0xB4);
        if (temp_r3 >= 0xFF) {
            *(s32 *)((s8 *)arg0 + 0xB4) = (s32) (temp_r3 - 0xFF);
        }
    }
}

}

#pragma pop

#undef city_season_xmas_model_table
#undef lbl_805DBC44
#undef __vt__25TObjCity_Season_SonicAdv2
#undef lbl_805DBC38
#pragma push
#include "types.h"

extern "C" {

void *TObjCity_Season_21_21__create(void *arg0);
void *destroy__21TObjCity_Season_21_21FPvs(void *arg0, s16 arg1);
u8 *TObjCity_Season_21_21__ct(u8 *arg0, s32 arg1, s32 arg2);
void __dl__7TObjectFPv(void *);

void *destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1);
void queue_destruction__7TObjectFv(void *);

extern void *tl_05;

void *TObjCity_Season_21_21__create(void *arg0) {
    void *o = ((void * (*)(int))__nw__7TObjectFUl)(0xBC);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjCity_Season_21_21__ct)(o, tl_05, arg0);
    }
    return o;
}

extern s32 __vt__21TObjCity_Season_21_21[];

void *destroy__21TObjCity_Season_21_21FPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__21TObjCity_Season_21_21;
        if (*(void **)((s8 *)arg0 + 0xB8) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xB8)); *(s32 *)((s8 *)arg0 + 0xB8) = 0; }
        ((void (*)(void *, int))destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma pop

#define VObj_18_26a62c VObj_18_26a62c_sf2p1056
#define VBase_18_26a62c VBase_18_26a62c_sf2p1056
#pragma push

#include "types.h"

#include <stddef.h>
struct Stack_80183F24 {
    s32 sp8;
    f32 spC;
};

struct RecoveredGlobal_80183F24_lbl_804B5D00 { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80183F24_lbl_804B5D00_size[sizeof(RecoveredGlobal_80183F24_lbl_804B5D00) == 0x38 ? 1 : -1];

struct RecoveredGlobal_80184054_lbl_8050DC38 {
    s32 value;
    u8 remaining[0x14];
};

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_80183FC0_lbl_8050DC38 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80183FC0_lbl_8050DC50 {
    s32 value;
    u8 remaining[0x14];
};

extern "C" {

s32 create_particle_emitter(void *, int);
int get_anim_frame__25TObjCity_Season_EasterEggFPv(void* a0);
u8 *init_city_season_object(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
#define __vt__21TObjCity_Season_21_21 (*(RecoveredGlobal_80183F24_lbl_804B5D00 *)&__vt__21TObjCity_Season_21_21)
extern s32 TObjCity_Season_21_21__name;
#define lbl_805DBC4C (*(const f32 *)&lbl_805DBC4C)
u8 *TObjCity_Season_21_21__ct(u8 *arg0, s32 arg1, s32 arg2);
extern RecoveredGlobal_80184054_lbl_8050DC38 city_season_easter_egg_model_table;
void run_task__32TObjCity_Season_HalloweenPumpkinFv(u8 *arg0);

s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);

extern RecoveredGlobal_80184054_lbl_8050DC38 city_season_easter_egg_model_table;
#define city_season_xmas_model_table (*(RecoveredGlobal_80183FC0_lbl_8050DC50 *)&city_season_xmas_model_table)
#define lbl_805DBC44 (*(const f32 *)&lbl_805DBC44)
void render__32TObjCity_Season_HalloweenPumpkinFv(u8 *arg0);
}

extern "C" {

u8 *TObjCity_Season_21_21__ct(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_80183F24, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80183F24, spC) == 0x4) ? 1 : -1];
    Stack_80183F24 stack;
    ((s32 (*)(void *, void *, void *, int, f32))init_city_season_object)((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (4), (f32) (lbl_805DBC64));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__21TObjCity_Season_21_21.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjCity_Season_21_21__name;
    *(s32 *)((s8 *)arg0 + 0xB4) = 0;
    if (((u32 (*)(void *))get_anim_frame__25TObjCity_Season_EasterEggFPv)((void *) (arg0)) != 0U) {
        ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.spC += lbl_805DBC4C;
        *(s32 *)((s8 *)arg0 + 0xB8) = create_particle_emitter((void *) (&stack.sp8), (int) (0x90));
    } else {
        *(s32 *)((s8 *)arg0 + 0xB8) = 0;
    }
    return arg0;
}
typedef char RecoveredGlobal_80184054_lbl_8050DC38_size[sizeof(RecoveredGlobal_80184054_lbl_8050DC38) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_80183FC0_lbl_8050DC38_size[sizeof(RecoveredGlobal_80183FC0_lbl_8050DC38) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_80183FC0_lbl_8050DC50_size[sizeof(RecoveredGlobal_80183FC0_lbl_8050DC50) == 0x18 ? 1 : -1];
void TObjCity_Season_HalloweenPumpkin::render() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r31;
    temp_r31 = (u8 *)(*(u8 **)((s8 *)(&(*(RecoveredGlobal_80183FC0_lbl_8050DC38 *)&city_season_easter_egg_model_table).value) + 0xC));
    if ((temp_r31 != NULL) && (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBC44, lbl_805DBC68) != 0)) {
        ((s32 (*)(int))set_global_param__8TObjFishFl)((int) (*(s32 *)((s8 *)(&city_season_xmas_model_table.value) + 0xC)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        ((s32 (*)(int, int))rotate_matrix_y)((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        ((s32 (*)(void *))draw_chunk_object)((void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)temp_r31 + 0x42C)) + 8)));
        pop_matrix();
    }
}

void TObjCity_Season_HalloweenPumpkin::run_task() {
    u8 *arg0 = (u8 *)this;
    if ((u32) *(u32 *)((s8 *)(&city_season_easter_egg_model_table.value) + 0xC) != 0U) {
        *(s32 *)((s8 *)arg0 + 0x60) = (s32) (*(s32 *)((s8 *)arg0 + 0x60) + 0x40);
    }
}

}

#pragma pop

#undef VBase_18_26a62c
#undef VObj_18_26a62c
#undef __vt__21TObjCity_Season_21_21
#undef lbl_805DBC4C
#undef city_season_xmas_model_table
#undef lbl_805DBC44
#pragma push
#include "types.h"

extern "C" {

void *TObjCity_Season_HalloweenPumpkin__create(void *arg0);
void *dt__32TObjCity_Season_HalloweenPumpkinFPvs(void *arg0, s16 arg1);
u8 *TObjCity_Season_HalloweenPumpkin__ct(u8 *arg0, s32 arg1, s32 arg2);
void __dl__7TObjectFPv(void *);

void destroy_particle__13TParticleCtrlFPvs(void *, int);

extern void *tl_05;

void *TObjCity_Season_HalloweenPumpkin__create(void *arg0) {
    void *o = ((void * (*)(int))__nw__7TObjectFUl)(0x90);
    if (o != NULL) {
        o = ((void * (*)(void *, void *, void *))TObjCity_Season_HalloweenPumpkin__ct)(o, tl_05, arg0);
    }
    return o;
}

extern s32 __vt__32TObjCity_Season_HalloweenPumpkin[];

void *dt__32TObjCity_Season_HalloweenPumpkinFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__32TObjCity_Season_HalloweenPumpkin;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}

#pragma pop

#define VObj_18_1a504b VObj_18_1a504b_sf2p1248
#define VBase_18_1a504b VBase_18_1a504b_sf2p1248
#define VObj_18_26a62c VObj_18_26a62c_sf2p1248
#define VBase_18_26a62c VBase_18_26a62c_sf2p1248
#pragma push

#include "types.h"

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

struct RecoveredGlobal_8018417C_lbl_8050DC38 {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8018417C_lbl_8050DC50 {
    s32 value;
    u8 remaining[0x14];
};

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_8018411C_lbl_804B5D38 {
    s32 value;
    u8 remaining[0x30];
};

extern "C" {

s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);

#define city_season_easter_egg_model_table (*(RecoveredGlobal_8018417C_lbl_8050DC38 *)&city_season_easter_egg_model_table)
#define city_season_xmas_model_table (*(RecoveredGlobal_8018417C_lbl_8050DC50 *)&city_season_xmas_model_table)
#define lbl_805DBC4C (*(const f32 *)&lbl_805DBC4C)
void render__26TObjCity_Season_XmasWreathFv(u8 *arg0);
s32 construct_world_actor_base(void *, void *);
#define __vt__32TObjCity_Season_HalloweenPumpkin (*(RecoveredGlobal_8018411C_lbl_804B5D38 *)&__vt__32TObjCity_Season_HalloweenPumpkin)
extern s32 TObjCity_Season_HalloweenPumpkin__name;
u8 *TObjCity_Season_HalloweenPumpkin__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_8018417C_lbl_8050DC38_size[sizeof(RecoveredGlobal_8018417C_lbl_8050DC38) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8018417C_lbl_8050DC50_size[sizeof(RecoveredGlobal_8018417C_lbl_8050DC50) == 0x18 ? 1 : -1];

typedef char RecoveredGlobal_8018411C_lbl_804B5D38_size[sizeof(RecoveredGlobal_8018411C_lbl_804B5D38) == 0x34 ? 1 : -1];
u8 *TObjCity_Season_HalloweenPumpkin__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_world_actor_base((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__32TObjCity_Season_HalloweenPumpkin.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjCity_Season_HalloweenPumpkin__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    return arg0;
}

void TObjCity_Season_XmasWreath::render() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r31;
    temp_r31 = (u8 *)(*(u8 **)((s8 *)(&city_season_easter_egg_model_table.value) + 8));
    if ((temp_r31 != NULL) && (((VObj_18_26a62c *)(arg0))->m8(lbl_805DBC6C, lbl_805DBC4C) != 0)) {
        ((s32 (*)(int))set_global_param__8TObjFishFl)((int) (*(s32 *)((s8 *)(&city_season_xmas_model_table.value) + 8)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        ((s32 (*)(int, int))rotate_matrix_y)((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        ((s32 (*)(void *))draw_chunk_object)((void *) (*(s32 *)((s8 *)(*(u8 **)((s8 *)temp_r31 + 0x42C)) + 0x58)));
        pop_matrix();
    }
}

}

#pragma pop

#undef VBase_18_26a62c
#undef VObj_18_26a62c
#undef VBase_18_1a504b
#undef VObj_18_1a504b
#undef city_season_easter_egg_model_table
#undef city_season_xmas_model_table
#undef lbl_805DBC4C
#undef __vt__32TObjCity_Season_HalloweenPumpkin
#define VObj_18_1a504b VObj_18_1a504b_sf2p1365
#define VBase_18_1a504b VBase_18_1a504b_sf2p1365
#pragma push

#include "types.h"

struct Base_80184314_80184210 { char pad[0x18]; };
struct VObj_80184314_80184210 : Base_80184314_80184210 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_801842B4_lbl_804B5D6C {
    s32 value;
    u8 remaining[0x30];
};

extern "C" {
s32 construct_world_actor_base(void *, void *);
extern s32 __vt__26TObjCity_Season_XmasWreath[];
extern s32 TObjCity_Season_XmasWreath__name;
u8 *TObjCity_Season_XmasWreath__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void run_task__24TObjCity_Season_XmasTreeFv(s32 arg0);
void *TObjCity_Season_XmasWreath__create(void *arg0);
void *dt__26TObjCity_Season_XmasWreathFPvs(void *arg0, s16 arg1);
void render__24TObjCity_Season_XmasTreeFv(u8 *arg0);
s32 post_translate_matrix(void *);
struct Obj_80184A08; s32 advance_anim_time__25TObjCity_Season_EasterEggFPvif(Obj_80184A08 *arg0, s32 arg1, f32 farg0);

s32 draw_chunk_object(s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);

void destroy_particle__13TParticleCtrlFPvs(void *, int);
int get_anim_frame__25TObjCity_Season_EasterEggFPv(void* a0);
s32 set_global_param__8TObjFishFl(s32);

extern void *tl_05;

void *TObjCity_Season_XmasWreath__create(void *arg0) {
    void *o = ((void * (*)(int))__nw__7TObjectFUl)(0x90);
    if (o != NULL) {
        o = TObjCity_Season_XmasWreath__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__26TObjCity_Season_XmasWreath[];

void *dt__26TObjCity_Season_XmasWreathFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__26TObjCity_Season_XmasWreath;
        destroy_particle__13TParticleCtrlFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 city_season_xmas_model_table[];
#define lbl_805DBC40 (*(const f32 *)&lbl_805DBC40)
#define lbl_805DBC44 (*(const f32 *)&lbl_805DBC44)

typedef char RecoveredGlobal_801842B4_lbl_804B5D6C_size[sizeof(RecoveredGlobal_801842B4_lbl_804B5D6C) == 0x34 ? 1 : -1];
u8 *TObjCity_Season_XmasWreath__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_world_actor_base((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_801842B4_lbl_804B5D6C *)&__vt__26TObjCity_Season_XmasWreath).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjCity_Season_XmasWreath__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    return arg0;
}

void TObjCity_Season_XmasTree::render() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;

    temp_r3 = ((u8 * (*)())get_anim_frame__25TObjCity_Season_EasterEggFPv)();
    if ((temp_r3 != NULL) && (((VObj_80184314_80184210 *)arg0)->m8(lbl_805DBC44, lbl_805DBC40) != 0)) {
        set_global_param__8TObjFishFl(*(s32 *)((s8 *)city_season_xmas_model_table + 8));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        ((s32 (*)(s32, s32, f32))draw_model_motion)(*(s32 *)((s8 *)(*(void **)((s8 *)temp_r3 + 0x42C)) + 0x78), *(s32 *)((s8 *)(*(void **)((s8 *)temp_r3 + 0x430)) + 0xC), *(f32 *)((s8 *)arg0 + 0xB0));
        ((s32 (*)(s32, s32, f32))draw_model_motion)(*(s32 *)((s8 *)(*(void **)((s8 *)temp_r3 + 0x42C)) + 0x68), *(s32 *)((s8 *)(*(void **)((s8 *)temp_r3 + 0x430)) + 4), *(f32 *)((s8 *)arg0 + 0xB0));
        draw_chunk_object(*(s32 *)((s8 *)(*(void **)((s8 *)temp_r3 + 0x42C)) + 0x88));
        draw_chunk_object(*(s32 *)((s8 *)(*(void **)((s8 *)temp_r3 + 0x42C)) + 0x98));
        pop_matrix();
    }
}

void TObjCity_Season_XmasTree::run_task() {
    s32 arg0 = (s32)this;
    ((s32 (*)(s32, s32, f32))advance_anim_time__25TObjCity_Season_EasterEggFPvif)(arg0, 1, lbl_805DBC70);
}

}

#pragma pop

#undef VBase_18_1a504b
#undef VObj_18_1a504b
#undef lbl_805DBC40
#undef lbl_805DBC44
#pragma push

#include "types.h"

#include <stddef.h>
struct Stack_801844C8 {
    s32 sp8;
    f32 spC;
};

struct RecoveredGlobal_801844C8_lbl_804B5DA0 { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_801844C8_lbl_804B5DA0_size[sizeof(RecoveredGlobal_801844C8_lbl_804B5DA0) == 0x38 ? 1 : -1];

extern "C" {

s32 create_particle_emitter(void *, int);
int get_anim_frame__25TObjCity_Season_EasterEggFPv(void* a0);
u8 *init_city_season_object(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
extern s32 __vt__24TObjCity_Season_XmasTree[];
extern s32 TObjCity_Season_XmasTree__name;
u8 *TObjCity_Season_XmasTree__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

struct VBase_8018455c_80184408 { char pad[0x18]; };
struct VObj_8018455c_80184408 : VBase_8018455c_80184408 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

void run_task__30TObjCity_Season_ValentineHeartFv(s32 arg0);
void *TObjCity_Season_XmasTree__create(void *arg0);
void *dt__24TObjCity_Season_XmasTreeFPvs(void *arg0, s16 arg1);
void render__30TObjCity_Season_ValentineHeartFv(u8 *arg0);
s32 post_translate_matrix(void *);
struct Obj_80184A08; s32 advance_anim_time__25TObjCity_Season_EasterEggFPvif(Obj_80184A08 *arg0, s32 arg1, f32 farg0);

s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);

void *destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1);
void queue_destruction__7TObjectFv(void *);
s32 set_global_param__8TObjFishFl(s32);

extern void *tl_05;

void *TObjCity_Season_XmasTree__create(void *arg0) {
    void *o = ((void * (*)(int))__nw__7TObjectFUl)(0xB8);
    if (o != NULL) {
        o = TObjCity_Season_XmasTree__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__24TObjCity_Season_XmasTree[];

void *dt__24TObjCity_Season_XmasTreeFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__24TObjCity_Season_XmasTree;
        if (*(void **)((s8 *)arg0 + 0xB4) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xB4)); *(s32 *)((s8 *)arg0 + 0xB4) = 0; }
        ((void (*)(void *, int))destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 city_season_xmas_model_table[];
#define lbl_805DBC40 (*(const f32 *)&lbl_805DBC40)
#define lbl_805DBC44 (*(const f32 *)&lbl_805DBC44)

u8 *TObjCity_Season_XmasTree__ct(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_801844C8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801844C8, spC) == 0x4) ? 1 : -1];
    Stack_801844C8 stack;
    ((s32 (*)(void *, void *, void *, int, f32))init_city_season_object)((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (2), (f32) (lbl_805DBC74));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_801844C8_lbl_804B5DA0 *)&__vt__24TObjCity_Season_XmasTree).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjCity_Season_XmasTree__name;
    if (((u32)((u8 * (*)(void *))get_anim_frame__25TObjCity_Season_EasterEggFPv)((void *)((void *) (arg0)))) != 0U) {
        ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.spC += lbl_805DBC18;
        *(s32 *)((s8 *)arg0 + 0xB4) = create_particle_emitter((void *) (&stack.sp8), (int) (0x90));
    } else {
        *(s32 *)((s8 *)arg0 + 0xB4) = 0;
    }
    return arg0;
}

void TObjCity_Season_ValentineHeart::render() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;

    temp_r3 = ((u8 * (*)(void *))get_anim_frame__25TObjCity_Season_EasterEggFPv)((void *)(arg0));
    if ((temp_r3 != NULL) && (((VObj_8018455c_80184408*)arg0)->m8(lbl_805DBC44, lbl_805DBC40) != 0)) {
        set_global_param__8TObjFishFl(*(s32 *)((s8 *)city_season_xmas_model_table + 4));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        ((s32 (*)(s32, s32, f32))draw_model_motion)(*(s32 *)((s8 *)(*(void **)((s8 *)temp_r3 + 0x42C)) + 0x28), *(s32 *)((s8 *)(*(void **)((s8 *)temp_r3 + 0x430)) + 0x14), *(f32 *)((s8 *)arg0 + 0xB0));
        pop_matrix();
    }
}

void TObjCity_Season_ValentineHeart::run_task() {
    s32 arg0 = (s32)this;
    ((s32 (*)(s32, s32, f32))advance_anim_time__25TObjCity_Season_EasterEggFPvif)(arg0, 1, lbl_805DBC70);
}

}

#pragma pop

#undef lbl_805DBC40
#undef lbl_805DBC44
#pragma push

#include "types.h"

#include <stddef.h>
struct Stack_801846E0 {
    s32 sp8;
    f32 spC;
};

struct RecoveredGlobal_801846E0_lbl_804B5DD8 { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_801846E0_lbl_804B5DD8_size[sizeof(RecoveredGlobal_801846E0_lbl_804B5DD8) == 0x38 ? 1 : -1];

extern "C" {

s32 create_particle_emitter(void *, int);
int get_anim_frame__25TObjCity_Season_EasterEggFPv(void* a0);
u8 *init_city_season_object(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
extern s32 __vt__30TObjCity_Season_ValentineHeart[];
extern s32 TObjCity_Season_ValentineHeart__name;
u8 *TObjCity_Season_ValentineHeart__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

struct VBase_8018455c_80184620 { char pad[0x18]; };
struct VObj_8018455c_80184620 : VBase_8018455c_80184620 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

void *TObjCity_Season_ValentineHeart__create(void *arg0);
void *destroy__30TObjCity_Season_ValentineHeartFPvs(void *arg0, s16 arg1);
void render__25TObjCity_Season_EasterEggFv(u8 *arg0);
s32 post_translate_matrix(void *);
s32 draw_chunk_object(s32);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
void __dl__7TObjectFPv(void *);

void *destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1);
void queue_destruction__7TObjectFv(void *);
s32 set_global_param__8TObjFishFl(s32);

extern void *tl_05;

void *TObjCity_Season_ValentineHeart__create(void *arg0) {
    void *o = ((void * (*)(int))__nw__7TObjectFUl)(0xB8);
    if (o != NULL) {
        o = TObjCity_Season_ValentineHeart__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__30TObjCity_Season_ValentineHeart[];

void *destroy__30TObjCity_Season_ValentineHeartFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__30TObjCity_Season_ValentineHeart;
        if (*(void **)((s8 *)arg0 + 0xB4) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xB4)); *(s32 *)((s8 *)arg0 + 0xB4) = 0; }
        ((void (*)(void *, int))destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 city_season_xmas_model_table[];
#define lbl_805DBC40 (*(const f32 *)&lbl_805DBC40)
#define lbl_805DBC44 (*(const f32 *)&lbl_805DBC44)

u8 *TObjCity_Season_ValentineHeart__ct(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_801846E0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_801846E0, spC) == 0x4) ? 1 : -1];
    Stack_801846E0 stack;
    ((s32 (*)(void *, void *, void *, int, f32))init_city_season_object)((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (1), (f32) (lbl_805DBC78));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_801846E0_lbl_804B5DD8 *)&__vt__30TObjCity_Season_ValentineHeart).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjCity_Season_ValentineHeart__name;
    if (((u32)((u8 * (*)(void *))get_anim_frame__25TObjCity_Season_EasterEggFPv)((void *)((void *) (arg0)))) != 0U) {
        ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.spC += lbl_805DBC18;
        *(s32 *)((s8 *)arg0 + 0xB4) = create_particle_emitter((void *) (&stack.sp8), (int) (0x90));
    } else {
        *(s32 *)((s8 *)arg0 + 0xB4) = 0;
    }
    return arg0;
}

void TObjCity_Season_EasterEgg::render() {
    u8 *arg0 = (u8 *)this;
    u8 *temp_r3;

    temp_r3 = ((u8 * (*)(void *))get_anim_frame__25TObjCity_Season_EasterEggFPv)((void *)(arg0));
    if ((temp_r3 != NULL) && (((VObj_8018455c_80184620*)arg0)->m8(lbl_805DBC44, lbl_805DBC40) != 0)) {
        set_global_param__8TObjFishFl(city_season_xmas_model_table[0]);
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        draw_chunk_object(*(s32 *)((s8 *)(*(void **)((s8 *)temp_r3 + 0x42C)) + 0x18));
        draw_chunk_object(*(s32 *)((s8 *)(*(void **)((s8 *)temp_r3 + 0x42C)) + 0x8));
        pop_matrix();
    }
}

}

#pragma pop

#undef lbl_805DBC40
#undef lbl_805DBC44
#pragma push

#include "types.h"

#include <stddef.h>
struct Stack_8018493C {
    s32 sp8;
    f32 spC;
};

struct RecoveredGlobal_8018493C_lbl_804B5E10 { s32 value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_8018493C_lbl_804B5E10_size[sizeof(RecoveredGlobal_8018493C_lbl_804B5E10) == 0x38 ? 1 : -1];

struct Info_80184A08 { u32 f0; u32 n; };

struct Ent_80184A08 { u32 f0; Info_80184A08 *info; };

struct Anim_80184A08 { u8 pad[0x430]; Ent_80184A08 *ents; };

struct Obj_80184A08 { u8 pad[0xB0]; f32 t; };

extern "C" {

s32 create_particle_emitter(void *, int);
int get_anim_frame__25TObjCity_Season_EasterEggFPv(void* a0);
u8 *init_city_season_object(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
extern s32 __vt__25TObjCity_Season_EasterEgg[];
extern s32 TObjCity_Season_EasterEgg__name;
u8 *TObjCity_Season_EasterEgg__ct(u8 *arg0, s32 arg1, s32 arg2);

s32 advance_anim_time__25TObjCity_Season_EasterEggFPvif(Obj_80184A08 *arg0, s32 arg1, f32 farg0);
}

extern "C" {

void *TObjCity_Season_EasterEgg__create(void *arg0);
void run_task__25TObjCity_Season_EasterEggFv(void *arg0);
void *destroy__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);

void *destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1);
void queue_destruction__7TObjectFv(void *);

void TObjCity_Season_EasterEgg::run_task() {
    s32 temp_r3;

    if (((u32 (*)(void *))get_anim_frame__25TObjCity_Season_EasterEggFPv)((void *)(this)) != 0U) {
        *(s32 *)((s8 *)this + 0xB4) = (s32) (*(s32 *)((s8 *)this + 0xB4) + 2);
        temp_r3 = *(s32 *)((s8 *)this + 0xB4);
        if (temp_r3 >= 0xFF) {
            *(s32 *)((s8 *)this + 0xB4) = (s32) (temp_r3 - 0xFF);
        }
    }
}

extern void *tl_05;

void *TObjCity_Season_EasterEgg__create(void *arg0) {
    void *o = ((void * (*)(int))__nw__7TObjectFUl)(0xC0);
    if (o != NULL) {
        o = TObjCity_Season_EasterEgg__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern s32 __vt__25TObjCity_Season_EasterEgg[];

void *destroy__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__25TObjCity_Season_EasterEgg;
        if (*(void **)((s8 *)arg0 + 0xB8) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xB8)); *(s32 *)((s8 *)arg0 + 0xB8) = 0; }
        if (*(void **)((s8 *)arg0 + 0xBC) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0xBC)); *(s32 *)((s8 *)arg0 + 0xBC) = 0; }
        ((void (*)(void *, int))destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs)(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TObjCity_Season_EasterEgg__ct(u8 *arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_8018493C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8018493C, spC) == 0x4) ? 1 : -1];
    Stack_8018493C stack;
    ((s32 (*)(void *, void *, void *, int, f32))init_city_season_object)((void *) (arg0), (void *) (arg1), (void *) (arg2), (int) (0), (f32) (lbl_805DBC78));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8018493C_lbl_804B5E10 *)&__vt__25TObjCity_Season_EasterEgg).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjCity_Season_EasterEgg__name;
    *(s32 *)((s8 *)arg0 + 0xB4) = 0;
    if (((u32 (*)(void *))get_anim_frame__25TObjCity_Season_EasterEggFPv)((void *)((void *) (arg0))) != 0U) {
        ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.spC += lbl_805DBC18;
        *(s32 *)((s8 *)arg0 + 0xB8) = create_particle_emitter((void *) (&stack.sp8), (int) (0x90));
        ((s32 (*)(void *, void *))VecCopy__FP3VecPC3Vec)((void *) (&stack.sp8), (void *) (arg0 + 0x38));
        stack.spC += lbl_805DBC7C;
        *(s32 *)((s8 *)arg0 + 0xBC) = create_particle_emitter((void *) (&stack.sp8), (int) (0x91));
    } else {
        *(s32 *)((s8 *)arg0 + 0xB8) = 0;
        *(s32 *)((s8 *)arg0 + 0xBC) = 0;
    }
    return arg0;
}
s32 advance_anim_time__25TObjCity_Season_EasterEggFPvif(Obj_80184A08 *arg0, s32 arg1, f32 farg0) {
    Anim_80184A08 *a;
    f32 lim;
    a = (Anim_80184A08 *)((u32 (*)(void *))get_anim_frame__25TObjCity_Season_EasterEggFPv)(arg0);
    if (a != NULL) {
        lim = (f32)(a->ents[arg1].info->n - 1);
        arg0->t += farg0;
        if (arg0->t >= lim) {
            arg0->t -= lim;
        }
        return 1;
    }
    return 0;
}

}

#pragma pop

#pragma push

#include "types.h"

extern "C" {

void *destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1);
int get_anim_frame__25TObjCity_Season_EasterEggFPv(void* a0);
s32 free_collision_body_parts(void *);
s32 unregister_object_by_id(void *);

s32 destroy_particle_controller__10TObjPlayerFs(void *, s32);

#define city_season_easter_egg_model_table (*(int (*)[1])&city_season_easter_egg_model_table)
int get_anim_frame__25TObjCity_Season_EasterEggFPv(void* a0) {  return city_season_easter_egg_model_table[*(int*)((char*)a0 + 0xac)]; }

extern s32 lbl_804B5E48[];

void *destroy_seasonal_object__25TObjCity_Season_EasterEggFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        u32 var_r0;
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804B5E48;
        var_r0 = (u32) *(u32 *)((s8 *)arg0 + 0xA4);
        if (var_r0 != 0U) {
            unregister_object_by_id(arg0);
            free_collision_body_parts(arg0);
        }
        destroy_particle_controller__10TObjPlayerFs(arg0, 0);
        if (arg1 > 0) {
            ((s32 (*)(void *))__dl__7TObjectFPv)(arg0);
        }
    }
    return arg0;
}

}

#pragma pop

#undef city_season_easter_egg_model_table
#define VObj_18_1a504b VObj_18_1a504b_sf2p1995
#define VBase_18_1a504b VBase_18_1a504b_sf2p1995
#pragma push

#include "types.h"
#include "pso/player/TObjPlayer.h"

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct ByteBlock_28 { u8 bytes[0x28]; };

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct ByteBlock_2C { u8 bytes[0x2C]; };

struct RecoveredGlobal_80184B44_lbl_804B5E48 {
    s32 value;
    u8 remaining[0x34];
};

extern "C" {
s32 init_collision_body_parts(void *, void *, int);

extern const RecoveredGlobal_80184B44_lbl_804440B0 city_season_collision_template;
#define lbl_804B5E48 (*(RecoveredGlobal_80184B44_lbl_804B5E48 *)&lbl_804B5E48)
#define lbl_805DBC1C (*(const f32 *)&lbl_805DBC1C)
u8 *init_city_season_object(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_80184B44_lbl_804440B0_size[sizeof(RecoveredGlobal_80184B44_lbl_804440B0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_80184B44_lbl_804B5E48_size[sizeof(RecoveredGlobal_80184B44_lbl_804B5E48) == 0x38 ? 1 : -1];
u8 *init_city_season_object(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0) {
    struct CopyStack_80184B44 { u8 bytes[0x2C]; };
    CopyStack_80184B44 copy_storage_80184B44;
    u8 *temp_r4;
    ((TObjPlayer *)arg0)->construct_collider_proxy();
    *(s32 **)((s8 *)arg0 + 0x18) = &lbl_804B5E48.value;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    *(s32 *)((s8 *)arg0 + 0xAC) = arg3;
    if (((u32 (*)(void *))get_anim_frame__25TObjCity_Season_EasterEggFPv)((void *) (arg0)) != 0U) {
        temp_r4 = (u8 *)&city_season_collision_template.value - 4;
        *(ByteBlock_2C *)(copy_storage_80184B44.bytes) = *(const ByteBlock_2C *)((s32) temp_r4 + 4);
        (*(f32 *)(copy_storage_80184B44.bytes + 0xC)) = farg0;
        init_collision_body_parts((void *) (arg0), (void *) ((copy_storage_80184B44.bytes)), (int) (1));
        ((TObjPlayer *)arg0)->reset_photon_effect();
    } else {
        *(s32 *)((s8 *)arg0 + 0xA4) = 0;
    }
    *(f32 *)((s8 *)arg0 + 0xB0) = (f32) lbl_805DBC1C;
    return arg0;
}

}

#pragma pop

#undef VBase_18_1a504b
#undef VObj_18_1a504b
#undef lbl_804B5E48
#undef lbl_805DBC1C
#undef lbl_804441FC
extern "C" {
s32 TObjCity_Season_EasterEgg__name = (s32)TObjCity_Season_EasterEgg__class_name;
s32 TObjCity_Season_ValentineHeart__name = (s32)TObjCity_Season_ValentineHeart__class_name;
s32 TObjCity_Season_XmasTree__name = (s32)TObjCity_Season_XmasTree__class_name;
s32 TObjCity_Season_XmasWreath__name = (s32)TObjCity_Season_XmasWreath__class_name;
s32 TObjCity_Season_HalloweenPumpkin__name = (s32)TObjCity_Season_HalloweenPumpkin__class_name;
s32 TObjCity_Season_21_21__name = (s32)TObjCity_Season_21_21__class_name;
s32 TObjCity_Season_SonicAdv2__name = (s32)TObjCity_Season_SonicAdv2__class_name;
s32 TObjCity_Season_Board__name = (s32)TObjCity_Season_Board__class_name;
s32 TObjCity_Season_FireWorkCtrl__name = (s32)TObjCity_Season_FireWorkCtrl__class_name;
s32 TObjCity_Season_FireWork__name = (s32)TObjCity_Season_FireWork__class_name;
}
