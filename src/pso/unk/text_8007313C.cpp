#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
s32 obj_testFlags30(void *, s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TWindowCtrlMain__sub_8024CE58(void);
M2C_UNK TLobby__sub_80072BB0(void *);
M2C_UNK send_45_and_close_windows__6TLobbyFv(void *);
M2C_UNK show_ctrl_and_play_effect__6TLobbyFPv(void *);
M2C_UNK play_player_default_effect__6TLobbyFv(void *);
void fn_8007313C(u8 *arg0);
}

extern "C" {

void fn_8007313C(u8 *arg0) {
  s32 temp_r3;
  s32 var_r31;
  int new_var;
  u32 var_r30;
  u8 *temp_r3_2;
  temp_r3 = get_global_state__14TOKeyMachine01Fv();
  if (temp_r3 != 0x12)
  {
    if (temp_r3 < 0x12)
    {
      if (temp_r3 != 0)
      {
        return;
      }
      goto block_4;
    }
  }
  else
  {
    new_var = 0;
    block_4:
    if (TWindowCtrlMain__sub_8024CE58() != 0)
    {
      play_player_default_effect__6TLobbyFv((void *) arg0);
      var_r31 = 1;
      var_r30 = new_var;
      loop_6:
      temp_r3_2 = (u8 *) TPlayerBattleCtrl4P__sub_801BA74C(var_r30);
      if ((temp_r3_2 != 0) && (obj_testFlags30(temp_r3_2, 0x02000000) != 0))
      {
        var_r31 = 0;
      }
      else
      {
        var_r30 += 1;
        if (((s32) var_r30) < 4)
        {
          goto loop_6;
        }
      }
      if (var_r31 != 0)
      {
        if (((s32) (*((s32 *) (((s8 *) arg0) + 0x20)))) != 0)
        {
          send_45_and_close_windows__6TLobbyFv((void *) arg0);
          show_ctrl_and_play_effect__6TLobbyFPv((void *) arg0);
          *((s32 *) (((s8 *) arg0) + 0x1C)) = 2;
          return;
        }
        send_45_and_close_windows__6TLobbyFv((void *) arg0);
        play_player_default_effect__6TLobbyFv((void *) arg0);
        TLobby__sub_80072BB0((void *) arg0);
        *((s32 *) (((s8 *) arg0) + 0x1C)) = 3;
      }
    }
  }
}

}
