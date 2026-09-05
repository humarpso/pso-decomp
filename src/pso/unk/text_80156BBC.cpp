#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_14 { char pad[0x14]; };
struct VObj_14 : VBase_14 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual M2C_UNK m3();
};
extern "C" {
extern const f32 lbl_805DB2B4;
void fn_80156CEC(u8 *arg0);
}

extern "C" {

void fn_80156CEC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DB2B4;
    ((VObj_14 *)(arg0))->m3();
}

}
