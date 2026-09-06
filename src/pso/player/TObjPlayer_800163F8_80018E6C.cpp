#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80018E6C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct Stack_80018EE4 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

extern "C" {
u8 *csnVectorUnder(f32 *, void *, M2C_UNK, void *, f32);
u8 *TObjPlayer__sub_80018E6C(u8 *arg0, u8 *arg1);
u8 *csnVectorUnder(f32 *, void *, M2C_UNK, void *, f32);
u8 *TObjPlayer__sub_80018EE4(u8 *arg0);
}

extern "C" {

void* TObjPlayer__sub_80018F5C(void* p);

u8 *TObjPlayer__sub_80018E6C(u8 *arg0, u8 *arg1) {
    Stack_80018E6C stack;
    f32 temp_f1;
    u8 *temp_r3;
    u8 *temp_r6;
    stack.sp8 = M2C_FIELD(arg1, f32 *, 0);
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2B0));
    temp_f1 = M2C_FIELD(arg1, f32 *, 4);
    stack.spC = temp_f1 + M2C_FIELD(temp_r6, f32 *, 0x10);
    stack.sp10 = M2C_FIELD(arg1, f32 *, 8);
    temp_r3 = (u8 *)(csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15, temp_r6, temp_f1));
    if (temp_r3 == NULL) {
        return NULL;
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 4), f32 *, 4);
    return temp_r3;
}
u8 *TObjPlayer__sub_80018EE4(u8 *arg0) {
    Stack_80018EE4 stack;
    f32 temp_f1;
    u8 *temp_r3;
    u8 *temp_r6;
    stack.sp8 = M2C_FIELD(arg0, f32 *, 0x38);
    temp_r6 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x2B0));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x3C);
    stack.spC = temp_f1 + M2C_FIELD(temp_r6, f32 *, 0x10);
    stack.sp10 = M2C_FIELD(arg0, f32 *, 0x40);
    temp_r3 = (u8 *)(csnVectorUnder(&stack.sp8, arg0 + 0x120, 0x15, temp_r6, temp_f1));
    if (temp_r3 == NULL) {
        return NULL;
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(M2C_FIELD(temp_r3, u8 **, 4), f32 *, 4);
    return temp_r3;
}

}
