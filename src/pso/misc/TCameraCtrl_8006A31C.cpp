#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8006A5DC_TCameraCtrl__data_804FF628 {
    u8 value;
    u8 remaining[0xB];
};

struct VBase_18_f8ef8c
{
  char pad[0x18];
};

struct VObj_18_f8ef8c : VBase_18_f8ef8c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual M2C_UNK m5();
};

struct RecoveredGlobal_8006A788_camera_controller_registry
{
  M2C_UNK value;
  u8 remaining[0x64];
};

struct RecoveredGlobal_8006A788_TCameraCtrl__data_804FF628
{
  s8 value;
  u8 remaining[0xB];
};

struct VBase_18_9639c7
{
  char pad[0x18];
};

struct VObj_18_9639c7 : VBase_18_9639c7 {
    virtual void m0();
    virtual M2C_UNK m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(M2C_UNK);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual M2C_UNK m9();
};

struct RecoveredGlobal_8006A7D8_camera_controller_registry
{
  M2C_UNK value;
  u8 remaining[0x64];
};

struct RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628
{
  M2C_UNK value;
  u8 remaining[0x8];
};

extern "C" {
extern s8 TCameraCtrl__data_804FF628[];
u8 TCameraCtrl__sub_8006A5DC(void);
extern RecoveredGlobal_8006A788_camera_controller_registry camera_controller_registry;
extern s8 TCameraCtrl__data_804FF628[];
void select_camera_controller(s8 arg0);
s32 is_split_screen();
M2C_UNK TCameraCtrl__sub_80068530(int);
M2C_UNK TCameraCtrl__sub_800696D0(void *, int);
M2C_UNK TCameraCtrl__sub_800698C8(void *, int);
M2C_UNK TCameraCtrl__sub_80069A6C(void *);
M2C_UNK update_position__11TCameraCtrlFPv(void *);
M2C_UNK TCameraCtrl__sub_80069BD8(void *);
M2C_UNK TCameraCtrl__sub_8006A6C4(void *);
s32 get_camera_no__11TCameraCtrlFv();
M2C_UNK TCameraCtrl__sub_803D676C(int, f32, f32, f32);
extern RecoveredGlobal_8006A788_camera_controller_registry camera_controller_registry;
extern s8 TCameraCtrl__data_804FF628[];
extern const f32 TCameraCtrl__data_805D8FAC;
extern const f32 TCameraCtrl__data_805D8FDC;
extern const f32 TCameraCtrl__data_805D8FE0;
void TCameraCtrl__sub_8006A7D8(u8 *arg0);
}

