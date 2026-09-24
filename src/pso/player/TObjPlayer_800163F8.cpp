#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_800163F8 { char pad[0x18]; };
struct VObj_800163F8 : Base_800163F8 {
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
    virtual s32 m25();
};

struct Stack_80018780
{
  M2C_UNK sp8;
  u8 trailing_storage[0x8];
};

#include <stddef.h>
struct Stack_8001806C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_8001806C_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_8001806C_lbl_8058D490_size[sizeof(RecoveredGlobal_8001806C_lbl_8058D490) == 0x30 ? 1 : -1];

struct VBase_18_cc39a7 { char pad[0x18]; };
struct VObj_18_cc39a7 : VBase_18_cc39a7 {
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
    virtual s32 m17(M2C_UNK);
};

struct Vec_80018660 { f32 x, y, z; };

struct Obj_80018660 { u8 pad[0x38]; Vec_80018660 pos; u8 pad44[0x1c]; s32 angle; u8 pad64[0x238]; Vec_80018660 dest; };

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK TObjPlayer__sub_80017E6C(void *);
M2C_UNK TObjPlayer__sub_800182A0(void *, void *, int);
f32 TObjPlayer__sub_80141CF8(void *, void *);
M2C_UNK TBoss4Zako__sub_803D8910(void *, void *);
extern const f32 TObjPlayer__data_805D7D44;
extern const f32 lbl_805D7DB8;
extern const f32 lbl_805D7DBC;

f32 TObjPlayer__sub_800186E8(s32, u32, void *);
s32 TObjPlayer__sub_800196EC(void);
s32 get_field_3e4__10TObjPlayerFPv(void *);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
extern const f32 lbl_805D7DC8;
f32 TObjPlayer__sub_80018780(s32 arg0, u16 arg1, u32 arg2);
s32 TScene__sub_803D8DB4(int, void *, void *);
s32 TObjPlayer__sub_803D9214(int, void *);
s32 TObjPlayer__sub_803D97F0(void *);
s32 TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_8001806C_lbl_8058D490 lbl_8058D490;
extern const f32 TObjPlayer__data_805D7D24;
void TObjPlayer__sub_8001806C(u8 *arg0, s32 arg1, f32 farg0);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
void TBoss6Type1__sub_803D9370(void *a, void *b);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TObjPlayer__sub_801423A4(s32, s32, s32);
M2C_UNK TObjPlayer__sub_80141F84(s32, s32);
extern const f64 TObjPlayer__data_804340B8;
void TObjPlayer__sub_80018660(Obj_80018660 *self, s32 turn);
}

