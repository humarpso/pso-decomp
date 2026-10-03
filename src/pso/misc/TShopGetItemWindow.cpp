#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct VBase_18_a93f07
{
  char pad[0x18];
};

struct VObj_18_a93f07 : VBase_18_a93f07 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(M2C_UNK, M2C_UNK);
};

struct Stack_8021E5D8
{
  M2C_UNK sp8;
  u8 pad_C[0x8];
  s32 sp14;
};

struct RecoveredFields_8021E5D8_arg0
{
  u8 unknown_0[0x24];
  s32 field_24;
  s32 field_28;
  u32 field_2C;
  u8 unknown_30[0x24];
  s32 field_54;
};

struct Item_8021E870 { u8 kind; u8 data[0x13]; };

struct Win_8021E870 {
    u8 pad0[0x24];
    s32 f24;
    u32 f28;
    u32 f2C;
    u32 f30;
    u32 f34;
    Item_8021E870 item;
    u8 pad4C[0x58 - 0x4C];
    s32 f58;
};

extern "C" {
s32 obj_getField1c(s32);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(u32);
s32 is_confirmed__24TShopEquipmentSellWindowFPv(u32);
s32 get_result__24TShopEquipmentSellWindowFPv(u32);
s32 is_confirmed__18TWindowInputNumberFPv(u32);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK set_position_xy(u32, f32, f32);
void TWindow__close(void *);
u32 create_yes_no_window(M2C_UNK, u16, M2C_UNK, M2C_UNK);
M2C_UNK get_window_layout_position(M2C_UNK);
void TShopGetItemWindow__sub_8021E76C(void *arg0);
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
s32 set_stack_count__24TShopEquipmentListWindowFPvc(void *, int);
s32 fn_801B849C(int, void *);
s32 can_inventory_accept_item__10TObjPlayerFPvPv(int, void *);
s32 TCheckRoomSequence__sub_80210904(int);
s32 TCheckRoomSequence__sub_80210E28(int, int, int);
s32 TCheckRoomSequence__sub_80211034(int, void *, int);
s32 TCheckRoomSequence__sub_8021118C(int);
s32 get_item_def__18TCheckRoomSequenceFUi(void *);
s32 TShopWindowBase__sub_8022397C(void *);
void TWindow__close(void *);
s32 TWindowSubComCard__sub_80265BF8(int);
s32 select_cursor_entry__6TLobbyFPv(int);
void TShopGetItemWindow__sub_8021E5D8(u8 *arg0);
s32 queue_destruction__7TObjectFv(void *);
s32 close__18TShopGetItemWindowFPv(void *arg0);
void TShopGetItemWindow__sub_8021E5D8(u8 *arg0);
void TShopGetItemWindow__sub_8021E76C(void *arg0);
s32 rebuild_item_list__18TShopGetItemWindowFv(void *);
void TShopGetItemWindow__vt9(u8 *arg0);
s32 obj_getField1c(s32);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(u32);
s32 TCheckRoomSequence__sub_80210F78(s32, u8 *, s32 *, s32);
s32 TCheckRoomSequence__sub_80211034(int, void *, int);
void set_position__18TCheckRoomSequenceFPvff(u32, f32, f32);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 TShopWindowBase__sub_8022397C(void *);
s32 get_child_field1c__15TShopWindowBaseFPv(void *);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
void *__nw__7TObjectFUl(u32);
M2C_UNK set_position_xy(u32, f32, f32);
void set_displayed_item_colored__15TWindowHelpItemFPvUi(u32, void *);
u32 TWindowInputNumber__ct(void *, s32, s32, s32, s32, s16);
u32 create_yes_no_window(M2C_UNK, u16, M2C_UNK, M2C_UNK);
s32 select_cursor_entry__6TLobbyFPv(int);
M2C_UNK get_window_layout_position(M2C_UNK);
s32 is_camera_ctrl_active__6TLobbyFv(void);
extern const f32 lbl_805DC6F0;
s32 handle_withdraw_list_input__18TShopGetItemWindowFPv(void *p);
}

extern "C" {

void *TShopGetItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void *__dt__18TShopGetItemWindowFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
M2C_UNK clear_selected_and_update_entry__14TWindowSubItemFPv(void *);
void init__9TItemDataFv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, M2C_UNK);

s32 close__18TShopGetItemWindowFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x28) != 0U) {
        clear_selected_and_update_entry__14TWindowSubItemFPv(M2C_FIELD(arg0, void **, 0x28));
    }
    set_field_20__12TQuestListVMFPvi(arg0, 1);
}

extern M2C_UNK __vt__18TShopGetItemWindow[];

