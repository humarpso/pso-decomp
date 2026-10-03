#include "types.h"

#pragma optimization_level 1
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Rec_80211034 { u8 b[0x18]; };
struct Obj_80211408 { u8 pad[0x14]; s16 a; s16 b; };

struct Obj_80211584 { u8 pad[0x14]; s16 a; s16 b; };

struct TWin_8020F070 { u8 pad[0x44]; };

struct TCheckRoomSequence_8020F070 { u8 pad[0x44]; TWin_8020F070 *win; };

struct Obj_8020F268 { u8 pad[0x28]; void (*cb0)(u8 *); void (*cb1)(u32); };

struct Seq_8020F268 { u8 pad[0x24]; s32 f24; };

struct Obj_8020F2D8 { u8 pad[0x60]; void (*cb0)(u8 *); void (*cb1)(u32); };

struct Seq_8020F2D8 { u8 pad[0x24]; s32 f24; };

struct VBase_18_a93f07 { char pad[0x18]; };

struct VObj_18_a93f07 : VBase_18_a93f07 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(M2C_UNK, M2C_UNK);
};

struct VBase_18_f96e2e { char pad[0x18]; };

struct VObj_18_f96e2e : VBase_18_f96e2e {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(s32, M2C_UNK);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};

struct Rec_80210904 { u8 b[0x18]; };

struct VBase_18_8d1630 { char pad[0x18]; };

struct VObj_18_8d1630 : VBase_18_8d1630 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8();
};

typedef s32 M2C_UNK;
struct VBase_8020F478 { char pad[0x18]; };

struct VObj_8020F478 : VBase_8020F478 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(M2C_UNK, M2C_UNK);
};

struct Seq_8020F478 : VObj_8020F478 {
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    void *f34;
};

struct VBase_8020F730 { char pad[0x18]; };

struct VObj_8020F730 : VBase_8020F730 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(M2C_UNK, M2C_UNK);
};

struct Seq_8020F730 : VObj_8020F730 {
    u8 pad1C[0x24 - 0x1C];
    s32 f24;
    u8 pad28[0x34 - 0x28];
    void *f34;
};

struct Item_80210A04 { u8 b0, b1, b2, b3, b4; u8 pad5[0x14 - 5]; s16 f14; u8 pad16[2]; };

struct TWin_8020F070;

struct Win_8020F8C0 { u8 pad[0x394]; void *cb0; void *cb1; };

struct Vec2_80210198 { f32 x; f32 y; };

struct Seq_80210754 {
    s32 f0; u8 pad4[0x14]; void *vt; u8 pad1c[8]; s32 f24; s32 f28; s32 f2c; s32 f30;
    s32 f34, f38, f3c, f40, f44, f48;
};

