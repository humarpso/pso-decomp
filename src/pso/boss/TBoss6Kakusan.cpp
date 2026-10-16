#include "types.h"
#include "pso/boss/TBoss6Kakusan.h"
#include "pso/boss/TBoss6Type1.h"
#include "pso/boss/TBoss4Type2.h"
#include "pso/boss/TBoss6PlotFalz.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TNowLoading.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdLdQuestPrtGC.h"

struct RecoveredGlobal_80322994___vt__13TBoss6Kakusan { s32 value; u8 remaining[0x14]; };

struct V3_80322644 { f32 x; f32 y; f32 z; };

struct Obj_80322644 { u8 pad[0x30]; V3_80322644 pos; };

struct Vec_803226C0 { f32 x, y, z; };

struct Vec_80322438
{
  f32 x;
  f32 y;
  f32 z;
};

struct Hit_80322438
{
  s32 a;
  s32 b;
  s32 c;
  f32 f;
};

struct Base_80322438
{
  char pad[0x18];
};

struct VObj_80322438 : Base_80322438 {
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
    virtual void m21(s32, void *, s32, s32, s32);
};

extern "C" {
u8 *__nw__7TObjectFUl(s32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u32 create_particle_emitter(void *, int);
s32 __ct__7TObjectFP7TObject(void *, void *);
f32 vector_length(void *);
extern s32 __vt__13TBoss6Kakusan[];
extern s32 TBoss6Kakusan__name;
extern const f32 TBoss6Kakusan__data_805DF518;
extern const f32 TBoss6Kakusan__data_805DF51C;
extern const f32 lbl_805DF53C;
u8 *TBoss6Kakusan__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg4, f32 farg0);
f32 vector_length(void *);
extern const f32 TBoss6Kakusan__data_805DF518;
extern const f32 lbl_805DF52C;
extern const f32 lbl_805DF530;
extern const f32 lbl_805DF534;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void queue_destruction__7TObjectFv(void *);
s32 query_teammate_state__9TObjEneDDFv();
void direction_to_rotation_xz(void *, void *, void *);
u32 get_player_by_client_id(s32);
s32 is_active__14TBoss6PlotFalzFv();
int TBoss6Kakusan__sub_8032263C(void);
void vec3_add_to(void *, void *);
f32 vector_length(void *);
void subtract_vector(void *, void *);
f32 normalize_vector(void *);
extern s32 TBoss6Kakusan__homing_start_frame;
extern u8 boss6_kakusan_homing_start_initialized;
extern s32 boss6_kakusan_homing_end_frame;
extern u8 TBoss6Kakusan__homing_end_frame_initialized;
extern const f32 TBoss6Kakusan__data_805DF51C;
extern const f32 lbl_805DF538;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *get_player_data__10TObjPlayerFi(s32);
void vec3_add_to(void *, void *);
f32 vector_length(void *);
void subtract_vector(void *, void *);
extern const f32 TBoss6Kakusan__data_805DF518;
extern const f32 TBoss6Kakusan__data_805DF51C;
extern const f32 lbl_805DF520;
extern const f32 lbl_805DF524;
extern const f32 lbl_805DF528;
}

