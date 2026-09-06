#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_8011E56C {
    M2C_UNK sp8;
    f32 spC;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, int);
M2C_UNK TObjButterflyLobby__sub_8007A5D8(void *, void *, int);
void TObjPlayer__sub_8011E56C(u8 *arg0, u8 *arg1);
}

extern "C" {

int memcpy(void*, void*, void*);
void TObjPlayer__sub_8011E5C0(void);
void TObjPlayer__sub_8011E5C4(void);
void TObjPlayer__sub_8011E5C8(void);
void TObjPlayer__sub_8011E5CC(void);
void TObjPlayer__sub_8011E5D0(void);
void TObjPlayer__sub_8011E5D4(void);
void TObjPlayer__sub_8011E5D8(void);
void TObjPlayer__sub_8011E5DC(void);
void TObjPlayer__sub_8011E5E0(void);
void TObjPlayer__sub_8011E610(void* p, s32 v);

int TObjPlayer__sub_8011E484(void) { return 0; }
int TObjPlayer__sub_8011E4D8(void) { return 0; }
void TObjPlayer__sub_8011E56C(u8 *arg0, u8 *arg1) {
    Stack_8011E56C stack;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x2FC));
    stack.spC = M2C_FIELD(arg1, f32 *, 4);
    TObjButterflyLobby__sub_8007A5D8((void *) (&stack.sp8), (void *) (arg1), (int) (0x8100));
}

}
