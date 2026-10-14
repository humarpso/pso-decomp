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
    virtual s16 m14();
};

struct VBase_18_24931d
{
  char pad[0x18];
};

struct VObj_18_24931d : VBase_18_24931d {
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
    virtual s32 m30();
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
    virtual M2C_UNK m49(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK);
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
    virtual M2C_UNK m60();
};

struct Param_8012A508 { s32 kind; f32 val; };

struct VBase_8012A508 { char pad[0x18]; };

struct VObj_8012A508 : VBase_8012A508 {
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
    virtual void m21(u32, Param_8012A508 *, u8 *, s32, s32);
    u8 pad1c[0xA4 - 0x1C];
    u8 *recs;
};

struct Self_8012A508 { u8 pad[0xF0]; u32 fF0; u8 padF4[0x1F8 - 0xF4]; s32 mode; };

typedef struct Pl_8012A470
{
  u8 pad[0xF0];
  void *f0;
} Pl_8012A470;

extern "C" {
s8 TObjPlayer__sub_80102C30();
M2C_UNK deliver_hit__11TItemWeaponFPviPviif(void *, u32, u32, s32, s32, f32);
void receive_srank_hit(void *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, f32 farg0);
u8 * TObjPlayer__sub_8012A3B4(void *, M2C_UNK, s32);
u8 *alloc_from_obj_heap__10TObjPlayerFPv(M2C_UNK);
extern s32 tl_05;
u8 *create_state_8012a418__10TObjPlayerFi(s32 arg0);
s32 is_mode_two_and_ready__10TObjPlayerFPv(void *);
s32 update_active_game_effect__10TObjPlayerFPv(void *);
s32 draw_status_icon__10TObjPlayerFPvi(void *, void *);
void deliver_srank_marker(u8 *arg0);
extern const f32 lbl_805DAE60;
extern const f32 lbl_805DAE64;
s32 send_srank_stat_extra__10TObjPlayerFPvUii(void *arg0, u32 arg1, s32 arg2);
s32 get_extended_state__10TObjPlayerFPv(void *);
s32 get_captured_target_collider_index(s32);
u16 get_uid__10TObjPlayerFPv(s32);
s32 get_captured_target_entry(s32, s32);
s32 get_captured_target_count(s32);
s32 send_srank_stat_extra__10TObjPlayerFPvUii(void *arg0, u32 arg1, s32 arg2);
s32 resolve_hittable_target(s32, s32);
void send_srank_stat_extra_to_locks(Pl_8012A470 *arg0);
}

extern "C" {

u8 *create_state_8012a418__10TObjPlayerFi(s32 arg0) {
    u8 *temp_r3;
    u8 *var_r0;
    if (arg0 != 0) {
        temp_r3 = (u8 *)(alloc_from_obj_heap__10TObjPlayerFPv(0x218));
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(TObjPlayer__sub_8012A3B4(temp_r3, tl_05, arg0));
        }
        return var_r0;
    }
    return NULL;
}
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include "types.h"
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef struct Pl_8012A470 Pl_8012A470;
void send_srank_stat_extra_to_locks(Pl_8012A470 *arg0) {
  s32 st;
  s32 i;
  s32 e;
  u16 uid;
  s32 r;
  s32 v;
  st = get_extended_state__10TObjPlayerFPv(arg0->f0);
  if (st != 0)
  {
    for (i = 0; i != get_captured_target_count((((((((((((st & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF) & 0xFFFFFFFFFFFFFFFF); i++)
    {
      e = get_captured_target_entry(st, i);
      uid = get_uid__10TObjPlayerFPv(e);
      r = resolve_hittable_target(uid, v = (s16) ((unsigned long long) get_captured_target_collider_index(e)));
      if (r != 0)
      {
        send_srank_stat_extra__10TObjPlayerFPvUii(arg0, r, v);
      }
    }
  }
}

s32 send_srank_stat_extra__10TObjPlayerFPvUii(void *arg0, u32 arg1, s32 arg2) {
    Self_8012A508 *self = (Self_8012A508 *)arg0;
    VObj_8012A508 *obj = (VObj_8012A508 *)arg1;
    u32 f;
    Param_8012A508 t1;
    Param_8012A508 t2;
    if (obj != NULL && (f = self->fF0) != 0) {
        switch (self->mode) {
        case 1: {
            t1.kind = 0xB;
            t1.val = lbl_805DAE60;
            Param_8012A508 p = t1;
            obj->m21(f, &p, obj->recs + arg2 * 0x2C, -1, -1);
            break;
        }
        case 2: {
            t2.kind = 0xC;
            t2.val = lbl_805DAE64;
            Param_8012A508 p = t2;
            obj->m21(f, &p, obj->recs + arg2 * 0x2C, -1, -1);
            break;
        }
        }
    }
}

void receive_srank_hit(void *arg0, s32 arg1, u32 arg2, s32 arg3, s32 arg4, f32 farg0) {
    u32 f;
    if (TObjPlayer__sub_80102C30() == 2) {
        f = M2C_FIELD(arg0, u32 *, 0xF0);
        if ((f != 0U) && (arg2 != 0U)) {
            switch (M2C_FIELD(arg0, s32 *, 0x1F8)) {
            case 1:
            case 2:
                if (arg3 == 2) {
                    send_srank_stat_extra__10TObjPlayerFPvUii((void *)(arg0), (u32)(arg2), (s32)(arg4));
                } else {
                    deliver_hit__11TItemWeaponFPviPviif(arg0, f, arg2, arg3, arg4, farg0);
                }
                break;
            default:
                deliver_hit__11TItemWeaponFPviPviif(arg0, f, arg2, arg3, arg4, farg0);
                break;
            }
        }
    }
}
typedef struct VBase_18_24931d VBase_18_24931d;
typedef struct VObj_18_24931d VObj_18_24931d;
#define PSO_VCALL_VObj_18_24931d_m60(_self) (((VObj_18_24931d *)(_self))->m60())
#define PSO_VCALL_VObj_18_24931d_m30(_self) (((VObj_18_24931d *)(_self))->m30())
#define PSO_VCALL_VObj_18_24931d_m49(_self, _arg0, _arg1, _arg2, _arg3) (((VObj_18_24931d *)(_self))->m49((_arg0), (_arg1), (_arg2), (_arg3)))
void deliver_srank_marker(u8 *arg0) {
  M2C_UNK sp8;
  s32 temp_r0;
  s32 temp_r3;
  s32 new_var;
  PSO_VCALL_VObj_18_24931d_m60(arg0);
  temp_r3 = PSO_VCALL_VObj_18_24931d_m30(arg0);
  if (temp_r3 & 1)
  {
    temp_r0 = *((s32 *) (((s8 *) arg0) + 0x1F8));
    if (temp_r0 < 3)
    {
      if (temp_r0 < 1)
      {
        if ((arg0 && arg0) && arg0)
        {
        }
        goto block_7;
      }
      if (is_mode_two_and_ready__10TObjPlayerFPv((void *) arg0) != 0)
      {
        send_srank_stat_extra_to_locks((Pl_8012A470 *)((void *) arg0));
        return;
      }
      update_active_game_effect__10TObjPlayerFPv((void *) arg0);
      return;
    }
    block_7:
    update_active_game_effect__10TObjPlayerFPv((void *) arg0);
    return;
  }
  if ((new_var = temp_r3) & 2)
  {
    draw_status_icon__10TObjPlayerFPvi((void *) arg0, (void *) (&sp8));
    PSO_VCALL_VObj_18_24931d_m49(arg0, &sp8, 0, 0, 1);
  }
}

}
