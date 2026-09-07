#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8009048C {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
};

struct RecoveredGlobal_8009048C_lbl_80439B8C {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_8009048C_lbl_8048F11C {
    M2C_UNK value;
    u8 remaining[0x28];
};

extern "C" {
s32 spawn_npc_enemy__6TLobbyFsiiiff(int, int, int, void *, f32, f32);
extern RecoveredGlobal_8009048C_lbl_80439B8C lbl_80439B8C;
extern RecoveredGlobal_8009048C_lbl_8048F11C lbl_8048F11C;
extern u8 *lbl_805D4F20;
extern const f32 lbl_805D9688;
void fn_8009048C(void);
}

extern "C" {

typedef char RecoveredGlobal_8009048C_lbl_80439B8C_size[sizeof(RecoveredGlobal_8009048C_lbl_80439B8C) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_8009048C_lbl_8048F11C_size[sizeof(RecoveredGlobal_8009048C_lbl_8048F11C) == 0x2C ? 1 : -1];
void fn_8009048C(void) {
    typedef char sp8_offset[(offsetof(Stack_8009048C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8009048C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8009048C, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8009048C, sp14) == 0xC) ? 1 : -1];
    Stack_8009048C stack;
    u8 *temp_r5;
    stack.sp8 = M2C_FIELD(&lbl_80439B8C.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80439B8C.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80439B8C.value, s32 *, 8);
    stack.sp14 = M2C_FIELD(&lbl_80439B8C.value, s32 *, 0xC);
    stack.sp8 = M2C_FIELD(lbl_805D4F20, s32 *, 0x430);
    temp_r5 = (u8 *)(M2C_FIELD(lbl_805D4F20, u8 **, 0x42C));
    spawn_npc_enemy__6TLobbyFsiiiff((int) (0x14), (int) (M2C_FIELD(temp_r5, s32 *, 0x28)), (int) (M2C_FIELD(temp_r5, s32 *, 0x2C)), (void *) (&stack.sp8), (f32) (M2C_FIELD(&lbl_8048F11C.value, f32 *, 0xC)), (f32) (lbl_805D9688));
}

}
