#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801D4A6C { char pad[0x18]; };
struct VObj_801D4A6C : Base_801D4A6C {
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
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27(s16);
};

extern "C" {

void remove_equipped_item__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2);
M2C_UNK unequip_item__10TObjPlayerFiPv(s32, void *);
s32 TObjPlayer__sub_801C1A70();
void *get_owner_if_alive__10TObjPlayerFPv(s32);
M2C_UNK queue_destruction__7TObjectFv(s32);

void remove_equipped_item__10TObjPlayerFPvii(void *arg0, s32 arg1, s32 arg2) {
    s16 temp_r4;
    void *temp_r3;

    temp_r3 = get_owner_if_alive__10TObjPlayerFPv(arg2);
    if (temp_r3 != NULL) {
        if (TObjPlayer__sub_801C1A70() != 0) {
            unequip_item__10TObjPlayerFiPv(arg1, temp_r3);
        }
        temp_r4 = M2C_FIELD(arg0, s16 *, 0x1C);
        M2C_FIELD(arg0, s16 *, 0x1C) = (s16) (temp_r4 - 1);
        ((VObj_801D4A6C *)temp_r3)->m27(temp_r4);
        queue_destruction__7TObjectFv(arg2);
    }
}

}