extern "C" {
extern Rec_80211034 *lbl_80513D88[];
u8 is_item_record_empty(u8 *arg0);
extern s32 lbl_80513D98[];
u8 bank_has_free_row(s32 i);
extern s32 lbl_80513DA8[];
s32 get_bank_meseta_capacity(s32 i);
extern s32 lbl_80513DA8[];
s32 bank_credit_meseta(s32 v, s32 i);
void init__9TItemDataFv(void *);
void TCheckRoomSequence__sub_80211408(Obj_80211408 *self);
void init__9TItemDataFv(void *);
void TAdSinglePlyChrSelectGC__sub_80211584(Obj_80211584 *self);
void TWindow__close(TWin_8020F070 *);
void TCheckRoomSequence__sub_8020F070(TCheckRoomSequence_8020F070 *self);
int set_field_20__12TQuestListVMFPvi(void*, void*);
int reset_controller_input_state(void *);
void *__nw__7TObjectFUl(u32);
void *TShopDeleteItemWindow__ct(void *, s32, void *, s32);
void TCheckRoomSequence__sub_8020F188(u8 *arg0);
void init_check__18TCheckRoomSequenceFUi(u32 arg0);
extern void *tl_05;
void TCheckRoomSequence__sub_8020F268(Seq_8020F268 *self);
int set_field_20__12TQuestListVMFPvi(void*, void*);
int reset_controller_input_state(void *);
void *__nw__7TObjectFUl(u32);
void *TShopGetItemWindow__ct(void *, s32, void *, s32);
void TCheckRoomSequence__sub_8020F188(u8 *arg0);
void init_check__18TCheckRoomSequenceFUi(u32 arg0);
extern void *tl_05;
void TCheckRoomSequence__sub_8020F2D8(Seq_8020F2D8 *self);
extern s32 lbl_805D6160;
extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;
extern s32 TCheckRoomSequence__data_805D616C;
extern s32 TCheckRoomSequence__data_80513DB8[];
void TCheckRoomSequence__sub_80210810(void);
extern s32 lbl_805D6160;
extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;
extern s32 TCheckRoomSequence__data_805D616C;
extern s32 TCheckRoomSequence__data_80513DB8[];
void TCheckRoomSequence__sub_80210860(void);
extern s32 lbl_80513DA8[];
s32 bank_debit_meseta(s32 v, s32 i);
int set_field_20__12TQuestListVMFPvi(void*, void*);
void TCheckRoomSequence__sub_8020F0F0(u8 *arg0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;
void handle_error_ack__18TCheckRoomSequenceFPv(u8 *arg0);
M2C_UNK add_meseta__10TObjPlayerFl(int, int);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 bank_debit_meseta(s32 v, s32 i);
M2C_UNK copy_bank_to_card_window(int);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__18TWindowInputNumberFPv(void* p);
s32 get_room_data__18TCheckRoomSequenceFi(int);
int TShopWindowBase__sub_8022397C(void*);
void TWindow__close(TWin_8020F070 *);
M2C_UNK set_entry_field_20__15TWindowMainMenuFii(int, int);
void accept_meseta_withdrawal__18TCheckRoomSequenceFPv(u8 *arg0);
M2C_UNK try_spend_actor_meseta(int, int);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 bank_credit_meseta(s32 v, s32 i);
M2C_UNK copy_bank_to_card_window(int);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__18TWindowInputNumberFPv(void* p);
s32 get_room_data__18TCheckRoomSequenceFi(int);
int TShopWindowBase__sub_8022397C(void*);
void TWindow__close(TWin_8020F070 *);
M2C_UNK set_entry_field_20__15TWindowMainMenuFii(int, int);
void accept_meseta_deposit__18TCheckRoomSequenceFPv(u8 *arg0);
int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
void TCheckRoomSequence__sub_802114D4(u8 *arg0, u8 *arg1);
extern Rec_80211034 *lbl_80513D88[];
u8 is_item_record_empty(u8 *arg0);
void TCheckRoomSequence__sub_80211408(Obj_80211408 *self);
void copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(void *, void *);
void TCheckRoomSequence__sub_80210904(s32 slot);
M2C_UNK queue_destruction__7TObjectFv(void *);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
s32 TAdPlayerLoadGC__sub_801E1B50(int);
M2C_UNK copy_bank_to_card_window(int);
M2C_UNK close_if_single_screen__13TShopSequenceFv(void *);
M2C_UNK close_window__13TShopSequenceFPv(void *);
int TShopWindowBase__sub_8022397C(void*);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
void TCheckRoomSequence__vt11(u8 *arg0);
s32 obj_getPtr2B0_20(s32);
int set_field_20__12TQuestListVMFPvi(void*, void*);
int reset_controller_input_state(void *);
void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);
s32 get_room_data__18TCheckRoomSequenceFi(int);
int TShopWindowBase__sub_8022397C(void*);
s16 get_child_field1c__15TShopWindowBaseFPv(void *);
void *__nw__7TObjectFUl(u32);
void *TWindowInputNumber__ct(void *, s32, s32, s32, s32, s16);
s32 get_window_layout_position(s32);
s32 is_camera_ctrl_active__6TLobbyFv();
extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;
extern const f32 lbl_805DC630;
void begin_meseta_withdrawal__18TCheckRoomSequenceFPv(Seq_8020F478 *self);
s32 obj_getPtr2B0_20(s32);
int set_field_20__12TQuestListVMFPvi(void*, void*);
int reset_controller_input_state(void *);
void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);
s32 get_bank_meseta_capacity(s32 i);
int TShopWindowBase__sub_8022397C(void*);
s16 get_child_field1c__15TShopWindowBaseFPv(void *);
void *__nw__7TObjectFUl(u32);
void *TWindowInputNumber__ct(void *, s32, s32, s32, s32, s16);
s32 get_window_layout_position(s32);
s32 is_camera_ctrl_active__6TLobbyFv();
extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;
extern const f32 lbl_805DC630;
void begin_meseta_deposit__18TCheckRoomSequenceFPv(Seq_8020F730 *self);
extern Rec_80211034 *lbl_80513D88[];
u8 is_item_record_empty(u8 *arg0);
u8 bank_has_free_row(s32 i);
s32 get_item_use_result__9TItemDataFPv(void *);
s32 get_item_def__18TCheckRoomSequenceFUi(void *);
s32 get_bank_deposit_capacity_for_item(Item_80210A04 *item, s32 slot);
extern Rec_80211034 *lbl_80513D88[];
extern s32 lbl_80513D98[];
u8 is_item_record_empty(u8 *arg0);
u8 bank_has_free_row(s32 i);
s32 TCheckRoomSequence__sub_80210B34(u8 *, s32, s32);
void TCheckRoomSequence__sub_802114D4(u8 *arg0, u8 *arg1);
M2C_UNK copy_bank_to_card_window(int);
s32 store_item_in_bank(u8 *item, s32 arg1, s32 slot);
s32 obj_getField1c(int);
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
int set_field_20__12TQuestListVMFPvi(void*, void*);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(int);
s32 check_room_ready__18TCheckRoomSequenceFv(void);
s32 get_shop_text(int);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK set_position_xy(int, f32, f32);
void TWindow__close(TWin_8020F070 *);
s32 get_selected_menu_value(int);
M2C_UNK align_menu_entry_positions(int);
M2C_UNK TWindowSubComCard__sub_80265F60(int);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
u32 create_window_menu(s32, int, u16);
s32 get_window_layout_position(s32);
void handle_root_choice__18TCheckRoomSequenceFv(u8 *arg0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
int reset_controller_input_state(void *);
s32 get_room_table_entry__18TCheckRoomSequenceFi(s32);
Win_8020F8C0 *TShopKeepItemWindow__ct(void *, void *, u8 *, s32);
int TShopWindowBase__sub_8022397C(void*);
void *__nw__7TObjectFUl(u32);
void init_check_params__18TCheckRoomSequenceFUi(u32 arg0);
void TCheckRoomSequence__sub_8020F0F0(u8 *arg0);
extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;
extern void *tl_05;
void open_deposit_item_window__18TCheckRoomSequenceFv(u8 *arg0);
s32 obj_getField1c(int);
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
int set_field_20__12TQuestListVMFPvi(void*, void*);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(int);
s32 get_shop_text(int);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK set_position_xy(int, f32, f32);
void TWindow__close(TWin_8020F070 *);
s32 get_selected_menu_value(int);
M2C_UNK align_menu_entry_positions(int);
M2C_UNK TWindowSubComCard__sub_80265F60(int);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
u32 create_window_menu(s32, int, u16);
s32 get_window_layout_position(s32);
void handle_withdraw_choice__18TCheckRoomSequenceFv(u8 *arg0);
s32 obj_getField1c(int);
s32 is_visible__17TWindowSubComCardFPv(int);
s32 get_status_flag__17TWindowSubComCardFPv(int);
int set_field_20__12TQuestListVMFPvi(void*, void*);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(int);
s32 get_shop_text(int);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK set_position_xy(int, f32, f32);
void TWindow__close(TWin_8020F070 *);
s32 get_selected_menu_value(int);
M2C_UNK align_menu_entry_positions(int);
M2C_UNK TWindowSubComCard__sub_80265F60(int);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(int, int, int, int);
u32 create_window_menu(s32, int, u16);
s32 get_window_layout_position(s32);
void handle_deposit_choice__18TCheckRoomSequenceFv(u8 *arg0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 get_room_data__18TCheckRoomSequenceFi(int);
s32 set_service_counter_camera(void *, int);
M2C_UNK TShopSequence__sub_80223600(void *, s32, Vec2_80210198 *);
int TShopWindowBase__sub_8022397C(void*);
s16 get_child_field1c__15TShopWindowBaseFPv(void *);
void *__nw__7TObjectFUl(u32);
M2C_UNK set_entry_field_20__15TWindowMainMenuFii(int, int);
void *TWindowDeposit__ct(void *, s32);
s32 fn_8026934C(u16);
s32 get_window_layout_position(s32);
extern const f32 lbl_805DC634;
extern const f32 lbl_805DC638;
void open_bank__18TCheckRoomSequenceFv(u8 *arg0);
int set_field_20__12TQuestListVMFPvi(void*, void*);
u8 *TShopSequence__ct(u8 *arg0);
int TShopWindowBase__sub_8022397C(void*);
extern u8 __vt__18TCheckRoomSequence[];
extern s32 TCheckRoomSequence__data_80513DB8[];
extern s32 lbl_805D3640;
extern s32 TCheckRoomSequence__data_805D616C;
void *TCheckRoomSequence__ct(void *arg0, s32 arg1, s32 arg2_);
}

extern "C" {

void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p);
void TCheckRoomSequence__sub_8020F1DC(void);
void TCheckRoomSequence__sub_802100F8(void);
void TCheckRoomSequence__sub_802100FC(void);
void TCheckRoomSequence__vt10(void* p);
void TShopWindowBase__sub_802115F0(void);
s32 check_room_ready__18TCheckRoomSequenceFv(void);
void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1);
void init_check__18TCheckRoomSequenceFUi(u32 arg0);
void init_check_params__18TCheckRoomSequenceFUi(u32 arg0);
int set_quest_list_mode_19__18TCheckRoomSequenceFPv(void* p);
int copy_bank_from_card_window(void);
s32 get_game_play_mode();
int TShopWindowBase__sub_8022397C(void*);
int copy_entry_bytes__10TObjPlayerFPvPv(void*, void*);
s32 get_result__24TShopEquipmentSellWindowFPv(void* p);
int is_confirmed__18TWindowInputNumberFPv(void* p);
int is_confirmed__24TShopEquipmentSellWindowFPv(void* p);
s32 is_not_split_screen__13TRaderMapCoreFv();
void reset_counter_64__6TLobbyFPv(void* p);
int restore_player_state__13TShopSequenceFPv(void*);
int set_field_20__12TQuestListVMFPvi(void*, void*);
void set_position__18TCheckRoomSequenceFPvff(void* p, f32 a, f32 b);

