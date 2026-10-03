#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_30 { u8 bytes[0x30]; };

struct RecoveredGlobal_8006B324_lbl_805137F8 {
    M2C_UNK value;
    u8 remaining[0x20];
};

#include <stddef.h>
struct Stack_8006ABAC {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
};

struct RecoveredGlobal_8006ABAC_lbl_804381A4 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006ABAC_lbl_804381B0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006ABAC_lbl_804FF610 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006ABAC_lbl_804FF61C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006ABAC_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct Stack_8006AC70 {
    s32 sp8;
    s32 spC;
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;
};

struct RecoveredGlobal_8006AC70_lbl_8043818C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006AC70_lbl_80438198 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006AC70_lbl_804FF610 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006AC70_lbl_804FF61C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8006AC70_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

extern "C" {
u8 * TCameraCtrl__sub_8006AF74(s32 arg0, s32 arg1);
extern RecoveredGlobal_8006B324_lbl_805137F8 lbl_805137F8;
M2C_UNK *TCameraCtrl__sub_8006B324(void);
s32 rotate_matrix_y(int, void *);
s32 rotate_matrix_x(int, void *);
s32 push_matrix_from(void *);
f32 rotate_vector_by_current_matrix(void *, void *);
s32 pop_matrix();
extern RecoveredGlobal_8006ABAC_lbl_804381A4 lbl_804381A4;
extern RecoveredGlobal_8006ABAC_lbl_804381B0 lbl_804381B0;
extern RecoveredGlobal_8006ABAC_lbl_804FF610 lbl_804FF610;
extern RecoveredGlobal_8006ABAC_lbl_804FF61C lbl_804FF61C;
extern RecoveredGlobal_8006ABAC_lbl_8058D490 lbl_8058D490;
void TCameraCtrl__sub_8006ABAC(M2C_UNK arg0, s32 arg1, s32 arg2);
s32 rotate_matrix_y(int, void *);
s32 rotate_matrix_x(int, void *);
s32 push_matrix_from(void *);
f32 rotate_vector_by_current_matrix(void *, void *);
s32 pop_matrix();
extern RecoveredGlobal_8006AC70_lbl_8043818C lbl_8043818C;
extern RecoveredGlobal_8006AC70_lbl_80438198 lbl_80438198;
extern RecoveredGlobal_8006ABAC_lbl_804FF610 lbl_804FF610;
extern RecoveredGlobal_8006ABAC_lbl_804FF61C lbl_804FF61C;
extern RecoveredGlobal_8006ABAC_lbl_8058D490 lbl_8058D490;
void TCameraCtrl__sub_8006AC70(u8 *arg0);
}

