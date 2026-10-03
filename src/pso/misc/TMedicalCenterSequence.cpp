#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_802163AC { char pad[0x18]; };
struct VObj_802163AC : Base_802163AC {
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
struct Base_8021641C_802163AC { char pad[0x18]; };
struct VObj_8021641C_802163AC : Base_8021641C_802163AC {
    virtual int m0();
    virtual int m1();
    virtual int m2();
    virtual int m3();
    virtual int m4(int, int);
    virtual int m5();
    virtual int m6();
    virtual int m7();
    virtual int m8();
};
struct Base_802165D8_802163AC { char pad[0x18]; };
struct VObj_802165D8_802163AC : Base_802165D8_802163AC {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(s32, s32);
};
struct Base_80216784_802163AC { char pad[0x18]; };
struct VObj_80216784_802163AC : Base_80216784_802163AC {
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

struct Stack_80216830
{
  f32 sp8;
  f32 spC;
};

struct RecoveredGlobal_802169A8___vt__22TMedicalCenterSequence {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_802169A8_TMedicalCenterSequence__data_80513E90 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_80216A70___vt__22TMedicalCenterSequence {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_80216A70_TMedicalCenterSequence__data_80513E90 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct VBase_18_0e2b36 { char pad[0x18]; };

struct VObj_18_0e2b36 : VBase_18_0e2b36 {
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
    virtual M2C_UNK m10();
    virtual M2C_UNK m11();
};

extern "C" {
int set_field_20__12TQuestListVMFPvi(void*, void*);
u32 TShopSequence__sub_80223600(void *, s32, s32);
s32 get_child_field1c__15TShopWindowBaseFPv(void *);
s32 fn_8026934C(unsigned short);
s32 set_service_counter_camera(void *, int);
s32 get_window_layout_position(int, f32);
extern const f32 lbl_805DC688;
extern const f32 lbl_805DC68C;
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK close_message_window__13TShopSequenceFPv(void *);
M2C_UNK __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TWindow__close(u32);
extern RecoveredGlobal_802169A8___vt__22TMedicalCenterSequence __vt__22TMedicalCenterSequence;
extern RecoveredGlobal_802169A8_TMedicalCenterSequence__data_80513E90 TMedicalCenterSequence__data_80513E90;
u8 *__dt__22TMedicalCenterSequenceFv(u8 *arg0, s16 arg1);
s32 TShopSequence__ct(void *);
s32 TShopWindowBase__sub_8022397C(void *);
extern RecoveredGlobal_802169A8___vt__22TMedicalCenterSequence __vt__22TMedicalCenterSequence;
extern RecoveredGlobal_802169A8_TMedicalCenterSequence__data_80513E90 TMedicalCenterSequence__data_80513E90;
extern s32 lbl_805D3678;
u8 *TMedicalCenterSequence__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK handle_window_input__22TMedicalCenterSequenceFPv(void *arg0);
M2C_UNK TMedicalCenterSequence__sub_802164A4();
M2C_UNK TMedicalCenterSequence__sub_80216540();
M2C_UNK TMedicalCenterSequence__sub_8021658C();
void exec_heal__22TMedicalCenterSequenceFPv(void *arg0);
void handle_window_result__22TMedicalCenterSequenceFPv(void *arg0);
void handle_confirm__22TMedicalCenterSequenceFPv(void *arg0);
M2C_UNK TMedicalCenterSequence__sub_80216830(u8 *arg0);
void TMedicalCenterSequence__vt9(u8 *arg0);
extern RecoveredGlobal_802169A8_TMedicalCenterSequence__data_80513E90 TMedicalCenterSequence__data_80513E90;
void TMedicalCenterSequence__sub_80216B14(void);
extern RecoveredGlobal_802169A8_TMedicalCenterSequence__data_80513E90 TMedicalCenterSequence__data_80513E90;
void TMedicalCenterSequence__sub_80216AEC(void);
}

extern "C" {

void TMedicalCenterSequence__vt10(void* p);
void TMedicalCenterSequence__vt11(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK try_spend_actor_meseta(s32, M2C_UNK);
s32 are_traps_full__10TObjPlayerFPv(s32);
M2C_UNK refill_traps__10TObjPlayerFPv(s32);
u32 get_recovery_need_flags__10TObjPlayerFPv(s32);
int TShopWindowBase__sub_802239EC(void *);
int TShopWindowBase__sub_80223A48(void *);
s32 TWindowSubComCard__sub_80265BF8(u32);
M2C_UNK TWindow__close(u32);
M2C_UNK close_window__13TShopSequenceFPv(void *);
s32 get_status_flag__17TWindowSubComCardFPv(u32);
s32 is_alive_and_ready__10TObjPlayerFi(s32);
s32 is_visible__17TWindowSubComCardFPv(u32);
s32 obj_getPtr2B0_20(s32);
M2C_UNK queue_destruction__7TObjectFv(void *);
int restore_player_state__13TShopSequenceFPv(void*);
M2C_UNK send_code50_packet__10TObjPlayerFi(s32);
M2C_UNK send_code_49_1__10TObjPlayerFi(s32);
M2C_UNK send_field_state__10TObjPlayerFi(s32);
int set_field_20__12TQuestListVMFPvi(void*, void*);

void TMedicalCenterSequence__vt11(void *arg0) {
    if ((((VObj_802163AC *)arg0)->m8() != 0) && ((TShopWindowBase__sub_80223A48((void *)((void *)(arg0))) != 0) || (TShopWindowBase__sub_802239EC((void *)((void *)(arg0))) != 0))) {
        close_window__13TShopSequenceFPv(arg0);
        queue_destruction__7TObjectFv(arg0);
    }
}

M2C_UNK handle_window_input__22TMedicalCenterSequenceFPv(void *arg0) {
    VObj_8021641C_802163AC *o = (VObj_8021641C_802163AC *)arg0;
    if (o->m8() != 0 && (TShopWindowBase__sub_80223A48((void *)((void *)(arg0))) != 0 || TShopWindowBase__sub_802239EC((void *)((void *)(arg0))) != 0)) {
        o->m4(0x22, 1);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0xa));
    }
}

void exec_heal__22TMedicalCenterSequenceFPv(void *arg0) {
    if (obj_getPtr2B0_20(M2C_FIELD(arg0, s32 *, 0x24)) < 0xA) {
        ((VObj_802165D8_802163AC *)arg0)->m4(0xF, 1);
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0xA));
        return;
    }
    play_sound_effect(0x42D08, 0, 0, 0);
    send_code_49_1__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
    send_code50_packet__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
    if (is_alive_and_ready__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24)) != 0) {
        refill_traps__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x24));
    }
    send_field_state__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
    try_spend_actor_meseta(M2C_FIELD(arg0, s32 *, 0x24), 0xA);
    ((VObj_802165D8_802163AC *)arg0)->m4(0x22, 1);
    set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(0xA));
}