s32 check_room_ready__18TCheckRoomSequenceFv(void) {
    if (is_not_split_screen__13TRaderMapCoreFv() == 0) {
        return 1;
    }
    return (u32)__cntlzw(get_game_play_mode()) >> 5;
}

extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_8020F070(TCheckRoomSequence_8020F070 *self) {
    if (self->win) {
        TWindow__close(self->win);
        self->win = 0;
    }
}
#pragma pop

void init_check_params__18TCheckRoomSequenceFUi(u32 arg0) {
    TCheckRoomSequence__data_805D6164 = 0x46;
    TCheckRoomSequence__data_805D6168 = 2;
    if (arg0 != 0U) {
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0x10));
    }
}

extern s32 TCheckRoomSequence__data_805D6164;
extern s32 TCheckRoomSequence__data_805D6168;

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_8020F0F0(u8 *arg0) {
    if (arg0 != NULL) {
        ((VObj_18_a93f07 *)(arg0))->m4(0x46, 1);
    }
    if (arg0 != NULL) {
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (2)));
    }
}
#pragma pop

void init_check__18TCheckRoomSequenceFUi(u32 arg0) {
    if (arg0 != 0U) {
        TCheckRoomSequence__data_805D6164 = 0x46;
        TCheckRoomSequence__data_805D6168 = 2;
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0x10));
    }
}

void TCheckRoomSequence__sub_8020F188(u8 *arg0) {
    if (arg0 != NULL) {
        ((VObj_18_a93f07 *)(arg0))->m4(0x1A, 1);
        set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (2));
    }
}

void TCheckRoomSequence__sub_8020F1DC(void) {  }