extern "C" {

u16 TCameraCtrl__sub_8006B358(void* p);
int TCameraCtrl__sub_8006B368(void);
int TCameraCtrl__sub_8006B370(void);
int TCameraCtrl__sub_8006B3B8(void* p);
int get_camera_id__11TCameraCtrlFv(void);
int get_instance__11TCameraCtrlFv(void);
s32 get_mode__11TCameraCtrlFPv(void* p);
int reset_battle_camera__11TCameraCtrlFPv(void* p);
void reset_split_flag__11TCameraCtrlFPv(void *arg0);
void set_target__11TCameraCtrlFii(int a0, int a1);
void set_target_coords__11TCameraCtrlFii(int a0, int a1);
M2C_UNK TCameraCtrl__sub_8006AF9C(void *, M2C_UNK);
int TCameraCtrl__sub_8006CCEC(void*);
int TCameraCtrl__sub_8006CD78(void*);
s32 get_state_flag__9TMainTaskFv();
s32 is_split_screen();

void reset_split_flag__11TCameraCtrlFPv(void *arg0) {
    if ((is_split_screen() == 0) && (get_state_flag__9TMainTaskFv() != 1)) {
        if ((u8) M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
            TCameraCtrl__sub_8006AF9C(arg0, 0);
        }
        M2C_FIELD(arg0, u8 *, 0x1C) = 0U;
    }
}

    extern int lbl_805D34B8;

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
typedef char RecoveredGlobal_8006ABAC_lbl_804381A4_size[sizeof(RecoveredGlobal_8006ABAC_lbl_804381A4) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006ABAC_lbl_804381B0_size[sizeof(RecoveredGlobal_8006ABAC_lbl_804381B0) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006ABAC_lbl_804FF610_size[sizeof(RecoveredGlobal_8006ABAC_lbl_804FF610) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006ABAC_lbl_804FF61C_size[sizeof(RecoveredGlobal_8006ABAC_lbl_804FF61C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006ABAC_lbl_8058D490_size[sizeof(RecoveredGlobal_8006ABAC_lbl_8058D490) == 0x30 ? 1 : -1];
void TCameraCtrl__sub_8006ABAC(M2C_UNK arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_8006ABAC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8006ABAC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8006ABAC, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8006ABAC, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8006ABAC, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_8006ABAC, sp1C) == 0x14) ? 1 : -1];
    Stack_8006ABAC stack;
    stack.sp14 = M2C_FIELD(&lbl_804381A4.value, s32 *, 0);
    stack.sp18 = M2C_FIELD(&lbl_804381A4.value, s32 *, 4);
    stack.sp1C = M2C_FIELD(&lbl_804381A4.value, s32 *, 8);
    stack.sp8 = M2C_FIELD(&lbl_804381B0.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_804381B0.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_804381B0.value, s32 *, 8);
    push_matrix_from((void *) (&lbl_8058D490.value));
    rotate_matrix_y((int) (0), (void *) (arg2));
    rotate_vector_by_current_matrix((void *) (&stack.sp14), (void *) (&lbl_804FF610.value));
    pop_matrix();
    push_matrix_from((void *) (&lbl_8058D490.value));
    rotate_matrix_x((int) (0), (void *) (arg1));
    rotate_vector_by_current_matrix((void *) (&stack.sp8), (void *) (&lbl_804FF61C.value));
    pop_matrix();
}
#pragma pop

#pragma push
#pragma opt_common_subs off
typedef char RecoveredGlobal_8006AC70_lbl_8043818C_size[sizeof(RecoveredGlobal_8006AC70_lbl_8043818C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006AC70_lbl_80438198_size[sizeof(RecoveredGlobal_8006AC70_lbl_80438198) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006AC70_lbl_804FF610_size[sizeof(RecoveredGlobal_8006AC70_lbl_804FF610) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006AC70_lbl_804FF61C_size[sizeof(RecoveredGlobal_8006AC70_lbl_804FF61C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8006AC70_lbl_8058D490_size[sizeof(RecoveredGlobal_8006AC70_lbl_8058D490) == 0x30 ? 1 : -1];
void TCameraCtrl__sub_8006AC70(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_8006AC70, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8006AC70, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8006AC70, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8006AC70, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8006AC70, sp18) == 0x10) ? 1 : -1];
    typedef char sp1C_offset[(offsetof(Stack_8006AC70, sp1C) == 0x14) ? 1 : -1];
    Stack_8006AC70 stack;
    stack.sp14 = M2C_FIELD(&lbl_8043818C.value, s32 *, 0);
    stack.sp18 = M2C_FIELD(&lbl_8043818C.value, s32 *, 4);
    stack.sp1C = M2C_FIELD(&lbl_8043818C.value, s32 *, 8);
    stack.sp8 = M2C_FIELD(&lbl_80438198.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_80438198.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_80438198.value, s32 *, 8);
    push_matrix_from((void *) (&(*(RecoveredGlobal_8006AC70_lbl_8058D490 *)&lbl_8058D490).value));
    rotate_matrix_y((int)((int) (0)), (void *)((int) (M2C_FIELD(arg0, s32 *, 0x194))));
    rotate_vector_by_current_matrix((void *) (&stack.sp14), (void *) (&(*(RecoveredGlobal_8006AC70_lbl_804FF610 *)&lbl_804FF610).value));
    pop_matrix();
    push_matrix_from((void *) (&(*(RecoveredGlobal_8006AC70_lbl_8058D490 *)&lbl_8058D490).value));
    rotate_matrix_x((int)((int) (0)), (void *)((int) (M2C_FIELD(arg0, s32 *, 0x190))));
    rotate_vector_by_current_matrix((void *) (&stack.sp8), (void *) (&(*(RecoveredGlobal_8006AC70_lbl_804FF61C *)&lbl_804FF61C).value));
    pop_matrix();
}
#pragma pop

u8 * TCameraCtrl__sub_8006AF74(s32 arg0, s32 arg1) {
    *(M2CCopy_30 *)(arg0) = *(const M2CCopy_30 *)(arg1);
    return (u8 *)arg0;
}

typedef char RecoveredGlobal_8006B324_lbl_805137F8_size[sizeof(RecoveredGlobal_8006B324_lbl_805137F8) == 0x24 ? 1 : -1];
M2C_UNK *TCameraCtrl__sub_8006B324(void) {
    return &lbl_805137F8.value;
}

int get_instance__11TCameraCtrlFv(void) {  return lbl_805D34B8; }

    extern int lbl_805D4E04;
int get_camera_id__11TCameraCtrlFv(void) {  return lbl_805D4E04; }

    extern short TCameraCtrl__data_805D2838;
    extern short TCameraCtrl__data_805D283A;
void set_target__11TCameraCtrlFii(int a0, int a1) { TCameraCtrl__data_805D2838 = a0; TCameraCtrl__data_805D283A = a1; }

    extern short TCameraCtrl__data_805D4DFA;
    extern short TCameraCtrl__data_805D4DFC;
void set_target_coords__11TCameraCtrlFii(int a0, int a1) { TCameraCtrl__data_805D4DFA = a0; TCameraCtrl__data_805D4DFC = a1; }

u16 TCameraCtrl__sub_8006B358(void* p) { return *(u16*)((char*)p + 0x20); }
s32 get_mode__11TCameraCtrlFPv(void* p) { return *(s32*)((char*)p + 0x1c); }

    extern int lbl_805D5ED8;
int TCameraCtrl__sub_8006B368(void) {  return lbl_805D5ED8; }

int TCameraCtrl__sub_8006B370(void) { return 0; }

int reset_battle_camera__11TCameraCtrlFPv(void* p) { return TCameraCtrl__sub_8006CCEC(p); }
int TCameraCtrl__sub_8006B3B8(void* p) { return TCameraCtrl__sub_8006CD78(p); }

}
