#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_A_80212D9C { char pad[0x18]; };
struct V_A_80212D9C : Base_A_80212D9C {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void m7(int, int);
    virtual s32 m8();
};
struct Base_802136A4_80212e50_80212D9C { u8 pad[0x18]; };
struct VObj_802136A4_80212e50_80212D9C : Base_802136A4_80212e50_80212D9C {
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9(s32, s32);
    virtual s32 m10();
};
struct Base_802133C4_80212D9C { char pad[0x18]; };
struct VObj_802133C4_80212D9C : Base_802133C4_80212D9C {
    virtual void m0(); virtual void m1();
};
struct Base_802136A4_80212D9C { u8 pad[0x18]; };
struct VObj_802136A4_80212D9C : Base_802136A4_80212D9C {
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9(s32, s32);
    virtual s32 m10();
};

extern "C" {

int THunterGuildSeqOffline__sub_80213410(void* p);
s32 THunterGuildSeqOffline__sub_80213458(void);
void THunterGuildSeqOffline__vt10(void* p);
void handle_select__22THunterGuildSeqOfflineFPv(void *arg0);
void notify_quest_thread__22THunterGuildSeqOfflineFv(void);
void open_judgment_item_window__22THunterGuildSeqOfflineFPv(void *arg0);
void open_judgment_window__22THunterGuildSeqOfflineFPv(void *arg0);
int THunterGuildSeqOffline__sub_80213430(void*);
s32 TShopJudgmentItemWindow__sub_80266388(s32, u16, s32, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 TWindowSubComCard__sub_8026CBB8(s32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
void *create__12TQuestThreadFi(s32);
int create_instance__19THunterGuildWarningFi(void*);
int fn_80223480(void*);
f32 get_scale__15TShopWindowBaseFv(void *);
u16 obj_getField1c(s32);
int restore_player_state__13TShopSequenceFPv(void*);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 set_position_xy(s32, f32, f32);
s32 set_selected_index__17TWindowSubComCardFPvs(s32, s32);

void handle_select__22THunterGuildSeqOfflineFPv(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x34);
    if (p != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(p) != 1) {
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
            goto block_3;
        }
    } else {
block_3:
        if ((((V_A_80212D9C *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
            ((V_A_80212D9C *) arg0)->m7(0xC, 1);
            M2C_FIELD(arg0, s32 *, 0x38) = 1;
            set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(5));
        }
    }
}

void open_judgment_window__22THunterGuildSeqOfflineFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if ((((VObj_802136A4_80212e50_80212D9C *)arg0)->m10() != 0)
        && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        temp_r31 = (u16)obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, s32 *, 0x2C) = TShopJudgmentItemWindow__sub_80266388(TWindowSubComCard__sub_8026CBB8(0x2B), temp_r31, 0, 0);
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, s32 *, 0x2C), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        ((VObj_802136A4_80212e50_80212D9C *)arg0)->m9(8, 1);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(6));
    }
}

void THunterGuildSeqOffline__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); fn_80223480(p); create_instance__19THunterGuildWarningFi((void*)2); set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }

extern s32 THunterGuildSeqOffline__data_80513DC8[];

void notify_quest_thread__22THunterGuildSeqOfflineFv(void) {
    s32 v = THunterGuildSeqOffline__data_80513DC8[3];
    if (v != -1) {
        void *obj = create__12TQuestThreadFi(v);
        if (obj != NULL) {
            ((VObj_802133C4_80212D9C *)obj)->m1();
        }
    }
}

int THunterGuildSeqOffline__sub_80213410(void* p) { return THunterGuildSeqOffline__sub_80213430(p); }

extern void *lbl_805D61BC;

s32 THunterGuildSeqOffline__sub_80213458(void) {
    if ((void *) lbl_805D61BC != NULL) {
        return M2C_FIELD(lbl_805D61BC, s32 *, 0x20);
    }
    return -1;
}

void open_judgment_item_window__22THunterGuildSeqOfflineFPv(void *arg0) {
    f32 temp_f31;
    u16 temp_r31;

    if ((((VObj_802136A4_80212D9C *)arg0)->m10() != 0)
        && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        temp_r31 = (u16)obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
        M2C_FIELD(arg0, s32 *, 0x3C) = TShopJudgmentItemWindow__sub_80266388(TWindowSubComCard__sub_8026CBB8(0x2B), temp_r31, 0, 0);
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, s32 *, 0x3C), 1);
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, s32 *, 0x3C), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        ((VObj_802136A4_80212D9C *)arg0)->m9(8, 1);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(7));
    }
}

}
