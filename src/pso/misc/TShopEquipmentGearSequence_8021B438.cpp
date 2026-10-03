#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
    virtual M2C_UNK m4(M2C_UNK, M2C_UNK);
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
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8021B89C___vt__26TShopEquipmentGearSequence {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_8021B89C_TShopEquipmentGearSequence__data_80513EB0 {
    M2C_UNK value;
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
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
u32 TShopSequence__sub_80223600(void *, s32, s32);
unsigned short get_child_field1c__15TShopWindowBaseFPv(void *);
s32 fn_8026934C(s32);
s32 set_service_counter_camera(void *, int);
s32 get_window_layout_position(int, f32);
extern const f32 lbl_805DC6C8;
extern const f32 lbl_805DC6CC;
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK close_message_window__13TShopSequenceFPv(void *);
M2C_UNK __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TWindow__close(void *);
extern RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence __vt__26TShopEquipmentGearSequence;
extern RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 TShopEquipmentGearSequence__data_80513EB0;
extern s32 lbl_805D6220;
u8 *__dt__26TShopEquipmentGearSequenceFv(u8 *arg0, s16 arg1);
s32 TShopSequence__ct(void *);
s32 TShopWindowBase__sub_8022397C(void *);
extern RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence __vt__26TShopEquipmentGearSequence;
extern RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 TShopEquipmentGearSequence__data_80513EB0;
extern s32 lbl_805D36A0;
extern s32 lbl_805D6218;
extern s32 lbl_805D621C;
extern s32 lbl_805D6220;
u8 *TShopEquipmentGearSequence__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
s32 handle_confirm__26TShopEquipmentGearSequenceFPv(void *);
s32 try_close__26TShopEquipmentGearSequenceFPv(void *);
s32 TShopEquipmentGearSequence__sub_8021B6A8(u8 *arg0);
s32 restore_player_state__13TShopSequenceFPv(void *);
void TShopEquipmentGearSequence__vt9(u8 *arg0);
extern RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 TShopEquipmentGearSequence__data_80513EB0;
void TShopEquipmentGearSequence__sub_8021B94C(void);
extern RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 TShopEquipmentGearSequence__data_80513EB0;
void TShopEquipmentGearSequence__sub_8021B924(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
s32 TKeyBoardControl__sub_801A66B8(void);
void *__nw__7TObjectFUl(u32);
void *TShopEquipmentSellWindow__ct(void *, s32, void *, s32, s32);
void enter_quest_list__26TShopEquipmentGearSequenceFPv(void *);
void open_gear_shop__26TShopEquipmentGearSequenceFPv(void *);
extern void *tl_05;
void TShopEquipmentGearSequence__sub_8021B438(S_8021B438 *self);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
s32 TKeyBoardControl__sub_801A66B8(void);
void *__nw__7TObjectFUl(u32);
void *TShopArmorListWindow__ct(void *, s32, void *, s32);
void enter_quest_list__26TShopEquipmentGearSequenceFPv(void *);
extern void *tl_05;
void TShopEquipmentGearSequence__sub_8021B4B0(S_8021B4B0 *self);
s32 obj_getField1c(s32);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(void *);
s32 get_shop_text(s32);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK set_position_xy(void *, f32, f32);
M2C_UNK TWindow__close(void *);
s32 TWindowSubComCard__sub_80265BF8(void *);
M2C_UNK TWindowSubComCard__sub_80265C30(void *);
M2C_UNK TWindowSubComCard__sub_80265F60(void *);
M2C_UNK forward_trade_action_default__16TObjCityMainWarpFPviii(void *, s32, s32, s32);
void *create_window_menu(s32, s32, u16);
s32 get_window_layout_position(int, f32);
void TShopEquipmentGearSequence__sub_8021B518(void *self);
}

extern "C" {

typedef struct Stack_8021D948 Stack_8021D948;
typedef struct VBase_18_a93f07 VBase_18_a93f07;
typedef struct VObj_18_a93f07 VObj_18_a93f07;
#define PSO_VCALL_VObj_18_a93f07_m4(_self, _arg0, _arg1) (((VObj_18_a93f07 *)(_self))->m4((_arg0), (_arg1)))

void TShopEquipmentGearSequence__sub_8021B438(S_8021B438 *self) {
    W_8021B438 *o = (W_8021B438 *)__nw__7TObjectFUl(0x3ac);
    if (o != 0) {
        o = (W_8021B438 *)(TShopEquipmentSellWindow__ct(o, (s32)tl_05, self, self->f24, 0x2a));
    }
    o->cb0 = (void *)enter_quest_list__26TShopEquipmentGearSequenceFPv;
    o->cb1 = (void *)open_gear_shop__26TShopEquipmentGearSequenceFPv;
    TKeyBoardControl__sub_801A66B8();
    set_field_20__12TQuestListVMFPvi(self, 5);
}

void TShopEquipmentGearSequence__sub_8021B4B0(S_8021B4B0 *self) {
    W_8021B4B0 *o = (W_8021B4B0 *)__nw__7TObjectFUl(0x1f8);
    if (o != 0) {
        o = (W_8021B4B0 *)(TShopArmorListWindow__ct(o, (s32)tl_05, self, self->f24));
    }
    o->cb0 = (void *)enter_quest_list__26TShopEquipmentGearSequenceFPv;
    TKeyBoardControl__sub_801A66B8();
    set_field_20__12TQuestListVMFPvi(self, 5);
}

#define arg0 ((Seq_8021B518 *) self)
void TShopEquipmentGearSequence__sub_8021B518(void *self) {
    u16 id;
    s32 r;
    if (arg0->win == NULL) {
        id = obj_getField1c(arg0->f24);
        arg0->win = create_window_menu(((s32 (*)(int)) get_window_layout_position)(0x2B), 2, id);
        forward_trade_action_default__16TObjCityMainWarpFPviii(arg0->win, get_shop_text(4), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(arg0->win, get_shop_text(6), 6, 1);
        TWindowSubComCard__sub_80265F60(arg0->win);
        TWindowSubComCard__sub_80265C30(arg0->win);
        set_ready_flag__18TCheckRoomSequenceFPv(arg0->win);
        set_position_xy(arg0->win, get_scale__15TShopWindowBaseFv(arg0), get_scale__15TShopWindowBaseFv(arg0));
    }
    if (arg0->win != NULL && is_visible__17TWindowSubComCardFPv(arg0->win) != 0) {
        r = TWindowSubComCard__sub_80265BF8(arg0->win);
        if (r == 0) {
            set_field_20__12TQuestListVMFPvi(arg0, 3);
            TWindow__close(arg0->win);
            arg0->win = NULL;
            return;
        }
        if (r == 1) {
            set_field_20__12TQuestListVMFPvi(arg0, 4);
            TWindow__close(arg0->win);
            arg0->win = NULL;
            return;
        }
    }
    if (arg0->win != NULL && get_status_flag__17TWindowSubComCardFPv(arg0->win) != 0) {
        ((VObj_8021B518 *) arg0)->m4(0x2C, 1);
        set_field_20__12TQuestListVMFPvi(arg0, 6);
        TWindow__close(arg0->win);
        arg0->win = NULL;
    }
}
#undef arg0

s32 TShopEquipmentGearSequence__sub_8021B6A8(u8 *arg0) {
  Stack_8021D948 stack;
  stack.sp8 = lbl_805DC6C8;
  stack.spC = lbl_805DC6CC;
  TShopSequence__sub_80223600(arg0, get_window_layout_position((int) 0x2C, (f32) lbl_805DC6C8), (s32) (&stack.sp8));
  PSO_VCALL_VObj_18_a93f07_m4(arg0, 0x2b, 1);
  *((s32 *) (((s8 *) arg0) + 0x30)) = fn_8026934C((s32) get_child_field1c__15TShopWindowBaseFPv(arg0));
  set_field_20__12TQuestListVMFPvi(arg0, 2);
  *((s32 *) (((s8 *) arg0) + 0x34)) = set_service_counter_camera((void *) arg0, (int) 0x4);
}
typedef char RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence_size[sizeof(RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0_size[sizeof(RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0) == 0x10 ? 1 : -1];

void TShopEquipmentGearSequence__vt9(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        restore_player_state__13TShopSequenceFPv((void *) (arg0));
        set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (1)));
        return;
    case 1:
        TShopEquipmentGearSequence__sub_8021B6A8((u8 *)((void *) (arg0)));
        return;
    case 2:
        TShopEquipmentGearSequence__sub_8021B518((void *)((void *) (arg0)));
        return;
    case 3:
        TShopEquipmentGearSequence__sub_8021B4B0((S_8021B4B0 *)((void *) (arg0)));
        return;
    case 4:
        TShopEquipmentGearSequence__sub_8021B438((S_8021B438 *)((void *) (arg0)));
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
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__26TShopEquipmentGearSequence.value;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        lbl_805D6220 = 0;
        M2C_FIELD(&TShopEquipmentGearSequence__data_80513EB0.value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8021B89C___vt__26TShopEquipmentGearSequence_size[sizeof(RecoveredGlobal_8021B89C___vt__26TShopEquipmentGearSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_8021B89C_TShopEquipmentGearSequence__data_80513EB0_size[sizeof(RecoveredGlobal_8021B89C_TShopEquipmentGearSequence__data_80513EB0) == 0x10 ? 1 : -1];
u8 *TShopEquipmentGearSequence__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TShopSequence__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8021B89C___vt__26TShopEquipmentGearSequence *)&__vt__26TShopEquipmentGearSequence).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D36A0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    (*(u8 * *)&lbl_805D6220) = arg0;
    lbl_805D6218 = 0;
    lbl_805D621C = 0;
    M2C_FIELD(&(*(RecoveredGlobal_8021B89C_TShopEquipmentGearSequence__data_80513EB0 *)&TShopEquipmentGearSequence__data_80513EB0).value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 1;
    return arg0;
}

void TShopEquipmentGearSequence__sub_8021B924(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TShopEquipmentGearSequence__data_80513EB0)[i] = 0;
    }
}

void TShopEquipmentGearSequence__sub_8021B94C(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TShopEquipmentGearSequence__data_80513EB0)[i] = 0;
    }
}

}
