#include "types.h"
#include "pso/misc/TShopGetItemWindow.h"
#include "pso/TShopWindowBase.h"
#include "pso/misc/TCheckRoomSequence.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TShopArmorListWindow.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/misc/TWindowHelpItem.h"
#include "pso/misc/TWindowSubComCard.h"
#include "pso/misc/TWindowSubItem.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TWindowInputNumber.h"

struct VBase_18_a93f07
{
  char pad[0x18];
};

struct VObj_18_a93f07 : VBase_18_a93f07 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4(s32, s32);
};

struct Stack_8021E5D8
{
  s32 sp8;
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

struct Item_8021EA48 { u8 data[0x14]; };

struct VBase_8021EA48 { char pad[0x18]; };

struct Win_8021EA48 : VBase_8021EA48 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u32 f28;
    u32 f2C;
    u32 f30;
    u32 f34;
    Item_8021EA48 item;
    u8 pad4C[0x50 - 0x4C];
    s32 f50;
    s32 f54;
    s32 f58;
};

extern "C" {
s32 obj_getField1c(s32);
s32 set_field_20__12TQuestListVMFl(void *, s32);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 set_position_xy(u32, f32, f32);
void TWindow__close(void *);
u32 create_yes_no_window(s32, u16, s32, s32);
s32 get_window_layout_position(s32);
s32 set_field_20__12TQuestListVMFl(void *, s32);
s32 set_stack_count__24TShopEquipmentListWindowFSc(void *, int);
s32 can_inventory_accept_item__10TObjPlayerFPvPv(int, void *);
s32 compact_items__18TCheckRoomSequenceFi(int);
s32 remove_bank_item_amount__18TCheckRoomSequenceFiii(int, int, int);
s32 copy_item_record__18TCheckRoomSequenceFiPvi(int, void *, int);
s32 copy_bank_to_card_window(int);
s32 TShopWindowBase__sub_8022397C(void *);
void TWindow__close(void *);
s32 get_selected_menu_value(int);
s32 select_cursor_entry__6TLobbyFv(int);
void handle_withdraw_confirm__18TShopGetItemWindowFPv(u8 *arg0);
s32 queue_destruction__7TObjectFv(void *);
void handle_withdraw_confirm__18TShopGetItemWindowFPv(u8 *arg0);
void vfunc_11__18TShopGetItemWindowFv(u8 *arg0);
s32 obj_getField1c(s32);
s32 set_field_20__12TQuestListVMFl(void *, s32);
s32 copy_bank_item_with_stack_limit(s32, u8 *, s32 *, s32);
s32 copy_item_record__18TCheckRoomSequenceFiPvi(int, void *, int);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 TShopWindowBase__sub_8022397C(void *);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
void *__nw__7TObjectFUl(u32);
s32 set_position_xy(u32, f32, f32);
u32 __ct__18TWindowInputNumberFPvllls(void *, s32, s32, s32, s32, s16);
u32 create_yes_no_window(s32, u16, s32, s32);
s32 select_cursor_entry__6TLobbyFv(int);
s32 get_window_layout_position(s32);
extern const f32 lbl_805DC6F0;
s32 obj_getField1c(s32);
s32 set_field_20__12TQuestListVMFl(void *, s32);
s32 copy_bank_item_with_stack_limit(s32, u8 *, s32 *, s32);
s32 copy_item_record__18TCheckRoomSequenceFiPvi(int, void *, int);
s32 get_room_table_entry__18TCheckRoomSequenceFi(void);
s32 TShopWindowBase__sub_8022397C(void *);
s32 get_shop_text(s32);
void *__nw__7TObjectFUl(u32);
u32 __ct__15TWindowHelpItemFPvUs(void *, s32, u16);
void reset_list__20TShopArmorListWindowFPv(u32);
void calc_list_content_extent(u32);
void add_item_info_entry__20TWindowSubStatusDispFlll(u32, void *, s32, s32);
s32 get_window_layout_position(s32);
void TWindowSetLevelUp__sub_8026DE28(u32, s32);
u32 create_item_list_window(s32, s32, u16);
extern const f32 lbl_805DC6F0;
}

