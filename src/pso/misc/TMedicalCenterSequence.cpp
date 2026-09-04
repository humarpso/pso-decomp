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

extern "C" {

void TMedicalCenterSequence__vt10(void* p);
void TMedicalCenterSequence__vt11(void *arg0);
void exec_heal__22TMedicalCenterSequenceFPv(void *arg0);
void handle_confirm__22TMedicalCenterSequenceFPv(void *arg0);
void handle_window_input__22TMedicalCenterSequenceFPv(void *arg0);
void handle_window_result__22TMedicalCenterSequenceFPv(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK TObjPlayer__sub_80011138(s32, M2C_UNK);
s32 TObjPlayer__sub_801AF734(s32);
M2C_UNK TObjPlayer__sub_801AF7E0(s32);
u32 TObjPlayer__sub_801B4684(s32);
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

void handle_window_input__22TMedicalCenterSequenceFPv(void *arg0) {
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
    TBoss3Volopt__sub_8022675C(0x42D08, 0, 0, 0);
    send_code_49_1__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
    send_code50_packet__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
    if (is_alive_and_ready__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24)) != 0) {
        TObjPlayer__sub_801AF7E0(M2C_FIELD(arg0, s32 *, 0x24));
    }
    send_field_state__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24));
    TObjPlayer__sub_80011138(M2C_FIELD(arg0, s32 *, 0x24), 0xA);
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
        if ((TObjPlayer__sub_801B4684(M2C_FIELD(arg0, s32 *, 0x24)) != 0U) || ((is_alive_and_ready__10TObjPlayerFi(M2C_FIELD(arg0, s32 *, 0x24)) != 0) && (TObjPlayer__sub_801AF734(M2C_FIELD(arg0, s32 *, 0x24)) == 0))) {
            set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(7));
            return;
        }
        set_field_20__12TQuestListVMFPvi((void*)(arg0), (void*)(6));
    }
}

void TMedicalCenterSequence__vt10(void* p) { restore_player_state__13TShopSequenceFPv(p); set_field_20__12TQuestListVMFPvi((void*)(p), (void*)((void*)1)); }

}