extern "C" {

void reset__11TCameraCtrlFv(void);
M2C_UNK TCameraCtrl__sub_80068354();

extern s8 TCameraCtrl__data_804FF628[];
extern s16 TCameraCtrl__data_805D4E0A;

void reset__11TCameraCtrlFv(void) {
    TCameraCtrl__data_805D4E0A = 0;
    TCameraCtrl__sub_80068354();
    M2C_FIELD(TCameraCtrl__data_804FF628, s8 *, 0) = 0;
    M2C_FIELD(TCameraCtrl__data_804FF628, s16 *, 2) = 0;
    M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 4) = 0;
    M2C_FIELD(TCameraCtrl__data_804FF628, s32 *, 8) = 0;
}
typedef char RecoveredGlobal_8006A5DC_TCameraCtrl__data_804FF628_size[sizeof(RecoveredGlobal_8006A5DC_TCameraCtrl__data_804FF628) == 0xC ? 1 : -1];
u8 TCameraCtrl__sub_8006A5DC(void) {
    return (*(RecoveredGlobal_8006A5DC_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value;
}
typedef struct RecoveredGlobal_8006A788_TCameraCtrl__data_804FF628 RecoveredGlobal_8006A788_TCameraCtrl__data_804FF628;
typedef struct RecoveredGlobal_8006A788_camera_controller_registry RecoveredGlobal_8006A788_camera_controller_registry;
typedef struct VBase_18_f8ef8c VBase_18_f8ef8c;
typedef struct VObj_18_f8ef8c VObj_18_f8ef8c;
typedef char RecoveredGlobal_8006A788_camera_controller_registry_size[((sizeof(RecoveredGlobal_8006A788_camera_controller_registry)) == 0x68) ? (1) : (-1)];
typedef char RecoveredGlobal_8006A788_TCameraCtrl__data_804FF628_size[((sizeof(RecoveredGlobal_8006A788_TCameraCtrl__data_804FF628)) == 0xC) ? (1) : (-1)];
#define PSO_VCALL_VObj_18_f8ef8c_m5(_self) (((VObj_18_f8ef8c *)(_self))->m5())
void select_camera_controller(s8 arg0) {
  u8 *temp_r0;
  (*(RecoveredGlobal_8006A788_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value = arg0;
  temp_r0 = (u8 *) (*((M2C_UNK *) (((s8 *) (&camera_controller_registry.value)) + ((arg0 * 4) & 0x3FC))));
  if (temp_r0 != 0)
  {
    PSO_VCALL_VObj_18_f8ef8c_m5(temp_r0);
  }
}
typedef struct RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628 RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628;
typedef struct RecoveredGlobal_8006A7D8_camera_controller_registry RecoveredGlobal_8006A7D8_camera_controller_registry;
typedef struct VBase_18_9639c7 VBase_18_9639c7;
typedef struct VObj_18_9639c7 VObj_18_9639c7;
typedef char RecoveredGlobal_8006A7D8_camera_controller_registry_size[((sizeof(RecoveredGlobal_8006A7D8_camera_controller_registry)) == 0x68) ? (1) : (-1)];
typedef char RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628_size[((sizeof(RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628)) == 0xC) ? (1) : (-1)];
#define PSO_VCALL_VObj_18_9639c7_m1(_self) (((VObj_18_9639c7 *)(_self))->m1())
#define PSO_VCALL_VObj_18_9639c7_m4(_self, _arg0) (((VObj_18_9639c7 *)(_self))->m4((_arg0)))
#define PSO_VCALL_VObj_18_9639c7_m9(_self) (((VObj_18_9639c7 *)(_self))->m9())
void TCameraCtrl__sub_8006A7D8(u8 *arg0) {
  s32 temp_r3;
  s32 var_r27;
  s32 var_r29;
  s32 *new_var;
  u8 *temp_r30;
  if (((u8) (*((u8 *) (((s8 *) (&(*(RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 0)))) != 0)
  {
    var_r29 = 0;
  }
  else
    if (is_split_screen() != 0)
  {
    var_r29 = get_camera_no__11TCameraCtrlFv();
  }
  else
  {
    var_r29 = 0;
  }
  temp_r30 = (u8 *) (*((void **) (((s8 *) (((u8 *) (&(*(RecoveredGlobal_8006A7D8_camera_controller_registry *)&camera_controller_registry).value)) + (((*((u8 *) (((s8 *) (&(*(RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 0))) + var_r29) * 4))) + 0)));
  if (temp_r30 != 0)
  {
    if (!((*((s32 *) (((s8 *) (&(*(RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 8))) & 0x800))
    {
      PSO_VCALL_VObj_18_9639c7_m1(temp_r30);
    }
    if ((*((s32 *) (((s8 *) (&(*(RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 8))) & 2)
    {
      PSO_VCALL_VObj_18_9639c7_m4(temp_r30, 0);
    }
    else
      if ((*((s32 *) (((s8 *) (&(*(RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 8))) & 0x80)
    {
      PSO_VCALL_VObj_18_9639c7_m4(temp_r30, 1);
    }
    TCameraCtrl__sub_80068530((int) temp_r30);
    new_var = (s32 *) (((s8 *) (&(*(RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 8);
    var_r27 = 0;
    if (is_split_screen() != 0)
    {
      if ((((*new_var) & 0x20) || ((*new_var) & 0x800)) && (!((*new_var) & (0x1000 << var_r29))))
      {
        var_r27 = 1;
        *new_var = (s32) ((*((s32 *) (((s8 *) (&(*(RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 8))) & ((-0x1001) << var_r29));
      }
    }
    else
      if (((*new_var) & 0x20) || ((*((s32 *) (((s8 *) (&(*(RecoveredGlobal_8006A7D8_TCameraCtrl__data_804FF628 *)&TCameraCtrl__data_804FF628).value)) + 8))) & 0x800))
    {
      var_r27 = 1;
    }
    if (var_r27 != 0)
    {
      update_position__11TCameraCtrlFPv((void *) arg0);
    }
    else
    {
      if ((*((s32 *) (((s8 *) temp_r30) + 0x38))) & 1)
      {
        TCameraCtrl__sub_800696D0((void *) arg0, (int) temp_r30);
      }
      temp_r3 = *((s32 *) (((s8 *) temp_r30) + 0x38));
      if (temp_r3 & 4)
      {
        TCameraCtrl__sub_80069BD8((void *) arg0);
      }
      else
        if (temp_r3 & 8)
      {
        TCameraCtrl__sub_80069A6C((void *) arg0);
      }
      else
      {
        update_position__11TCameraCtrlFPv((void *) arg0);
      }
      if ((*((s32 *) (((s8 *) temp_r30) + 0x38))) & 1)
      {
        TCameraCtrl__sub_800698C8((void *) arg0, (int) temp_r30);
      }
      TCameraCtrl__sub_8006A6C4((void *) arg0);
    }
    TCameraCtrl__sub_803D676C((int) (*((s32 *) (((s8 *) arg0) + 0x19C))), (f32) TCameraCtrl__data_805D8FDC, (f32) TCameraCtrl__data_805D8FAC, (f32) TCameraCtrl__data_805D8FE0);
    PSO_VCALL_VObj_18_9639c7_m9(temp_r30);
    if (is_split_screen() == 0)
    {
      *((s32 *) (((s8 *) arg0) + 0x94)) = (s32) (*((s32 *) (((s8 *) arg0) + 0x194)));
    }
  }
}

}
