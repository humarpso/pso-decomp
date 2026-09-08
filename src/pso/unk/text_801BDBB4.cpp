#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
struct VBase_18_dac7f3
{
  char pad[0x18];
};

struct VObj_18_dac7f3 : VBase_18_dac7f3 {
    virtual M2C_UNK m0(M2C_UNK);
};

struct RecoveredGlobal_801BDCF8_TObjPlayer__data_8050EA70
{
  M2C_UNK value;
  u8 remaining[0x320C];
};

extern "C" {
s32 TObjPlayer__sub_80019248();
u8 *TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK init_select_txt__10TObjPlayerFPv(int);
M2C_UNK copy_lobby_header__10TObjPlayerFPvi(int, int);
extern RecoveredGlobal_801BDCF8_TObjPlayer__data_8050EA70 TObjPlayer__data_8050EA70;
void TObjPlayer__sub_801BDCF8(void);
}

extern "C" {

typedef struct RecoveredGlobal_801BDCF8_TObjPlayer__data_8050EA70 RecoveredGlobal_801BDCF8_TObjPlayer__data_8050EA70;
typedef struct VBase_18_dac7f3 VBase_18_dac7f3;
typedef struct VObj_18_dac7f3 VObj_18_dac7f3;
#pragma opt_pointer_analysis on
typedef char RecoveredGlobal_801BDCF8_TObjPlayer__data_8050EA70_size[((sizeof(RecoveredGlobal_801BDCF8_TObjPlayer__data_8050EA70)) == 0x3210) ? (1) : (-1)];
#define PSO_VCALL_VObj_18_dac7f3_m0(_self, _arg0) (((VObj_18_dac7f3 *)(_self))->m0((_arg0)))
void TObjPlayer__sub_801BDCF8(void) {
  s32 var_r31;
  u8 *temp_r3;
  M2C_UNK *var_r29;
  var_r31 = 0;
  var_r29 = &TObjPlayer__data_8050EA70.value;
  do
  {
    init_select_txt__10TObjPlayerFPv((int) var_r29);
    temp_r3 = (u8 *) TPlayerBattleCtrl4P__sub_801BA74C(var_r31);
    if (temp_r3 != 0)
    {
      if (TObjPlayer__sub_80019248() != 0)
      {
        copy_lobby_header__10TObjPlayerFPvi((int) var_r29, (int) temp_r3);
      }
      if (temp_r3 != 0)
      {
        PSO_VCALL_VObj_18_dac7f3_m0(temp_r3, 1);
      }
    }
    var_r31 += 1;
    var_r29 = (M2C_UNK *) (((u8 *) var_r29) + 0x42C);
  }
  while (var_r31 < 0xC);
}

}
