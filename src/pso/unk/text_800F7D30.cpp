#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
u32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
u32 prs_decompress(int, int, int, int);
M2C_UNK destroy_ep3_exist__6TLobbyFis(int, int);
u32 reset_counters__6TLobbyFPv();
u32 prs_decompress_alloc(s32 arg0, s32 arg1);
}

extern "C" {

#pragma scheduling off
u32 prs_decompress_alloc(s32 arg0, s32 arg1) {
  s32 var_r28;
  s32 var_r29;
  s32 var_r4;
  s32 var_r5;
  s32 var_r6;
  u32 var_r30;
  u32 var_r30_2;
  u32 var_r31;
  u32 var_r3;
  u32 phi_r30;
  M2C_UNK saved_reg_r30;
  var_r30 = saved_reg_r30;
  var_r28 = arg0;
  var_r29 = arg1;
  var_r3 = 0x30U;
  var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv((int) 0x30);
  phi_r30 = saved_reg_r30;
  if (var_r31 != 0U)
  {
    var_r31 = reset_counters__6TLobbyFPv();
  }
  if (var_r31 != 0U)
  {
    var_r3 = var_r31;
    var_r4 = var_r29;
    var_r5 = var_r28;
    var_r6 = 0;
    var_r30_2 = prs_decompress((int) var_r3, (int) var_r4, (int) var_r5, (int) 0);
    phi_r30 = var_r30_2;
  }
  if (var_r31 != 0U)
  {
    var_r3 = var_r31;
    var_r4 = 1;
    destroy_ep3_exist__6TLobbyFis((int) var_r3, (int) 1);
  }
  var_r3 = phi_r30;
  return var_r3;
}

}
