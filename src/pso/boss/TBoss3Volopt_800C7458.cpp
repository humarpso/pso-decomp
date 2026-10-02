#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_800C7698_lbl_8058D490 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

#include <stddef.h>
struct Stack_800C762C {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_800C762C_lbl_8043BCA0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
f32 TOHangerMachine01__sub_803D9C00(void *);
extern RecoveredGlobal_800C7698_lbl_8058D490 lbl_8058D490;
void TBoss3Volopt__sub_800C7698(u8 *arg0);
s32 TCameraCtrl__sub_803D8934(int, void *, void *);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_800C762C_lbl_8043BCA0 lbl_8043BCA0;
extern s32 lbl_805D5678;
void TBoss3Volopt__sub_800C762C(M2C_UNK arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TObjVoloptCage__sub_800C76F0(void);
s32 query_field_30__12TBoss3VoloptFPvPv(void *arg0, s32 *arg1);
M2C_UNK collect_active_nodes__12TBoss3VoloptFPv();

extern s32 *lbl_805D5190;
extern s32 lbl_805D5194;

s32 query_field_30__12TBoss3VoloptFPvPv(void *arg0, s32 *arg1) {
    s32 temp_r31;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg1 == NULL) {
        return 0;
    }
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    lbl_805D5190 = arg1;
    lbl_805D5194 = 0;
    collect_active_nodes__12TBoss3VoloptFPv();
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r31;
    *lbl_805D5190 = 0;
    return lbl_805D5194;
}

typedef char RecoveredGlobal_800C7698_lbl_8058D490_size[sizeof(RecoveredGlobal_800C7698_lbl_8058D490) == 0x30 ? 1 : -1];

typedef char RecoveredGlobal_800C762C_lbl_8043BCA0_size[sizeof(RecoveredGlobal_800C762C_lbl_8043BCA0) == 0xC ? 1 : -1];
void TBoss3Volopt__sub_800C762C(M2C_UNK arg0, s32 arg1, s32 arg2) {
    typedef char sp8_offset[(offsetof(Stack_800C762C, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800C762C, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800C762C, sp10) == 0x8) ? 1 : -1];
    Stack_800C762C stack;
    stack.sp8 = M2C_FIELD(&lbl_8043BCA0.value, s32 *, 0);
    stack.spC = M2C_FIELD(&lbl_8043BCA0.value, s32 *, 4);
    stack.sp10 = M2C_FIELD(&lbl_8043BCA0.value, s32 *, 8);
    push_matrix_from((void *) (lbl_805D5678 + (arg1 * 0x30)));
    TCameraCtrl__sub_803D8934((int) (0), (void *) (&stack.sp8), (void *) (arg2));
    pop_matrix();
}

void TBoss3Volopt__sub_800C7698(u8 *arg0) {
    push_matrix_from((void *) (&lbl_8058D490.value));
    TOHangerMachine01__sub_803D9C00((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    render_anim_model__10TObjPlayerFPvf((void *) (arg0), (f32) (M2C_FIELD(arg0, f32 *, 0xC0)));
    pop_matrix();
}

void TObjVoloptCage__sub_800C76F0(void) {  }

}
