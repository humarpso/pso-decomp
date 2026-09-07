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

#include <stddef.h>
struct VBase_18_97738d { char pad[0x18]; };

struct VObj_18_97738d : VBase_18_97738d {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
};

struct Stack_802130AC {
    f32 sp8;
    f32 spC;
};

struct RecoveredGlobal_80213220___vt__22THunterGuildSeqOffline { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80213220___vt__22THunterGuildSeqOffline_size[sizeof(RecoveredGlobal_80213220___vt__22THunterGuildSeqOffline) == 0x38 ? 1 : -1];

struct RecoveredGlobal_80213220_THunterGuildSeqOffline__data_80513DD8 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80213220_THunterGuildSeqOffline__data_80513DD8_size[sizeof(RecoveredGlobal_80213220_THunterGuildSeqOffline__data_80513DD8) == 0x10 ? 1 : -1];

struct VBase_18_b54460 { char pad[0x18]; };

struct VObj_18_b54460 : VBase_18_b54460 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual M2C_UNK m7(M2C_UNK, M2C_UNK);
    virtual s32 m8();
};

struct RecoveredGlobal_80212F34_THunterGuildSeqOffline__data_80513DC8 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80212F34_THunterGuildSeqOffline__data_80513DC8_size[sizeof(RecoveredGlobal_80212F34_THunterGuildSeqOffline__data_80513DC8) == 0x10 ? 1 : -1];

struct RecoveredGlobal_802132F0___vt__22THunterGuildSeqOffline {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_802132F0_THunterGuildSeqOffline__data_80513DD8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8021354C_THunterGuildSeqOffline__data_80513DC8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
s32 TWindowSubComCard__sub_8026CBB8(s32);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 THunterGuildSeqOffline__sub_8022350C(void *, int);
M2C_UNK TShopSequence__sub_80223600(void *, int, void *);
extern const f32 lbl_805DC650;
extern const f32 lbl_805DC654;
void THunterGuildSeqOffline__sub_802130AC(u8 *arg0);
s32 queue_destruction__7TObjectFv(int);
s32 close_message_window__13TShopSequenceFPv(void *);
s32 __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __dl__7TObjectFPv(void *);
s32 TWindow__close(int);
extern RecoveredGlobal_80213220___vt__22THunterGuildSeqOffline __vt__22THunterGuildSeqOffline;
extern RecoveredGlobal_80213220_THunterGuildSeqOffline__data_80513DD8 THunterGuildSeqOffline__data_80513DD8;
extern s32 THunterGuildSeqOffline__data_805D6188;
u8 *__dt__22THunterGuildSeqOfflineFv(u8 *arg0, s16 arg1);
s32 TCameraCtrl__sub_8006B368(void);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 TQuestThread__sub_801F5C50(s32);
s32 TQuestThread__sub_801F5EAC(void *, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
extern s32 THunterGuildSeqOffline__data_80513DC8[];
extern u8 *lbl_805D5EE8;
void THunterGuildSeqOffline__sub_80212F34(u8 *arg0);
s32 TShopSequence__ct(void *);
s32 TShopWindowBase__sub_8022397C(void *);
extern RecoveredGlobal_80213220___vt__22THunterGuildSeqOffline __vt__22THunterGuildSeqOffline;
extern RecoveredGlobal_80213220_THunterGuildSeqOffline__data_80513DD8 THunterGuildSeqOffline__data_80513DD8;
extern s32 lbl_805D3658;
extern s32 THunterGuildSeqOffline__data_805D6188;
u8 *THunterGuildSeqOffline__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 TQuestThread__sub_801F5C50(s32);
s32 TWindow__close(int);
s32 TWindowSubComCard__sub_80265BF8(void *);
extern s32 THunterGuildSeqOffline__data_80513DC8[];
void THunterGuildSeqOffline__sub_8021354C(u8 *arg0);
}

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

void THunterGuildSeqOffline__sub_80212F34(u8 *arg0) {
    if ((((VObj_18_b54460 *)(arg0))->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        if (TCameraCtrl__sub_8006B368() == 1) {
            if (TQuestThread__sub_801F5EAC(lbl_805D5EE8, 0xFF) == 1) {
                ((VObj_18_b54460 *)(arg0))->m7(0xB, 1);
                if ((s32) M2C_FIELD(&(*(RecoveredGlobal_80212F34_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__data_80513DC8).value, s32 *, 4) != -1) {
                    M2C_FIELD(arg0, s32 *, 0x34) = TQuestThread__sub_801F5C50(M2C_FIELD(&(*(RecoveredGlobal_80212F34_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__data_80513DC8).value, s32 *, 4));
                }
                set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(7));
                return;
            }
            if (TQuestThread__sub_801F5EAC(lbl_805D5EE8, 0xFD) == 1) {
                ((VObj_18_b54460 *)(arg0))->m7(0x12, 1);
                if ((s32) M2C_FIELD(&(*(RecoveredGlobal_80212F34_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__data_80513DC8).value, s32 *, 0) != -1) {
                    M2C_FIELD(arg0, s32 *, 0x34) = TQuestThread__sub_801F5C50(M2C_FIELD(&(*(RecoveredGlobal_80212F34_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__data_80513DC8).value, s32 *, 0));
                }
                set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(8));
                return;
            }
            ((VObj_18_b54460 *)(arg0))->m7(2, 1);
            set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(3));
            return;
        }
        ((VObj_18_b54460 *)(arg0))->m7(4, 1);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(4));
    }
}

void THunterGuildSeqOffline__sub_802130AC(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_802130AC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802130AC, spC) == 0x4) ? 1 : -1];
    Stack_802130AC stack;
    stack.sp8 = lbl_805DC650;
    stack.spC = lbl_805DC654;
    TShopSequence__sub_80223600((void *) (arg0), (int) (((u8 *)TWindowSubComCard__sub_8026CBB8(0x2C))), (void *) (&stack.sp8));
    ((VObj_18_97738d *)(arg0))->m7(1, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = THunterGuildSeqOffline__sub_8022350C((void *) (arg0), (int) (1));
    set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (2)));
}

