#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_80203470 {
    s32 sp8;
    u8 trailing_storage[0x8];
};

extern "C" {
s32 TLobby__sub_802077CC(void *, void *);
extern s32 lbl_805D5FC0;
extern s32 lbl_805D5FC4;
void TLobby__sub_80203470(s32 arg0);
}

extern "C" {

void TLobby__sub_80203470(s32 arg0) {
    Stack_80203470 stack;
    lbl_805D5FC0 = arg0;
    if (TLobby__sub_802077CC((void *) (arg0), (void *) (&stack.sp8)) == 1) {
        lbl_805D5FC4 = stack.sp8;
    }
}

}
