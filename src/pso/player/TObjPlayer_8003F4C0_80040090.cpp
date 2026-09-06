#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Fn80040464Base_80040464_8003F4C0 { char pad[0x18]; };
struct Fn80040464VObj_80040464_8003F4C0 : Fn80040464Base_80040464_8003F4C0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct VBase_18_b8f5cb
{
  char pad[0x18];
};

struct VObj_18_b8f5cb : VBase_18_b8f5cb {
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
    virtual s32 m31();
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
    virtual M2C_UNK m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual M2C_UNK m60();
    virtual M2C_UNK m61();
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjPlayer__sub_800192DC(void *);
s32 TObjPlayer__sub_800194AC(void *, int, int);
s32 obj_testFlags30(void *, M2C_UNK);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK fn_8003CFEC(void *);
s32 TObjPlayer__sub_8003FBC8();
void TObjPlayer__sub_80040558(void *);
M2C_UNK TObjPlayer__sub_8004055C(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
extern s32 lbl_805D4C14;
extern const f32 lbl_805D86F4;
void TObjPlayer__sub_800405D8(u8 *arg0);
}

extern "C" {

void TBoss3VoloptCore__sub_80040788(void);
void cache_volopt_resource_ptrs(void);
void teardown_render_state__10TObjPlayerFPv(u8 *arg0);
void update_grabbed_state__10TObjPlayerFPv(void *arg0);
M2C_UNK TBoss1Dragon__sub_80143504(void *);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TCameraCtrl__sub_8006A044(M2C_UNK, f32);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TOMonitorMachine01__sub_803D8B5C(M2C_UNK, f32, f32, f32);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK TObjFish__sub_803E46BC(s32);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
s32 check_demo_mode__10TObjPlayerFv();
int dispatch_shared_handler_a__6TLobbyFPv(void*);
int dispatch_shared_handler_b__6TLobbyFPv(void*);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
s32 obj_testFlags30(void *, M2C_UNK);
int register_boss__6TLobbyFPv(void*);
int register_object__6TLobbyFPv(void*);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK set_grabbed_state__10TObjPlayerFi(M2C_UNK);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, s32);

extern s32 lbl_805D53A0;
extern const f32 lbl_805D86D8;

void update_grabbed_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        if (obj_testFlags30(arg0, 0x02000000) != 0) {
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x40000);
        }
        obj_clearFlags30(arg0, 0x02200200);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        TBoss3Volopt__sub_8022675C(0x4003A81F, 0, 0, 0);
        TBoss3Volopt__sub_8022675C(0x4003BC20, 0, 0, 0);
        if ((s32) lbl_805D53A0 == (s32) M2C_FIELD(arg0, u16 *, 0x2D4)) {
            TCameraCtrl__sub_8006A044(0x1E, lbl_805D86D8);
        }
        M2C_FIELD(arg0, s32 *, 0x3C8) = 0x14;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
            if (M2C_FIELD(arg0, s32 *, 0x388) & 0x40000) {
                set_grabbed_state__10TObjPlayerFi(0xF);
            } else {
                update_if_active__15TObjEneMe1GiGueFPv(arg0, M2C_FIELD(arg0, s32 *, 0x380));
            }
        }
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFBFFFF);
        break;
    }
}

extern s32 some_id_805c6f74;
extern const f32 lbl_805D86B0;
extern const f32 lbl_805D86E8;
extern const f32 lbl_805D86EC;
extern const f32 lbl_805D86F0;

void teardown_render_state__10TObjPlayerFPv(u8 *arg0) {
    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000) && (((Fn80040464VObj_80040464_8003F4C0*)arg0)->m8(lbl_805D86E8, lbl_805D86EC) != 0)) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        TObjPlayer__sub_803D9B2C();
        some_id_805c6f74 &= 0xFFFFFBFF;
        TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
        TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
        if (M2C_FIELD(arg0, s32 *, 0x388) & 0x10000) {
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x398));
            TOMonitorMachine01__sub_803D8B5C(0, lbl_805D86B0, lbl_805D86B0, lbl_805D86F0);
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60) - M2C_FIELD(arg0, s32 *, 0x398));
        } else {
            TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
        }
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        TObjPlayer__sub_803D9B78();
    }
}

void TObjPlayer__sub_80040558(void * _w0) {  }

