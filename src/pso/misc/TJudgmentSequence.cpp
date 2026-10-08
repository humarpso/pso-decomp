#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_80215BF8_80215BA0 { char pad[0x18]; };
struct VObj_80215BF8_80215BA0 : Base_80215BF8_80215BA0 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6(int a, int b);
};
struct Base_80215C48_80215BA0 { char pad[0x18]; };
struct VObj_80215C48_80215BA0 : Base_80215C48_80215BA0 {
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
struct Base_80215D34_80215BA0 { char pad[0x18]; };
struct VObj_80215D34_80215BA0 : Base_80215D34_80215BA0 {
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

struct VBase_18_4a2792
{
  char pad[0x18];
};

struct VObj_18_4a2792 : VBase_18_4a2792 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6(M2C_UNK, M2C_UNK);
};

struct Stack_80215DA0
{
  f32 sp8;
  f32 spC;
};

struct RecoveredGlobal_80215EF8___vt__17TJudgmentSequence {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_80215EF8_TJudgmentSequence__data_80513E80 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct Win_80215CB8 { u8 pad[0x16c]; void *cb0; void *cb1; void *cb2; };

struct Seq_80215CB8 { u8 pad[0x24]; s32 f24; };

struct VtBase80215E74 { char pad[0x18]; };

struct VtObj80215E74 : VtBase80215E74 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
};

extern "C" {
int set_field_20__12TQuestListVMFPvi(void*, void*);
u32 create_message_window__13TShopSequenceFPvii(void *, s32, s32);
s32 get_child_field1c__15TShopWindowBaseFPv(void *);
s32 create_meseta_window(s32);
s32 set_service_counter_camera(void *, int);
s32 get_window_layout_position(int, f32);
extern const f32 lbl_805DC680;
extern const f32 lbl_805DC684;
void TJudgmentSequence__sub_80215DA0(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK close_message_window__13TShopSequenceFPv(void *);
M2C_UNK __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TWindow__close(void *);
extern RecoveredGlobal_80215EF8___vt__17TJudgmentSequence __vt__17TJudgmentSequence;
extern RecoveredGlobal_80215EF8_TJudgmentSequence__data_80513E80 TJudgmentSequence__data_80513E80;
extern s32 lbl_805D61D0;
u8 *__dt__17TJudgmentSequenceFv(u8 *arg0, s16 arg1);
int set_field_20__12TQuestListVMFPvi(void*, void*);
void *__nw__7TObjectFUl(u32);
void *TShopJudgmentItemWindow__ct(void *, s32, void *, s32);
void TJudgmentSequence__sub_80215BCC(void *arg0);
void TJudgmentSequence__sub_80215BA0(void *arg0);
void TJudgmentSequence__sub_80215BF8(void *arg0);
extern void *tl_05;
void TJudgmentSequence__sub_80215CB8(Seq_80215CB8 *self);
void TJudgmentSequence__sub_80215DA0(u8 *arg0);
void TJudgmentSequence__sub_80215CB8(Seq_80215CB8 *self);
void handle_close_input__17TJudgmentSequenceFPv(void *arg0);
void handle_confirm__17TJudgmentSequenceFPv(void *arg0);
void TJudgmentSequence__vt9(void *arg0);
}

extern "C" {

void TJudgmentSequence__sub_80215BCC(void *arg0);
void TJudgmentSequence__vt10(void* p);
void handle_close_input__17TJudgmentSequenceFPv(void *arg0);
void handle_confirm__17TJudgmentSequenceFPv(void *arg0);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
M2C_UNK close_window__13TShopSequenceFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
int restore_player_state__13TShopSequenceFPv(void*);
int set_field_20__12TQuestListVMFPvi(void*, void*);

void TJudgmentSequence__sub_80215BA0(void *arg0) {
    if (arg0 != NULL) {
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(4));
    }
}

void TJudgmentSequence__sub_80215BCC(void *arg0) {
    if (arg0 != NULL) {
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(4));
    }
}

void TJudgmentSequence__sub_80215BF8(void *arg0) {
    struct VObj_80215BF8_80215BA0 *o = (struct VObj_80215BF8_80215BA0 *)arg0;
    if (o != NULL) {
        o->m6(0xD, 1);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(4));
    }
}