void handle_window_result__22TMedicalCenterSequenceFPv(void *arg0) {
    s32 temp_r3;

    if (((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) && (is_visible__17TWindowSubComCardFPv((u32) M2C_FIELD(arg0, u32 *, 0x30)) != 0)) {
        temp_r3 = TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, u32 *, 0x30));
        if (temp_r3 == 0) {
            TWindow__close(M2C_FIELD(arg0, u32 *, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
            set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(4));
            return;
        }
        if (temp_r3 == 1) {
            TWindow__close(M2C_FIELD(arg0, u32 *, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
            set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(5));
            return;
        }
        goto block_6;
    }
block_6:
    if (((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) && (get_status_flag__17TWindowSubComCardFPv((u32) M2C_FIELD(arg0, u32 *, 0x30)) != 0)) {
        TWindow__close(M2C_FIELD(arg0, u32 *, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(5));
    }
}

void handle_confirm__22TMedicalCenterSequenceFPv(void *arg0) {
    struct VObj_80216784_802163AC *o = (struct VObj_80216784_802163AC *)arg0;
    if ((o->m8() != 0) && ((TShopWindowBase__sub_80223A48((void *)(arg0)) != 0) || (TShopWindowBase__sub_802239EC((void *)(arg0)) != 0))) {
        if ((get_recovery_need_flags__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) || ((is_alive_and_ready__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24)) != 0) && (are_traps_full__10TObjPlayerFPv(M2C_FIELD(arg0, s32 *, 0x24)) == 0))) {
            set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(7));
            return;
        }
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(6));
    }
}

