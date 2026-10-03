#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021FEE0_8021FE6C { char pad[0x18]; };
struct VObj_8021FEE0_8021FE6C : Base_8021FEE0_8021FE6C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};
struct Base_8021FF30_8021FE6C { char pad[0x18]; };
struct VObj_8021FF30_8021FE6C : Base_8021FF30_8021FE6C {
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
struct Base_8021FFB8_8021FE6C { char pad[0x18]; };
struct VObj_8021FFB8_8021FE6C : Base_8021FFB8_8021FE6C {
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

struct Stack_802202BC
{
  f32 sp8;
  f32 spC;
};

struct RecoveredGlobal_802203E4___vt__20TShopItemTecSequence {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_802203E4_TShopItemTecSequence__data_80513EE0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_802204B0___vt__20TShopItemTecSequence {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_802204B0_TShopItemTecSequence__data_80513EE0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct W_80220030 { u8 pad[0x3a4]; void *cb0; void *cb1; };

struct S_80220030 { u8 pad[0x24]; s32 f24; };

struct W_802200A8 { u8 pad[0x1c0]; void *cb0; };

struct S_802200A8 { u8 pad[0x24]; s32 f24; };

typedef s32 M2C_UNK;
struct VBase_18_80220110 { char pad[0x18]; };

struct Seq_80220110 : VBase_18_80220110 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(M2C_UNK, M2C_UNK);
    u8 pad1C[0x24 - 0x1C];
    void *x24;
    u8 pad28[0x30 - 0x28];
    void *win;
};

extern "C" {
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
u32 TShopSequence__sub_80223600(void *, s32, s32);
s32 get_child_field1c__15TShopWindowBaseFPv(void *);
s32 fn_8026934C(s32);
s32 set_service_counter_camera(void *, int);
s32 get_window_layout_position(int, f32);
extern const f32 lbl_805DC700;
extern const f32 lbl_805DC704;
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK close_message_window__13TShopSequenceFPv(void *);
M2C_UNK __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TWindow__close(void *);
extern RecoveredGlobal_802203E4___vt__20TShopItemTecSequence __vt__20TShopItemTecSequence;
extern RecoveredGlobal_802203E4_TShopItemTecSequence__data_80513EE0 TShopItemTecSequence__data_80513EE0;
extern s32 lbl_805D6250;
u8 *__dt__20TShopItemTecSequenceFv(u8 *arg0, s16 arg1);
s32 TShopSequence__ct(void *);
s32 TShopWindowBase__sub_8022397C(void *);
extern RecoveredGlobal_802203E4___vt__20TShopItemTecSequence __vt__20TShopItemTecSequence;
extern RecoveredGlobal_802203E4_TShopItemTecSequence__data_80513EE0 TShopItemTecSequence__data_80513EE0;
extern s32 lbl_805D36D8;
extern s32 lbl_805D6248;
extern s32 lbl_805D624C;
extern s32 lbl_805D6250;
u8 *TShopItemTecSequence__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
s32 handle_select__20TShopItemTecSequenceFPv(void *arg0);
s32 close_if_done__20TShopItemTecSequenceFPv(void *arg0);
s32 TShopItemTecSequence__sub_802202BC(u8 *arg0);
s32 restore_player_state__13TShopSequenceFPv(void *);
void TShopItemTecSequence__vt9(u8 *arg0);
extern RecoveredGlobal_802203E4_TShopItemTecSequence__data_80513EE0 TShopItemTecSequence__data_80513EE0;
void TShopItemTecSequence__sub_80220560(void);
extern RecoveredGlobal_802203E4_TShopItemTecSequence__data_80513EE0 TShopItemTecSequence__data_80513EE0;
void TShopItemTecSequence__sub_80220538(void);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
s32 TKeyBoardControl__sub_801A66B8(void);
void *__nw__7TObjectFUl(u32);
void *TShopEquipmentSellWindow__ct(void *, s32, void *, s32, s32);
void close__20TShopItemTecSequenceFPv(void *arg0);
void select_and_advance__20TShopItemTecSequenceFPv(void *arg0);
extern void *tl_05;
void TShopItemTecSequence__sub_80220030(S_80220030 *self);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
s32 TKeyBoardControl__sub_801A66B8(void);
void *__nw__7TObjectFUl(u32);
void *TShopItemListWindow__ct(void *, s32, void *, s32);
void close__20TShopItemTecSequenceFPv(void *arg0);
extern void *tl_05;
void TShopItemTecSequence__sub_802200A8(S_802200A8 *self);
s32 obj_getField1c(void *);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
int set_ready_flag__18TCheckRoomSequenceFPv(void *);
s32 get_shop_text(int);
f32 get_scale__15TShopWindowBaseFv(void *);
int set_position_xy(void *, f32, f32);
M2C_UNK TWindow__close(void *);
s32 TWindowSubComCard__sub_80265BF8(void *);
int TWindowSubComCard__sub_80265C30(void *);
int TWindowSubComCard__sub_80265F60(void *);
int forward_trade_action_default__16TObjCityMainWarpFPviii(void* p, int a1, int a2, int a3);
int TCheckRoomSequence__sub_802664A8(void* a0, void* a1, void* a2);
s32 get_window_layout_position(int, f32);
void TShopItemTecSequence__sub_80220110(Seq_80220110 *self);
}

extern "C" {

struct Base_8021FE80_8021FE6C { char pad[0x18]; };
struct VObj_8021FE80_8021FE6C : Base_8021FE80_8021FE6C {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};

int TShopItemTecSequence__sub_8021FE6C(int a0);
void close__20TShopItemTecSequenceFPv(void *arg0);
void select_and_advance__20TShopItemTecSequenceFPv(void *arg0);
void set_judgment_target_flag(void *arg0, void *arg1);
u32 find_item_by_id(s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
M2C_UNK add_item_flags__10TObjPlayerFPvUi(u32, M2C_UNK);
M2C_UNK close_if_single_screen__13TShopSequenceFv(void *);
M2C_UNK close_window__13TShopSequenceFPv(void *);
s32 is_not_split_screen__13TRaderMapCoreFv();
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);

    extern int lbl_80513EF0[];
int TShopItemTecSequence__sub_8021FE6C(int a0) {  return lbl_80513EF0[a0]; }

extern s32 lbl_805D6248;
extern s32 lbl_805D624C;

void select_and_advance__20TShopItemTecSequenceFPv(void *arg0) {
    if (arg0 != NULL) {
        ((VObj_8021FE80_8021FE6C *)arg0)->m4(0x1B, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(6));
        lbl_805D6248 = 0x1A;
        lbl_805D624C = 2;
    }
}

void close__20TShopItemTecSequenceFPv(void *arg0) {
    struct VObj_8021FEE0_8021FE6C *o = (struct VObj_8021FEE0_8021FE6C *)arg0;
    if (o != NULL) {
        o->m4(0x1A, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(2));
    }
}

extern s32 lbl_805D6248;
extern s32 lbl_805D624C;

s32 handle_select__20TShopItemTecSequenceFPv(void *arg0) {
    if ((((VObj_8021FF30_8021FE6C*)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        ((VObj_8021FF30_8021FE6C*)arg0)->m4(lbl_805D6248, 1);
        set_field_20__12TQuestListVMFPvi((void *)(arg0), (s32)(lbl_805D624C));
    }
}

s32 close_if_done__20TShopItemTecSequenceFPv(void *arg0) {
    if ((((VObj_8021FFB8_8021FE6C *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        close_if_single_screen__13TShopSequenceFv(arg0);
        close_window__13TShopSequenceFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

typedef struct Stack_802202BC Stack_802202BC;
typedef struct VBase_18_a93f07 VBase_18_a93f07;
typedef struct VObj_18_a93f07 VObj_18_a93f07;
#define PSO_VCALL_VObj_18_a93f07_m4(_self, _arg0, _arg1) (((VObj_18_a93f07 *)(_self))->m4((_arg0), (_arg1)))

void TShopItemTecSequence__sub_80220030(S_80220030 *self) {
    W_80220030 *o = (W_80220030 *)__nw__7TObjectFUl(0x3ac);
    if (o != 0) {
        o = (W_80220030 *)(TShopEquipmentSellWindow__ct(o, (s32)tl_05, self, self->f24, 0x2d));
    }
    o->cb0 = (void *)close__20TShopItemTecSequenceFPv;
    o->cb1 = (void *)select_and_advance__20TShopItemTecSequenceFPv;
    TKeyBoardControl__sub_801A66B8();
    set_field_20__12TQuestListVMFPvi(self, 5);
}

void TShopItemTecSequence__sub_802200A8(S_802200A8 *self) {
    W_802200A8 *o = (W_802200A8 *)__nw__7TObjectFUl(0x1c4);
    if (o != 0) {
        o = (W_802200A8 *)(TShopItemListWindow__ct(o, (s32)tl_05, self, self->f24));
    }
    o->cb0 = (void *)close__20TShopItemTecSequenceFPv;
    TKeyBoardControl__sub_801A66B8();
    set_field_20__12TQuestListVMFPvi(self, 5);
}

void TShopItemTecSequence__sub_80220110(Seq_80220110 *self) {
    s32 r;
    if (self->win == NULL) {
        u16 id = obj_getField1c(self->x24);
        self->win = (void *)TCheckRoomSequence__sub_802664A8((void *)((s32 (*)(int))get_window_layout_position)(0x2B), (void *)2, (void *)id);
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
            self->m4(0xB, 1);
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
        self->m4(0x2C, 1);
        set_field_20__12TQuestListVMFPvi(self, 7);
        TWindow__close(self->win);
        self->win = NULL;
    }
}

s32 TShopItemTecSequence__sub_802202BC(u8 *arg0) {
  Stack_802202BC stack;
  stack.sp8 = lbl_805DC700;
  stack.spC = lbl_805DC704;
  TShopSequence__sub_80223600(arg0, get_window_layout_position((int) 0x2C, (f32) lbl_805DC700), (s32) (&stack.sp8));
  PSO_VCALL_VObj_18_a93f07_m4(arg0, 0x2E, 1);
  *((s32 *) (((s8 *) arg0) + 0x2C)) = fn_8026934C((s32) ((((get_child_field1c__15TShopWindowBaseFPv(arg0) & 0xFFFF) & 0xFFFF) & 0xFFFF) & 0xFFFF));
  set_field_20__12TQuestListVMFPvi(arg0, 2);
  *((s32 *) (((s8 *) arg0) + 0x34)) = set_service_counter_camera((void *) arg0, (int) 5);
}

typedef char RecoveredGlobal_802203E4___vt__20TShopItemTecSequence_size[sizeof(RecoveredGlobal_802203E4___vt__20TShopItemTecSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_802203E4_TShopItemTecSequence__data_80513EE0_size[sizeof(RecoveredGlobal_802203E4_TShopItemTecSequence__data_80513EE0) == 0x10 ? 1 : -1];

void TShopItemTecSequence__vt9(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        restore_player_state__13TShopSequenceFPv((void *) (arg0));
        set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (1)));
        return;
    case 1:
        TShopItemTecSequence__sub_802202BC((u8 *)((void *) (arg0)));
        return;
    case 2:
        TShopItemTecSequence__sub_80220110((Seq_80220110 *)((void *) (arg0)));
        return;
    case 3:
        TShopItemTecSequence__sub_802200A8((S_802200A8 *)((void *) (arg0)));
        return;
    case 4:
        TShopItemTecSequence__sub_80220030((S_80220030 *)((void *) (arg0)));
        return;
    case 7:
        close_if_done__20TShopItemTecSequenceFPv((void *) (arg0));
        return;
    case 6:
        handle_select__20TShopItemTecSequenceFPv((void *) (arg0));
    default:
        return;
    }
}

u8 *__dt__20TShopItemTecSequenceFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__20TShopItemTecSequence.value;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        lbl_805D6250 = 0;
        M2C_FIELD(&TShopItemTecSequence__data_80513EE0.value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_802204B0___vt__20TShopItemTecSequence_size[sizeof(RecoveredGlobal_802204B0___vt__20TShopItemTecSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_802204B0_TShopItemTecSequence__data_80513EE0_size[sizeof(RecoveredGlobal_802204B0_TShopItemTecSequence__data_80513EE0) == 0x10 ? 1 : -1];
u8 *TShopItemTecSequence__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TShopSequence__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802204B0___vt__20TShopItemTecSequence *)&__vt__20TShopItemTecSequence).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D36D8;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    (*(u8 * *)&lbl_805D6250) = arg0;
    lbl_805D6248 = 0;
    lbl_805D624C = 0;
    M2C_FIELD(&(*(RecoveredGlobal_802204B0_TShopItemTecSequence__data_80513EE0 *)&TShopItemTecSequence__data_80513EE0).value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 1;
    return arg0;
}

void TShopItemTecSequence__sub_80220538(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TShopItemTecSequence__data_80513EE0)[i] = 0;
    }
}

void TShopItemTecSequence__sub_80220560(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TShopItemTecSequence__data_80513EE0)[i] = 0;
    }
}

void set_judgment_target_flag(void *arg0, void *arg1) {
    u32 temp_r3;
    if ((is_not_split_screen__13TRaderMapCoreFv() == 1) && ((temp_r3 = find_item_by_id(M2C_FIELD(arg1, s32 *, 0xC))) != 0U) && ((s32) M2C_FIELD(arg0, s32 *, 0x168) != 0)) {
        add_item_flags__10TObjPlayerFPvUi(temp_r3, 0x80);
    }
}

}
