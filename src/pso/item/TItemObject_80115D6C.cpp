#include "pso/item/TItemObject.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 TItemObject__sub_80115D84(u8 *arg0);
}

void TItemObject::store_encoded_value(s32 value) {
    encoded_value = value ^ (s32)&encoded_value;
}

extern "C" {

struct Base_80115D94_80115D6C { char pad[0x18]; };
struct VObj_80115D94_80115D6C : Base_80115D94_80115D6C {
    virtual void m0();
    virtual void m1();  virtual void m2();  virtual void m3();
    virtual void m4();  virtual void m5();  virtual void m6();
    virtual void m7();  virtual void m8();  virtual void m9();
    virtual void m10(); virtual void m11(); virtual void m12();
    virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18();
    virtual void m19(); virtual void m20(); virtual void m21();
    virtual void m22(); virtual void m23(); virtual void m24();
    virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30();
    virtual void m31(); virtual void m32(); virtual void m33();
    virtual s32 m34();
};

u8 TItemObject__sub_80115D7C(void* p);
void TItemObject__vt12(void *arg0);
u8 *TItemObject__vt7(u8 *arg0);
void TItem__sub_80115D68(void);
s32 copy_and_register_item_data__11TItemObjectFPv();
M2C_UNK refresh_if_current_player__20TWindowSubStatusDispFPv(void *);

u8 TItemObject__sub_80115D7C(void* p) { return *(u8*)((char*)p + 0x100); }

u8 TItemObject__sub_80115D84(u8 *arg0) {
    return (u8) M2C_FIELD(M2C_FIELD(arg0, void **, 0xF8), u16 *, 8);
}

void TItemObject__vt12(void *arg0) {
    s32 temp_r31;

    temp_r31 = copy_and_register_item_data__11TItemObjectFPv();
    if (((VObj_80115D94_80115D6C *)arg0)->m34() > temp_r31) {
        refresh_if_current_player__20TWindowSubStatusDispFPv(arg0);
    }
}

u8 *TItemObject__vt7(u8 *arg0) {
    u32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u32 *, 0xF0);
    if (temp_r4 != 0U) {
        return (unsigned char *) (temp_r4 + 0x38);
    }
    return arg0 + 0x38;
}

}
