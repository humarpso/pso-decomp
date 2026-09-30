#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80214A84_lbl_804C97F0 { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_80214A84_lbl_804C97F0_size[sizeof(RecoveredGlobal_80214A84_lbl_804C97F0) == 0x38 ? 1 : -1];

struct RecoveredGlobal_80214A84_lbl_80513E60 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80214A84_lbl_80513E60_size[sizeof(RecoveredGlobal_80214A84_lbl_80513E60) == 0x10 ? 1 : -1];

struct Seq_80214B3C {
    s32 f0; u8 pad4[0x14]; void *vt; s32 f1c; s32 f20; s32 f24; u8 pad28[4]; s32 f2c; u8 pad30[4]; s32 f34; s32 f38; s32 f3c; s32 f40;
};

struct VBase_18_80214978 { char pad[0x18]; };

struct VObj_80214978 : VBase_18_80214978 {
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
    virtual void m11();
};

struct Seq_80214978 : VObj_80214978 {
    u32 pad1c;
    u32 state;
};

extern "C" {
s32 queue_destruction__7TObjectFv(int);
s32 close_message_window__13TShopSequenceFPv(void *);
s32 __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
s32 __dl__7TObjectFPv(void *);
s32 TWindow__close(int);
extern RecoveredGlobal_80214A84_lbl_804C97F0 lbl_804C97F0;
extern RecoveredGlobal_80214A84_lbl_80513E60 lbl_80513E60;
extern s32 lbl_805D61B8;
u8 *THunterGuildSeqOffline__sub_80214A84(u8 *arg0, s16 arg1);
extern RecoveredGlobal_80214A84_lbl_80513E60 lbl_80513E60;
void THunterGuildSeqOffline__sub_80214A5C(void);
extern RecoveredGlobal_80214A84_lbl_80513E60 lbl_80513E60;
void THunterGuildSeqOffline__sub_80214A34(void);
u8 *TShopSequence__ct(u8 *);
s32 TShopWindowBase__sub_8022397C(void *);
extern RecoveredGlobal_80214A84_lbl_804C97F0 lbl_804C97F0;
extern RecoveredGlobal_80214A84_lbl_80513E60 lbl_80513E60;
extern s32 lbl_805D3664;
extern s32 lbl_805D61B8;
Seq_80214B3C *THunterGuildSeqOffline__sub_80214B3C(Seq_80214B3C *arg0, s32 arg1, s32 arg2);
int set_field_20__12TQuestListVMFPvi(void *, void *);
void confirm_and_close_if_valid__15TShopWindowBaseFPv(void *);
void fn_80214058(void *);
void fn_80214254(void *);
void create_judgment_item_window__15TShopWindowBaseFPv(void *);
void update__15TShopWindowBaseFPv(void *);
void update_confirm_input__15TShopWindowBaseFPv(void *);
void THunterGuildSeqOffline__sub_802145F8(void *);
void THunterGuildSeqOffline__sub_8021488C(void *);
void THunterGuildSeqOffline__sub_80214978(Seq_80214978 *arg0);
}

extern "C" {

void THunterGuildSeqOffline__sub_80214978(Seq_80214978 *arg0) {
    switch (arg0->state) {
    case 0: arg0->m10(); break;
    case 1: THunterGuildSeqOffline__sub_8021488C(arg0); break;
    case 3: THunterGuildSeqOffline__sub_802145F8(arg0); break;
    case 8: fn_80214058(arg0); break;
    case 4: update_confirm_input__15TShopWindowBaseFPv(arg0); break;
    case 5: update__15TShopWindowBaseFPv(arg0); break;
    case 6: create_judgment_item_window__15TShopWindowBaseFPv(arg0); break;
    case 7: fn_80214254(arg0); break;
    case 9: set_field_20__12TQuestListVMFPvi(arg0, (void *)0xC); break;
    case 10: set_field_20__12TQuestListVMFPvi(arg0, (void *)0xC); break;
    case 12: arg0->m11(); break;
    case 13: confirm_and_close_if_valid__15TShopWindowBaseFPv(arg0); break;
    case 14: return;
    }
}

void THunterGuildSeqOffline__sub_80214A34(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&lbl_80513E60)[i] = 0;
    }
}

void THunterGuildSeqOffline__sub_80214A5C(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((s32 *)&lbl_80513E60)[i] = 0;
    }
}

u8 *THunterGuildSeqOffline__sub_80214A84(u8 *arg0, s16 arg1) {
    u32 temp_r3;
    u32 temp_r3_2;
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804C97F0.value;
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x2C);
        if (temp_r3 != 0U) {
            queue_destruction__7TObjectFv((int) (temp_r3));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x38);
        if (temp_r3_2 != 0U) {
            TWindow__close((int) (temp_r3_2));
            M2C_FIELD(arg0, u32 *, 0x38) = 0U;
        }
        M2C_FIELD(&lbl_80513E60.value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
        lbl_805D61B8 = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}
#pragma push
#pragma opt_propagation off
Seq_80214B3C *THunterGuildSeqOffline__sub_80214B3C(Seq_80214B3C *arg0, s32 arg1, s32 arg2) {
    s32 one;
    TShopSequence__ct((u8 *)arg0);
    one = 1;
    arg0->vt = ((u8 *)&lbl_804C97F0);
    arg0->f0 = lbl_805D3664;
    arg0->f20 = 0;
    arg0->f24 = arg2;
    arg0->f2c = 0;
    arg0->f34 = 0;
    arg0->f38 = 0;
    arg0->f3c = 0;
    arg0->f40 = one;
    {
        s32 idx = TShopWindowBase__sub_8022397C(arg0);
        (*(void * *)&lbl_805D61B8) = arg0;
        ((s32 *)&lbl_80513E60)[idx] = one;
    }
    return arg0;
}
#pragma pop

}
