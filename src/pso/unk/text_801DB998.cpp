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
    virtual M2C_UNK m8(u8 *, M2C_UNK);
};

struct Stack_801DB998 {
    u8 sp8;
    u8 pad_9[0x1];
    s16 spA;
    u8 spC[8];
    s32 sp14;
    u8 pad_18[0x1];
    s8 sp19;
    u8 pad_1A[0x2];
    char sp1C[0x30];
    char sp4C[0x30];
    char sp7C[0x30];
};

extern "C" {
M2C_UNK fn_801DF918(void *);
M2C_UNK fn_801DF954(void *);
M2C_UNK __as__8TPlySmthFRC8TPlySmth(void *, void *);
M2C_UNK strncpy(void *, void *, int);
M2C_UNK memset(void *, int, int);
void fn_801DB998(u8 *arg0);
}

extern "C" {

void fn_801DB998(u8 *arg0) {
    Stack_801DB998 stack;
    fn_801DF954((void *) (&stack.sp8));
    memset((void *) (&stack.sp8), (int) (0), (int) (0xA4));
    stack.sp8 = 0x9C;
    stack.spA = 0xA4;
    __as__8TPlySmthFRC8TPlySmth((void *) (&stack.spC), (void *) (arg0 + 0x18F8));
    stack.sp14 = (s32) M2C_FIELD(arg0, u16 *, 0x1908);
    stack.sp19 = (s8) M2C_FIELD(arg0, s32 *, 0x1934);
    strncpy((void *) (&stack.sp1C), (void *) (arg0 + 0x3EDA), (int) (0x30));
    strncpy((void *) (&stack.sp4C), (void *) (arg0 + 0x3F0A), (int) (0x30));
    strncpy((void *) (&stack.sp7C), (void *) (arg0 + 0x3F3A), (int) (0x30));
    fn_801DF918((void *) (&stack.sp8));
    ((VObj_18_44382c *)(arg0))->m8(&stack.sp8, 0xA4);
}

}