void THunterGuildSeqOffline__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); fn_80223480(p); create_instance__19THunterGuildWarningFi((void*)2); set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }

extern s32 THunterGuildSeqOffline__data_80513DC8[];

u8 *__dt__22THunterGuildSeqOfflineFv(u8 *arg0, s16 arg1) {
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__22THunterGuildSeqOffline.value;
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x30);
        if (temp_r3 != 0U) {
            queue_destruction__7TObjectFv((int) (temp_r3));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x2C);
        if (temp_r3_2 != 0U) {
            TWindow__close((int) (temp_r3_2));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        temp_r3_3 = M2C_FIELD(arg0, u32 *, 0x34);
        if (temp_r3_3 != 0U) {
            queue_destruction__7TObjectFv((int) (temp_r3_3));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        M2C_FIELD(&THunterGuildSeqOffline__data_80513DD8.value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
        THunterGuildSeqOffline__data_805D6188 = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_802132F0___vt__22THunterGuildSeqOffline_size[sizeof(RecoveredGlobal_802132F0___vt__22THunterGuildSeqOffline) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_802132F0_THunterGuildSeqOffline__data_80513DD8_size[sizeof(RecoveredGlobal_802132F0_THunterGuildSeqOffline__data_80513DD8) == 0x10 ? 1 : -1];
u8 *THunterGuildSeqOffline__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TShopSequence__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_802132F0___vt__22THunterGuildSeqOffline *)&__vt__22THunterGuildSeqOffline).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3658;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    (*(u8 * *)&THunterGuildSeqOffline__data_805D6188) = arg0;
    M2C_FIELD(&(*(RecoveredGlobal_802132F0_THunterGuildSeqOffline__data_80513DD8 *)&THunterGuildSeqOffline__data_80513DD8).value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 1;
    return arg0;
}

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

typedef char RecoveredGlobal_8021354C_THunterGuildSeqOffline__data_80513DC8_size[sizeof(RecoveredGlobal_8021354C_THunterGuildSeqOffline__data_80513DC8) == 0x10 ? 1 : -1];
void THunterGuildSeqOffline__sub_8021354C(u8 *arg0) {
    s32 temp_r3_2;
    u8 *temp_r3;
    u8 *temp_r3_3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x3C));
    if ((temp_r3 != NULL) && (is_visible__17TWindowSubComCardFPv(temp_r3) != 0)) {
        temp_r3_2 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u8 **, 0x3C));
        switch (temp_r3_2) {
        case 0:
            TWindow__close((int)(M2C_FIELD(arg0, u8 **, 0x3C)));
            M2C_FIELD(arg0, u8 **, 0x3C) = NULL;
            ((VObj_18_97738d *)(arg0))->m7(9, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            if ((s32) M2C_FIELD(&(*(RecoveredGlobal_8021354C_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__data_80513DC8).value, s32 *, 8) != -1) {
                M2C_FIELD(arg0, s32 *, 0x38) = TQuestThread__sub_801F5C50(M2C_FIELD(&(*(RecoveredGlobal_8021354C_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__data_80513DC8).value, s32 *, 8));
            }
            set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0xC));
            break;
        case 1:
            TWindow__close((int)(M2C_FIELD(arg0, u8 **, 0x3C)));
            M2C_FIELD(arg0, u8 **, 0x3C) = NULL;
            ((VObj_18_97738d *)(arg0))->m7(0xA, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 0;
            set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0xC));
            break;
        }
    }
    temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x3C));
    if ((temp_r3_3 != NULL) && (get_status_flag__17TWindowSubComCardFPv(temp_r3_3) != 0)) {
        TWindow__close((int)(M2C_FIELD(arg0, u8 **, 0x3C)));
        M2C_FIELD(arg0, u8 **, 0x3C) = NULL;
        ((VObj_18_97738d *)(arg0))->m7(0xA, 1);
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0xC));
    }
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