extern "C" {

int TBoss6Kakusan__sub_8032263C(void);
void *__dt__13TBoss6KakusanFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

#pragma push
#pragma opt_propagation off
typedef struct Base_80322438 Base_80322438;
typedef struct Hit_80322438 Hit_80322438;
typedef struct VObj_80322438 VObj_80322438;
typedef struct Vec_80322438 Vec_80322438;
#define PSO_VCALL_VObj_80322438_m21(_self, _arg0, _arg1, _arg2, _arg3, _arg4) (((VObj_80322438 *)(_self))->m21((_arg0), (_arg1), (_arg2), (_arg3), (_arg4)))
void TBoss6Kakusan::check_beam_player_hits() {
    u8 *arg0 = (u8 *)this;
  Vec_80322438 dir;
  Vec_80322438 p;
  Vec_80322438 q;
  Hit_80322438 h;
  s32 n;
  s32 i;
  u8 *pl;
  s32 found;
  f32 len;
  f32 step;
  f32 t;
  n = TLobby::get_game_mode();
  for (i = 0; i < n; i++)
  {
    pl = get_player_data__10TObjPlayerFi(i);
    if (pl == 0)
    {
      continue;
    }
    step = *((f32 *) (((s8 *) arg0) + 0x24));
    found = 0;
    VecCopy__FP3VecPC3Vec(&p, arg0 + 0x30);
    VecCopy__FP3VecPC3Vec(&dir, arg0 + 0x48);
    subtract_vector(&dir, &p);
    len = vector_length(&dir);
    t = TBoss6Kakusan__data_805DF518;
    if (len > TBoss6Kakusan__data_805DF51C)
    {
      f32 s = step / len;
      dir.x *= s;
      dir.y *= s;
      dir.z *= s;
    }
    while (t <= len)
    {
      f32 y = *((f32 *) (((s8 *) pl) + 0x3C));
      f32 ar = *((f32 *) (((s8 *) arg0) + 0x24));
      f32 py = p.y;
      f32 hi = ar + (lbl_805DF520 + y);
      f32 lo = y - ar;
      if ((!(py < (y - ar))) && (!(py > hi)))
      {
        VecCopy__FP3VecPC3Vec(&q, &p);
        subtract_vector(&q, pl + 0x38);
        q.y = TBoss6Kakusan__data_805DF518;
        if (vector_length(&q) <= lbl_805DF524)
        {
          found = 1;
          break;
        }
      }
      t += step;
      vec3_add_to(&p, &dir);
    }
    if (found != 0)
    {
      h.f = (f32) TBoss6PlotFalz::rand_vary_count(*((s32 *) (((s8 *) arg0) + 0x1C)), lbl_805DF528);
      s32 z = 0;
      h.a = z;
      h.c = z;
      h.b = *((s32 *) (&h.f));
      PSO_VCALL_VObj_80322438_m21(pl, *((s32 *) (((s8 *) arg0) + 0x10)), &h, 0, -1, -1);
    }
  }
}
#pragma pop

int TBoss6Kakusan__sub_8032263C(void) { return 0; }

s32 TBoss6Kakusan::is_out_of_range() {
    Obj_80322644 *arg0 = (Obj_80322644 *)this;
    if (arg0->pos.y < lbl_805DF52C || arg0->pos.y > lbl_805DF530) {
        return 1;
    }
    V3_80322644 v = arg0->pos;
    v.y = TBoss6Kakusan__data_805DF518;
    return vector_length(&v) > lbl_805DF534;
}

void TBoss6Kakusan::render() {  }

extern s32 __vt__13TBoss6Kakusan[];

void TBoss6Kakusan::run_task() {
    u8 *arg0 = (u8 *)this;
    Vec_803226C0 v;
    Vec_803226C0 w;
    Vec_803226C0 b;
    Vec_803226C0 a;
    f32 speed;
    u8 *pl;
    if (TObjPlayer::check_demo_mode() != 0) return;
    if (query_teammate_state__9TObjEneDDFv() != 0) return;
    VecCopy__FP3VecPC3Vec(arg0 + 0x48, arg0 + 0x30);
    if ((s8)boss6_kakusan_homing_start_initialized == 0) {
        TBoss6Kakusan__homing_start_frame = 7;
        boss6_kakusan_homing_start_initialized = 1;
    }
    if ((s8)TBoss6Kakusan__homing_end_frame_initialized == 0) {
        boss6_kakusan_homing_end_frame = 0x25;
        TBoss6Kakusan__homing_end_frame_initialized = 1;
    }
    if (*(s32 *)&this->m_2c >= TBoss6Kakusan__homing_start_frame && *(s32 *)&this->m_2c <= boss6_kakusan_homing_end_frame) {
        speed = vector_length(arg0 + 0x3C);
        if (!(speed <= TBoss6Kakusan__data_805DF51C)) {
            pl = (u8 *)get_player_by_client_id(this->m_20);
            if (is_active__14TBoss6PlotFalzFv() != 0) {
                VecCopy__FP3VecPC3Vec(&v, pl + 0x38);
                v.y += lbl_805DF538;
                subtract_vector(&v, arg0 + 0x30);
                if (!(vector_length(&v) <= TBoss6Kakusan__data_805DF51C)) {
                    normalize_vector(&v);
                    v.x *= this->m_28;
                    v.y *= this->m_28;
                    v.z *= this->m_28;
                    VecCopy__FP3VecPC3Vec(&w, arg0 + 0x3C);
                    normalize_vector(&w);
                    vec3_add_to(&v, &w);
                    if (!(vector_length(&v) <= TBoss6Kakusan__data_805DF51C)) {
                        normalize_vector(&v);
                        v.x *= speed;
                        v.y *= speed;
                        v.z *= speed;
                        VecCopy__FP3VecPC3Vec(arg0 + 0x3C, &v);
                    }
                }
            }
        }
    }
    vec3_add_to(arg0 + 0x30, arg0 + 0x3C);
    if (*(void * *)&this->m_54 != NULL) {
        ((TNowLoading *)(*(void * *)&this->m_54))->copy_pos(arg0 + 0x30);
        VecCopy__FP3VecPC3Vec(&a, arg0 + 0x30);
        subtract_vector(&a, arg0 + 0x48);
        direction_to_rotation_xz(&a, &b.x, &b.z);
        *(s32 *)&b.y = 0;
        ((TBoss4Type2 *)(*(void * *)&this->m_54))->copy_vec3(&b);
    }
    if (is_out_of_range() != 0 || ((int (*)(void *))TBoss6Kakusan__sub_8032263C)(arg0) != 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    check_beam_player_hits();
    *(s32 *)&this->m_2c += 1;
}

void *__dt__13TBoss6KakusanFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__13TBoss6Kakusan;
        if (*(void **)((s8 *)arg0 + 0x54) != NULL) { TBoss4Type2::request_destroy((u32)(*(void **)((s8 *)arg0 + 0x54))); *(s32 *)((s8 *)arg0 + 0x54) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_common_subs off
u8 *TBoss6Kakusan__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, s16 arg4, f32 farg0) {
    f32 temp_f2;
    u32 temp_r3;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_80322994___vt__13TBoss6Kakusan *)&__vt__13TBoss6Kakusan).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TBoss6Kakusan__name;
    *(s16 *)((s8 *)arg0 + 0x20) = arg4;
    *(f32 *)((s8 *)arg0 + 0x24) = farg0;
    if (*(f32 *)((s8 *)arg0 + 0x24) <= TBoss6Kakusan__data_805DF518) {
        *(f32 *)((s8 *)arg0 + 0x24) = (f32) lbl_805DF53C;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x3C), (void *) (arg3));
    if (vector_length((void *) (arg0 + 0x3C)) <= TBoss6Kakusan__data_805DF51C) {
        *(f32 *)((s8 *)arg0 + 0x40) = (f32) lbl_805DF53C;
    }
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x30), (void *) (arg2));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x48), (void *) (arg0 + 0x30));
    temp_f2 = *(f32 *)((s8 *)(TLobby::dispatch_shared_handler_a(0x2B)) + 4);
    *(s32 *)((s8 *)arg0 + 0x1C) = (s32) temp_f2;
    if (TBoss6Kakusan__data_805DF518 == temp_f2) {
        *(s32 *)((s8 *)arg0 + 0x1C) = 0x14;
    }
    *(f32 *)((s8 *)arg0 + 0x28) = (f32) *(f32 *)((s8 *)(TLobby::dispatch_shared_handler_a(0x2F)) + 0x10);
    if (*(f32 *)((s8 *)arg0 + 0x28) < TBoss6Kakusan__data_805DF518) {
        *(f32 *)((s8 *)arg0 + 0x28) = (f32) TBoss6Kakusan__data_805DF518;
    }
    *(u32 *)((s8 *)arg0 + 0x54) = create_particle_emitter((void *) (arg0 + 0x30), (int) (0x214));
    temp_r3 = *(u32 *)((s8 *)arg0 + 0x54);
    if (temp_r3 != 0U) {
        ((TBoss4Type2 *)temp_r3)->set_flags((int) (0x40));
    }
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    return arg0;
}
#pragma pop

u8 *TBoss6Type1::create_kakusan(s32 arg0, u8 *arg1, u8 *arg2, s16 arg3, f32 farg0) {
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x58));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TBoss6Kakusan__ct((u8 *)(temp_r3), (s32)(arg0), (u8 *)(arg1), (u8 *)(arg2), arg3, farg0));
    }
    return var_r0;
}

}
