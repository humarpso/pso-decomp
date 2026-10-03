#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 __nw__7TObjectFUl(int);
s32 fn_80266378(void *);
s32 TWindowMenu__ct(int, void *, void *, void *);
s32 create_window_menu(s32 arg0, s32 arg1, s32 arg2);
u32 get_message_10__20TWindowSubStatusDispFPv(int);
s32 set_ready_flag__18TCheckRoomSequenceFPv(int);
s32 set_field_1c__6TLobbyFPvf(int, f32);
s32 TWindowSubComCard__sub_80265C30(int);
s32 TWindowSubComCard__sub_80265E60(int, f32);
s32 TWindowSubComCard__sub_80265F60(int);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(int, void *, int, int);
s32 create_window_menu(s32 arg0, s32 arg1, s32 arg2);
extern const f32 lbl_805DD170;
extern const f32 lbl_805DD174;
u8 *create_yes_no_window(s32 arg0, s32 arg1, u32 arg2, u32 arg3);
}

extern "C" {

u8 * init_shop_judgment_window(void* p);

u8 *create_yes_no_window(s32 arg0, s32 arg1, u32 arg2, u32 arg3) {
  u8 *temp_r31;
  u8 *temp_r3;
  temp_r3 = (u8 *) ((u8 *)create_window_menu(arg0, 2, arg1));
  temp_r31 = (u8 *) temp_r3;
  if (arg2 == 0U)
  {
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) ((u8 *) temp_r3), (void *) get_message_10__20TWindowSubStatusDispFPv((int) 0x5B), (int) 6, (int) 0);
  }
  else
  {
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) temp_r3, (void *) arg2, (int) 6, (int) 0);
  }
  if (0U == arg3)
  {
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) ((u8 *) temp_r3), (void *) get_message_10__20TWindowSubStatusDispFPv((int) 0x5C), (int) 6, (int) 1);
  }
  else
  {
    forward_trade_action_default__16TObjCityMainWarpFPviii((int) ((u8 *) temp_r3), (void *) arg3, (int) 6, (int) 1);
  }
  TWindowSubComCard__sub_80265F60((int) ((u8 *) temp_r3));
  if ((*((f32 *) (((s8 *) ((u8 *) temp_r3)) + 0x48))) < lbl_805DD170)
  {
    TWindowSubComCard__sub_80265E60((int) ((u8 *) temp_r3), (f32) lbl_805DD170);
  }
  TWindowSubComCard__sub_80265C30((int) ((u8 *) temp_r3));
  set_ready_flag__18TCheckRoomSequenceFPv((int) ((u8 *) temp_r3));
  set_field_1c__6TLobbyFPvf((int) ((u8 *) temp_r3), (f32) lbl_805DD174);
  return (u8 *) temp_r3;
}

u8 * init_shop_judgment_window(void* p) { return create_yes_no_window((s32)(p), (s32)(4), (u32)(0), (u32)(0)); }
s32 create_window_menu(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    s32 var_r0;
    fn_80266378((void *) (arg1));
    temp_r3 = __nw__7TObjectFUl((int) (0x8C));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = TWindowMenu__ct((int) (temp_r3), (void *) (arg1), (void *) (arg2), (void *) (arg0));
    }
    return var_r0;
}

}
