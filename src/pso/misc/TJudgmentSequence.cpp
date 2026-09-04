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

void TJudgmentSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }

}
