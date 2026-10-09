#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct RecoveredFields_8024792C_arg0 {
    u8 unknown_0[0x1C];
    u8 field_1C;
    u8 unknown_1D[0x1];
    u16 field_1E;
    u8 * field_20;
    s32 field_24;
    s32 field_28;
    u8 unknown_2C[0x4];
    s32 field_30;
    s32 field_34;
    s32 * field_38;
};

struct RecoveredGlobal_8024775C_lbl_8050E208
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

struct RecoveredFields_8024775C_arg0
{
  u8 unknown_0[0x1C];
  u8 field_1C;
  u8 unknown_1D[0x1];
  u16 field_1E;
  s32 field_20;
  u8 unknown_24[0x4];
  s32 field_28;
};

extern "C" {
s32 copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, int);
s32 __nw__7TObjectFUl(int);
s32 fn_80247ED8(int);
s32 fn_80248840(int, void *);
s32 reset_input__11TWindowChatFPv(void *);
M2C_UNK TKeyBoardControl__sub_8025EC04(s32);
s32 TWindowKeyBoardSoft__ct(int, void *, void *);
s32 get_window_layout_position(int);
s32 TWindowDD__ct(int, void *, void *);
extern s32 local_client_id;
void open_next_input_window__11TWindowChatFPv(u8 *arg0);
s32 fn_8002AE08(void *);
s32 is_key_held__16TKeyBoardControlFPv(int);
s32 TWindowShortListCtrl__check_controller_button(void *, int);
s32 is_on_current_screen__11TCameraCtrlFPv(int, void *);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
M2C_UNK reset_equip_slots__10TObjPlayerFPv(int);
s32 get_player_by_client_id(s32);
void close_all_children__11TWindowChatFPv(void *arg0);
void open_next_input_window__11TWindowChatFPv(u8 *arg0);
s32 is_mode_bit6__11TWindowChatFPv(void *);
s32 TWindowChat__sub_80247EC0(void *);
M2C_UNK begin_player_keyboard_hold(void *);
M2C_UNK end_player_keyboard_hold(s32);
s32 TWindowChat__sub_8025CB10(int);
s32 reset_input__11TWindowChatFPv(void *);
extern RecoveredGlobal_8024775C_lbl_8050E208 lbl_8050E208;
extern s32 local_client_id;
void TWindowChat__sub_8024775C(u8 *arg0);
}

extern "C" {

void close_all_children__11TWindowChatFPv(void *arg0);
void handle_input__11TWindowChatFPv(void *arg0);
void render__11TWindowChatFv(void);
M2C_UNK TKeyBoardControl__sub_8025EC04(s32);
s32 get_player_by_client_id(s32);
s32 TWindowChat__sub_80247080(void *);
s32 TWindowChat__sub_80247128(void *);
s32 submit_keyboard_input__11TWindowChatFPv(void *);
s32 TWindowChat__sub_80247EC0(void *);
M2C_UNK end_player_keyboard_hold(s32);
M2C_UNK handle_dpad_shortcuts__11TWindowChatFPv(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
s32 is_mode_bit6__11TWindowChatFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void close_all_children__11TWindowChatFPv(void *arg0) {
    TKeyBoardControl__sub_8025EC04(M2C_FIELD(arg0, s32 *, 0x28));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x24));
        M2C_FIELD(arg0, u32 *, 0x24) = 0U;
    }
}

extern s32 local_client_id;

void handle_input__11TWindowChatFPv(void *arg0) {
    s32 temp_r3;
    u8 temp_r0;

    temp_r3 = get_player_by_client_id(local_client_id);
    if (temp_r3 != 0) {
        if (M2C_FIELD(arg0, u16 *, 0x1E) & 2) {
            handle_dpad_shortcuts__11TWindowChatFPv(arg0);
            if (submit_keyboard_input__11TWindowChatFPv(arg0) != 0) {
                close_all_children__11TWindowChatFPv((void *)((void *)(arg0)));
            }
        } else {
            temp_r0 = M2C_FIELD(arg0, u8 *, 0x1C);
            switch ((s8) temp_r0) {
            case 0:
                if ((submit_keyboard_input__11TWindowChatFPv(arg0) != 0) && (TWindowChat__sub_80247EC0(arg0) != 0)) {
                    if (is_mode_bit6__11TWindowChatFPv(arg0) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        end_player_keyboard_hold(local_client_id);
                    }
                    close_all_children__11TWindowChatFPv((void *)((void *)(arg0)));
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                    return;
                }
                break;
            case 1:
                if ((TWindowChat__sub_80247128(arg0) != 0) && (TWindowChat__sub_80247EC0(arg0) != 0)) {
                    if (is_mode_bit6__11TWindowChatFPv(arg0) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        end_player_keyboard_hold(local_client_id);
                    }
                    close_all_children__11TWindowChatFPv((void *)((void *)(arg0)));
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                    return;
                }
                break;
            case 2:
                if ((TWindowChat__sub_80247080(arg0) != 0) && (TWindowChat__sub_80247EC0(arg0) != 0)) {
                    if (is_mode_bit6__11TWindowChatFPv(arg0) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        end_player_keyboard_hold(local_client_id);
                    }
                    close_all_children__11TWindowChatFPv((void *)((void *)(arg0)));
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                }
                break;
            }
        }
    }
}

