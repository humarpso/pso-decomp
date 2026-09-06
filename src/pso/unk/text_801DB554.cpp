#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_44382c { char pad[0x18]; };

struct VObj_18_44382c : VBase_18_44382c {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual M2C_UNK m8(s8 *, M2C_UNK);
};

struct Stack_801DB554 {
    s8 sp8;
    s8 sp9;
    s16 spA;
};

extern "C" {
void bswap__13packet_headerFv(s32);
void TLobby__sub_801DB554(u8 *arg0);
}

extern "C" {

void TLobby__sub_801DB554(u8 *arg0) {
    Stack_801DB554 stack;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1910) != 0) {
        stack.sp8 = 0x6F;
        stack.sp9 = 0;
        stack.spA = 4;
        bswap__13packet_headerFv((s32) &stack.sp8);
        ((VObj_18_44382c *)(arg0))->m8(&stack.sp8, 4);
    }
}

}
