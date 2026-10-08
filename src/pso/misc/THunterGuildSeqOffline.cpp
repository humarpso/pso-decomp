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

struct Base_8021317C { u8 pad[0x18]; };

struct Guild_8021317C : Base_8021317C {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void m7(int, int);
    virtual s32 m8();
    virtual void m9();
    virtual void begin();
    virtual void finish();
    u32 unknown1c;
    u32 phase;
};

struct Base_A_80213474 { char pad[0x18]; };

struct V_A_80213474 : Base_A_80213474 {
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

extern "C" {
s32 get_window_layout_position(s32);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 set_service_counter_camera(void *, int);
M2C_UNK create_message_window__13TShopSequenceFPvii(void *, int, void *);
extern const f32 lbl_805DC650;
extern const f32 lbl_805DC654;
void open_greeting__22THunterGuildSeqOfflineFPv(u8 *arg0);
s32 queue_destruction__7TObjectFv(int);
s32 close_message_window__13TShopSequenceFPv(void *);
s32 __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __dl__7TObjectFPv(void *);
s32 TWindow__close(int);
extern RecoveredGlobal_80213220___vt__22THunterGuildSeqOffline __vt__22THunterGuildSeqOffline;
extern RecoveredGlobal_80213220_THunterGuildSeqOffline__data_80513DD8 THunterGuildSeqOffline__instance_table;
extern s32 THunterGuildSeqOffline__data_805D6188;
u8 *__dt__22THunterGuildSeqOfflineFv(u8 *arg0, s16 arg1);
s32 is_quest_active(void);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 create_quest_thread(s32);
s32 get_register__12TQuestThreadFPvi(void *, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
extern s32 THunterGuildSeqOffline__quest_result_callbacks[];
extern u8 *lbl_805D5EE8;
void resolve_active_quest_result__22THunterGuildSeqOfflineFPv(u8 *arg0);
s32 TShopSequence__ct(void *);
s32 TShopWindowBase__sub_8022397C(void *);
extern RecoveredGlobal_80213220___vt__22THunterGuildSeqOffline __vt__22THunterGuildSeqOffline;
extern RecoveredGlobal_80213220_THunterGuildSeqOffline__data_80513DD8 THunterGuildSeqOffline__instance_table;
extern s32 lbl_805D3658;
extern s32 THunterGuildSeqOffline__data_805D6188;
u8 *THunterGuildSeqOffline__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
s32 is_visible__17TWindowSubComCardFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(void *);
int set_field_20__12TQuestListVMFPvi(void*, void*);
s32 create_quest_thread(s32);
s32 TWindow__close(int);
s32 get_selected_menu_value(void *);
extern s32 THunterGuildSeqOffline__quest_result_callbacks[];
void handle_confirm_window__22THunterGuildSeqOfflineFPv(u8 *arg0);
extern RecoveredGlobal_80213220_THunterGuildSeqOffline__data_80513DD8 THunterGuildSeqOffline__instance_table;
void clear_instance_table__22THunterGuildSeqOfflineFv(void);
extern RecoveredGlobal_80213220_THunterGuildSeqOffline__data_80513DD8 THunterGuildSeqOffline__instance_table;
void THunterGuildSeqOffline__sub_8021339C(void);
extern s32 THunterGuildSeqOffline__quest_result_callbacks[];
void THunterGuildSeqOffline__sub_80213430(void* _w0);
void open_greeting__22THunterGuildSeqOfflineFPv(u8 *arg0);
void resolve_active_quest_result__22THunterGuildSeqOfflineFPv(u8 *arg0);
void open_judgment_window__22THunterGuildSeqOfflineFPv(void *arg0);
void open_quest_list__22THunterGuildSeqOfflineFPv(void *arg0);
void handle_cancel_choice__22THunterGuildSeqOfflineFPv(void *arg0);
void handle_select__22THunterGuildSeqOfflineFPv(void *arg0);
void handle_window_input__22THunterGuildSeqOfflineFPv(void *arg0);
void handle_click__22THunterGuildSeqOfflineFPv(void *arg0);
void THunterGuildSeqOffline__vt9(Guild_8021317C *self);
u16 obj_getField1c(s32);
s32 queue_destruction__7TObjectFv(int);
void init__22THunterGuildSeqOfflineFPvPvPv(void *, void *, void *);
void THunterGuildSeqOffline__sub_8021E180(void);
void close_window__13TShopSequenceFPv(void *);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
void *__nw__7TObjectFUl(u32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
extern u8 reset_random_enemies_mode[];
extern void *tl_00;
void THunterGuildSeqOffline__sub_80213474(void *arg0);
}

extern "C" {

void THunterGuildSeqOffline__sub_80213410(void* p);
s32 THunterGuildSeqOffline__sub_80213458(void);
void THunterGuildSeqOffline__vt10(void* p);
void handle_select__22THunterGuildSeqOfflineFPv(void *arg0);
void notify_quest_thread__22THunterGuildSeqOfflineFv(void);
void open_judgment_item_window__22THunterGuildSeqOfflineFPv(void *arg0);
void open_judgment_window__22THunterGuildSeqOfflineFPv(void *arg0);
s32 create_yes_no_window(s32, u16, s32, s32);
s32 TShopWindowBase__sub_802239EC(void *);
s32 TShopWindowBase__sub_80223A48(void *);
s32 get_window_layout_position(s32);
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
        M2C_FIELD(arg0, s32 *, 0x2C) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, s32 *, 0x2C), 1);
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, s32 *, 0x2C), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        ((VObj_802136A4_80212e50_80212D9C *)arg0)->m9(8, 1);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(6));
    }
}

