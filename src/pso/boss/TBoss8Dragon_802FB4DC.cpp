#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802FB70C_TBoss8Dragon__data_804744C8 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_802FB70C_TBoss8Dragon__data_80541DC8 {
    M2C_UNK value;
    u8 remaining[0x10];
};

#include <stddef.h>
struct Stack_802FB778 {
    M2C_UNK sp8;
    u8 pad_C[0x4];
    f32 sp10;
    u8 trailing_storage[0x8];
};

struct RecoveredGlobal_802FB778_lbl_804744B4 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_802FB778_TBoss8Dragon__data_80541DDC {
    u8 * value;
    u8 remaining[0x8];
};

extern "C" {
s32 reset_hp__9TObjEneDDFPv(void *, int, int, int);
s32 get_state_flags__12TBoss8DragonFPv(void *, void *);
extern RecoveredGlobal_802FB70C_TBoss8Dragon__data_804744C8 TBoss8Dragon__data_804744C8;
extern RecoveredGlobal_802FB70C_TBoss8Dragon__data_80541DC8 TBoss8Dragon__data_80541DC8;
void TBoss8Dragon__sub_802FB70C(s32 arg0);
M2C_UNK TBoss1Dragon__sub_80027A80(void *, void *);
s32 get_state_flags__12TBoss8DragonFPv(void *, void *);
M2C_UNK TBoss8Dragon__sub_802FBEA4(void *, int);
M2C_UNK TBoss8Dragon__sub_802FBF40(void *);
extern RecoveredGlobal_802FB778_lbl_804744B4 lbl_804744B4;
extern RecoveredGlobal_802FB778_TBoss8Dragon__data_80541DDC TBoss8Dragon__data_80541DDC;
void TBoss8Dragon__sub_802FB778(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_802FB70C_TBoss8Dragon__data_804744C8_size[sizeof(RecoveredGlobal_802FB70C_TBoss8Dragon__data_804744C8) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_802FB70C_TBoss8Dragon__data_80541DC8_size[sizeof(RecoveredGlobal_802FB70C_TBoss8Dragon__data_80541DC8) == 0x14 ? 1 : -1];
void TBoss8Dragon__sub_802FB70C(s32 arg0) {
    reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&TBoss8Dragon__data_80541DC8.value, s32 *, 0x10)), (int) (0));
    get_state_flags__12TBoss8DragonFPv((void *) (arg0), (void *) (&TBoss8Dragon__data_804744C8.value));
    reset_hp__9TObjEneDDFPv((void *) (arg0), (int) (0), (int) (M2C_FIELD(&TBoss8Dragon__data_80541DC8.value, s32 *, 0)), (int) (0));
}
typedef char RecoveredGlobal_802FB778_lbl_804744B4_size[sizeof(RecoveredGlobal_802FB778_lbl_804744B4) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_802FB778_TBoss8Dragon__data_80541DDC_size[sizeof(RecoveredGlobal_802FB778_TBoss8Dragon__data_80541DDC) == 0xC ? 1 : -1];
void TBoss8Dragon__sub_802FB778(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_802FB778, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802FB778, sp10) == 0x8) ? 1 : -1];
    Stack_802FB778 stack;
    TBoss1Dragon__sub_80027A80((void *) (&stack.sp8), (void *) (&lbl_804744B4.value));
    stack.sp10 = M2C_FIELD(TBoss8Dragon__data_80541DDC.value, f32 *, 0xC);
    TBoss8Dragon__sub_802FBEA4((void *) (arg0), (int) (TBoss8Dragon__data_80541DDC.value));
    get_state_flags__12TBoss8DragonFPv((void *) (arg0), (void *) (&stack.sp8));
    TBoss8Dragon__sub_802FBF40((void *) (arg0));
}

}
