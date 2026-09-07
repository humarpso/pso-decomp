#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8001D19C {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_8001D19C_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

extern "C" {
s32 copy_pos__11TNowLoadingFPvPv(int, void *);
extern RecoveredGlobal_8001D19C_lbl_804FF5E8 lbl_804FF5E8;
extern u32 lbl_805D4DF0;
extern const f32 lbl_805D7EC0;
void run_task__11TNowLoadingFv(u8 *arg0);
}

extern "C" {

void TNowLoading__sub_8001D4D0(void);
void TNowLoading__sub_8001D4D4(void);
void *__dt__11TNowLoadingFv(void *arg0, s16 arg1);
void render__11TNowLoadingFv(void);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

void render__11TNowLoadingFv(void) {  }

extern M2C_UNK __vt__11TNowLoading[];

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8001D19C_lbl_804FF5E8_size[sizeof(RecoveredGlobal_8001D19C_lbl_804FF5E8) == 0x28 ? 1 : -1];
void run_task__11TNowLoadingFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8001D19C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8001D19C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8001D19C, sp10) == 0x8) ? 1 : -1];
    Stack_8001D19C stack;
    u32 temp_r3;
    u32 temp_r3_2;
    u32 temp_r3_3;
    u32 temp_r3_4;
    u32 temp_r3_5;
    u32 temp_r3_6;
    u32 temp_r3_7;
    u32 temp_r3_8;
    if ((u32) lbl_805D4DF0 == 0U) {
        M2C_FIELD(arg0, f32 *, 0x2C) = (f32) ((lbl_805D7EC0 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0xC)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0));
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) ((lbl_805D7EC0 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x10)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 4));
        M2C_FIELD(arg0, f32 *, 0x34) = (f32) ((lbl_805D7EC0 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x14)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 8));
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x1C);
        if (temp_r3 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3), (void *) (arg0 + 0x2C));
        }
        temp_r3_2 = M2C_FIELD(arg0, u32 *, 0x20);
        if (temp_r3_2 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_2), (void *) (arg0 + 0x2C));
        }
        temp_r3_3 = M2C_FIELD(arg0, u32 *, 0x24);
        if (temp_r3_3 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_3), (void *) (arg0 + 0x2C));
        }
        temp_r3_4 = M2C_FIELD(arg0, u32 *, 0x28);
        if (temp_r3_4 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_4), (void *) (arg0 + 0x2C));
        }
    } else {
        stack.sp8 = (lbl_805D7EC0 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0xC)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0);
        stack.spC = (lbl_805D7EC0 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x10)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 4);
        stack.sp10 = (lbl_805D7EC0 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x14)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 8);
        temp_r3_5 = M2C_FIELD(arg0, u32 *, 0x1C);
        if (temp_r3_5 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_5), (void *) (&stack.sp8));
        }
        temp_r3_6 = M2C_FIELD(arg0, u32 *, 0x20);
        if (temp_r3_6 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_6), (void *) (&stack.sp8));
        }
        temp_r3_7 = M2C_FIELD(arg0, u32 *, 0x24);
        if (temp_r3_7 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_7), (void *) (&stack.sp8));
        }
        temp_r3_8 = M2C_FIELD(arg0, u32 *, 0x28);
        if (temp_r3_8 != 0U) {
            copy_pos__11TNowLoadingFPvPv((int) (temp_r3_8), (void *) (&stack.sp8));
        }
    }
}
#pragma pop

void *__dt__11TNowLoadingFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TNowLoading;
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x20)); M2C_FIELD(arg0, M2C_UNK *, 0x20) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TNowLoading__sub_8001D4D0(void) {  }
void TNowLoading__sub_8001D4D4(void) {  }

}
