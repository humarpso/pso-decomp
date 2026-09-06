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

extern "C" {
M2C_UNK set_field_20__12TQuestListVMFPvi(void *, s32);
u32 TShopSequence__sub_80223600(void *, s32, s32);
unsigned short get_child_field1c__15TShopWindowBaseFPv(void *);
s32 fn_8026934C(s32);
s32 THunterGuildSeqOffline__sub_8022350C(void *, int);
s32 TWindowSubComCard__sub_8026CBB8(int, f32);
extern const f32 lbl_805DC6C8;
extern const f32 lbl_805DC6CC;
void TShopEquipmentGearSequence__sub_8021B6A8(u8 *arg0);
}

extern "C" {

typedef struct Stack_8021D948 Stack_8021D948;
typedef struct VBase_18_a93f07 VBase_18_a93f07;
typedef struct VObj_18_a93f07 VObj_18_a93f07;
#define PSO_VCALL_VObj_18_a93f07_m4(_self, _arg0, _arg1) (((VObj_18_a93f07 *)(_self))->m4((_arg0), (_arg1)))
void TShopEquipmentGearSequence__sub_8021B6A8(u8 *arg0) {
  Stack_8021D948 stack;
  stack.sp8 = lbl_805DC6C8;
  stack.spC = lbl_805DC6CC;
  TShopSequence__sub_80223600(arg0, TWindowSubComCard__sub_8026CBB8((int) 0x2C, (f32) lbl_805DC6C8), (s32) (&stack.sp8));
  PSO_VCALL_VObj_18_a93f07_m4(arg0, 0x2b, 1);
  *((s32 *) (((s8 *) arg0) + 0x30)) = fn_8026934C((s32) get_child_field1c__15TShopWindowBaseFPv(arg0));
  set_field_20__12TQuestListVMFPvi(arg0, 2);
  *((s32 *) (((s8 *) arg0) + 0x34)) = THunterGuildSeqOffline__sub_8022350C((void *) arg0, (int) 0x4);
}

}
