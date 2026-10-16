#include "types.h"
#include "pso/misc/TShopEquipmentGearSequence.h"
#include "pso/misc/TWindowMenu.h"
#include "pso/misc/TCheckRoomSequence.h"
#include "pso/misc/TQuestListVM.h"
#include "pso/misc/TWindowSubComCard.h"

struct Base_8021D584_8021D524 { char pad[0x18]; };

struct VObj_8021D584_8021D524 : Base_8021D584_8021D524 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};

struct Base_8021D5D4_8021D524 { char pad[0x18]; };

struct VObj_8021D5D4_8021D524 : Base_8021D5D4_8021D524 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32  m8();
};

struct Base_8021D660_8021D524 { char pad[0x18]; };

struct VObj_8021D660_8021D524 : Base_8021D660_8021D524 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual int m8();
};

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

struct Stack_8021D948
{
  f32 sp8;
  f32 spC;
};

struct Base_8021D524 { char pad[0x18]; };

struct VObj_8021D524 : Base_8021D524 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};

struct RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence {
    s32 value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8021B89C___vt__26TShopEquipmentGearSequence {
    s32 value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_8021B89C_TShopEquipmentGearSequence__data_80513EB0 {
    s32 value;
    u8 remaining[0xC];
};

struct W_8021B438 { u8 pad[0x3a4]; void *cb0; void *cb1; };

struct S_8021B438 { u8 pad[0x24]; s32 f24; };

struct W_8021B4B0 { u8 pad[0x1f4]; void *cb0; };

struct S_8021B4B0 { u8 pad[0x24]; s32 f24; };

struct Base_8021B518 { char pad[0x18]; };

struct VObj_8021B518 : Base_8021B518 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
};

struct Seq_8021B518 { u8 pad[0x24]; s32 f24; u8 pad28[4]; void *win; };

extern "C" {
u32 create_message_window__13TShopSequenceFPvii(void *, s32, s32);
unsigned short get_child_field1c__15TShopWindowBaseFv(void *);
s32 create_meseta_window(s32);
s32 set_service_counter_camera(void *, int);
s32 get_window_layout_position(int, f32);
extern const f32 lbl_805DC6C8;
extern const f32 lbl_805DC6CC;
s32 queue_destruction__7TObjectFv(void *);
s32 close_message_window__13TShopSequenceFPv(void *);
s32 __dt__13TShopSequenceFv(void *, int);
s32 sub_8022397C__15TShopWindowBaseFv(void *);
s32 __dl__7TObjectFPv(void *);
s32 TWindow__close(void *);
extern RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence __vt__26TShopEquipmentGearSequence;
extern RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 TShopEquipmentGearSequence__window_slot_table;
extern s32 lbl_805D6220;
u8 *__dt__26TShopEquipmentGearSequenceFv(u8 *arg0, s16 arg1);
s32 TShopSequence__ct(void *);
s32 sub_8022397C__15TShopWindowBaseFv(void *);
extern RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence __vt__26TShopEquipmentGearSequence;
extern RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 TShopEquipmentGearSequence__window_slot_table;
extern s32 TShopEquipmentGearSequence__class_name;
extern s32 lbl_805D6218;
extern s32 lbl_805D621C;
extern s32 lbl_805D6220;
u8 *TShopEquipmentGearSequence__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 handle_confirm__26TShopEquipmentGearSequenceFPv(void *);
s32 try_close__26TShopEquipmentGearSequenceFPv(void *);
s32 open_greeting__26TShopEquipmentGearSequenceFPv(u8 *arg0);
s32 restore_player_state__13TShopSequenceFPv(void *);
void vfunc_11__26TShopEquipmentGearSequenceFv(u8 *arg0);
extern RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 TShopEquipmentGearSequence__window_slot_table;
void clear_window_slot_table__26TShopEquipmentGearSequenceFv(void);
extern RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 TShopEquipmentGearSequence__window_slot_table;
void clear_window_slots__26TShopEquipmentGearSequenceFv(void);
s32 reset_controller_input_state(void);
void *__nw__7TObjectFUl(u32);
void *TShopEquipmentSellWindow__ct(void *, s32, void *, s32, s32);
void enter_quest_list__26TShopEquipmentGearSequenceFPv(void *);
void open_gear_shop__26TShopEquipmentGearSequenceFPv(void *);
extern void *tl_05;
void open_sell_window__26TShopEquipmentGearSequenceFPv(S_8021B438 *self);
s32 reset_controller_input_state(void);
void *__nw__7TObjectFUl(u32);
void *TShopArmorListWindow__ct(void *, s32, void *, s32);
void enter_quest_list__26TShopEquipmentGearSequenceFPv(void *);
extern void *tl_05;
void open_armor_list_window__26TShopEquipmentGearSequenceFPv(S_8021B4B0 *self);
s32 obj_getField1c(s32);
s32 get_shop_text(s32);
f32 get_scale__15TShopWindowBaseFv(void *);
s32 set_position_xy__13TUnk_804CDFE8Fff(void *, f32, f32);
s32 TWindow__close(void *);
s32 get_selected_menu_value(void *);
s32 align_menu_entry_positions(void *);
s32 calc_window_size__17TWindowSubComCardFPv(void *);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(void *, s32, s32, s32);
void *create_window_menu(s32, s32, u16);
s32 get_window_layout_position(int, f32);
void update_buy_sell_choice__26TShopEquipmentGearSequenceFPv(void *self);
}

extern "C" {

typedef struct Stack_8021D948 Stack_8021D948;
typedef struct VBase_18_a93f07 VBase_18_a93f07;
typedef struct VObj_18_a93f07 VObj_18_a93f07;
#define PSO_VCALL_VObj_18_a93f07_m4(_self, _arg0, _arg1) (((VObj_18_a93f07 *)(_self))->m4((_arg0), (_arg1)))

void open_sell_window__26TShopEquipmentGearSequenceFPv(S_8021B438 *self) {
    W_8021B438 *o = (W_8021B438 *)__nw__7TObjectFUl(0x3ac);
    if (o != 0) {
        o = (W_8021B438 *)(TShopEquipmentSellWindow__ct(o, (s32)tl_05, self, self->f24, 0x2a));
    }
    o->cb0 = (void *)enter_quest_list__26TShopEquipmentGearSequenceFPv;
    o->cb1 = (void *)open_gear_shop__26TShopEquipmentGearSequenceFPv;
    reset_controller_input_state();
    ((TQuestListVM *)self)->set_field_20(5);
}

void open_armor_list_window__26TShopEquipmentGearSequenceFPv(S_8021B4B0 *self) {
    W_8021B4B0 *o = (W_8021B4B0 *)__nw__7TObjectFUl(0x1f8);
    if (o != 0) {
        o = (W_8021B4B0 *)(TShopArmorListWindow__ct(o, (s32)tl_05, self, self->f24));
    }
    o->cb0 = (void *)enter_quest_list__26TShopEquipmentGearSequenceFPv;
    reset_controller_input_state();
    ((TQuestListVM *)self)->set_field_20(5);
}

#define arg0 ((Seq_8021B518 *) self)
void update_buy_sell_choice__26TShopEquipmentGearSequenceFPv(void *self) {
    u16 id;
    s32 r;
    if (arg0->win == NULL) {
        id = obj_getField1c(arg0->f24);
        arg0->win = create_window_menu(((s32 (*)(int)) get_window_layout_position)(0x2B), 2, id);
        forward_trade_action_default__16TObjCityMainWarpFPviii(arg0->win, get_shop_text(4), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(arg0->win, get_shop_text(6), 6, 1);
        calc_window_size__17TWindowSubComCardFPv(arg0->win);
        align_menu_entry_positions(arg0->win);
        ((TCheckRoomSequence *)(arg0->win))->set_ready_flag();
        set_position_xy__13TUnk_804CDFE8Fff(arg0->win, get_scale__15TShopWindowBaseFv(arg0), get_scale__15TShopWindowBaseFv(arg0));
    }
    if (arg0->win != NULL && ((TWindowMenu *)(arg0->win))->is_visible() != 0) {
        r = get_selected_menu_value(arg0->win);
        if (r == 0) {
            ((TQuestListVM *)arg0)->set_field_20(3);
            TWindow__close(arg0->win);
            arg0->win = NULL;
            return;
        }
        if (r == 1) {
            ((TQuestListVM *)arg0)->set_field_20(4);
            TWindow__close(arg0->win);
            arg0->win = NULL;
            return;
        }
    }
    if (arg0->win != NULL && ((TWindowSubComCard *)(arg0->win))->get_status_flag() != 0) {
        ((VObj_8021B518 *) arg0)->m4(0x2C, 1);
        ((TQuestListVM *)arg0)->set_field_20(6);
        TWindow__close(arg0->win);
        arg0->win = NULL;
    }
}
#undef arg0

s32 open_greeting__26TShopEquipmentGearSequenceFPv(u8 *arg0) {
  Stack_8021D948 stack;
  stack.sp8 = lbl_805DC6C8;
  stack.spC = lbl_805DC6CC;
  create_message_window__13TShopSequenceFPvii(arg0, get_window_layout_position((int) 0x2C, (f32) lbl_805DC6C8), (s32) (&stack.sp8));
  PSO_VCALL_VObj_18_a93f07_m4(arg0, 0x2b, 1);
  *((s32 *) (((s8 *) arg0) + 0x30)) = create_meseta_window((s32) get_child_field1c__15TShopWindowBaseFv(arg0));
  ((TQuestListVM *)arg0)->set_field_20(2);
  *((s32 *) (((s8 *) arg0) + 0x34)) = set_service_counter_camera((void *) arg0, (int) 0x4);
}
typedef char RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence_size[sizeof(RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0_size[sizeof(RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0) == 0x10 ? 1 : -1];

void TShopEquipmentGearSequence::vfunc_11() {
    u8 *arg0 = (u8 *)this;
    u32 temp_r0;
    temp_r0 = *(u32 *)((s8 *)arg0 + 0x20);
    switch (temp_r0) {
    case 0:
        restore_player_state__13TShopSequenceFPv((void *) (arg0));
        ((TQuestListVM *)arg0)->set_field_20((s32)((int) (1)));
        return;
    case 1:
        open_greeting__26TShopEquipmentGearSequenceFPv((u8 *)((void *) (arg0)));
        return;
    case 2:
        update_buy_sell_choice__26TShopEquipmentGearSequenceFPv((void *)((void *) (arg0)));
        return;
    case 3:
        open_armor_list_window__26TShopEquipmentGearSequenceFPv((S_8021B4B0 *)((void *) (arg0)));
        return;
    case 4:
        open_sell_window__26TShopEquipmentGearSequenceFPv((S_8021B438 *)((void *) (arg0)));
        return;
    case 6:
        try_close__26TShopEquipmentGearSequenceFPv((void *) (arg0));
        return;
    case 7:
        handle_confirm__26TShopEquipmentGearSequenceFPv((void *) (arg0));
    default:
        return;
    }
}

u8 *__dt__26TShopEquipmentGearSequenceFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &__vt__26TShopEquipmentGearSequence.value;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x34) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x34));
            *(u32 *)((s8 *)arg0 + 0x34) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x2C));
            *(u32 *)((s8 *)arg0 + 0x2C) = 0U;
        }
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x30));
            *(u32 *)((s8 *)arg0 + 0x30) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        lbl_805D6220 = 0;
        *(s32 *)((s8 *)(&TShopEquipmentGearSequence__window_slot_table.value) + (sub_8022397C__15TShopWindowBaseFv((void *) (arg0)) * 4)) = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8021B89C___vt__26TShopEquipmentGearSequence_size[sizeof(RecoveredGlobal_8021B89C___vt__26TShopEquipmentGearSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_8021B89C_TShopEquipmentGearSequence__data_80513EB0_size[sizeof(RecoveredGlobal_8021B89C_TShopEquipmentGearSequence__data_80513EB0) == 0x10 ? 1 : -1];
u8 *TShopEquipmentGearSequence__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TShopSequence__ct((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8021B89C___vt__26TShopEquipmentGearSequence *)&__vt__26TShopEquipmentGearSequence).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TShopEquipmentGearSequence__class_name;
    *(s32 *)((s8 *)arg0 + 0x20) = 0;
    *(s32 *)((s8 *)arg0 + 0x24) = arg2;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    *(s32 *)((s8 *)arg0 + 0x34) = 0;
    (*(u8 * *)&lbl_805D6220) = arg0;
    lbl_805D6218 = 0;
    lbl_805D621C = 0;
    *(s32 *)((s8 *)(&(*(RecoveredGlobal_8021B89C_TShopEquipmentGearSequence__data_80513EB0 *)&TShopEquipmentGearSequence__window_slot_table).value) + (sub_8022397C__15TShopWindowBaseFv((void *) (arg0)) * 4)) = 1;
    return arg0;
}

void clear_window_slots__26TShopEquipmentGearSequenceFv(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TShopEquipmentGearSequence__window_slot_table)[i] = 0;
    }
}

void clear_window_slot_table__26TShopEquipmentGearSequenceFv(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TShopEquipmentGearSequence__window_slot_table)[i] = 0;
    }
}

}
