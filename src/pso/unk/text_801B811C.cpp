#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_e9153c { char pad[0x18]; };

struct VObj_18_e9153c : VBase_18_e9153c {
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
    virtual M2C_UNK m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual s8 m31();
};

extern "C" {
int lookup_inventory_item__10TObjPlayerFPv(void *);
u32 TObjPlayer__sub_801B8E68(void *, void *);
void TObjPlayer__sub_801BE9A8(s32);
void set_flag_20000__10TObjPlayerFi(s32);
void TObjPlayer__sub_801BF8EC(s32, s32, s32);
s32 get_slot_value__10TObjPlayerFPvi(void *, s32);
void TObjPlayer__sub_801B811C(u8 *arg0, u8 *arg1);
}

extern "C" {

void TObjPlayer__sub_801B811C(u8 *arg0, u8 *arg1) {
    s32 temp_r3;
    temp_r3 = lookup_inventory_item__10TObjPlayerFPv(arg1 + 8);
    if ((temp_r3 != 0) && (TObjPlayer__sub_801B8E68(arg0, (void *) temp_r3) != 0) && (M2C_FIELD(arg1, s32 *, 4) & 8) && (get_slot_value__10TObjPlayerFPvi(arg0 + 0xD04, (s32) ((VObj_18_e9153c *)(temp_r3))->m31()) == 0U)) {
        TObjPlayer__sub_801BF8EC((s32) (arg0 + 0xD04), (s32) ((VObj_18_e9153c *)(temp_r3))->m31(), temp_r3);
        set_flag_20000__10TObjPlayerFi((s32) arg0);
        ((VObj_18_e9153c *)(temp_r3))->m18();
        TObjPlayer__sub_801BE9A8((s32) arg0);
    }
}

}
