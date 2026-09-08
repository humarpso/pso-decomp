#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_8021D584_8021D524 { char pad[0x18]; };

struct VObj_8021D584_8021D524 : Base_8021D584_8021D524 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};

struct Base_8021D5D4_8021D524 { char pad[0x18]; };

struct VObj_8021D5D4_8021D524 : Base_8021D5D4_8021D524 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(s32, s32);
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32  m8();
};

struct Base_8021D660_8021D524 { char pad[0x18]; };

struct VObj_8021D660_8021D524 : Base_8021D660_8021D524 {
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

struct Stack_8021D948
{
  f32 sp8;
  f32 spC;
};

struct Base_8021D524 { char pad[0x18]; };

struct VObj_8021D524 : Base_8021D524 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(int, int);
};

struct RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8021B89C___vt__26TShopEquipmentGearSequence {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct RecoveredGlobal_8021B89C_TShopEquipmentGearSequence__data_80513EB0 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
u32 TShopSequence__sub_80223600(void *, s32, s32);
unsigned short get_child_field1c__15TShopWindowBaseFPv(void *);
s32 fn_8026934C(s32);
s32 THunterGuildSeqOffline__sub_8022350C(void *, int);
s32 TWindowSubComCard__sub_8026CBB8(int, f32);
extern const f32 lbl_805DC6C8;
extern const f32 lbl_805DC6CC;
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK close_message_window__13TShopSequenceFPv(void *);
M2C_UNK __dt__13TShopSequenceFv(void *, int);
s32 TShopWindowBase__sub_8022397C(void *);
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK TWindow__close(void *);
extern RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence __vt__26TShopEquipmentGearSequence;
extern RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 TShopEquipmentGearSequence__data_80513EB0;
extern s32 lbl_805D6220;
u8 *__dt__26TShopEquipmentGearSequenceFv(u8 *arg0, s16 arg1);
s32 TShopSequence__ct(void *);
s32 TShopWindowBase__sub_8022397C(void *);
extern RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence __vt__26TShopEquipmentGearSequence;
extern RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0 TShopEquipmentGearSequence__data_80513EB0;
extern s32 lbl_805D36A0;
extern s32 lbl_805D6218;
extern s32 lbl_805D621C;
extern s32 lbl_805D6220;
u8 *TShopEquipmentGearSequence__ct(u8 *arg0, M2C_UNK arg1, s32 arg2);
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
s32 handle_confirm__26TShopEquipmentGearSequenceFPv(void *);
s32 try_close__26TShopEquipmentGearSequenceFPv(void *);
s32 TShopEquipmentGearSequence__sub_8021B438(void *);
s32 TShopEquipmentGearSequence__sub_8021B4B0(void *);
s32 TShopEquipmentGearSequence__sub_8021B518(void *);
s32 TShopEquipmentGearSequence__sub_8021B6A8(u8 *arg0);
s32 restore_player_state__13TShopSequenceFPv(void *);
void TShopEquipmentGearSequence__vt9(u8 *arg0);
}

extern "C" {

typedef struct Stack_8021D948 Stack_8021D948;
typedef struct VBase_18_a93f07 VBase_18_a93f07;
typedef struct VObj_18_a93f07 VObj_18_a93f07;
#define PSO_VCALL_VObj_18_a93f07_m4(_self, _arg0, _arg1) (((VObj_18_a93f07 *)(_self))->m4((_arg0), (_arg1)))
s32 TShopEquipmentGearSequence__sub_8021B6A8(u8 *arg0) {
  Stack_8021D948 stack;
  stack.sp8 = lbl_805DC6C8;
  stack.spC = lbl_805DC6CC;
  TShopSequence__sub_80223600(arg0, TWindowSubComCard__sub_8026CBB8((int) 0x2C, (f32) lbl_805DC6C8), (s32) (&stack.sp8));
  PSO_VCALL_VObj_18_a93f07_m4(arg0, 0x2b, 1);
  *((s32 *) (((s8 *) arg0) + 0x30)) = fn_8026934C((s32) get_child_field1c__15TShopWindowBaseFPv(arg0));
  set_field_20__12TQuestListVMFPvi(arg0, 2);
  *((s32 *) (((s8 *) arg0) + 0x34)) = THunterGuildSeqOffline__sub_8022350C((void *) arg0, (int) 0x4);
}
typedef char RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence_size[sizeof(RecoveredGlobal_8021B7D0___vt__26TShopEquipmentGearSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0_size[sizeof(RecoveredGlobal_8021B7D0_TShopEquipmentGearSequence__data_80513EB0) == 0x10 ? 1 : -1];

void TShopEquipmentGearSequence__vt9(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x20);
    switch (temp_r0) {
    case 0:
        restore_player_state__13TShopSequenceFPv((void *) (arg0));
        set_field_20__12TQuestListVMFPvi((void *)((void *) (arg0)), (s32)((int) (1)));
        return;
    case 1:
        TShopEquipmentGearSequence__sub_8021B6A8((u8 *)((void *) (arg0)));
        return;
    case 2:
        TShopEquipmentGearSequence__sub_8021B518((void *) (arg0));
        return;
    case 3:
        TShopEquipmentGearSequence__sub_8021B4B0((void *) (arg0));
        return;
    case 4:
        TShopEquipmentGearSequence__sub_8021B438((void *) (arg0));
        return;
    case 6:
        try_close__26TShopEquipmentGearSequenceFPv((void *) (arg0));
        return;
    case 7:
        handle_confirm__26TShopEquipmentGearSequenceFPv((void *) (arg0));
    default:
        return;
    }
}

u8 *__dt__26TShopEquipmentGearSequenceFv(u8 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__26TShopEquipmentGearSequence.value;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
            M2C_FIELD(arg0, u32 *, 0x34) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
            M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
        }
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x30));
            M2C_FIELD(arg0, u32 *, 0x30) = 0U;
        }
        close_message_window__13TShopSequenceFPv((void *) (arg0));
        lbl_805D6220 = 0;
        M2C_FIELD(&TShopEquipmentGearSequence__data_80513EB0.value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 0;
        __dt__13TShopSequenceFv((void *) (arg0), (int) (0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *) (arg0));
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_8021B89C___vt__26TShopEquipmentGearSequence_size[sizeof(RecoveredGlobal_8021B89C___vt__26TShopEquipmentGearSequence) == 0x38 ? 1 : -1];
typedef char RecoveredGlobal_8021B89C_TShopEquipmentGearSequence__data_80513EB0_size[sizeof(RecoveredGlobal_8021B89C_TShopEquipmentGearSequence__data_80513EB0) == 0x10 ? 1 : -1];
u8 *TShopEquipmentGearSequence__ct(u8 *arg0, M2C_UNK arg1, s32 arg2) {
    TShopSequence__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8021B89C___vt__26TShopEquipmentGearSequence *)&__vt__26TShopEquipmentGearSequence).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D36A0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    (*(u8 * *)&lbl_805D6220) = arg0;
    lbl_805D6218 = 0;
    lbl_805D621C = 0;
    M2C_FIELD(&(*(RecoveredGlobal_8021B89C_TShopEquipmentGearSequence__data_80513EB0 *)&TShopEquipmentGearSequence__data_80513EB0).value, M2C_UNK *, (TShopWindowBase__sub_8022397C((void *) (arg0)) * 4)) = 1;
    return arg0;
}

}
