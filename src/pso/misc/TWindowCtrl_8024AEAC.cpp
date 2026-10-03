#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8024B000 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024B000_lbl_804CE9D4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_8024AFB8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024AFB8_lbl_804CE9E0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_8024AF74 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024AF74_lbl_804CE9EC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_8024AEF0 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024AEF0_lbl_804CE9F8 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct Stack_8024AEAC {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8024AEAC_lbl_804CEA04 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 TWindowCtrl__sub_8024B098(void *, void *);
extern RecoveredGlobal_8024B000_lbl_804CE9D4 lbl_804CE9D4;
void TWindowCtrl__sub_8024B000(M2C_UNK arg0, s32 arg1);
s32 TWindowCtrl__sub_8024B098(void *, void *);
extern RecoveredGlobal_8024AFB8_lbl_804CE9E0 lbl_804CE9E0;
void TWindowCtrl__sub_8024AFB8(M2C_UNK arg0, s32 arg1);
s32 TWindowCtrl__sub_8024B098(void *, void *);
extern RecoveredGlobal_8024AF74_lbl_804CE9EC lbl_804CE9EC;
void has_player_active_menu__11TWindowCtrlFi(s32 arg0);
extern RecoveredGlobal_8024AEF0_lbl_804CE9F8 lbl_804CE9F8;
void unsuppress_slot__11TWindowCtrlFi(s32 arg0);
struct Win_8024AF34 { virtual void m0(); };
typedef void (Win_8024AF34::*Pmf_8024AF34)();
void TWindowCtrl__sub_8024AF34(void *, Pmf_8024AF34);
Win_8024AF34 *get_window__11TWindowCtrlFi(void *self);
extern RecoveredGlobal_8024AEAC_lbl_804CEA04 lbl_804CEA04;
void suppress_slot__11TWindowCtrlFi(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_8024B000_lbl_804CE9D4_size[sizeof(RecoveredGlobal_8024B000_lbl_804CE9D4) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8024AFB8_lbl_804CE9E0_size[sizeof(RecoveredGlobal_8024AFB8_lbl_804CE9E0) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8024AF74_lbl_804CE9EC_size[sizeof(RecoveredGlobal_8024AF74_lbl_804CE9EC) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8024AEF0_lbl_804CE9F8_size[sizeof(RecoveredGlobal_8024AEF0_lbl_804CE9F8) == 0xC ? 1 : -1];

typedef char RecoveredGlobal_8024AEAC_lbl_804CEA04_size[sizeof(RecoveredGlobal_8024AEAC_lbl_804CEA04) == 0xC ? 1 : -1];
void suppress_slot__11TWindowCtrlFi(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024AEAC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024AEAC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024AEAC, sp10) == 0x8) ? 1 : -1];
    Stack_8024AEAC stack;
    stack.sp8 = M2C_FIELD(&lbl_804CEA04.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804CEA04.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804CEA04.value, s32 *, 8);
    ((void (*)(void *, void *))TWindowCtrl__sub_8024AF34)((void *) (arg0), (void *) (&stack.sp8));
}

void unsuppress_slot__11TWindowCtrlFi(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024AEF0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024AEF0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024AEF0, sp10) == 0x8) ? 1 : -1];
    Stack_8024AEF0 stack;
    stack.sp8 = M2C_FIELD(&lbl_804CE9F8.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804CE9F8.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804CE9F8.value, s32 *, 8);
    ((void (*)(void *, void *))TWindowCtrl__sub_8024AF34)((void *) (arg0), (void *) (&stack.sp8));
}

void TWindowCtrl__sub_8024AF34(void *self, Pmf_8024AF34 pmf) {
    Win_8024AF34 *w = get_window__11TWindowCtrlFi(self);
    if (w != NULL) {
        (w->*pmf)();
    }
}

void has_player_active_menu__11TWindowCtrlFi(s32 arg0) {
    typedef char sp8_offset[(offsetof(Stack_8024AF74, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024AF74, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024AF74, sp10) == 0x8) ? 1 : -1];
    Stack_8024AF74 stack;
    stack.sp8 = M2C_FIELD(&lbl_804CE9EC.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804CE9EC.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804CE9EC.value, s32 *, 8);
    TWindowCtrl__sub_8024B098((void *) (arg0), (void *) (&stack.sp8));
}

void TWindowCtrl__sub_8024AFB8(M2C_UNK arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_8024AFB8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024AFB8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024AFB8, sp10) == 0x8) ? 1 : -1];
    Stack_8024AFB8 stack;
    stack.sp8 = M2C_FIELD(&lbl_804CE9E0.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804CE9E0.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804CE9E0.value, s32 *, 8);
    TWindowCtrl__sub_8024B098((void *) (arg1), (void *) (&stack.sp8));
}

void TWindowCtrl__sub_8024B000(M2C_UNK arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_8024B000, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8024B000, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8024B000, sp10) == 0x8) ? 1 : -1];
    Stack_8024B000 stack;
    stack.sp8 = M2C_FIELD(&lbl_804CE9D4.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804CE9D4.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804CE9D4.value, s32 *, 8);
    TWindowCtrl__sub_8024B098((void *) (arg1), (void *) (&stack.sp8));
}

}
