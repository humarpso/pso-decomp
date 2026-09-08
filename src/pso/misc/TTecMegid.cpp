#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80235348_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_80235348_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct RecoveredFields_80235348_arg0
{
  u8 unknown_0[0x64];
  f32 field_64;
  u8 unknown_68[0x8];
  f32 field_70;
  u8 unknown_74[0x50];
  s16 field_C4;
  u8 unknown_C6[0x6];
  f32 field_CC;
  f32 field_D0;
  f32 field_D4;
  u8 unknown_D8[0x18];
  s16 field_F0;
};

extern "C" {
s32 TTecCtrl__sub_8022DBC4(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 TTecAnti__sub_8022B35C(void *, int);
extern RecoveredGlobal_80235348_lbl_804CC510 lbl_804CC510;
extern RecoveredGlobal_80235348_lbl_804CC55C lbl_804CC55C;
void TTecMegid__sub_80235348(u8 *arg0);
}

extern "C" {

void create__9TTecMegidFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void create_ex__9TTecMegidFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fn_802359E4(void *arg0);
void render__9TTecMegidFv(void);
void update_by_state__9TTecMegidFPv(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
s32 TTecMegid__ct(u32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
s32 TTecMegid__sub_80235940(u32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
u32 __nw__7TObjectFUl(s32 a0 = 0);
M2C_UNK queue_destruction__7TObjectFv();
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

void update_by_state__9TTecMegidFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xC6);
    switch (temp_r0) {
    case 0:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        TBoss3Volopt__sub_8022675C(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        return;
    case 2:
    case 3:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A60B, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}

typedef struct RecoveredFields_80235348_arg0 RecoveredFields_80235348_arg0;
typedef struct RecoveredGlobal_80235348_lbl_804CC510 RecoveredGlobal_80235348_lbl_804CC510;
typedef struct RecoveredGlobal_80235348_lbl_804CC55C RecoveredGlobal_80235348_lbl_804CC55C;
typedef char RecoveredGlobal_80235348_lbl_804CC510_size[((sizeof(RecoveredGlobal_80235348_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_80235348_lbl_804CC55C_size[((sizeof(RecoveredGlobal_80235348_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
void TTecMegid__sub_80235348(u8 *arg0) {
  s32 new_var;
  new_var = TTecCtrl__sub_8022DBC4((int) 0x12, (int) ((RecoveredFields_80235348_arg0 *) arg0)->field_C4, (int) 0xFFFF);
  TTecAnti__sub_8022B35C((void *) (arg0 + 0xCC), (int) new_var);
  if ((((s16) ((RecoveredFields_80235348_arg0 *) arg0)->field_C4) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0))
  {
    ((RecoveredFields_80235348_arg0 *) arg0)->field_CC = (f32) ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x48))) + ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x4A))) * ((RecoveredFields_80235348_arg0 *) arg0)->field_C4));
  }
  else
  {
    ((RecoveredFields_80235348_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_80235348_arg0 *) arg0)->field_CC + ((f32) (((RecoveredFields_80235348_arg0 *) arg0)->field_F0 * ((RecoveredFields_80235348_arg0 *) arg0)->field_C4)));
    if (is_technique_ready__8TTecCtrlFv() != 0)
    {
      ((RecoveredFields_80235348_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_80235348_arg0 *) arg0)->field_CC * (*((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 0x90))));
    }
  }
  ((RecoveredFields_80235348_arg0 *) arg0)->field_64 = (f32) (((RecoveredFields_80235348_arg0 *) arg0)->field_D0 + ((f32) ((((s16) ((RecoveredFields_80235348_arg0 *) arg0)->field_C4) / 5) * 2)));
  ((RecoveredFields_80235348_arg0 *) arg0)->field_70 = (f32) ((RecoveredFields_80235348_arg0 *) arg0)->field_D4;
}

void create__9TTecMegidFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x17C);
    if (obj != 0U) {
        TTecMegid__ct(obj, arg0, arg1, arg2, arg3);
    }
}
void create_ex__9TTecMegidFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x17C);
    if (obj != 0U) {
        TTecMegid__sub_80235940(obj, arg0, arg1, arg2, arg3);
    }
}
void render__9TTecMegidFv(void) {  }

void fn_802359E4(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (M2C_FIELD(arg0, s16 *, 0x1E) + 1);
    if ((s16) M2C_FIELD(arg0, s16 *, 0x1E) > (s16) M2C_FIELD(arg0, s16 *, 0x1C)) {
        queue_destruction__7TObjectFv();
    }
}

}
