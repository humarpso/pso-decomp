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

struct RecoveredGlobal_8021DA90___vt__22TShopEquipmentSequence {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_8021DA90_TShopEquipmentSequence__data_80513EC0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8021DB58___vt__22TShopEquipmentSequence {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_8021DB58_TShopEquipmentSequence__data_80513EC0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct W_8021D6D8 { u8 pad[0x3a4]; void *cb0; void *cb1; };

struct S_8021D6D8 { u8 pad[0x24]; s32 f24; };

struct W_8021D750 { u8 pad[0x190]; void *cb0; };

struct S_8021D750 { u8 pad[0x24]; s32 f24; };

struct Base_8021D7B8 { char pad[0x18]; };

struct VObj_8021D7B8 : Base_8021D7B8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};

struct Seq_8021D7B8 { u8 pad[0x24]; void *f24; u8 pad28[4]; void *win; };

extern "C" {
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
u32 TShopSequence__sub_80223600(void *, s32, s32);
unsigned short get_child_field1c__15TShopWindowBaseFPv(void *);
s32 fn_8026934C(s32);
s32 set_service_counter_camera(void *, int);
s32 get_window_layout_position(int, f32);
extern const f32 lbl_805DC6E0;
extern const f32 lbl_805DC6E4;
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK close_message_window__13TShopSequenceFPv(void *);
M2C_UNK __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TWindow__close(void *);
extern RecoveredGlobal_8021DA90___vt__22TShopEquipmentSequence __vt__22TShopEquipmentSequence;
extern RecoveredGlobal_8021DA90_TShopEquipmentSequence__data_80513EC0 TShopEquipmentSequence__data_80513EC0;
u8 *__dt__22TShopEquipmentSequenceFv(u8 *arg0, s16 arg1);
s32 TShopSequence__ct(void *);
s32 TShopWindowBase__sub_8022397C(void *);
extern RecoveredGlobal_8021DA90___vt__22TShopEquipmentSequence __vt__22TShopEquipmentSequence;
extern RecoveredGlobal_8021DA90_TShopEquipmentSequence__data_80513EC0 TShopEquipmentSequence__data_80513EC0;
extern s32 lbl_805D36B8;
extern u8 *lbl_805D6228;
extern s32 lbl_805D622C;
extern s32 lbl_805D6230;
u8 *TShopEquipmentSequence__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
s32 handle_confirm__22TShopEquipmentSequenceFPv(void *arg0);
s32 TShopEquipmentSequence__sub_8021D65C(void);
s32 close_if_done__22TShopEquipmentSequenceFPv(void *arg0);
s32 open_greeting__22TShopEquipmentSequenceFPv(u8 *arg0);
s32 restore_player_state__13TShopSequenceFPv(void *);
void TShopEquipmentSequence__vt9(u8 *arg0);
extern RecoveredGlobal_8021DA90_TShopEquipmentSequence__data_80513EC0 TShopEquipmentSequence__data_80513EC0;
void TShopEquipmentSequence__sub_8021DC08(void);
extern RecoveredGlobal_8021DA90_TShopEquipmentSequence__data_80513EC0 TShopEquipmentSequence__data_80513EC0;
void TShopEquipmentSequence__sub_8021DBE0(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
s32 TKeyBoardControl__sub_801A66B8(void);
void *__nw__7TObjectFUl(u32);
void *TShopEquipmentSellWindow__ct(void *, s32, void *, s32, s32);
void exit__22TShopEquipmentSequenceFPv(void *arg0);
void init_window__22TShopEquipmentSequenceFPv(void *arg0);
extern void *tl_05;
void TShopEquipmentSequence__sub_8021D6D8(S_8021D6D8 *self);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
s32 TKeyBoardControl__sub_801A66B8(void);
void *__nw__7TObjectFUl(u32);
void *TShopEquipmentListWindow__ct(void *, s32, void *, s32);
void exit__22TShopEquipmentSequenceFPv(void *arg0);
extern void *tl_05;
void TShopEquipmentSequence__sub_8021D750(S_8021D750 *self);
u16 obj_getField1c(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
M2C_UNK set_ready_flag__18TCheckRoomSequenceFPv(void *);
s32 get_shop_text(s32 arg0);
f32 get_scale__15TShopWindowBaseFv(void *);
M2C_UNK set_position_xy(void *, f32, f32);
M2C_UNK TWindow__close(void *);
s32 TWindowSubComCard__sub_80265BF8(void *);
void TWindowSubComCard__sub_80265C30(void *w);
void TWindowSubComCard__sub_80265F60(void *w);
s32 forward_trade_action_default__16TObjCityMainWarpFPviii(void *, s32, s32, s32);
s32 TCheckRoomSequence__sub_802664A8(s32, s32, s32);
s32 get_window_layout_position(int, f32);
void update_buy_sell_choice__22TShopEquipmentSequenceFPv(void *arg0);
}

extern "C" {

struct Base_8021D524 { char pad[0x18]; };
struct VObj_8021D524 : Base_8021D524 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};

void exit__22TShopEquipmentSequenceFPv(void *arg0);
void init_window__22TShopEquipmentSequenceFPv(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
M2C_UNK close_if_single_screen__13TShopSequenceFv(void *);
M2C_UNK close_window__13TShopSequenceFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);

extern s32 lbl_805D622C;
extern s32 lbl_805D6230;

void init_window__22TShopEquipmentSequenceFPv(void *arg0) {
    if (arg0 != NULL) {
        ((VObj_8021D524 *)arg0)->m4(0x1B, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(8));
        lbl_805D622C = 0x1A;
        lbl_805D6230 = 2;
    }
}

void exit__22TShopEquipmentSequenceFPv(void *arg0) {
    struct VObj_8021D584_8021D524 *o = (struct VObj_8021D584_8021D524 *)arg0;
    if (o != NULL) {
        o->m4(0x1A, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(2));
    }
}

extern s32 lbl_805D622C;
extern s32 lbl_805D6230;

s32 handle_confirm__22TShopEquipmentSequenceFPv(void *arg0) {
    if ((((VObj_8021D5D4_8021D524*)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_8021D5D4_8021D524*)arg0)->m4(lbl_805D622C, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(lbl_805D6230));
    }
}

s32 TShopEquipmentSequence__sub_8021D65C(void) {  }

s32 close_if_done__22TShopEquipmentSequenceFPv(void *arg0) {
    if ((((VObj_8021D660_8021D524 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        close_if_single_screen__13TShopSequenceFv(arg0);
        close_window__13TShopSequenceFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}
typedef struct Stack_8021D948 Stack_8021D948;
typedef struct VBase_18_a93f07 VBase_18_a93f07;
typedef struct VObj_18_a93f07 VObj_18_a93f07;
#define PSO_VCALL_VObj_18_a93f07_m4(_self, _arg0, _arg1) (((VObj_18_a93f07 *)(_self))->m4((_arg0), (_arg1)))

void TShopEquipmentSequence__sub_8021D6D8(S_8021D6D8 *self) {
    W_8021D6D8 *o = (W_8021D6D8 *)__nw__7TObjectFUl(0x3ac);
    if (o != 0) {
        o = (W_8021D6D8 *)(TShopEquipmentSellWindow__ct(o, (s32)tl_05, self, self->f24, 0x26));
    }
    o->cb0 = (void *)exit__22TShopEquipmentSequenceFPv;
    o->cb1 = (void *)init_window__22TShopEquipmentSequenceFPv;
    TKeyBoardControl__sub_801A66B8();
    set_field_20__12TQuestListVMFPvi(self, 7);
}

void TShopEquipmentSequence__sub_8021D750(S_8021D750 *self) {
    W_8021D750 *o = (W_8021D750 *)__nw__7TObjectFUl(0x194);
    if (o != 0) {
        o = (W_8021D750 *)(TShopEquipmentListWindow__ct(o, (s32)tl_05, self, self->f24));
    }
    o->cb0 = (void *)exit__22TShopEquipmentSequenceFPv;
    TKeyBoardControl__sub_801A66B8();
    set_field_20__12TQuestListVMFPvi(self, 7);
}

void update_buy_sell_choice__22TShopEquipmentSequenceFPv(void *arg0) {
#define self ((Seq_8021D7B8 *)arg0)
    s32 r;
    if (self->win == NULL) {
        s32 id = obj_getField1c(self->f24);
        self->win = (void *)TCheckRoomSequence__sub_802664A8(((s32 (*)(int))get_window_layout_position)(0x2B), 2, id);
        forward_trade_action_default__16TObjCityMainWarpFPviii(self->win, get_shop_text(4), 6, 0);
        forward_trade_action_default__16TObjCityMainWarpFPviii(self->win, get_shop_text(6), 6, 1);
        TWindowSubComCard__sub_80265F60(self->win);
        TWindowSubComCard__sub_80265C30(self->win);
        set_ready_flag__18TCheckRoomSequenceFPv(self->win);
        set_position_xy(self->win, get_scale__15TShopWindowBaseFv(self), get_scale__15TShopWindowBaseFv(self));
    }
    if (self->win != NULL && is_visible__17TWindowSubComCardFPv(self->win) != 0) {
        r = TWindowSubComCard__sub_80265BF8(self->win);
        if (r == 0) {
            set_field_20__12TQuestListVMFPvi(self, 3);
            TWindow__close(self->win);
            self->win = NULL;
            return;
        }
        if (r == 1) {
            set_field_20__12TQuestListVMFPvi(self, 4);
            TWindow__close(self->win);
            self->win = NULL;
            return;
        }
    }
    if (self->win != NULL && get_status_flag__17TWindowSubComCardFPv(self->win) != 0) {
        ((VObj_8021D7B8 *)self)->m4(0x2C, 1);
        set_field_20__12TQuestListVMFPvi(self, 9);
        TWindow__close(self->win);
        self->win = NULL;
    }
}

s32 open_greeting__22TShopEquipmentSequenceFPv(u8 *arg0) {
  Stack_8021D948 stack;
  stack.sp8 = lbl_805DC6E0;
  stack.spC = lbl_805DC6E4;
  TShopSequence__sub_80223600(arg0, get_window_layout_position((int) 0x2C, (f32) lbl_805DC6E0), (s32) (&stack.sp8));
  PSO_VCALL_VObj_18_a93f07_m4(arg0, 0x27, 1);
  *((s32 *) (((s8 *) arg0) + 0x30)) = fn_8026934C((s32) get_child_field1c__15TShopWindowBaseFPv(arg0));
  set_field_20__12TQuestListVMFPvi(arg0, 2);
  *((s32 *) (((s8 *) arg0) + 0x34)) = set_service_counter_camera((void *) arg0, (int) 3);
}
typedef char RecoveredGlobal_8021DA90___vt__22TShopEquipmentSequence_size[sizeof(RecoveredGlobal_8021DA90___vt__22TShopEquipmentSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_8021DA90_TShopEquipmentSequence__data_80513EC0_size[sizeof(RecoveredGlobal_8021DA90_TShopEquipmentSequence__data_80513EC0) == 0x10 ? 1 : -1];

void TShopEquipmentSequence__vt9(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        restore_player_state__13TShopSequenceFPv((void *) (arg0));
        set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (1)));
        return;
    case 1:
        open_greeting__22TShopEquipmentSequenceFPv((u8 *)((void *) (arg0)));
        return;
    case 2:
        update_buy_sell_choice__22TShopEquipmentSequenceFPv((void *)((void *) (arg0)));
        return;
    case 3:
        TShopEquipmentSequence__sub_8021D750((S_8021D750 *)((void *) (arg0)));
        return;
    case 4:
        TShopEquipmentSequence__sub_8021D6D8((S_8021D6D8 *)((void *) (arg0)));
        return;
    case 5:
        ((s32)set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (9))));
        return;
    case 6:
        ((s32)set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (9))));
        return;
    case 7:
        TShopEquipmentSequence__sub_8021D65C();
        return;
    case 9:
        close_if_done__22TShopEquipmentSequenceFPv((void *) (arg0));
        return;
    case 8:
        handle_confirm__22TShopEquipmentSequenceFPv((void *) (arg0));
    default:
        return;
    }
}

u8 *__dt__22TShopEquipmentSequenceFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__22TShopEquipmentSequence.value;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        M2C_FIELD(&TShopEquipmentSequence__data_80513EC0.value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8021DB58___vt__22TShopEquipmentSequence_size[sizeof(RecoveredGlobal_8021DB58___vt__22TShopEquipmentSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_8021DB58_TShopEquipmentSequence__data_80513EC0_size[sizeof(RecoveredGlobal_8021DB58_TShopEquipmentSequence__data_80513EC0) == 0x10 ? 1 : -1];
u8 *TShopEquipmentSequence__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TShopSequence__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8021DB58___vt__22TShopEquipmentSequence *)&__vt__22TShopEquipmentSequence).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D36B8;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    lbl_805D6228 = arg0;
    lbl_805D622C = 0;
    lbl_805D6230 = 0;
    M2C_FIELD(&(*(RecoveredGlobal_8021DB58_TShopEquipmentSequence__data_80513EC0 *)&TShopEquipmentSequence__data_80513EC0).value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 1;
    return arg0;
}

void TShopEquipmentSequence__sub_8021DBE0(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TShopEquipmentSequence__data_80513EC0)[i] = 0;
    }
}

void TShopEquipmentSequence__sub_8021DC08(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TShopEquipmentSequence__data_80513EC0)[i] = 0;
    }
}

}