void handle_close_input__17TJudgmentSequenceFPv(void *arg0) {
    if ((((VObj_80215C48_80215BA0 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        close_window__13TShopSequenceFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

void TJudgmentSequence__sub_80215CB8(Seq_80215CB8 *self) {
    Win_80215CB8 *o = (Win_80215CB8 *)__nw__7TObjectFUl(0x178);
    if (o != 0) {
        o = (Win_80215CB8 *)TShopJudgmentItemWindow__ct(o, (s32)tl_05, self, self->f24);
    }
    o->cb0 = (void *)TJudgmentSequence__sub_80215BCC;
    o->cb2 = (void *)TJudgmentSequence__sub_80215BA0;
    o->cb1 = (void *)TJudgmentSequence__sub_80215BF8;
    set_field_20__12TQuestListVMFPvi(self, (void *)5);
}

void handle_confirm__17TJudgmentSequenceFPv(void *arg0) {
    if ((((VObj_80215D34_80215BA0 *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(3));
    }
}

typedef struct Stack_80215DA0 Stack_80215DA0;
typedef struct VBase_18_4a2792 VBase_18_4a2792;
typedef struct VObj_18_4a2792 VObj_18_4a2792;
#define PSO_VCALL_VObj_18_4a2792_m6(_self, _arg0, _arg1) (((VObj_18_4a2792 *)(_self))->m6((_arg0), (_arg1)))
void TJudgmentSequence__sub_80215DA0(u8 *arg0) {
  Stack_80215DA0 stack;
  f32 new_var;
  stack.sp8 = lbl_805DC680;
  stack.spC = lbl_805DC684;
  new_var = (f32) lbl_805DC680;
  create_message_window__13TShopSequenceFPvii(arg0, get_window_layout_position((int) 0x2C, new_var), (s32) (&stack.sp8));
  PSO_VCALL_VObj_18_4a2792_m6(arg0, 1, 1);
  *((s32 *) (((s8 *) arg0) + 0x2C)) = create_meseta_window(((s32) get_child_field1c__15TShopWindowBaseFPv(arg0)) & 0xFFFF);
  set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(2));
  *((s32 *) (((s8 *) arg0) + 0x30)) = set_service_counter_camera((void *) arg0, (int) 2);
}

void TJudgmentSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }
typedef char RecoveredGlobal_80215EF8___vt__17TJudgmentSequence_size[sizeof(RecoveredGlobal_80215EF8___vt__17TJudgmentSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_80215EF8_TJudgmentSequence__data_80513E80_size[sizeof(RecoveredGlobal_80215EF8_TJudgmentSequence__data_80513E80) == 0x10 ? 1 : -1];

struct Seq_80215CB8;
void TJudgmentSequence__vt9(void *arg0) {
    switch (M2C_FIELD(arg0, s32 *, 0x20)) {
    case 0:
        ((VtObj80215E74*)arg0)->m10();
        break;
    case 1:
        TJudgmentSequence__sub_80215DA0((u8 *)arg0);
        break;
    case 2:
        handle_confirm__17TJudgmentSequenceFPv(arg0);
        break;
    case 3:
        TJudgmentSequence__sub_80215CB8((Seq_80215CB8 *)arg0);
        break;
    case 4:
        handle_close_input__17TJudgmentSequenceFPv(arg0);
        break;
    case 5:
        break;
    }
}

u8 *__dt__17TJudgmentSequenceFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__17TJudgmentSequence.value;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        lbl_805D61D0 = 0;
        M2C_FIELD(&TJudgmentSequence__data_80513E80.value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}
