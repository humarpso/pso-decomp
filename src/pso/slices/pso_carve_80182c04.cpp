#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_80182C04 { char pad[0x18]; };
struct VObj_80182C04 : Base_80182C04 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual s32 m12(f32);
    virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16();
    virtual void m17();
    virtual void m18();
};

void fn_80182C04(void *arg0) {
    void *temp_r3;
    void *temp_r4;
    VObj_80182C04 *obj = (VObj_80182C04 *)arg0;

    temp_r4 = M2C_FIELD(arg0, void **, 0xB8);
    if (obj->m12(M2C_FIELD(temp_r4, f32 *, 4)) != 0) {
        M2C_FIELD(arg0, s32 *, 0xAC) = 1;
        obj->m18();
        temp_r3 = M2C_FIELD(arg0, void **, 0xA4);
        M2C_FIELD(temp_r3, s32 *, 0x18) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x18) & 0xFFFFFFFE);
    }
}

}