#pragma push
#pragma optimization_level 1
void handle_error_ack__18TCheckRoomSequenceFPv(u8 *arg0) {
    if ((((VObj_18_f96e2e *)(arg0))->m8() != 0) && ((TShopWindowBase__sub_80223A48((void *) (arg0)) != 0) || (TShopWindowBase__sub_802239EC((void *) (arg0)) != 0))) {
        ((VObj_18_f96e2e *)(arg0))->m4(TCheckRoomSequence__data_805D6164, 1);
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (TCheckRoomSequence__data_805D6168)));
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_8020F268(Seq_8020F268 *self) {
    void *o = __nw__7TObjectFUl(0x68);
    if (o != 0) {
        o = TShopDeleteItemWindow__ct(o, (s32)tl_05, self, self->f24);
    }
    ((Obj_8020F268 *)o)->cb0 = TCheckRoomSequence__sub_8020F188;
    ((Obj_8020F268 *)o)->cb1 = init_check__18TCheckRoomSequenceFUi;
    reset_controller_input_state(o);
    set_field_20__12TQuestListVMFPvi(self, (void*)0x11);
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_8020F2D8(Seq_8020F2D8 *self) {
    void *o = __nw__7TObjectFUl(0x68);
    if (o != 0) {
        o = TShopGetItemWindow__ct(o, (s32)tl_05, self, self->f24);
    }
    ((Obj_8020F2D8 *)o)->cb0 = TCheckRoomSequence__sub_8020F188;
    ((Obj_8020F2D8 *)o)->cb1 = init_check__18TCheckRoomSequenceFUi;
    reset_controller_input_state(o);
    set_field_20__12TQuestListVMFPvi(self, (void*)0x11);
}
#pragma pop

#pragma push
#pragma optimization_level 1
void accept_meseta_withdrawal__18TCheckRoomSequenceFPv(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (((s32)is_confirmed__18TWindowInputNumberFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x34))))) != 0)) {
        temp_r31 = get_result__24TShopEquipmentSellWindowFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        temp_r3 = ((s32)TShopWindowBase__sub_8022397C((void*)((void *) (arg0))));
        bank_debit_meseta((s32)((int) (temp_r31)), (s32)((int) (temp_r3)));
        add_meseta__10TObjPlayerFl((int) (M2C_FIELD(arg0, s32 *, 0x24)), (int) (temp_r31));
        copy_bank_to_card_window((int) (temp_r3));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            set_entry_field_20__15TWindowMainMenuFii((int) (M2C_FIELD(arg0, u32 *, 0x40)), (int) (get_room_data__18TCheckRoomSequenceFi((int) (temp_r3))));
        }
        ((VObj_18_a93f07 *)(arg0))->m4(0x46, 1);
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (2)));
        TWindow__close((TWin_8020F070 *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (((s32)is_confirmed__24TShopEquipmentSellWindowFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x34))))) != 0)) {
        ((VObj_18_a93f07 *)(arg0))->m4(0x46, 1);
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (0xA)));
        TWindow__close((TWin_8020F070 *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void begin_meseta_withdrawal__18TCheckRoomSequenceFPv(Seq_8020F478 *self) {
    s16 id;
    void *w;
    s32 count;
    s32 n;
    count = get_room_data__18TCheckRoomSequenceFi(TShopWindowBase__sub_8022397C(self));
    if (count > 0) {
        n = 999999 - obj_getPtr2B0_20(self->f24);
        n = (n < count) ? n : count;
        if (n > 0) {
            if (self->f34 == NULL) {
                w = __nw__7TObjectFUl(0x7C);
                if (w != NULL) {
                    id = ((s32 (*)(void *))get_child_field1c__15TShopWindowBaseFPv)(self);
                    w = TWindowInputNumber__ct(w, get_window_layout_position(0x2B), 1, n, 1, id);
                }
                self->f34 = w;
                if (self->f34 != NULL && is_camera_ctrl_active__6TLobbyFv() > 2) {
                    set_position__18TCheckRoomSequenceFPvff(self->f34, lbl_805DC630, lbl_805DC630);
                }
            }
            ((void (*)())reset_controller_input_state)();
            self->m4(0x3F, 1);
            set_field_20__12TQuestListVMFPvi(self, (void *)0xC);
            return;
        }
        self->m4(0x4A, 1);
        TCheckRoomSequence__data_805D6164 = 0x46;
        TCheckRoomSequence__data_805D6168 = 2;
        set_field_20__12TQuestListVMFPvi(self, (void *)0x10);
        return;
    }
    self->m4(0x3D, 1);
    TCheckRoomSequence__data_805D6164 = 0x46;
    TCheckRoomSequence__data_805D6168 = 2;
    set_field_20__12TQuestListVMFPvi(self, (void *)0x10);
}
#pragma pop

#pragma push
#pragma optimization_level 1
void accept_meseta_deposit__18TCheckRoomSequenceFPv(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r3;
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (((s32)is_confirmed__18TWindowInputNumberFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x34))))) != 0)) {
        temp_r31 = get_result__24TShopEquipmentSellWindowFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        temp_r3 = ((s32)TShopWindowBase__sub_8022397C((void*)((void *) (arg0))));
        bank_credit_meseta((s32)((int) (temp_r31)), (s32)((int) (temp_r3)));
        try_spend_actor_meseta((int) (M2C_FIELD(arg0, s32 *, 0x24)), (int) (temp_r31));
        copy_bank_to_card_window((int) (temp_r3));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x40) != 0U) {
            set_entry_field_20__15TWindowMainMenuFii((int) (M2C_FIELD(arg0, u32 *, 0x40)), (int) (get_room_data__18TCheckRoomSequenceFi((int) (temp_r3))));
        }
        ((VObj_18_a93f07 *)(arg0))->m4(0x46, 1);
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (2)));
        TWindow__close((TWin_8020F070 *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if (((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) && (((s32)is_confirmed__24TShopEquipmentSellWindowFPv((void*)((int) (M2C_FIELD(arg0, u32 *, 0x34))))) != 0)) {
        ((VObj_18_a93f07 *)(arg0))->m4(0x46, 1);
        set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (3)));
        TWindow__close((TWin_8020F070 *)((int) (M2C_FIELD(arg0, u32 *, 0x34))));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void begin_meseta_deposit__18TCheckRoomSequenceFPv(Seq_8020F730 *self) {
    s16 id;
    s32 meseta;
    void *w;
    s32 slot;
    s32 n;
    slot = TShopWindowBase__sub_8022397C(self);
    if (get_bank_meseta_capacity(slot) > 0) {
        meseta = obj_getPtr2B0_20(self->f24);
        if (meseta > 0) {
            n = get_bank_meseta_capacity(slot);
            n = (n < meseta) ? n : meseta;
            if (self->f34 == NULL) {
                w = __nw__7TObjectFUl(0x7C);
                if (w != NULL) {
                    id = ((s32 (*)(void *))get_child_field1c__15TShopWindowBaseFPv)(self);
                    w = TWindowInputNumber__ct(w, get_window_layout_position(0x2B), 1, n, 1, id);
                }
                self->f34 = w;
                if (self->f34 != NULL && is_camera_ctrl_active__6TLobbyFv() > 2) {
                    set_position__18TCheckRoomSequenceFPvff(self->f34, lbl_805DC630, lbl_805DC630);
                }
            }
            ((void (*)())reset_controller_input_state)();
            self->m4(0x34, 1);
            set_field_20__12TQuestListVMFPvi(self, (void *)5);
            return;
        }
        self->m4(0x47, 1);
        TCheckRoomSequence__data_805D6164 = 0x46;
        TCheckRoomSequence__data_805D6168 = 2;
        set_field_20__12TQuestListVMFPvi(self, (void *)0x10);
        return;
    }
    self->m4(0x37, 1);
    TCheckRoomSequence__data_805D6164 = 0x46;
    TCheckRoomSequence__data_805D6168 = 2;
    set_field_20__12TQuestListVMFPvi(self, (void *)0x10);
}
#pragma pop

#pragma push
#pragma optimization_level 1
void open_deposit_item_window__18TCheckRoomSequenceFv(u8 *arg0) {
    void *mem;
    Win_8020F8C0 *w;
    if (get_room_table_entry__18TCheckRoomSequenceFi(TShopWindowBase__sub_8022397C(arg0)) > 0xC8) {
        ((VObj_18_a93f07 *)(arg0))->m4(0x3C, 1);
        TCheckRoomSequence__data_805D6164 = 0x46;
        TCheckRoomSequence__data_805D6168 = 2;
        set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (0x10));
        return;
    }
    ((VObj_18_a93f07 *)(arg0))->m4(0x38, 1);
    mem = __nw__7TObjectFUl(0x39C);
    w = (Win_8020F8C0 *)mem;
    if (mem != NULL) {
        w = TShopKeepItemWindow__ct(mem, tl_05, arg0, M2C_FIELD(arg0, s32 *, 0x24));
    }
    w->cb0 = (void *)TCheckRoomSequence__sub_8020F0F0;
    w->cb1 = (void *)init_check_params__18TCheckRoomSequenceFUi;
    reset_controller_input_state(w);
    set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (0x11));
}
#pragma pop