extern "C" {

s32 copy_position_if_valid__10TObjPlayerFii(s32 arg0, s32 arg1);
s32 try_start_action__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
s32 update_action_timer__10TObjPlayerFPv(u8 *arg0);
void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2);
s32 update_flag30_timer__10TObjPlayerFPv(u8 *arg0);
M2C_UNK TObjPlayer__sub_80010128(void *, M2C_UNK);
M2C_UNK TObjPlayer__sub_800101B0(void *, M2C_UNK);
M2C_UNK show_miss_for_collider__10TObjPlayerFi(void *, s32);
M2C_UNK TObjPlayer__sub_800192DC(void *);
s32 TObjPlayer__sub_800194AC(void *, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_80141F84(s32, s32);
s32 TObjPlayer__sub_801423A4(s32, s32, s32);
s32 TObjPlayer__sub_80156844(s32, s32, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(s32, s32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
s32 obj_testFlags30(void *, M2C_UNK);

s32 try_start_action__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    if (((VObj_800163F8 *)arg0)->m25() != 0) {
        return 1;
    }
    show_miss_for_collider__10TObjPlayerFi(arg0, arg2);
    return 0;
}

s32 update_flag30_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_ret;

    if (obj_testFlags30(arg0, 0x10) != 0) {
        temp_ret = TObjPlayer__sub_800194AC(arg0, 1, -1);
        if (temp_ret > 0) {
            obj_clearFlags30(arg0, 0x3C);
            obj_setFlags30(arg0, 0x10);
            if ((temp_ret % 45) == 0) {
                TObjPlayer__sub_80010128(arg0, 1);
            }
            return 1;
        }
        obj_clearFlags30(arg0, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
        TObjPlayer__sub_800192DC(arg0 + 0x260);
        goto block_6;
    }
block_6:
    return 0;
}

s32 update_action_timer__10TObjPlayerFPv(u8 *arg0) {
    s32 temp_ret;

    if ((obj_testFlags30(arg0, 8) != 0) && ((u16) M2C_FIELD(arg0, u16 *, 0x1C) < 0x1000U)) {
        temp_ret = TObjPlayer__sub_800194AC(arg0, 1, -1);
        if (temp_ret > 0) {
            if ((temp_ret % 45) == 0) {
                TObjPlayer__sub_800101B0(arg0, 1);
            }
            return 1;
        }
        obj_clearFlags30(arg0, 0x3C);
        M2C_FIELD(arg0, s32 *, 0x330) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0x3F);
        TObjPlayer__sub_800192DC(arg0 + 0x260);
        goto block_7;
    }
block_7:
    return 0;
}

f32 enemy_wander_home(u8 *arg0, s32 arg1, f32 farg0, f32 farg1, f32 farg2) {
    struct { f32 sp8,spC,sp10,sp14,sp18,sp1C; } stack;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 var_f31;
    s32 temp_r31;

    var_f31 = TObjPlayer__sub_80141CF8((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x29C));
    if ((var_f31 < (farg0 * farg0)) || (((VObj_18_cc39a7 *)(arg0))->m17(0x96) != 0)) {
        stack.sp18 = TObjPlayer__data_805D7D24;
        stack.sp14 = TObjPlayer__data_805D7D24;
        stack.sp1C = TObjPlayer__data_805D7D44;
        temp_f1 = lbl_805D7DBC * calc_boss4_scale__10TObjPlayerFi(arg0);
        temp_r31 = (s32) (lbl_805D7DB8 * temp_f1);
        TObjPlayer__sub_803D97F0(&lbl_8058D490);
        TObjPlayer__sub_803D9214(0,(void*)temp_r31);
        TScene__sub_803D8DB4((int) (0), (void *) (&stack.sp14), (void *) (&stack.sp14));
        TObjPlayer__sub_803D9B78();
        temp_f1_2 = stack.sp14 * farg1;
        stack.sp14 = temp_f1_2;
        stack.sp1C *= farg2;
        TBoss4Zako__sub_803D8910(&stack.sp14,arg0+0x50);
        stack.sp8 = stack.sp14;
        stack.spC = stack.sp18;
        stack.sp10 = stack.sp1C;
        TObjPlayer__sub_800182A0(arg0,&stack.sp8,1);
        M2C_FIELD(arg0, f32 *, 0x310) = (f32) TObjPlayer__data_805D7D24;
        M2C_FIELD(arg0, f32 *, 0x308) = (f32) TObjPlayer__data_805D7D24;
        M2C_FIELD(arg0, s32 *, 0x2AC) = 0;
    } else {
        TObjPlayer__sub_80018660((Obj_80018660 *)(arg0), (s32)(arg1));
        TObjPlayer__sub_8001806C(arg0, (int) (M2C_FIELD(arg0, s32 *, 0x60)), (f32) (farg0));
        TObjPlayer__sub_80017E6C((void *) (arg0));
        var_f31 = TObjPlayer__sub_80141CF8((void *) (arg0 + 0x29C), (void *) (arg0 + 0x2FC));
        M2C_FIELD(arg0, s32 *, 0x2AC) = (s32) (M2C_FIELD(arg0, s32 *, 0x2AC) + 1);
    }
    return var_f31;
}

void TObjPlayer__sub_8001806C(u8 *arg0, s32 arg1, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_8001806C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8001806C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8001806C, sp10) == 0x8) ? 1 : -1];
    Stack_8001806C stack;
    stack.sp10 = farg0;
    stack.spC = TObjPlayer__data_805D7D24;
    stack.sp8 = TObjPlayer__data_805D7D24;
    TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
    TObjPlayer__sub_803D9214((int) (0), (void *) (arg1));
    TScene__sub_803D8DB4((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    TObjPlayer__sub_803D9B78();
    M2C_FIELD(arg0, f32 *, 0x308) = stack.sp8;
    M2C_FIELD(arg0, f32 *, 0x310) = stack.sp10;
}

s32 copy_position_if_valid__10TObjPlayerFii(s32 arg0, s32 arg1) {
    if (TObjPlayer__sub_80156844(arg0, arg1, 0) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x290, arg0 + 0x38);
        return 1;
    }
    return 0;
}

extern const f64 TObjPlayer__data_804340B8;

void update_angle__10TObjPlayerFPviPv(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r31;

    temp_r31 = (s32) (TObjPlayer__data_804340B8 * get_ad_end_text_start__10TObjPlayerFv(M2C_FIELD(arg2, f32 *, 0), M2C_FIELD(arg2, f32 *, 8)));
    M2C_FIELD(arg0, s32 *, 0x60) = TObjPlayer__sub_801423A4(M2C_FIELD(arg0, s32 *, 0x60), temp_r31, arg1);
    TObjPlayer__sub_80141F84(M2C_FIELD(arg0, s32 *, 0x60), temp_r31);
}
typedef struct Stack_80018780 Stack_80018780;

void TObjPlayer__sub_80018660(Obj_80018660 *self, s32 turn) {
    Vec_80018660 d;
    s32 a;
    VecCopy__FP3VecPC3Vec((s32)&d, (s32)&self->dest);
    TBoss6Type1__sub_803D9370(&d, &self->pos);
    a = (s32)(TObjPlayer__data_804340B8 * get_ad_end_text_start__10TObjPlayerFv(d.x, d.z));
    self->angle = TObjPlayer__sub_801423A4(self->angle, a, turn);
    TObjPlayer__sub_80141F84(self->angle, a);
}

f32 TObjPlayer__sub_80018780(s32 arg0, u16 arg1, u32 arg2) {
  Stack_80018780 stack;
  f32 var_f31;
  s32 temp_r31;
  s32 temp_r3;
  var_f31 = lbl_805D7DC8;
  if (arg1 < 0x1000U)
  {
    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C((u32) arg1);
    if ((temp_r3 != 0) && (!((*((s32 *) (((s8 *) temp_r3) + 0x30))) & 0x800)))
    {
      ;
      if (get_field_3e4__10TObjPlayerFPv((void *) temp_r3) == TObjPlayer__sub_800196EC())
      {
        var_f31 = TObjPlayer__sub_800186E8(arg0, (u32) temp_r3, &stack.sp8);
        if (arg2 != 0U)
        {
          VecCopy__FP3VecPC3Vec((s32)((void *) arg2), (s32)((void *) (&stack.sp8)));
        }
      }
    }
  }
  return var_f31;
}

}
