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

extern "C" {
int set_field_20__12TQuestListVMFPvi(void*, void*);
u32 TShopSequence__sub_80223600(void *, s32, s32);
s32 get_child_field1c__15TShopWindowBaseFPv(void *);
s32 fn_8026934C(s32);
s32 THunterGuildSeqOffline__sub_8022350C(void *, int);
s32 TWindowSubComCard__sub_8026CBB8(int, f32);
extern const f32 lbl_805DC680;
extern const f32 lbl_805DC684;
void TJudgmentSequence__sub_80215DA0(u8 *arg0);
}

extern "C" {

void TJudgmentSequence__sub_80215BA0(void *arg0);
void TJudgmentSequence__sub_80215BCC(void *arg0);
void TJudgmentSequence__sub_80215BF8(void *arg0);
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
  TShopSequence__sub_80223600(arg0, TWindowSubComCard__sub_8026CBB8((int) 0x2C, new_var), (s32) (&stack.sp8));
  PSO_VCALL_VObj_18_4a2792_m6(arg0, 1, 1);
  *((s32 *) (((s8 *) arg0) + 0x2C)) = fn_8026934C(((s32) get_child_field1c__15TShopWindowBaseFPv(arg0)) & 0xFFFF);
  set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(2));
  *((s32 *) (((s8 *) arg0) + 0x30)) = THunterGuildSeqOffline__sub_8022350C((void *) arg0, (int) 2);
}

void TJudgmentSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }

}
