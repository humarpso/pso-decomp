#include "pso/TObjNewFloorWin.h"

TObjNewFloorWin::~TObjNewFloorWin() {}

#include "types.h"

extern "C" {
s32 is_split_screen(void);
void *__ct__15TObjNewFloorWinFv(void *arg0, void *arg1, void *arg2);
s32 get_player_by_client_id(u32);
u8 *__nw__7TObjectFUl(s32);
u8 *create_new_floor_windows__6TLobbyFi(s32 arg0);
}

extern "C" {

void *__ct__15TObjNewFloorWinFv(void *arg0, void *arg1, void *arg2);
int fn_800740DC(void* p);
void __ct__7TObjectFP7TObject(void *);
int close_active_window__11TWindowCtrlFv(void*);
void set_flag_40__16TAdChrSelASlotGCFPv(void* p);

extern s32 __vt__15TObjNewFloorWin[];
extern void *TObjNewFloorWin__class_name;

void *__ct__15TObjNewFloorWinFv(void *arg0, void *arg1, void *arg2) {
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__15TObjNewFloorWin;
    *(void **)((s8 *)arg0 + 0x0) = TObjNewFloorWin__class_name;
    *(void **)((s8 *)arg0 + 0x4C) = arg2;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = 450;
    *(u32 *)((s8 *)arg0 + 0x28) = 150;
    *(u32 *)((s8 *)arg0 + 0x1C) = 0;
    return arg0;
}

u8 *create_new_floor_windows__6TLobbyFi(s32 arg0) {
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
    if (get_player_by_client_id(var_r30) != 0U)
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