typedef struct VBase_18_b8f5cb VBase_18_b8f5cb;
typedef struct VObj_18_b8f5cb VObj_18_b8f5cb;
#define PSO_VCALL_VObj_18_b8f5cb_m31(_self) (((VObj_18_b8f5cb *)(_self))->m31())
#define PSO_VCALL_VObj_18_b8f5cb_m61(_self) (((VObj_18_b8f5cb *)(_self))->m61())
#define PSO_VCALL_VObj_18_b8f5cb_m30(_self) (((VObj_18_b8f5cb *)(_self))->m30())
#define PSO_VCALL_VObj_18_b8f5cb_m60(_self) (((VObj_18_b8f5cb *)(_self))->m60())
#define PSO_VCALL_VObj_18_b8f5cb_m53(_self) (((VObj_18_b8f5cb *)(_self))->m53())
void TObjPlayer__sub_800405D8(u8 *arg0) {
  f32 var_f1;
  s32 temp_r3;
  lbl_805D4C14 = TObjPlayer__sub_8003FBC8();
  if (check_demo_mode__10TObjPlayerFv() == 1)
  {
    TObjPlayer__sub_80040558((void *)((void *) arg0));
    return;
  }
  VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x44), (void *) (arg0 + 0x38));
  temp_r3 = *((s32 *) (((s8 *) arg0) + 0x3C8));
  if (temp_r3 > 0)
  {
    *((s32 *) (((s8 *) arg0) + 0x3C8)) = (s32) (temp_r3 - 1);
  }
  if (PSO_VCALL_VObj_18_b8f5cb_m31(arg0) != 0)
  {
    PSO_VCALL_VObj_18_b8f5cb_m61(arg0);
  }
  else
    if (PSO_VCALL_VObj_18_b8f5cb_m30(arg0) != 0)
  {
    if (((s32) (*((s32 *) (0x3C8 + ((s8 *) arg0))))) > 0)
    {
      obj_clearFlags30((void *)((void *) arg0), (M2C_UNK)((int) 0x200));
    }
    else
    {
      PSO_VCALL_VObj_18_b8f5cb_m60(arg0);
    }
  }
  if (obj_testFlags30((void *)((void *) arg0), (M2C_UNK)((int) 0x4000)) != 0)
  {
    if (TObjPlayer__sub_800194AC((void *) arg0, (int) 4, (int) (-1)) <= 0)
    {
      TObjPlayer__sub_800192DC((void *) (arg0 + 0x284));
      obj_clearFlags30((void *)((void *) arg0), (M2C_UNK)((int) 0x4000));
    }
  }
  else
  {
    if (((s16) (*((s16 *) (((s8 *) arg0) + 0x326)))) != ((s32) (*((s32 *) (((s8 *) arg0) + 0x374)))))
    {
      if (((s32) (*((s32 *) (((s8 *) arg0) + 0x37C)))) != (-1))
      {
        *((s32 *) (((s8 *) arg0) + 0x37C)) = -1;
        TObjPlayer__sub_8004055C((void *) arg0);
      }
      *((s16 *) (((s8 *) arg0) + 0x326)) = (s16) (*((s32 *) (((s8 *) arg0) + 0x374)));
      *((s32 *) (((s8 *) arg0) + 0x37C)) = 0;
    }
    TObjPlayer__sub_8004055C((void *) arg0);
    var_f1 = *((f32 *) (((s8 *) arg0) + 0x3C));
    if (var_f1 > lbl_805D86F4)
    {
      if ((arg0 && arg0) && arg0)
      {
      }
    }
    else
    {
      var_f1 = lbl_805D86F4;
    }
    *((f32 *) (((s8 *) arg0) + 0x3C)) = var_f1;
    update_prev_position__10TObjPlayerFPv((void *) arg0);
    fn_8003CFEC((void *) (arg0 + 0x2FC));
    PSO_VCALL_VObj_18_b8f5cb_m53(arg0);
  }
}

void TBoss3VoloptCore__sub_80040788(void) {  }

    extern int lbl_805D4C10;
    extern int lbl_805D4C50;
    extern int lbl_805D4C54;
    extern int lbl_805D4C58;
    extern int lbl_805D4C5C;
    extern int lbl_805D4C60;
void cache_volopt_resource_ptrs(void) { lbl_805D4C60 = lbl_805D4C10; lbl_805D4C50 = register_boss__6TLobbyFPv((void*)33); lbl_805D4C54 = dispatch_shared_handler_b__6TLobbyFPv((void*)33); lbl_805D4C58 = register_object__6TLobbyFPv((void*)33); lbl_805D4C5C = dispatch_shared_handler_a__6TLobbyFPv((void*)33); }

}
