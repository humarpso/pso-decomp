#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8009FFD8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

extern "C" {
void init_xyz_limits__10TObjPlayerFv(void);
M2C_UNK TObjPlayer__sub_801E341C(void *, int, int);
void TObjEneMe1Canadin__sub_8009FFD8(s32 arg0);
}

extern "C" {

void *TObjEneMe1Canadin__sub_8009FE60(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);

extern M2C_UNK lbl_80490428[];

void *TObjEneMe1Canadin__sub_8009FE60(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80490428;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
void TObjEneMe1Canadin__sub_8009FFD8(s32 arg0) {
    Stack_8009FFD8 stack;
    stack.sp8 = arg0 + 0x28;
    stack.spC = arg0 + 0x40;
    stack.sp10 = 0;
    stack.sp14 = 2;
    init_xyz_limits__10TObjPlayerFv();
    TObjPlayer__sub_801E341C((void *) (&stack.sp8), (int) (1), (int) (5));
}

}
