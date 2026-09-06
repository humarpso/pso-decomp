#include "pso/TObjNewFloorWin.h"

TObjNewFloorWin::~TObjNewFloorWin() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
extern "C" {
s32 is_split_screen(void);
void *__ct__15TObjNewFloorWinFv(void *arg0, void *arg1, void *arg2);
s32 TPlayerBattleCtrl4P__sub_801BA74C(u32);
u8 *__nw__7TObjectFUl(M2C_UNK);
u8 *TLobby__sub_80074034(s32 arg0);
}

extern "C" {

void *__ct__15TObjNewFloorWinFv(void *arg0, void *arg1, void *arg2);
int fn_800740DC(void* p);
void __ct__7TObjectFP7TObject(void *);
int close_active_window__11TWindowCtrlFv(void*);
void set_flag_40__16TAdChrSelASlotGCFPv(void* p);

extern M2C_UNK __vt__15TObjNewFloorWin[];
extern void *lbl_805D2870;

void *__ct__15TObjNewFloorWinFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjNewFloorWin;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2870;
    M2C_FIELD(arg0, void **, 0x4C) = arg2;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 450;
    M2C_FIELD(arg0, u32 *, 0x28) = 150;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    return arg0;
}

u8 *TLobby__sub_80074034(s32 arg0) {
  u32 var_r30;
  u8 *temp_r3;
  u8 *temp_r3_2;
  u8 *var_r0;
  u8 *var_r0_2;
  u8 *var_r31;
  if (is_split_screen() == 0)
  {
    temp_r3 = (u8 *) __nw__7TObjectFUl(0x50);
    var_r0 = (u8 *) temp_r3;
    if (var_r0 != 0)
    {
      var_r0 = (u8 *) ((u8 *)__ct__15TObjNewFloorWinFv((void *)(temp_r3), (void *)(arg0), (void *)(-1)));
    }
    return var_r0;
  }
  var_r31 = (u8 *) 0;
  var_r30 = 0;
  do
  {
    if (TPlayerBattleCtrl4P__sub_801BA74C(var_r30) != 0U)
    {
      temp_r3_2 = (u8 *) __nw__7TObjectFUl(0x50);
      var_r0_2 = (u8 *) temp_r3_2;
      if (var_r0_2 != 0)
      {
        var_r31 = ((u8 *)__ct__15TObjNewFloorWinFv((void *)(temp_r3_2), (void *)(arg0), (void *)((s32) var_r30)));
        var_r0_2 = (u8 *) var_r31;
      }
      var_r31 = (u8 *) var_r0_2;
    }
    var_r30 += 1;
  }
  while (((s32) var_r30) < 4);
  return var_r31;
}

int fn_800740DC(void* p) { return close_active_window__11TWindowCtrlFv(p); }

}
