#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TWindowSubComCard__sub_80073DB8(s32);
M2C_UNK fn_8024A0DC(s32);
s32 TWindowSubComCard__sub_80265BF8(s32);
M2C_UNK fn_8027FD94(s32, s16);

struct VObj_8027FBF0_Base { char pad[0x18]; };
struct VObj_8027FBF0 : VObj_8027FBF0_Base {
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
};

void fn_8027FBF0(void *arg0) {
    fn_8024A0DC(M2C_FIELD(arg0, s32 *, 0x1C));
    if (TWindowSubComCard__sub_80073DB8(M2C_FIELD(arg0, s32 *, 0x24)) != 0) {
        ((VObj_8027FBF0 *) M2C_FIELD(arg0, void **, 0x20))->m7();
    }
    fn_8027FD94(M2C_FIELD(arg0, s32 *, 0x28), TWindowSubComCard__sub_80265BF8(M2C_FIELD(arg0, s32 *, 0x24)));
}

}
