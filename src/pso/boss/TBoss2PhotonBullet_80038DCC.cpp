#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80038DCC {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80038DCC_lbl_80435B6C {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 TObjEneDD__sub_800B9D94(void *, void *, int, void *);
extern RecoveredGlobal_80038DCC_lbl_80435B6C lbl_80435B6C;
void render__18TBoss2PhotonBulletFv(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80038DCC_lbl_80435B6C_size[sizeof(RecoveredGlobal_80038DCC_lbl_80435B6C) == 0xC ? 1 : -1];
void render__18TBoss2PhotonBulletFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80038DCC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80038DCC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80038DCC, sp10) == 0x8) ? 1 : -1];
    Stack_80038DCC stack;
    if (M2C_FIELD(arg0, s32 *, 0xDC) & 1) {
        stack.sp8 = M2C_FIELD(&lbl_80435B6C.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_80435B6C.value, s32 *, 4);
        stack.sp10 = M2C_FIELD(&lbl_80435B6C.value, s32 *, 8);
        TObjEneDD__sub_800B9D94((void *) (arg0 + 0x38), (void *) (arg0 + 0xCC), (int) (0), (void *) (&stack.sp8));
    }
}

}
