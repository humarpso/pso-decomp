#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_802308A0_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_802308A0_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct RecoveredFields_802308A0_arg0
{
  u8 unknown_0[0x70];
  f32 field_70;
  u8 unknown_74[0x50];
  s16 field_C4;
  u8 unknown_C6[0x6];
  f32 field_CC;
  u8 unknown_D0[0x4];
  f32 field_D4;
  u8 unknown_D8[0x18];
  s16 field_F0;
};

extern "C" {
s32 TTecCtrl__sub_8022DBC4(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 TTecAnti__sub_8022B35C(void *, int);
extern RecoveredGlobal_802308A0_lbl_804CC510 lbl_804CC510;
extern RecoveredGlobal_802308A0_lbl_804CC55C lbl_804CC55C;
void TTecGiBarta__sub_802308A0(u8 *arg0);
}

extern "C" {

void create__11TTecGiBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_ex__11TTecGiBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__11TTecGiBartaFv(void);
void run_task__11TTecGiBartaFv(void *arg0);
void update_technique_by_phase__11TTecGiBartaFPv(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(M2C_UNK, s32, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_8023A244(void *);
u32 TPhotonMylla__sub_80154CB4(u16);
void *TTecGiBarta__ct(void *, void *, void *, void *, void *);
void *TTecGiBarta__sub_80230CFC(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);
M2C_UNK advance_lifetime_or_destroy(void *);
M2C_UNK fn_8023A694(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK update_technique_slot__10TTecRaFoieFi(s32, M2C_UNK, M2C_UNK);

void update_technique_by_phase__11TTecGiBartaFPv(u8 *arg0) {
    s16 temp_r0;
    s32 temp_r3;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0xC6);
    switch (temp_r0) {
    case 0:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, 0x100, 0);
        }
        return;
    case 1:
        TBoss3Volopt__sub_8022675C(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        return;
    case 2:
    case 3:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x180, 0);
        }
        break;
    case 4:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x250, 0);
        }
        break;
    case 5:
        temp_r3 = TBoss3Volopt__sub_8022675C(0x4002A605, (int) (arg0 + 0x20), 0, 0);
        if (temp_r3 >= 0) {
            update_technique_slot__10TTecRaFoieFi(temp_r3, -0x100, 0);
        }
        break;
    }
}

typedef struct RecoveredFields_802308A0_arg0 RecoveredFields_802308A0_arg0;
typedef struct RecoveredGlobal_802308A0_lbl_804CC510 RecoveredGlobal_802308A0_lbl_804CC510;
typedef struct RecoveredGlobal_802308A0_lbl_804CC55C RecoveredGlobal_802308A0_lbl_804CC55C;
typedef char RecoveredGlobal_802308A0_lbl_804CC510_size[((sizeof(RecoveredGlobal_802308A0_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_802308A0_lbl_804CC55C_size[((sizeof(RecoveredGlobal_802308A0_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
void TTecGiBarta__sub_802308A0(u8 *arg0) {
  s32 new_var;
  new_var = TTecCtrl__sub_8022DBC4((int) 4, (int) ((RecoveredFields_802308A0_arg0 *) arg0)->field_C4, (int) 0xFFFF);
  TTecAnti__sub_8022B35C((void *) (arg0 + 0xCC), (int) new_var);
  if ((((s16) ((RecoveredFields_802308A0_arg0 *) arg0)->field_C4) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0))
  {
    ((RecoveredFields_802308A0_arg0 *) arg0)->field_CC = (f32) ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x10))) + ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x12))) * ((RecoveredFields_802308A0_arg0 *) arg0)->field_C4));
  }
  else
  {
    ((RecoveredFields_802308A0_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_802308A0_arg0 *) arg0)->field_CC + ((f32) (((RecoveredFields_802308A0_arg0 *) arg0)->field_F0 * ((RecoveredFields_802308A0_arg0 *) arg0)->field_C4)));
    if (is_technique_ready__8TTecCtrlFv() != 0)
    {
      ((RecoveredFields_802308A0_arg0 *) arg0)->field_CC = (f32) (((RecoveredFields_802308A0_arg0 *) arg0)->field_CC * (*((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 0x20))));
    }
  }
  ((RecoveredFields_802308A0_arg0 *) arg0)->field_70 = (f32) ((RecoveredFields_802308A0_arg0 *) arg0)->field_D4;
}

void create__11TTecGiBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x178);
    if (o != NULL) {
        TTecGiBarta__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create_ex__11TTecGiBartaFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x178);
    if (o != NULL) {
        TTecGiBarta__sub_80230CFC(o, arg0, arg1, arg2, arg3);
    }
}

void run_task__11TTecGiBartaFv(void *arg0) {
    M2C_FIELD(arg0, u32 *, 0x1C) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xC8));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    fn_8023A694(arg0);
    advance_lifetime_or_destroy(arg0);
    TObjPlayer__sub_8023A244(arg0);
}

void render__11TTecGiBartaFv(void) {  }

}
