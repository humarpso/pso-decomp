#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270 {
    M2C_UNK value;
    u8 remaining[0xAC];
};

struct RecoveredGlobal_801A5EC4_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270
{
  M2C_UNK value;
  u8 remaining[0xAC];
};

typedef s32 M2C_UNK;
struct RecoveredGlobal_801A5EC4_lbl_8050E208;
struct Pad_801A5C4C {
    u8 pad0[0x20];
    u32 hold;
    u8 pad24[0x50 - 0x24];
};

struct Masks_801A5C4C { u32 m[4]; };

extern "C" {
M2C_UNK check_and_read__16TKeyBoardControlFi(void *);
void TKeyBoardControl__sub_801A5EA0(u8 arg0);
s32 is_split_screen();
M2C_UNK TKeyBoardControl__sub_80132650(void *);
M2C_UNK TKeyBoardControl__sub_801A6910(int);
M2C_UNK update_button_hold_counters(int);
extern RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
extern RecoveredGlobal_801A5EC4_lbl_8050E208 lbl_8050E208;
void TKeyBoardControl__sub_801A5EC4(void);
s32 TKeyBoardControl__sub_80132310(s32);
u8 get_key_state_2__16TKeyBoardControlFPv(void *);
u8 TKeyBoardControl__sub_8013239C(void *, int);
extern RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270 TKeyBoardControl__data_80506270;
s32 TKeyBoardControl__sub_801A5B00(void);
s32 check_reset_button__16TKeyBoardControlFv();
void reset_system();
s32 DVDCheckDisk();
extern s32 lbl_805D49B4;
extern u8 lbl_805D5D09;
s32 func_801A5E54__Fv(void);
s32 check_reset_button__16TKeyBoardControlFv();
M2C_UNK PADRecalibrate(u32);
extern Masks_801A5C4C lbl_804469D8;
extern const f64 lbl_804469E8[];
extern RecoveredGlobal_801A5EC4_lbl_8050E208 lbl_8050E208;
extern u32 lbl_8050E568[];
extern u8 lbl_805D5D09;
extern s8 lbl_805D5D0C[4];
extern const f32 lbl_805DC0B4;
void TKeyBoardControl__sub_801A5C4C(void);
}

extern "C" {

void reset_fields__10TObjPlayerFPv(void* p);

void reset_fields__10TObjPlayerFPv(void* p) { *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0x4) = 0; *(s32*)((char*)p + 0x8) = 0; }

typedef struct RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270 RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270;
typedef char RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270_size[((sizeof(RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270)) == 0xB0) ? (1) : (-1)];
s32 TKeyBoardControl__sub_801A5B00(void) {
  short new_var;
  s32 temp_r3;
  s32 var_r3;
  u8 temp_r31;
  if (get_key_state_2__16TKeyBoardControlFPv(&(*(RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value) == 0)
  {
    return 0;
  }
  var_r3 = TKeyBoardControl__sub_8013239C((void *) (&(*(RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value), (int) 0);
  temp_r31 = var_r3;
  temp_r3 = TKeyBoardControl__sub_80132310((s32) (&(*(RecoveredGlobal_801A5B00_TKeyBoardControl__data_80506270 *)&TKeyBoardControl__data_80506270).value));
  if ((((s32) temp_r31) >= 0x2A) && (((s32) temp_r31) <= 0x32))
  {
    return temp_r31 + 7;
  }
  if ((((s32) temp_r31) >= 0x10) && (((s32) temp_r31) <= 0x29))
  {
    var_r3 = temp_r31 + 0x51;
    if (temp_r3 != 0)
    {
      return temp_r31 + 0x31;
    }
    return var_r3;
  }
  switch (temp_r31)
  {
    case 0x33:
      return 0x30;
    case 0x61:
      return 0xD;
    case 0x4C:
      return 0x1B;
    case 0x50:
      return 8;
    case 0x51:
      return (float) 9;
    case 0x3C:
      var_r3 = 0x2C;
      if (temp_r3 != 0)
    {
      return 0x3C;
    }
      return var_r3;
    case 0x3D:
      var_r3 = 0x2E;
      if (temp_r3 != 0)
    {
      return 0x3E;
    }
      return var_r3;
    case 0x39:
      var_r3 = 0x3B;
      if (temp_r3 != 0)
    {
      return 0x2B;
    }
      return var_r3;
    case 0x3A:
      var_r3 = 0x3A;
      if (new_var = temp_r3 != 0)
    {
      return 0x2A;
    }
      return var_r3;
    case 0x52:
      if (temp_r3 != 0)
    {
      return 0x5F;
    }
    default:
      var_r3 = 0;
      return var_r3;
  }
}

void TKeyBoardControl__sub_801A5C4C(void) {
    s32 i;
    s32 j;
    Masks_801A5C4C masks = lbl_804469D8;
    for (i = 0; i < 4; i++) {
        if ((((Pad_801A5C4C *)&lbl_8050E208)[i].hold & 0x40A) == 0x40A) {
            lbl_805D5D0C[i]++;
            if (lbl_804469E8[0] == (f64)lbl_805D5D0C[i]) {
                lbl_805D5D09 = 1;
                for (j = 0; j < 4; j++) {
                    PADRecalibrate(masks.m[j]);
                }
            } else if ((f64)lbl_805D5D0C[i] > lbl_804469E8[0]) {
                lbl_805D5D0C[i] = 0x10;
            }
        } else {
            lbl_805D5D0C[i] = 0;
        }
    }
    for (i = 0; i < 4; i++) {
        if ((((Pad_801A5C4C *)&lbl_8050E208)[i].hold & 0x608) == 0x608) {
            lbl_8050E568[i]++;
            if ((f32)lbl_8050E568[i] >= lbl_805DC0B4) {
                lbl_8050E568[i] = 0;
                PADRecalibrate(masks.m[i]);
            }
        } else {
            lbl_8050E568[i] = 0;
        }
    }
    if (check_reset_button__16TKeyBoardControlFv() != 0) {
        lbl_805D5D09 = 1;
        for (j = 0; j < 4; j++) {
            PADRecalibrate(masks.m[j]);
        }
    }
}

s32 func_801A5E54__Fv(void) {
    if ((DVDCheckDisk() == 0) && (check_reset_button__16TKeyBoardControlFv() != 0)) {
        reset_system();
    }
    return (lbl_805D49B4 != 0) ? 0 : lbl_805D5D09;
}

void TKeyBoardControl__sub_801A5EA0(u8 arg0) {
    check_and_read__16TKeyBoardControlFi((void *) (arg0));
}
typedef char RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270_size[sizeof(RecoveredGlobal_801A5EC4_TKeyBoardControl__data_80506270) == 0xB0 ? 1 : -1];
typedef char RecoveredGlobal_801A5EC4_lbl_8050E208_size[sizeof(RecoveredGlobal_801A5EC4_lbl_8050E208) == 0x1B0 ? 1 : -1];
void TKeyBoardControl__sub_801A5EC4(void) {
    u8 *temp_r31;
    TKeyBoardControl__sub_80132650((void *) (&TKeyBoardControl__data_80506270.value));
    if (is_split_screen() == 0) {
        temp_r31 = (u8 *)&lbl_8050E208.value + 0x160;
        TKeyBoardControl__sub_801A6910((int) (temp_r31));
        update_button_hold_counters((int) (temp_r31));
    }
}

}
