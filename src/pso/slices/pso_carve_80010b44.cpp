#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80010B44 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

extern "C" {
s32 obj_getField1c(s32);
s32 TBoss7LaserPtcl__sub_80086C6C(void *, void *, int, int);
s32 TObjPlayer__sub_80087638(s32, s32);
void TObjPlayer__sub_80010B44(s32 arg0);
}

extern "C" {

s32 obj_setArrS16_FC(s32, s32, u16);
u16 obj_getArrU16_FC(s32, s32);
s32 obj_getField1c(s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
int obj_clearArrS16_FC(void*, void*);
void clear_s16_arrays__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80010A78(void);
void TObjPlayer__sub_80010A80(void);

void TObjPlayer__sub_80010B44(s32 arg0) {
    Stack_80010B44 stack;
    s32 temp_r3;
    stack.spC = 0;
    stack.sp8 = 0;
    stack.sp10 = -0x8000;
    temp_r3 = TBoss7LaserPtcl__sub_80086C6C((void *) (arg0 + 0x2FC), (void *) (&stack.sp8), (int) (0x1FD), (int) (0x50));
    if (temp_r3 != 0) {
        TObjPlayer__sub_80087638((s32)((int) (temp_r3)), (s32)((void *) (obj_getField1c((s32)((void *) (arg0))))));
    }
}

}
