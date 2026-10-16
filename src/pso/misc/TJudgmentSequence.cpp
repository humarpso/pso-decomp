#include "types.h"
#include "pso/misc/TJudgmentSequence.h"
#include "pso/TShopWindowBase.h"

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
    virtual s32 m6(s32, s32);
};

struct Stack_80215DA0
{
  f32 sp8;
  f32 spC;
};

struct RecoveredGlobal_80215EF8___vt__17TJudgmentSequence {
    s32 value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_80215EF8_TJudgmentSequence__data_80513E80 {
    s32 value;
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
int set_field_20__12TQuestListVMFl(void*, void*);
u32 create_message_window__13TShopSequenceFPvii(void *, s32, s32);
s32 create_meseta_window(s32);
s32 set_service_counter_camera(void *, int);
s32 get_window_layout_position(int, f32);
extern const f32 lbl_805DC680;
extern const f32 lbl_805DC684;
s32 queue_destruction__7TObjectFv(void *);
s32 close_message_window__13TShopSequenceFPv(void *);
s32 __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __dl__7TObjectFPv(void *);
s32 TWindow__close(void *);
extern RecoveredGlobal_80215EF8___vt__17TJudgmentSequence __vt__17TJudgmentSequence;
extern RecoveredGlobal_80215EF8_TJudgmentSequence__data_80513E80 TJudgmentSequence__slot_flags;
extern s32 judgment_sequence_instance;
u8 *__dt__17TJudgmentSequenceFv(u8 *arg0, s16 arg1);
int set_field_20__12TQuestListVMFl(void*, void*);
void *__nw__7TObjectFUl(u32);
void *TShopJudgmentItemWindow__ct(void *, s32, void *, s32);
void TJudgmentSequence__sub_80215BCC(void *arg0);
void TJudgmentSequence__sub_80215BA0(void *arg0);
void TJudgmentSequence__sub_80215BF8(void *arg0);
extern void *tl_05;
void open_judgment_window__17TJudgmentSequenceFPv(Seq_80215CB8 *self);
void open_judgment_window__17TJudgmentSequenceFPv(Seq_80215CB8 *self);
void vfunc_11__17TJudgmentSequenceFv(void *arg0);
}

extern "C" {

void TJudgmentSequence__sub_80215BCC(void *arg0);
void TJudgmentSequence__vt10(void* p);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 close_window__13TShopSequenceFPv(void *);
s32 queue_destruction__7TObjectFv(void *);
int restore_player_state__13TShopSequenceFPv(void*);
int set_field_20__12TQuestListVMFl(void*, void*);

void TJudgmentSequence__sub_80215BA0(void *arg0) {
    if (arg0 != NULL) {
        set_field_20__12TQuestListVMFl((void*)(arg0), (void*)(4));
    }
}

void TJudgmentSequence__sub_80215BCC(void *arg0) {
    if (arg0 != NULL) {
        set_field_20__12TQuestListVMFl((void*)(arg0), (void*)(4));
    }
}

void TJudgmentSequence__sub_80215BF8(void *arg0) {
    struct VObj_80215BF8_80215BA0 *o = (struct VObj_80215BF8_80215BA0 *)arg0;
    if (o != NULL) {
        o->m6(0xD, 1);
        set_field_20__12TQuestListVMFl((void*)(arg0), (void*)(4));
    }
}

void TJudgmentSequence::handle_close_input() {
    if ((((VObj_80215C48_80215BA0 *)this)->m8() != 0) && ((TShopWindowBase__sub_80223A48(this) != 0) || (TShopWindowBase__sub_802239EC(this) != 0))) {
        close_window__13TShopSequenceFPv(this);
        queue_destruction__7TObjectFv(this);
    }
}

void open_judgment_window__17TJudgmentSequenceFPv(Seq_80215CB8 *self) {
    Win_80215CB8 *o = (Win_80215CB8 *)__nw__7TObjectFUl(0x178);
    if (o != 0) {
        o = (Win_80215CB8 *)TShopJudgmentItemWindow__ct(o, (s32)tl_05, self, self->f24);
    }
    o->cb0 = (void *)TJudgmentSequence__sub_80215BCC;
    o->cb2 = (void *)TJudgmentSequence__sub_80215BA0;
    o->cb1 = (void *)TJudgmentSequence__sub_80215BF8;
    set_field_20__12TQuestListVMFl(self, (void *)5);
}

void TJudgmentSequence::handle_confirm() {
    if ((((VObj_80215D34_80215BA0 *)this)->m8() != 0) && ((TShopWindowBase__sub_80223A48(this) != 0) || (TShopWindowBase__sub_802239EC(this) != 0))) {
        set_field_20__12TQuestListVMFl((void*)(this), (void*)(3));
    }
}

typedef struct Stack_80215DA0 Stack_80215DA0;
typedef struct VBase_18_4a2792 VBase_18_4a2792;
typedef struct VObj_18_4a2792 VObj_18_4a2792;
#define PSO_VCALL_VObj_18_4a2792_m6(_self, _arg0, _arg1) (((VObj_18_4a2792 *)(_self))->m6((_arg0), (_arg1)))
void TJudgmentSequence::setup_counter_camera() {
    u8 *arg0 = (u8 *)this;
  Stack_80215DA0 stack;
  f32 new_var;
  stack.sp8 = lbl_805DC680;
  stack.spC = lbl_805DC684;
  new_var = (f32) lbl_805DC680;
  create_message_window__13TShopSequenceFPvii(arg0, get_window_layout_position((int) 0x2C, new_var), (s32) (&stack.sp8));
  PSO_VCALL_VObj_18_4a2792_m6(arg0, 1, 1);
  *((s32 *) (((s8 *) arg0) + 0x2C)) = create_meseta_window(((s32) ((TShopWindowBase *)arg0)->get_child_field1c()) & 0xFFFF);
  set_field_20__12TQuestListVMFl((void*)(arg0), (void*)(2));
  *((s32 *) (((s8 *) arg0) + 0x30)) = set_service_counter_camera((void *) arg0, (int) 2);
}

void TJudgmentSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); set_field_20__12TQuestListVMFl((void*)(p), (void*)((void*)1)); }
typedef char RecoveredGlobal_80215EF8___vt__17TJudgmentSequence_size[sizeof(RecoveredGlobal_80215EF8___vt__17TJudgmentSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_80215EF8_TJudgmentSequence__data_80513E80_size[sizeof(RecoveredGlobal_80215EF8_TJudgmentSequence__data_80513E80) == 0x10 ? 1 : -1];

struct Seq_80215CB8;
void TJudgmentSequence::vfunc_11() {
    switch (*(s32 *)((s8 *)this + 0x20)) {
    case 0:
        ((VtObj80215E74*)this)->m10();
        break;
    case 1:
        ((TJudgmentSequence *)this)->setup_counter_camera();
        break;
    case 2:
        ((TJudgmentSequence *)this)->handle_confirm();
        break;
    case 3:
        open_judgment_window__17TJudgmentSequenceFPv((Seq_80215CB8 *)this);
        break;
    case 4:
        ((TJudgmentSequence *)this)->handle_close_input();
        break;
    case 5:
        break;
    }
}

u8 *__dt__17TJudgmentSequenceFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = &__vt__17TJudgmentSequence.value;
        if ((u32) *(u32 *)((s8 *)arg0 + 0x30) != 0U) {
            queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x30));
            *(u32 *)((s8 *)arg0 + 0x30) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        if ((u32) *(u32 *)((s8 *)arg0 + 0x2C) != 0U) {
            TWindow__close(*(void **)((s8 *)arg0 + 0x2C));
            *(u32 *)((s8 *)arg0 + 0x2C) = 0U;
        }
        judgment_sequence_instance = 0;
        *(s32 *)((s8 *)(&TJudgmentSequence__slot_flags.value) + (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

}

extern "C" {
s32 TShopSequence__ct(void *);
extern s32 TJudgmentSequence__class_name;
u8 *TJudgmentSequence__ct(u8 *arg0, s32 arg1, s32 arg2);
void TJudgmentSequence__sub_80216030(void);
void TJudgmentSequence__sub_80216058(void);
void vfunc_8__15TShopWindowBaseFv(void);

u8 *TJudgmentSequence__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TShopSequence__ct((void *) (arg0));
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__17TJudgmentSequence.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TJudgmentSequence__class_name;
    *(s32 *)((s8 *)arg0 + 0x24) = arg2;
    *(s32 *)((s8 *)arg0 + 0x2C) = 0;
    *(s32 *)((s8 *)arg0 + 0x30) = 0;
    judgment_sequence_instance = (s32) arg0;
    set_field_20__12TQuestListVMFl((void *) (arg0), (void *) (0));
    *(s32 *)((s8 *)(&TJudgmentSequence__slot_flags.value) + (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 1;
    return arg0;
}

void TJudgmentSequence__sub_80216030(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TJudgmentSequence__slot_flags)[i] = 0;
    }
}

void TJudgmentSequence__sub_80216058(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TJudgmentSequence__slot_flags)[i] = 0;
    }
}

void TShopWindowBase::vfunc_8() {  }
}