extern "C" {

void *TShopGetItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3);
void *__dt__18TShopGetItemWindowFv(void *arg0, s16 arg1);
void TWindow__close(void *);
void __ct__15TShopWindowBaseFv(void *);
void __dl__7TObjectFPv(void *);
void __dt__15TShopWindowBaseFv(void *, int);
void init__9TItemDataFv(void *);
s32 set_field_20__12TQuestListVMFl(void *, s32);

s32 TShopGetItemWindow::close() {
    if ((u32) *(u32 *)((s8 *)this + 0x28) != 0U) {
        ((TWindowSubItem *)(*(void **)((s8 *)this + 0x28)))->clear_selected_and_update_entry();
    }
    set_field_20__12TQuestListVMFl(this, 1);
}

extern s32 __vt__18TShopGetItemWindow[];

typedef struct RecoveredFields_8021E5D8_arg0 RecoveredFields_8021E5D8_arg0;
typedef struct Stack_8021E5D8 Stack_8021E5D8;
typedef struct VBase_18_a93f07 VBase_18_a93f07;
typedef struct VObj_18_a93f07 VObj_18_a93f07;
#define PSO_VCALL_VObj_18_a93f07_m4(_self, _arg0, _arg1) (((VObj_18_a93f07 *)(_self))->m4((_arg0), (_arg1)))
void handle_withdraw_confirm__18TShopGetItemWindowFPv(u8 *arg0) {
  Stack_8021E5D8 stack;
  s32 temp_r30;
  s32 temp_r3_2;
  s32 temp_r3_3;
  u32 temp_r3;
  u32 temp_r3_4;
  temp_r3 = ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C;
  if ((temp_r3 != 0U) && (((TWindowSubComCard *)temp_r3)->is_visible() != 0))
  {
    temp_r30 = TShopWindowBase__sub_8022397C((void *) arg0);
    temp_r3_2 = get_selected_menu_value((int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C);
    if (temp_r3_2 == 0)
    {
      temp_r3_3 = select_cursor_entry__6TLobbyFv((int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_28);
      if (copy_item_record__18TCheckRoomSequenceFiPvi((int) temp_r3_3, (void *) (&stack.sp8), (int) (temp_r30 & 0xFFFFFFFFFFFFFFFFu)) != 0)
      {
        stack.sp14 = -1;
        if (TCheckRoomSequence::get_item_def((u32)((void *) (&stack.sp8))) != 0)
        {
          set_stack_count__24TShopEquipmentListWindowFSc((void *) (&stack.sp8), (int) ((s32) ((u8) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_54)));
        }
        if (can_inventory_accept_item__10TObjPlayerFPvPv((int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_24, (void *) (&stack.sp8)) == 0)
        {
          PSO_VCALL_VObj_18_a93f07_m4(arg0, 0x4B, 1);
          set_field_20__12TQuestListVMFl((void *)((void *) arg0), (s32)((int) 6));
        }
        else
        {
          ((TObjPlayer *)((int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_24))->request_inventory_item((TItemData*)(&stack.sp8));
          remove_bank_item_amount__18TCheckRoomSequenceFiii((int) temp_r3_3, (int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_54, (int) temp_r30);
          compact_items__18TCheckRoomSequenceFi((int) temp_r30);
          copy_bank_to_card_window((int) temp_r30);
          set_field_20__12TQuestListVMFl((void *)((void *) arg0), (s32)((int) 0));
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
      set_field_20__12TQuestListVMFl((void *)((void *) arg0), (s32)((int) 4));
      return;
    }
    goto block_12;
  }
  block_12:
  temp_r3_4 = ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C;
  if ((temp_r3_4 != 0U) && (((TWindowSubComCard *)temp_r3_4)->get_status_flag() != 0))
  {
    TWindow__close((void *)((int) ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C));
    ((RecoveredFields_8021E5D8_arg0 *) arg0)->field_2C = 0U;
    set_field_20__12TQuestListVMFl((void *)((void *) arg0), (s32)((int) 4));
  }
}

void TShopGetItemWindow::update_input_number() {
    f32 temp_f31;
    u32 temp_r31;
    u32 w;
    w = *(u32 *)((s8 *)this + 0x30);
    if ((w != 0U) && (((TWindowInputNumber *)w)->is_confirmed() != 0)) {
        if ((u32) *(u32 *)((s8 *)this + 0x2C) == 0U) {
            temp_r31 = (u16) obj_getField1c(*(s32 *)((s8 *)this + 0x24));
            *(u32 *)((s8 *)this + 0x2C) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
            ((TCheckRoomSequence *)(*(u32 *)((s8 *)this + 0x2C)))->set_ready_flag();
            temp_f31 = get_scale__15TShopWindowBaseFv(this);
            set_position_xy(*(u32 *)((s8 *)this + 0x2C), get_scale__15TShopWindowBaseFv(this), temp_f31);
        }
        *(s32 *)((s8 *)this + 0x54) = ((TShopEquipmentSellWindow *)(*(u32 *)((s8 *)this + 0x30)))->get_result();
        TWindow__close((void *)(*(u32 *)((s8 *)this + 0x30)));
        *(u32 *)((s8 *)this + 0x30) = 0U;
        set_field_20__12TQuestListVMFl(this, 3);
        return;
    }
    w = *(u32 *)((s8 *)this + 0x30);
    if ((w != 0U) && (((TShopEquipmentSellWindow *)w)->is_confirmed() != 0)) {
        TWindow__close((void *)(*(u32 *)((s8 *)this + 0x30)));
        *(u32 *)((s8 *)this + 0x30) = 0U;
        set_field_20__12TQuestListVMFl(this, 4);
    }
}

s32 TShopGetItemWindow::handle_withdraw_list_input() {
    s32 sel;
    s32 x;
    Win_8021E870 *arg0 = (Win_8021E870 *)this;
    s32 count;
    Item_8021E870 kind;
    f32 scale;
    u32 w;
    x = TShopWindowBase__sub_8022397C(arg0);
    if (arg0->f28 != 0U) {
        sel = select_cursor_entry__6TLobbyFv(arg0->f28);
        if (arg0->f34 != 0U && sel != arg0->f58) {
            if (copy_item_record__18TCheckRoomSequenceFiPvi(sel, &arg0->item, x) != 0) {
                ((TWindowHelpItem *)(arg0->f34))->set_displayed_item_colored((u32)(&arg0->item));
            }
            arg0->f58 = sel;
        }
    }
    if (TShopWindowBase__sub_802239EC(arg0) != 0) {
        set_field_20__12TQuestListVMFl(arg0, 7);
        return;
    }
    if (TShopWindowBase__sub_80223A48(arg0) != 0) {
        if (copy_bank_item_with_stack_limit(select_cursor_entry__6TLobbyFv(arg0->f28), &kind.kind, &count, x) != 0) {
            if (kind.kind == 3 && count > 1) {
                void *obj = __nw__7TObjectFUl(0x7C);
                if (obj != NULL) {
                    sel = (s16)((TShopWindowBase *)arg0)->get_child_field1c();
                    obj = (void *)__ct__18TWindowInputNumberFPvllls(obj, get_window_layout_position(0x2B), 1, count, 1, sel);
                }
                arg0->f30 = (u32)obj;
                if (arg0->f30 != 0U && TLobby::is_camera_ctrl_active() > 2) {
                    ((TCheckRoomSequence *)(arg0->f30))->set_position(lbl_805DC6F0, lbl_805DC6F0);
                }
                set_field_20__12TQuestListVMFl(arg0, 2);
                return;
            }
            sel = (u16)obj_getField1c(arg0->f24);
            arg0->f2C = create_yes_no_window(get_window_layout_position(0x2B), sel, 0, 0);
            ((TCheckRoomSequence *)(arg0->f2C))->set_ready_flag();
            scale = get_scale__15TShopWindowBaseFv(arg0);
            set_position_xy(arg0->f2C, get_scale__15TShopWindowBaseFv(arg0), scale);
            set_field_20__12TQuestListVMFl(arg0, 3);
        }
    }
}

void TShopGetItemWindow::rebuild_item_list() {
    u16 id;
    s32 x;
    s32 sel;
    s32 i;
    void *obj;
    Win_8021EA48 *arg0 = (Win_8021EA48 *)this;
    arg0->f54 = 1;
    x = TShopWindowBase__sub_8022397C(arg0);
    arg0->f50 = get_room_table_entry__18TCheckRoomSequenceFi();
    if (arg0->f50 == 0) {
        arg0->m4(0x3E, 1);
        set_field_20__12TQuestListVMFl(arg0, 6);
        if (arg0->f28 != 0U) {
            reset_list__20TShopArmorListWindowFPv(arg0->f28);
        }
    } else {
    if (arg0->f28 == 0U) {
        Item_8021EA48 item;
        s32 count;
        arg0->f28 = create_item_list_window(get_shop_text(0x30), 0xC8, obj_getField1c(arg0->f24));
        TWindowSetLevelUp__sub_8026DE28(arg0->f28, 0xC8);
        for (i = 0; i < 0xC8; i++) {
            if (copy_bank_item_with_stack_limit(i, (u8 *)&item, &count, x) != 0) {
                if (count > 1) {
                    add_item_info_entry__20TWindowSubStatusDispFlll(arg0->f28, &item, i, count);
                } else {
                    add_item_info_entry__20TWindowSubStatusDispFlll(arg0->f28, &item, i, 0);
                }
            }
        }
        calc_list_content_extent(arg0->f28);
        sel = ((TShopGetItemWindow *)(arg0->f28))->get_cursor_index();
    } else {
        Item_8021EA48 item;
        s32 count;
        s32 j;
        ((TShopArmorListWindow *)(arg0->f28))->save_cursor_selection();
        reset_list__20TShopArmorListWindowFPv(arg0->f28);
        for (j = 0; j < 0xC8; j++) {
            if (copy_bank_item_with_stack_limit(j, (u8 *)&item, &count, x) != 0) {
                if (count > 1) {
                    add_item_info_entry__20TWindowSubStatusDispFlll(arg0->f28, &item, j, count);
                } else {
                    add_item_info_entry__20TWindowSubStatusDispFlll(arg0->f28, &item, j, 0);
                }
            }
        }
        ((TShopArmorListWindow *)(arg0->f28))->clamp_selection_to_valid_entry();
        calc_list_content_extent(arg0->f28);
        ((TWindowSubItem *)((void *)arg0->f28))->clear_selected_and_update_entry();
        sel = ((TShopGetItemWindow *)(arg0->f28))->get_cursor_index();
    }
    if (arg0->f34 == 0U) {
        if (copy_item_record__18TCheckRoomSequenceFiPvi(sel, &arg0->item, x) != 0) {
            obj = __nw__7TObjectFUl(0xBC);
            if (obj != NULL) {
                id = (u16)obj_getField1c(arg0->f24);
                obj = (void *)__ct__15TWindowHelpItemFPvUs(obj, get_window_layout_position(0x27), id);
            }
            arg0->f34 = (u32)obj;
            if (arg0->f34 != 0U && TLobby::is_camera_ctrl_active() > 2) {
                ((TLobby *)(arg0->f34))->set_position(lbl_805DC6F0, lbl_805DC6F0);
            }
            ((TWindowHelpItem *)(arg0->f34))->set_displayed_item_colored((u32)(&arg0->item));
            arg0->f58 = sel;
        }
    } else if (copy_item_record__18TCheckRoomSequenceFiPvi(sel, &arg0->item, x) != 0) {
        ((TWindowHelpItem *)(arg0->f34))->set_displayed_item_colored((u32)(&arg0->item));
        arg0->f58 = sel;
    }
    set_field_20__12TQuestListVMFl(arg0, 1);
    }
}

void TShopGetItemWindow::vfunc_11() {
    u8 *arg0 = (u8 *)this;
    s32 (*temp_r12)(s32);
    s32 (*temp_r12_2)(s32);
    u32 temp_r0;
    temp_r0 = *(u32 *)((s8 *)arg0 + 0x20);
    switch (temp_r0) {
    case 0:
        ((TShopGetItemWindow *)arg0)->rebuild_item_list();
        return;
    case 1:
        ((TShopGetItemWindow *)arg0)->handle_withdraw_list_input();
        return;
    case 2:
        ((TShopGetItemWindow *)arg0)->update_input_number();
        return;
    case 3:
        handle_withdraw_confirm__18TShopGetItemWindowFPv((u8 *)((void *) (arg0)));
        return;
    case 4:
        ((TShopGetItemWindow *)arg0)->close();
        return;
    case 6:
        temp_r12 = *(s32 (**)(s32))((s8 *)arg0 + 0x64);
        if (temp_r12 != NULL) {
            temp_r12(*(s32 *)((s8 *)arg0 + 0x5C));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    case 7:
        temp_r12_2 = *(s32 (**)(s32))((s8 *)arg0 + 0x60);
        if (temp_r12_2 != NULL) {
            temp_r12_2(*(s32 *)((s8 *)arg0 + 0x5C));
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    default:
        return;
    }
}

void *__dt__18TShopGetItemWindowFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TShopGetItemWindow;
        if (*(void **)((s8 *)arg0 + 0x28) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x28)); *(s32 *)((s8 *)arg0 + 0x28) = 0; }
        if (*(void **)((s8 *)arg0 + 0x2C) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x2C)); *(s32 *)((s8 *)arg0 + 0x2C) = 0; }
        if (*(void **)((s8 *)arg0 + 0x30) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x30)); *(s32 *)((s8 *)arg0 + 0x30) = 0; }
        if (*(void **)((s8 *)arg0 + 0x34) != NULL) { TWindow__close(*(void **)((s8 *)arg0 + 0x34)); *(s32 *)((s8 *)arg0 + 0x34) = 0; }
        __dt__15TShopWindowBaseFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 __vt__18TShopGetItemWindow[];
extern void *TShopGetItemWindow__class_name;

void *TShopGetItemWindow__ct(void *arg0, void *arg1, void *arg2, void *arg3) {
    __ct__15TShopWindowBaseFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__18TShopGetItemWindow;
    *(void **)((s8 *)arg0 + 0x0) = TShopGetItemWindow__class_name;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(void **)((s8 *)arg0 + 0x24) = arg3;
    *(u32 *)((s8 *)arg0 + 0x54) = 1;
    *(u8 *)((s8 *)arg0 + 0x4C) = 0;
    *(u32 *)((s8 *)arg0 + 0x58) = 0;
    *(u32 *)((s8 *)arg0 + 0x60) = 0;
    *(u32 *)((s8 *)arg0 + 0x64) = 0;
    *(u32 *)((s8 *)arg0 + 0x28) = 0;
    *(u32 *)((s8 *)arg0 + 0x2C) = 0;
    *(u32 *)((s8 *)arg0 + 0x30) = 0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    *(void **)((s8 *)arg0 + 0x5C) = arg2;
    init__9TItemDataFv((void *)((char *)arg0 + 56));
    return arg0;
}

}