void resolve_active_quest_result__22THunterGuildSeqOfflineFPv(u8 *arg0) {
    if ((((VObj_18_b54460 *)(arg0))->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        if (is_quest_active() == 1) {
            if (get_register__12TQuestThreadFPvi(lbl_805D5EE8, 0xFF) == 1) {
                ((VObj_18_b54460 *)(arg0))->m7(0xB, 1);
                if ((s32) M2C_FIELD(&(*(RecoveredGlobal_80212F34_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__quest_result_callbacks).value, s32 *, 4) != -1) {
                    M2C_FIELD(arg0, s32 *, 0x34) = create_quest_thread(M2C_FIELD(&(*(RecoveredGlobal_80212F34_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__quest_result_callbacks).value, s32 *, 4));
                }
                set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(7));
                return;
            }
            if (get_register__12TQuestThreadFPvi(lbl_805D5EE8, 0xFD) == 1) {
                ((VObj_18_b54460 *)(arg0))->m7(0x12, 1);
                if ((s32) M2C_FIELD(&(*(RecoveredGlobal_80212F34_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__quest_result_callbacks).value, s32 *, 0) != -1) {
                    M2C_FIELD(arg0, s32 *, 0x34) = create_quest_thread(M2C_FIELD(&(*(RecoveredGlobal_80212F34_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__quest_result_callbacks).value, s32 *, 0));
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

void open_greeting__22THunterGuildSeqOfflineFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_802130AC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802130AC, spC) == 0x4) ? 1 : -1];
    Stack_802130AC stack;
    stack.sp8 = lbl_805DC650;
    stack.spC = lbl_805DC654;
    create_message_window__13TShopSequenceFPvii((void *) (arg0), (int) (((u8 *)get_window_layout_position(0x2C))), (void *) (&stack.sp8));
    ((VObj_18_97738d *)(arg0))->m7(1, 1);
    M2C_FIELD(arg0, s32 *, 0x30) = set_service_counter_camera((void *) (arg0), (int) (1));
    set_field_20__12TQuestListVMFPvi((void*)((void *) (arg0)), (void*)((int) (2)));
}

void THunterGuildSeqOffline__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); fn_80223480(p); create_instance__19THunterGuildWarningFi((void*)2); set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }

extern s32 THunterGuildSeqOffline__quest_result_callbacks[];

void THunterGuildSeqOffline__vt9(Guild_8021317C *self) {
    switch (self->phase) {
    case 0: self->begin(); break;
    case 1: open_greeting__22THunterGuildSeqOfflineFPv((u8 *)self); break;
    case 2: resolve_active_quest_result__22THunterGuildSeqOfflineFPv((u8 *)self); break;
    case 3: open_judgment_window__22THunterGuildSeqOfflineFPv(self); break;
    case 4: open_quest_list__22THunterGuildSeqOfflineFPv(self); break;
    case 5: self->finish(); break;
    case 6: handle_cancel_choice__22THunterGuildSeqOfflineFPv(self); break;
    case 7: handle_select__22THunterGuildSeqOfflineFPv(self); break;
    case 8: handle_window_input__22THunterGuildSeqOfflineFPv(self); break;
    case 9: handle_click__22THunterGuildSeqOfflineFPv(self); break;
    case 10: break;
    }
}

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
        M2C_FIELD(&THunterGuildSeqOffline__instance_table.value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
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
    M2C_FIELD(&(*(RecoveredGlobal_802132F0_THunterGuildSeqOffline__data_80513DD8 *)&THunterGuildSeqOffline__instance_table).value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 1;
    return arg0;
}

void clear_instance_table__22THunterGuildSeqOfflineFv(void) {
    s32 i;
    for (i = 0; i < 4; i++) ((s32 *)&THunterGuildSeqOffline__instance_table)[i] = 0;
}

void THunterGuildSeqOffline__sub_8021339C(void) {
    s32 i;
    for (i = 0; i < 4; i++) ((s32 *)&THunterGuildSeqOffline__instance_table)[i] = 0;
}

void notify_quest_thread__22THunterGuildSeqOfflineFv(void) {
    s32 v = THunterGuildSeqOffline__quest_result_callbacks[3];
    if (v != -1) {
        void *obj = create__12TQuestThreadFi(v);
        if (obj != NULL) {
            ((VObj_802133C4_80212D9C *)obj)->m1();
        }
    }
}

void THunterGuildSeqOffline__sub_80213410(void* p) { THunterGuildSeqOffline__sub_80213430((void*)(p)); }

extern void *lbl_805D61BC;

void THunterGuildSeqOffline__sub_80213430(void* _w0) {
    s32 i;
    for (i = 0; i < 4; i++) THunterGuildSeqOffline__quest_result_callbacks[i] = -1;
}

s32 THunterGuildSeqOffline__sub_80213458(void) {
    if ((void *) lbl_805D61BC != NULL) {
        return M2C_FIELD(lbl_805D61BC, s32 *, 0x20);
    }
    return -1;
}

typedef char RecoveredGlobal_8021354C_THunterGuildSeqOffline__data_80513DC8_size[sizeof(RecoveredGlobal_8021354C_THunterGuildSeqOffline__data_80513DC8) == 0x10 ? 1 : -1];

void THunterGuildSeqOffline__sub_80213474(void *arg0) {
    void *p = M2C_FIELD(arg0, void **, 0x38);
    if (p != NULL) {
        if (all_parents_unqueued_for_destruction__7TObjectFv(p) != 0) {
            return;
        }
        M2C_FIELD(arg0, u32 *, 0x38) = 0U;
    }
    if ((((V_A_80213474 *) arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48(arg0) != 0) || (TShopWindowBase__sub_802239EC(arg0) != 0))) {
        switch (M2C_FIELD(arg0, s32 *, 0x34)) {
        case 1: {
            void *o = __nw__7TObjectFUl(0x28);
            if (o != NULL) {
                init__22THunterGuildSeqOfflineFPvPvPv(o, tl_00, reset_random_enemies_mode);
            }
            obj_getField1c(M2C_FIELD(arg0, s32 *, 0x24));
            THunterGuildSeqOffline__sub_8021E180();
            break;
        }
        case 0:
            break;
        case 2:
            break;
        }
        close_window__13TShopSequenceFPv(arg0);
        queue_destruction__7TObjectFv((int)arg0);
    }
}

void handle_confirm_window__22THunterGuildSeqOfflineFPv(u8 *arg0) {
    s32 temp_r3_2;
    u8 *temp_r3;
    u8 *temp_r3_3;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x3C));
    if ((temp_r3 != NULL) && (is_visible__17TWindowSubComCardFPv(temp_r3) != 0)) {
        temp_r3_2 = get_selected_menu_value(M2C_FIELD(arg0, u8 **, 0x3C));
        switch (temp_r3_2) {
        case 0:
            TWindow__close((int)(M2C_FIELD(arg0, u8 **, 0x3C)));
            M2C_FIELD(arg0, u8 **, 0x3C) = NULL;
            ((VObj_18_97738d *)(arg0))->m7(9, 1);
            M2C_FIELD(arg0, s32 *, 0x34) = 1;
            if ((s32) M2C_FIELD(&(*(RecoveredGlobal_8021354C_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__quest_result_callbacks).value, s32 *, 8) != -1) {
                M2C_FIELD(arg0, s32 *, 0x38) = create_quest_thread(M2C_FIELD(&(*(RecoveredGlobal_8021354C_THunterGuildSeqOffline__data_80513DC8 *)&THunterGuildSeqOffline__quest_result_callbacks).value, s32 *, 8));
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
        M2C_FIELD(arg0, s32 *, 0x3C) = create_yes_no_window(get_window_layout_position(0x2B), temp_r31, 0, 0);
        set_selected_index__17TWindowSubComCardFPvs(M2C_FIELD(arg0, s32 *, 0x3C), 1);
        temp_f31 = get_scale__15TShopWindowBaseFv(arg0);
        set_position_xy(M2C_FIELD(arg0, s32 *, 0x3C), get_scale__15TShopWindowBaseFv(arg0), temp_f31);
        ((VObj_802136A4_80212D9C *)arg0)->m9(8, 1);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(7));
    }
}

}
