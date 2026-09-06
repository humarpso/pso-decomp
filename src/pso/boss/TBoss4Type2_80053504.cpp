#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TBoss4Type2__sub_80053B48(void *, void *, void *);
void TBoss4Type2__sub_80053C8C(void *, s32, s32, s32);
void TBoss4Type2__sub_80053504(u8 *arg0);
}

extern "C" {

void check_state_transition__11TBoss4Type2FPv(void *arg0);
M2C_UNK TBoss4Type2__sub_80053CEC(void *, M2C_UNK);
s32 TBoss4DarkFalz__sub_8004D990(s32);

void TBoss4Type2__sub_80053504(u8 *arg0) {
    s32 spC;
    s32 sp8;
    TBoss4Type2__sub_80053B48(arg0, &spC, &sp8);
    TBoss4Type2__sub_80053C8C(arg0, 2, spC, sp8);
}

void check_state_transition__11TBoss4Type2FPv(void *arg0) {
    if (TBoss4DarkFalz__sub_8004D990(M2C_FIELD(arg0, s32 *, 0x38C)) <= (s32) (0xC - M2C_FIELD(arg0, s32 *, 0x3C4))) {
        TBoss4Type2__sub_80053CEC(arg0, 5);
        return;
    }
    TBoss4Type2__sub_80053CEC(arg0, 6);
}

}