typedef struct RecoveredFields_8021E5D8_arg0 RecoveredFields_8021E5D8_arg0;
typedef struct Stack_8021E5D8 Stack_8021E5D8;
typedef struct VBase_18_a93f07 VBase_18_a93f07;
typedef struct VObj_18_a93f07 VObj_18_a93f07;
#define PSO_VCALL_VObj_18_a93f07_m4(_self, _arg0, _arg1) (((VObj_18_a93f07 *)(_self))->m4((_arg0), (_arg1)))
void TShopGetItemWindow__sub_8021E5D8(u8 *arg0) {
  Stack_8021E5D8 stack;
  s32 temp_r30;
  s32 temp_r3_2;
  s32 temp_r3_3;
  u32 temp_r3;
  u32 temp_r3_4;
  temp_r3 = ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C;
  if ((temp_r3 != 0U) && (is_visible__17TWindowSubComCardFPv((int) temp_r3) != 0))
  {
    temp_r30 = TShopWindowBase__sub_8022397C((void *) arg0);
    temp_r3_2 = TWindowSubComCard__sub_80265BF8((int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C);
    if (temp_r3_2 == 0)
    {
      temp_r3_3 = select_cursor_entry__6TLobbyFPv((int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_28);
      if (TCheckRoomSequence__sub_80211034((int) temp_r3_3, (void *) (&stack.sp8), (int) (temp_r30 & 0xFFFFFFFFFFFFFFFFu)) != 0)
      {
        stack.sp14 = -1;
        if (get_item_def__18TCheckRoomSequenceFUi((void *) (&stack.sp8)) != 0)
        {
          set_stack_count__24TShopEquipmentListWindowFPvc((void *) (&stack.sp8), (int) ((s32) ((u8) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_54)));
        }
        if (can_inventory_accept_item__10TObjPlayerFPvPv((int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_24, (void *) (&stack.sp8)) == 0)
        {
          PSO_VCALL_VObj_18_a93f07_m4(arg0, 0x4B, 1);
          set_field_20__12TQuestListVMFPvi((void *)((void *) arg0), (M2C_UNK)((int) 6));
        }
        else
        {
          fn_801B849C((int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_24, (void *) (&stack.sp8));
          TCheckRoomSequence__sub_80210E28((int) temp_r3_3, (int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_54, (int) temp_r30);
          TCheckRoomSequence__sub_80210904((int) temp_r30);
          TCheckRoomSequence__sub_8021118C((int) temp_r30);
          set_field_20__12TQuestListVMFPvi((void *)((void *) arg0), (M2C_UNK)((int) 0));
        }
      }
      TWindow__close((void *)((int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C));
      ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C = 0U;
      return;
    }
    if (temp_r3_2 == 1)
    {
      TWindow__close((void *)((int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C));
      ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C = 0U;
      set_field_20__12TQuestListVMFPvi((void *)((void *) arg0), (M2C_UNK)((int) 4));
      return;
    }
    goto block_12;
  }
  block_12:
  temp_r3_4 = ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C;
  if ((temp_r3_4 != 0U) && (get_status_flag__17TWindowSubComCardFPv((int) temp_r3_4) != 0))
  {
    TWindow__close((void *)((int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C));
    ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C = 0U;
    set_field_20__12TQuestListVMFPvi((void *)((void *) arg0), (M2C_UNK)((int) 4));
  }
}

void TShopGetItemWindow__sub_8021E76C(void *arg0) {
    f32 temp_f31;
    u32 temp_r31;
    u32 w;
    w = M2C_FIELD(arg0, u32 *, 0x30);
    if ((w != 0U) && (is_confirmed__18TWindowInputNumberFPv(w) != 0)) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) == 0U) {
            temp_r31 = (u16) obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
            M2C_FIELD(arg0, u32 *, 0x2C) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
            set_ready_flag__18TCheckRoomSequenceFPv(M2C_FIELD(arg0, u32 *, 0x2C));
            temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
            set_position_xy(M2C_FIELD(arg0, u32 *, 0x2C), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        }
        M2C_FIELD(arg0, s32 *, 0x54) = get_result__24TShopEquipmentSellWindowFPv(M2C_FIELD(arg0, u32 *, 0x30));
        TWindow__close((void *)(M2C_FIELD(arg0, u32 *, 0x30)));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        set_field_20__12TQuestListVMFPvi(arg0, 3);
        return;
    }
    w = M2C_FIELD(arg0, u32 *, 0x30);
    if ((w != 0U) && (is_confirmed__24TShopEquipmentSellWindowFPv(w) != 0)) {
        TWindow__close((void *)(M2C_FIELD(arg0, u32 *, 0x30)));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        set_field_20__12TQuestListVMFPvi(arg0, 4);
    }
}

s32 handle_withdraw_list_input__18TShopGetItemWindowFPv(void *p) {
    s32 sel;
    s32 x;
    Win_8021E870 *arg0 = (Win_8021E870 *)p;
    s32 count;
    Item_8021E870 kind;
    f32 scale;
    u32 w;
    x = TShopWindowBase__sub_8022397C(arg0);
    if (arg0->f28 != 0U) {
        sel = select_cursor_entry__6TLobbyFPv(arg0->f28);
        if (arg0->f34 != 0U && sel != arg0->f58) {
            if (TCheckRoomSequence__sub_80211034(sel, &arg0->item, x) != 0) {
                set_displayed_item_colored__15TWindowHelpItemFPvUi(arg0->f34, &arg0->item);
            }
            arg0->f58 = sel;
        }
    }
    if (TShopWindowBase__sub_802239EC(arg0) != 0) {
        set_field_20__12TQuestListVMFPvi(arg0, 7);
        return;
    }
    if (TShopWindowBase__sub_80223A48(arg0) != 0) {
        if (TCheckRoomSequence__sub_80210F78(select_cursor_entry__6TLobbyFPv(arg0->f28), &kind.kind, &count, x) != 0) {
            if (kind.kind == 3 && count > 1) {
                void *obj = __nw__7TObjectFUl(0x7C);
                if (obj != NULL) {
                    sel = (s16)get_child_field1c__15TShopWindowBaseFPv(arg0);
                    obj = (void *)TWindowInputNumber__ct(obj, get_window_layout_position(0x2B), 1, count, 1, sel);
                }
                arg0->f30 = (u32)obj;
                if (arg0->f30 != 0U && is_camera_ctrl_active__6TLobbyFv() > 2) {
                    set_position__18TCheckRoomSequenceFPvff(arg0->f30, lbl_805DC6F0, lbl_805DC6F0);
                }
                set_field_20__12TQuestListVMFPvi(arg0, 2);
                return;
            }
            sel = (u16)obj_getField1c(arg0->f24);
            arg0->f2C = create_yes_no_window(get_window_layout_position(0x2B), sel, 0, 0);
            set_ready_flag__18TCheckRoomSequenceFPv(arg0->f2C);
            scale = get_scale__15TShopWindowBaseFv(arg0);
            set_position_xy(arg0->f2C, get_scale__15TShopWindowBaseFv(arg0), scale);
            set_field_20__12TQuestListVMFPvi(arg0, 3);
        }
    }
}

void TShopGetItemWindow__vt9(u8 *arg0) {
    M2C_UNK (*temp_r12)(s32);
    M2C_UNK (*temp_r12_2)(s32);
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        rebuild_item_list__18TShopGetItemWindowFv((void *) (arg0));
        return;
    case 1:
        handle_withdraw_list_input__18TShopGetItemWindowFPv((void *)((void *) (arg0)));
        return;
    case 2:
        TShopGetItemWindow__sub_8021E76C((void *) (arg0));
        return;
    case 3:
        TShopGetItemWindow__sub_8021E5D8((u8 *)((void *) (arg0)));
        return;
    case 4:
        close__18TShopGetItemWindowFPv((void *) (arg0));
        return;
    case 6:
        temp_r12 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x64);
        if (temp_r12 != NULL) {
            temp_r12(M2C_FIELD(arg0, s32 *, 0x5C));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    case 7:
        temp_r12_2 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x60);
        if (temp_r12_2 != NULL) {
            temp_r12_2(M2C_FIELD(arg0, s32 *, 0x5C));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    default:
        return;
    }
}

void *__dt__18TShopGetItemWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TShopGetItemWindow;
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        if (M2C_FIELD(arg0, void **, 0x2C) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x2C)); M2C_FIELD(arg0, M2C_UNK *, 0x2C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x30) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x30)); M2C_FIELD(arg0, M2C_UNK *, 0x30) = 0; }
        if (M2C_FIELD(arg0, void **, 0x34) != NULL) { TWindow__close(M2C_FIELD(arg0, void **, 0x34)); M2C_FIELD(arg0, M2C_UNK *, 0x34) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__18TShopGetItemWindow[];
extern void *lbl_805D36C8;

void *TShopGetItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TShopGetItemWindow;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D36C8;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x24) = arg3;
    M2C_FIELD(arg0, u32 *, 0x54) = 1;
    M2C_FIELD(arg0, u8 *, 0x4C) = 0;
    M2C_FIELD(arg0, u32 *, 0x58) = 0;
    M2C_FIELD(arg0, u32 *, 0x60) = 0;
    M2C_FIELD(arg0, u32 *, 0x64) = 0;
    M2C_FIELD(arg0, u32 *, 0x28) = 0;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, void **, 0x5C) = arg2;
    init__9TItemDataFv((void *)((char *)arg0 + 56));
    return arg0;
}

}