int set_quest_list_mode_19__18TCheckRoomSequenceFPv(void* p) { return set_field_20__12TQuestListVMFPvi((void*)(p), (void*)(19)); }

#pragma push
#pragma optimization_level 1
void handle_withdraw_choice__18TCheckRoomSequenceFv(u8 *arg0) {
    s32 temp_r3;
    u16 temp_r30;
    switch (M2C_FIELD(arg0, s32 *, 0x2C)) {
    case 0:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
            temp_r30 = obj_getField1c((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            M2C_FIELD(arg0, u32 *, 0x3C) = create_window_menu(((M2C_UNK)get_window_layout_position((s32)(0x2B))), 2, temp_r30);
            forward_trade_action_default__16TObjCityMainWarpFPviii((int) (M2C_FIELD(arg0, u32 *, 0x3C)), (int) (get_shop_text((int) (2))), (int) (6), (int) (0));
            forward_trade_action_default__16TObjCityMainWarpFPviii((int) (M2C_FIELD(arg0, u32 *, 0x3C)), (int) (get_shop_text((int) (3))), (int) (6), (int) (1));
            TWindowSubComCard__sub_80265F60((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            align_menu_entry_positions((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            set_ready_flag__18TCheckRoomSequenceFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            set_position_xy((int) (M2C_FIELD(arg0, u32 *, 0x3C)), get_scale__15TShopWindowBaseFv((void *) (arg0)), get_scale__15TShopWindowBaseFv((void *) (arg0)));
        }
        ((VObj_18_a93f07 *)(arg0))->m4(0x32, 1);
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
        return;
    case 1:
        if (((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) && (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C))) != 0)) {
            temp_r3 = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            if (temp_r3 == 0) {
                set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (7));
                TWindow__close((TWin_8020F070 *) (M2C_FIELD(arg0, u32 *, 0x3C)));
                M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            }
            if (temp_r3 == 1) {
                set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (9));
                TWindow__close((TWin_8020F070 *) (M2C_FIELD(arg0, u32 *, 0x3C)));
                M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        }
        if (((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) && (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C))) != 0)) {
            ((VObj_18_a93f07 *)(arg0))->m4(0x46, 1);
            set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (2));
            TWindow__close((TWin_8020F070 *) (M2C_FIELD(arg0, u32 *, 0x3C)));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        }
        return;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void handle_deposit_choice__18TCheckRoomSequenceFv(u8 *arg0) {
    s32 temp_r3;
    u16 temp_r30;
    switch (M2C_FIELD(arg0, s32 *, 0x2C)) {
    case 0:
        if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
            temp_r30 = obj_getField1c((int) (M2C_FIELD(arg0, s32 *, 0x24)));
            M2C_FIELD(arg0, u32 *, 0x3C) = create_window_menu(((M2C_UNK)get_window_layout_position((s32)(0x2B))), 2, temp_r30);
            forward_trade_action_default__16TObjCityMainWarpFPviii((int) (M2C_FIELD(arg0, u32 *, 0x3C)), (int) (get_shop_text((int) (2))), (int) (6), (int) (0));
            forward_trade_action_default__16TObjCityMainWarpFPviii((int) (M2C_FIELD(arg0, u32 *, 0x3C)), (int) (get_shop_text((int) (3))), (int) (6), (int) (1));
            TWindowSubComCard__sub_80265F60((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            align_menu_entry_positions((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            set_ready_flag__18TCheckRoomSequenceFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            set_position_xy((int) (M2C_FIELD(arg0, u32 *, 0x3C)), get_scale__15TShopWindowBaseFv((void *) (arg0)), get_scale__15TShopWindowBaseFv((void *) (arg0)));
        }
        ((VObj_18_a93f07 *)(arg0))->m4(0x33, 1);
        M2C_FIELD(arg0, s32 *, 0x2C) = 1;
        return;
    case 1:
        if (((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) && (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C))) != 0)) {
            temp_r3 = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
            if (temp_r3 == 0) {
                set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (6));
                TWindow__close((TWin_8020F070 *) (M2C_FIELD(arg0, u32 *, 0x3C)));
                M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            }
            if (temp_r3 == 1) {
                set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (4));
                TWindow__close((TWin_8020F070 *) (M2C_FIELD(arg0, u32 *, 0x3C)));
                M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            }
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        }
        if (((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) && (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C))) != 0)) {
            ((VObj_18_a93f07 *)(arg0))->m4(0x46, 1);
            set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (2));
            TWindow__close((TWin_8020F070 *) (M2C_FIELD(arg0, u32 *, 0x3C)));
            M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
            M2C_FIELD(arg0, s32 *, 0x2C) = 0;
        }
        return;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void handle_root_choice__18TCheckRoomSequenceFv(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f31_2;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r3;
    s32 temp_r3_2;
    u16 temp_r30;
    u16 temp_r30_2;
    if (check_room_ready__18TCheckRoomSequenceFv() != 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x2C);
        switch (temp_r0) {
        case 0:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
                temp_r30 = obj_getField1c((int) (M2C_FIELD(arg0, s32 *, 0x24)));
                M2C_FIELD(arg0, u32 *, 0x3C) = create_window_menu(((M2C_UNK)get_window_layout_position((s32)(0x2B))), 2, temp_r30);
                forward_trade_action_default__16TObjCityMainWarpFPviii((int) (M2C_FIELD(arg0, u32 *, 0x3C)), (int) (get_shop_text((int) (8))), (int) (6), (int) (0));
                forward_trade_action_default__16TObjCityMainWarpFPviii((int) (M2C_FIELD(arg0, u32 *, 0x3C)), (int) (get_shop_text((int) (9))), (int) (6), (int) (1));
                TWindowSubComCard__sub_80265F60((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
                align_menu_entry_positions((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
                set_ready_flag__18TCheckRoomSequenceFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
                set_position_xy((int) (M2C_FIELD(arg0, u32 *, 0x3C)), get_scale__15TShopWindowBaseFv((void *) (arg0)), get_scale__15TShopWindowBaseFv((void *) (arg0)));
            }
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
            return;
        case 1:
            if (((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) && (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C))) != 0)) {
                temp_r3 = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
                if (temp_r3 == 0) {
                    set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (3));
                    TWindow__close((TWin_8020F070 *) (M2C_FIELD(arg0, u32 *, 0x3C)));
                    M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
                }
                if (temp_r3 == 1) {
                    set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (0xA));
                    TWindow__close((TWin_8020F070 *) (M2C_FIELD(arg0, u32 *, 0x3C)));
                    M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
                }
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            }
            if (((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) && (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C))) != 0)) {
                ((VObj_18_a93f07 *)(arg0))->m4(0x48, 1);
                set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (0xD));
                TWindow__close((TWin_8020F070 *) (M2C_FIELD(arg0, u32 *, 0x3C)));
                M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
                return;
            }
            break;
        }
    } else {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x2C);
        switch (temp_r0_2) {
        case 0:
            if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) == 0U) {
                temp_r30_2 = obj_getField1c((int) (M2C_FIELD(arg0, s32 *, 0x24)));
                M2C_FIELD(arg0, u32 *, 0x3C) = create_window_menu(((M2C_UNK)get_window_layout_position((s32)(0x2B))), 2, temp_r30_2);
                forward_trade_action_default__16TObjCityMainWarpFPviii((int) (M2C_FIELD(arg0, u32 *, 0x3C)), (int) (get_shop_text((int) (0xA))), (int) (6), (int) (1));
                TWindowSubComCard__sub_80265F60((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
                align_menu_entry_positions((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
                set_ready_flag__18TCheckRoomSequenceFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
                set_position_xy((int) (M2C_FIELD(arg0, u32 *, 0x3C)), get_scale__15TShopWindowBaseFv((void *) (arg0)), get_scale__15TShopWindowBaseFv((void *) (arg0)));
            }
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
            return;
        case 1:
            if (((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) && (is_visible__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C))) != 0)) {
                temp_r3_2 = get_selected_menu_value((int) (M2C_FIELD(arg0, u32 *, 0x3C)));
                if (temp_r3_2 == 0) {
                    set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (0xA));
                    TWindow__close((TWin_8020F070 *) (M2C_FIELD(arg0, u32 *, 0x3C)));
                    M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
                }
                if (temp_r3_2 == 1) {
                    set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (0x12));
                    TWindow__close((TWin_8020F070 *) (M2C_FIELD(arg0, u32 *, 0x3C)));
                    M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
                }
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            }
            if (((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) && (get_status_flag__17TWindowSubComCardFPv((int) (M2C_FIELD(arg0, u32 *, 0x3C))) != 0)) {
                ((VObj_18_a93f07 *)(arg0))->m4(0x48, 1);
                set_field_20__12TQuestListVMFPvi((void *) (arg0), (void *) (0xD));
                TWindow__close((TWin_8020F070 *) (M2C_FIELD(arg0, u32 *, 0x3C)));
                M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
                M2C_FIELD(arg0, s32 *, 0x2C) = 0;
            }
            return;
        }
    }
}
#pragma pop