typedef struct Stack_80216830 Stack_80216830;
typedef struct VBase_18_a93f07 VBase_18_a93f07;
typedef struct VObj_18_a93f07 VObj_18_a93f07;
#define PSO_VCALL_VObj_18_a93f07_m4(_self, _arg0, _arg1) (((VObj_18_a93f07 *)(_self))->m4((_arg0), (_arg1)))
M2C_UNK TMedicalCenterSequence__sub_80216830(u8 *arg0) {
  Stack_80216830 stack;
  stack.sp8 = lbl_805DC688;
  stack.spC = lbl_805DC68C;
  TShopSequence__sub_80223600(arg0, get_window_layout_position((int) 0x2C, (f32) lbl_805DC688), (s32) (&stack.sp8));
  PSO_VCALL_VObj_18_a93f07_m4(arg0, 0x1F, 1);
  *((s32 *) (((s8 *) arg0) + 0x2C)) = fn_8026934C((s32) get_child_field1c__15TShopWindowBaseFPv(arg0));
  set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(2));
  *((s32 *) (((s8 *) arg0) + 0x34)) = set_service_counter_camera((void *) arg0, (int) 0);
}

void TMedicalCenterSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }
typedef char RecoveredGlobal_802169A8___vt__22TMedicalCenterSequence_size[sizeof(RecoveredGlobal_802169A8___vt__22TMedicalCenterSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_802169A8_TMedicalCenterSequence__data_80513E90_size[sizeof(RecoveredGlobal_802169A8_TMedicalCenterSequence__data_80513E90) == 0x10 ? 1 : -1];

void TMedicalCenterSequence__vt9(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        ((VObj_18_0e2b36 *)(arg0))->m10();
        return;
    case 1:
        TMedicalCenterSequence__sub_80216830((u8 *)(arg0));
        return;
    case 2:
        handle_confirm__22TMedicalCenterSequenceFPv((void *)(arg0));
        return;
    case 6:
        TMedicalCenterSequence__sub_80216540();
        return;
    case 7:
        TMedicalCenterSequence__sub_802164A4();
        return;
    case 3:
        handle_window_result__22TMedicalCenterSequenceFPv((void *)(arg0));
        return;
    case 4:
        exec_heal__22TMedicalCenterSequenceFPv((void *)(arg0));
        return;
    case 5:
        TMedicalCenterSequence__sub_8021658C();
        return;
    case 8:
        handle_window_input__22TMedicalCenterSequenceFPv((void *)(arg0));
        return;
    case 10:
        ((VObj_18_0e2b36 *)(arg0))->m11();
    default:
        return;
    }
}

u8 *__dt__22TMedicalCenterSequenceFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__22TMedicalCenterSequence.value;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close((u32)(M2C_FIELD(arg0, void **, 0x2C)));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close((u32)(M2C_FIELD(arg0, void **, 0x30)));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        M2C_FIELD(&TMedicalCenterSequence__data_80513E90.value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80216A70___vt__22TMedicalCenterSequence_size[sizeof(RecoveredGlobal_80216A70___vt__22TMedicalCenterSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_80216A70_TMedicalCenterSequence__data_80513E90_size[sizeof(RecoveredGlobal_80216A70_TMedicalCenterSequence__data_80513E90) == 0x10 ? 1 : -1];
u8 *TMedicalCenterSequence__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TShopSequence__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80216A70___vt__22TMedicalCenterSequence *)&__vt__22TMedicalCenterSequence).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3678;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(&(*(RecoveredGlobal_80216A70_TMedicalCenterSequence__data_80513E90 *)&TMedicalCenterSequence__data_80513E90).value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 1;
    return arg0;
}

void TMedicalCenterSequence__sub_80216AEC(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TMedicalCenterSequence__data_80513E90)[i] = 0;
    }
}

void TMedicalCenterSequence__sub_80216B14(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&TMedicalCenterSequence__data_80513E90)[i] = 0;
    }
}

}