typedef char RecoveredFields_8024792C_arg0_1C_offset[offsetof(RecoveredFields_8024792C_arg0, field_1C) == 0x1C ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_1E_offset[offsetof(RecoveredFields_8024792C_arg0, field_1E) == 0x1E ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_20_offset[offsetof(RecoveredFields_8024792C_arg0, field_20) == 0x20 ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_24_offset[offsetof(RecoveredFields_8024792C_arg0, field_24) == 0x24 ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_28_offset[offsetof(RecoveredFields_8024792C_arg0, field_28) == 0x28 ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_30_offset[offsetof(RecoveredFields_8024792C_arg0, field_30) == 0x30 ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_34_offset[offsetof(RecoveredFields_8024792C_arg0, field_34) == 0x34 ? 1 : -1];
typedef char RecoveredFields_8024792C_arg0_38_offset[offsetof(RecoveredFields_8024792C_arg0, field_38) == 0x38 ? 1 : -1];

typedef struct RecoveredFields_8024775C_arg0 RecoveredFields_8024775C_arg0;
typedef struct RecoveredGlobal_8024775C_lbl_8050E208 RecoveredGlobal_8024775C_lbl_8050E208;
typedef char RecoveredGlobal_8024775C_lbl_8050E208_size[((sizeof(RecoveredGlobal_8024775C_lbl_8050E208)) == 0x1B0) ? (1) : (-1)];
void TWindowChat__sub_8024775C(u8 *arg0) {
  u8 temp_r3_2;
  u8 *temp_r30;
  s32 temp_r3;
  temp_r3 = get_player_by_client_id((s32)((void *) local_client_id));
  if (temp_r3 != 0)
  {
    if (((RecoveredFields_8024775C_arg0 *) arg0)->field_1E & 2)
    {
      temp_r30 = ((u8 *) (&lbl_8050E208.value)) + 0x20;
      if ((TWindowShortListCtrl__check_controller_button((void *) temp_r30, (int) 0x200) != 0) && (is_on_current_screen__11TCameraCtrlFPv((int) temp_r30, (void *) fn_8002AE08((void *) local_client_id)) == 0))
      {
        ((RecoveredFields_8024775C_arg0 *) arg0)->field_1E = (u16) (((RecoveredFields_8024775C_arg0 *) arg0)->field_1E & 0xFFFFFFFD);
        close_all_children__11TWindowChatFPv((void *) arg0);
        open_next_input_window__11TWindowChatFPv((u8 *)((void *) arg0));
        if (is_mode_bit6__11TWindowChatFPv((void *) arg0) != 0)
        {
          begin_player_keyboard_hold((void *) local_client_id);
          reset_equip_slots__10TObjPlayerFPv((int) temp_r3);
        }
      }
    }
    else
      if ((is_key_held__16TKeyBoardControlFPv((int) ((RecoveredFields_8024775C_arg0 *) arg0)->field_28) == 0) || ((TWindowChat__sub_80247EC0((void *) arg0) != 0) && (TWindowShortListCtrl__check_controller_button((void *) (((u8 *) (&lbl_8050E208.value)) + 0x20), (int) 0x200) != 0)))
    {
      if ((TWindowChat__sub_80247EC0((void *) arg0) != 0) && (TWindowShortListCtrl__check_controller_button((void *) (((u8 *) (&lbl_8050E208.value)) + 0x20), (int) 0x200) != 0))
      {
        reset_input__11TWindowChatFPv((void *)((int) ((RecoveredFields_8024775C_arg0 *) arg0)->field_20));
      }
      close_all_children__11TWindowChatFPv((void *) arg0);
      ((RecoveredFields_8024775C_arg0 *) arg0)->field_1E = (u16) (((RecoveredFields_8024775C_arg0 *) arg0)->field_1E | 2);
      open_next_input_window__11TWindowChatFPv((u8 *)((void *) arg0));
      if (is_mode_bit6__11TWindowChatFPv((void *) arg0) != 0)
      {
        init_parts__10TObjPlayerFPv((s32)((int) temp_r3));
        end_player_keyboard_hold((s32)((void *) local_client_id));
      }
    }
    else
      if ((TWindowShortListCtrl__check_controller_button((void *) (((u8 *) (&lbl_8050E208.value)) + 0x20), (int) 0x400) != 0) && (TWindowChat__sub_8025CB10((int) ((RecoveredFields_8024775C_arg0 *) arg0)->field_20) == 0))
    {
      close_all_children__11TWindowChatFPv((void *) arg0);
      ((RecoveredFields_8024775C_arg0 *) arg0)->field_1C = (u8) (((RecoveredFields_8024775C_arg0 *) arg0)->field_1C + 1);
      temp_r3_2 = ((RecoveredFields_8024775C_arg0 *) arg0)->field_1C;
      if (((s8) temp_r3_2) >= 3)
      {
        ((RecoveredFields_8024775C_arg0 *) arg0)->field_1C = (u8) (temp_r3_2 - 3);
      }
      open_next_input_window__11TWindowChatFPv((u8 *)((void *) arg0));
    }
  }
}

void open_next_input_window__11TWindowChatFPv(u8 *arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    u8 temp_r0;
    if (((RecoveredFields_8024792C_arg0 *)arg0)->field_1E & 2) {
        *((RecoveredFields_8024792C_arg0 *)arg0)->field_38 = 1;
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (((RecoveredFields_8024792C_arg0 *)arg0)->field_20 + 0x30), (int) (get_window_layout_position((int) (0xB7))));
        M2C_FIELD(((RecoveredFields_8024792C_arg0 *)arg0)->field_20, s32 *, 0x50) = 3;
        return;
    }
    temp_r0 = ((RecoveredFields_8024792C_arg0 *)arg0)->field_1C;
    switch ((s8) temp_r0) {
    case 0:
        *((RecoveredFields_8024792C_arg0 *)arg0)->field_38 = 1;
        temp_r3 = __nw__7TObjectFUl((int) (0x70));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = TWindowKeyBoardSoft__ct((int) (temp_r3), (void *) (((RecoveredFields_8024792C_arg0 *)arg0)->field_20), (void *) (local_client_id));
        }
        ((RecoveredFields_8024792C_arg0 *)arg0)->field_24 = var_r0;
        fn_80247ED8((int) (((RecoveredFields_8024792C_arg0 *)arg0)->field_24));
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (((RecoveredFields_8024792C_arg0 *)arg0)->field_20 + 0x30), (int) (get_window_layout_position((int) (0xB8))));
        M2C_FIELD(((RecoveredFields_8024792C_arg0 *)arg0)->field_20, s32 *, 0x50) = 3;
        TKeyBoardControl__sub_8025EC04((s32)((int) (((RecoveredFields_8024792C_arg0 *)arg0)->field_28)));
        return;
    case 1:
        reset_input__11TWindowChatFPv((void *) (((RecoveredFields_8024792C_arg0 *)arg0)->field_20));
        *((RecoveredFields_8024792C_arg0 *)arg0)->field_38 = 2;
        temp_r3_2 = __nw__7TObjectFUl((int) (0x108));
        var_r0_2 = temp_r3_2;
        if (var_r0_2 != 0) {
            var_r0_2 = TWindowDD__ct((int) (temp_r3_2), (void *) (arg0), (void *) (((u8 *)(((RecoveredFields_8024792C_arg0 *)arg0)->field_38)) + 4));
        }
        ((RecoveredFields_8024792C_arg0 *)arg0)->field_34 = var_r0_2;
        TKeyBoardControl__sub_8025EC04((s32)((int) (((RecoveredFields_8024792C_arg0 *)arg0)->field_28)));
        return;
    case 2:
        reset_input__11TWindowChatFPv((void *) (((RecoveredFields_8024792C_arg0 *)arg0)->field_20));
        *((RecoveredFields_8024792C_arg0 *)arg0)->field_38 = 3;
        temp_r3_3 = __nw__7TObjectFUl((int) (0x24));
        var_r0_3 = temp_r3_3;
        if (var_r0_3 != 0) {
            var_r0_3 = fn_80248840((int) (temp_r3_3), (void *) (arg0));
        }
        ((RecoveredFields_8024792C_arg0 *)arg0)->field_30 = var_r0_3;
        TKeyBoardControl__sub_8025EC04((s32)((int) (((RecoveredFields_8024792C_arg0 *)arg0)->field_28)));
        return;
    }
}

void render__11TWindowChatFv(void) {  }

}
