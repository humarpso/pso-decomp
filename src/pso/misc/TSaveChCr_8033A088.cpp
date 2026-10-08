#include "pso/TSaveChCr.h"
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8033A184 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

union MemberActionStorage_8033A184 { s32 words[3]; void (TSaveChCr::*action)(); };

struct RecoveredGlobal_8033A184_lbl_804EF658 {
    M2C_UNK value;
    u8 remaining[0x74];
};

extern "C" {
extern TSaveChCrStateActions lbl_804EF658[];
void set_state__9TSaveChCrFPvi(u8 *arg0, s32 arg1);
}

extern "C" {
void reset_proportions__15TChCrCharSelectFv();
}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8033A34C___vt__9TSaveChCr {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
void *__nw__7TObjectFUl(int);
void *__ct__9TAdBackGCFv(void *, void *);
void *__ct__12TAdBackTxtGCFv(void *, void *);
void __ct__7TObjectFP7TObject(void *, void *);
s32 poll_memcard_status(void *);
void TSaveChCr__sub_8033A0D0(void *arg0);
extern RecoveredGlobal_8033A34C___vt__9TSaveChCr __vt__9TSaveChCr;
extern s32 lbl_805D4280;
u8 *TSaveChCr__ct(u8 *arg0, u8 *arg1, s32 arg2);
}

extern "C" {

int TSaveChCr__sub_8033A138(void);
void close_window__9TSaveChCrFPv(void *arg0);
void *create__9TSaveChCrFPv(void *arg0);
void save_character__9TSaveChCrFPv(void* p);
int TAdSinglePlyChrSelectGC__sub_801FF5E4(void*);
s32 TWindow__close(void *);
void *__nw__7TObjectFUl(int);
int begin_action_from_char_select__10TObjPlayerFv(void*);

void close_window__9TSaveChCrFPv(void *arg0) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x3C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x3C));
        M2C_FIELD(arg0, u32 *, 0x3C) = 0U;
        M2C_FIELD(arg0, s32 *, 0x38) = 7;
    }
}

void TSaveChCr__sub_8033A0D0(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x24);
    if (o != NULL) {
        o = __ct__9TAdBackGCFv(o, arg0);
    }
    M2C_FIELD(arg0, void **, 0x30) = o;
    o2 = __nw__7TObjectFUl(0x28);
    if (o2 != NULL) {
        o2 = __ct__12TAdBackTxtGCFv(o2, arg0);
    }
    M2C_FIELD(arg0, void **, 0x34) = o2;
}

int TSaveChCr__sub_8033A138(void) { return TAdSinglePlyChrSelectGC__sub_801FF5E4((void*)(0)); }
void save_character__9TSaveChCrFPv(void* p) { begin_action_from_char_select__10TObjPlayerFv(p); TAdSinglePlyChrSelectGC__sub_801FF5E4((void*)1); }

extern void *tl_03;

typedef char MemberActionStorage_8033A184_size[sizeof(MemberActionStorage_8033A184) == 12 ? 1 : -1];
typedef char RecoveredGlobal_8033A184_lbl_804EF658_size[sizeof(RecoveredGlobal_8033A184_lbl_804EF658) == 0x78 ? 1 : -1];
void set_state__9TSaveChCrFPvi(u8 *arg0, s32 arg1) {
    MemberActionStorage_8033A184 member_action;
    typedef char sp8_offset[(offsetof(Stack_8033A184, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8033A184, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8033A184, sp10) == 0x8) ? 1 : -1];
    Stack_8033A184 stack;
    u8 *temp_r6;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
        temp_r6 = (u8 *)&(*(RecoveredGlobal_8033A184_lbl_804EF658 *)&lbl_804EF658).value + (M2C_FIELD(arg0, s32 *, 0x1C) * 0x18);
        member_action.words[0] = M2C_FIELD(temp_r6, s32 *, 0);
        member_action.words[1] = M2C_FIELD(temp_r6, s32 *, 4);
        member_action.words[2] = M2C_FIELD(temp_r6, s32 *, 8);
        if (member_action.action != 0) {
            (((TSaveChCr *)((void *) (arg0)))->*member_action.action)();
        }
    }
}

}

#pragma opt_common_subs off
void TSaveChCr::run_task() {
  TSaveChCrStateActions *entry;
  reset_proportions__15TChCrCharSelectFv();
  card_status = poll_memcard_status(this);
  if (card_status & 1)
  {
    set_state__9TSaveChCrFPvi((u8 *)this, 0);
  }
  entry = &lbl_804EF658[state_index];
  TSaveChCrStateAction action = (*entry).task;
  if (action != 0)
  {
    (this->*action)();
  }
  --timer;
  if (timer < 0)
  {
    timer = 0;
  }
}
#pragma opt_common_subs reset

TSaveChCr::~TSaveChCr() {
    if (owned_window != NULL) {
        delete owned_window;
        owned_window = NULL;
    }
}

extern "C" {

typedef char RecoveredGlobal_8033A34C___vt__9TSaveChCr_size[sizeof(RecoveredGlobal_8033A34C___vt__9TSaveChCr) == 0x18 ? 1 : -1];

u8 *TSaveChCr__ct(u8 *arg0, u8 *arg1, s32 arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__9TSaveChCr.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4280;
    M2C_FIELD(arg0, s32 *, 0x20) = arg2;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = poll_memcard_status(arg0);
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    TSaveChCr__sub_8033A0D0(arg0);
    set_state__9TSaveChCrFPvi((u8 *)(arg0), (s32)(0));
    return arg0;
}

void *create__9TSaveChCrFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x40);
    if (o != NULL) {
        o = TSaveChCr__ct((u8 *)(o), (u8 *)(tl_03), (s32)(arg0));
    }
    return o;
}

}