void TCheckRoomSequence__sub_802100F8(void) {  }
void TCheckRoomSequence__sub_802100FC(void) {  }

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__vt11(u8 *arg0) {
    if ((((VObj_18_8d1630 *)(arg0))->m8() != 0) && ((TShopWindowBase__sub_80223A48((void *) (arg0)) != 0) || (TShopWindowBase__sub_802239EC((void *) (arg0)) != 0)) && (TAdPlayerLoadGC__sub_801E1B50((int) (get_chr_select_state__23TAdSinglePlyChrSelectGCFv())) == 0)) {
        copy_bank_to_card_window(TShopWindowBase__sub_8022397C((void*)((void *) (arg0))));
        close_if_single_screen__13TShopSequenceFv((void *) (arg0));
        close_window__13TShopSequenceFPv((void *) (arg0));
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void open_bank__18TCheckRoomSequenceFv(u8 *arg0) {
    void *w;
    Vec2_80210198 v;
    v.x = lbl_805DC634;
    v.y = lbl_805DC638;
    TShopSequence__sub_80223600(arg0, get_window_layout_position(0x2C), &v);
    ((VObj_18_a93f07 *)(arg0))->m4(0x31, 1);
    M2C_FIELD(arg0, s32 *, 0x38) = fn_8026934C(get_child_field1c__15TShopWindowBaseFPv(arg0));
    w = __nw__7TObjectFUl(0x6C);
    if (w != NULL) {
        w = TWindowDeposit__ct(w, get_child_field1c__15TShopWindowBaseFPv(arg0));
    }
    M2C_FIELD(arg0, void **, 0x40) = w;
    set_entry_field_20__15TWindowMainMenuFii(M2C_FIELD(arg0, s32 *, 0x40), get_room_data__18TCheckRoomSequenceFi(TShopWindowBase__sub_8022397C(arg0)));
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = set_service_counter_camera(arg0, 6);
    set_field_20__12TQuestListVMFPvi(arg0, (void *)2);
}
#pragma pop

void TCheckRoomSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); TShopWindowBase__sub_8022397C(p); copy_bank_from_card_window(); set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }

#define self ((Seq_80210754 *)arg0)
void *TCheckRoomSequence__ct(void *arg0, s32 arg1, s32 arg2_) {
    s32 arg2 = arg2_;
    TShopSequence__ct((u8 *)arg0);
    self->vt = __vt__18TCheckRoomSequence;
    self->f0 = lbl_805D3640;
    self->f24 = arg2;
    self->f34 = 0;
    self->f38 = 0;
    self->f3c = 0;
    self->f40 = 0;
    self->f44 = 0;
    self->f48 = 0;
    self->f2c = 0;
    set_field_20__12TQuestListVMFPvi(arg0, 0);
    TCheckRoomSequence__data_805D616C = (s32)arg0;
    self->f30 = 0;
    TCheckRoomSequence__data_80513DB8[TShopWindowBase__sub_8022397C(arg0)] = 1;
    return arg0;
}
#undef self

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_80210810(void) {
    lbl_805D6160 = 0;
    TCheckRoomSequence__data_805D6164 = 0;
    TCheckRoomSequence__data_805D6168 = 0;
    TCheckRoomSequence__data_805D616C = 0;
    for (s32 i = 0; i < 4; i++) {
        TCheckRoomSequence__data_80513DB8[i] = 0;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_80210860(void) {
    lbl_805D6160 = 0;
    TCheckRoomSequence__data_805D6164 = 0;
    TCheckRoomSequence__data_805D6168 = 0;
    TCheckRoomSequence__data_805D616C = 0;
    for (s32 i = 0; i < 4; i++) {
        TCheckRoomSequence__data_80513DB8[i] = 0;
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
u8 bank_has_free_row(s32 i) {
    return lbl_80513D98[i] <= 0xc7;
}
#pragma pop

#pragma push
#pragma optimization_level 1
s32 get_bank_meseta_capacity(s32 i) {
    return 999999 - lbl_80513DA8[i];
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_80210904(s32 slot) {
    u8 *a;
    u8 *b;
    u8 *base;
    base = (u8 *)((Rec_80210904 * *)&lbl_80513D88)[slot];
    for (a = base; a < base + 0x12A8; a += 0x18) {
        if (((s32 (*)(u8 *))is_item_record_empty)(a) != 0) {
            for (b = a + 0x18; b < base + 0x12C0; b += 0x18) {
                if (((s32 (*)(u8 *))is_item_record_empty)(b) == 0) {
                    copy_item_data__23TAdSinglePlyChrSelectGCFPvPv(a, b);
                    TCheckRoomSequence__sub_80211408((Obj_80211408 *)(b));
                    break;
                }
            }
        }
    }
}
#pragma pop

#pragma push
#pragma optimization_level 1
s32 get_bank_deposit_capacity_for_item(Item_80210A04 *item, s32 slot) {
    Item_80210A04 *recs = (Item_80210A04 *)lbl_80513D88[slot];
    s32 i;
    if (item->b0 != 3) {
        return 0;
    }
    if (get_item_def__18TCheckRoomSequenceFUi(item) == 0) {
        return 0;
    }
    for (i = 0; i < 200; i++) {
        if (((s32 (*)(u8 *))is_item_record_empty)((u8 *)&recs[i]) == 0 &&
            item->b0 == recs[i].b0 && item->b1 == recs[i].b1 &&
            item->b2 == recs[i].b2 && item->b4 == recs[i].b4) {
            return get_item_use_result__9TItemDataFPv(&recs[i]) - recs[i].f14;
        }
    }
    if (((s32 (*)(s32))bank_has_free_row)(slot) == 0) {
        return 0;
    }
    return get_item_use_result__9TItemDataFPv(item);
}
#pragma pop

#pragma push
#pragma optimization_level 1
s32 bank_debit_meseta(s32 v, s32 i) {
    if (lbl_80513DA8[i] < v) {
        return 0;
    }
    lbl_80513DA8[i] -= v;
    return 1;
}
#pragma pop

#pragma push
#pragma optimization_level 1
s32 bank_credit_meseta(s32 v, s32 i) {
    lbl_80513DA8[i] += v;
    return 1;
}
#pragma pop

#pragma push
#pragma optimization_level 1
s32 TCheckRoomSequence__sub_80211034(s32 idx, void *data, s32 slot) {
    Rec_80211034 *recs = lbl_80513D88[slot];
    if (idx > 199) {
        return 0;
    }
    if (((s32 (*)(u8 *))is_item_record_empty)((u8 *)&recs[idx]) != 0) {
        return 0;
    }
    copy_data__18TCheckRoomSequenceFPvPv(&recs[idx], data);
    return 1;
}
#pragma pop

#pragma push
#pragma optimization_level 1
s32 store_item_in_bank(u8 *item, s32 arg1, s32 slot) {
    Rec_80211034 *recs = lbl_80513D88[slot];
    s32 i;
    if (TCheckRoomSequence__sub_80210B34(item, arg1, slot) != 0) {
        return 1;
    }
    if (((s32 (*)(s32))bank_has_free_row)(slot) == 0) {
        return 0;
    }
    for (i = 0; i < 200; i++) {
        if (((s32 (*)(u8 *))is_item_record_empty)((u8 *)&recs[i]) != 0) {
            TCheckRoomSequence__sub_802114D4((u8 *)&recs[i], item);
            lbl_80513D98[slot]++;
            copy_bank_to_card_window(slot);
            return 1;
        }
    }
    return 0;
}
#pragma pop

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_80211408(Obj_80211408 *self) {
    init__9TItemDataFv(self);
    self->a = 0;
    self->b = 0;
}
#pragma pop

void copy_data__18TCheckRoomSequenceFPvPv(void* p, void* a1) { *(unsigned char*)(a1) = *(unsigned char*)(p); *(unsigned char*)((char*)a1 + 0x1) = *(unsigned char*)((char*)p + 0x1); *(unsigned char*)((char*)a1 + 0x2) = *(unsigned char*)((char*)p + 0x2); *(unsigned char*)((char*)a1 + 0x3) = *(unsigned char*)((char*)p + 0x3); *(unsigned char*)((char*)a1 + 0x4) = *(unsigned char*)((char*)p + 0x4); *(unsigned char*)((char*)a1 + 0x5) = *(unsigned char*)((char*)p + 0x5); copy_entry_bytes__10TObjPlayerFPvPv((char*)a1 + 0x6, (char*)p + 0x6); copy_entry_bytes__10TObjPlayerFPvPv((char*)a1 + 0x8, (char*)p + 0x8); copy_entry_bytes__10TObjPlayerFPvPv((char*)a1 + 0xa, (char*)p + 0xa); *(void**)((char*)a1 + 0xc) = *(void**)((char*)p + 0xc); *(void**)((char*)a1 + 0x10) = *(void**)((char*)p + 0x10); }

#pragma push
#pragma optimization_level 1
void TCheckRoomSequence__sub_802114D4(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, u8 *, 0) = (u8) M2C_FIELD(arg1, u8 *, 0);
    M2C_FIELD(arg0, u8 *, 1) = (u8) M2C_FIELD(arg1, u8 *, 1);
    M2C_FIELD(arg0, u8 *, 2) = (u8) M2C_FIELD(arg1, u8 *, 2);
    M2C_FIELD(arg0, u8 *, 3) = (u8) M2C_FIELD(arg1, u8 *, 3);
    M2C_FIELD(arg0, u8 *, 4) = (u8) M2C_FIELD(arg1, u8 *, 4);
    M2C_FIELD(arg0, u8 *, 5) = (u8) M2C_FIELD(arg1, u8 *, 5);
    copy_entry_bytes__10TObjPlayerFPvPv((void*)((void *) (arg0 + 6)), (void*)((void *) (arg1 + 6)));
    copy_entry_bytes__10TObjPlayerFPvPv((void*)((void *) (arg0 + 8)), (void*)((void *) (arg1 + 8)));
    copy_entry_bytes__10TObjPlayerFPvPv((void*)((void *) (arg0 + 0xA)), (void*)((void *) (arg1 + 0xA)));
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(arg1, s32 *, 0x10);
    M2C_FIELD(arg0, s16 *, 0x14) = 1;
    M2C_FIELD(arg0, s16 *, 0x16) = 1;
}
#pragma pop

u8 is_item_record_empty(u8 *arg0) {
    return (u8) (M2C_FIELD(arg0, s16 *, 0x16) == 0);
}

#pragma push
#pragma optimization_level 1
void TAdSinglePlyChrSelectGC__sub_80211584(Obj_80211584 *self) {
    init__9TItemDataFv(self);
    self->a = 0;
    self->b = 0;
}
#pragma pop

void* TAdSinglePlyChrSelectGC__sub_802115C0(void* p) { TAdSinglePlyChrSelectGC__sub_80211584((Obj_80211584 *)((void*)(p))); return p; }

void TShopWindowBase__sub_802115F0(void) {  }

}
