#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_8025B660 {
    f32 sp8;
    f32 spC;
};

extern "C" {
s32 TWindowSubStatusDisp__sub_8024FD8C(void *, void *, s32, s32, f32);
void TWindowSubStatusDisp__sub_802500F4(s32, s32, s32, f32, f32);
int is_flag_4_set__17TWindowSubComCardFPv(void *);
extern const f32 lbl_805DD014;
extern const f32 lbl_805DD018;
extern const f32 lbl_805DD01C;
extern const f32 lbl_805DD020;
extern M2C_UNK lbl_805DD024;
extern const f32 lbl_805DD028;
void TWindowSubStatusDisp__sub_8025B660(u8 *arg0, u8 *arg1);
}

extern "C" {

void set_text__20TWindowSubStatusDispFPvUii(void *arg0, u32 arg1, s32 arg2);
u32 TWindowSubStatusDisp__sub_80144D68(u32);
s32 measure_string_len__20TWindowSubStatusDispFPv(u32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK strncpy(s32, u32, s32);

extern const f64 lbl_8044F068[];
extern const f32 lbl_805DD00C;
extern const f32 lbl_805DD010;

void set_text__20TWindowSubStatusDispFPvUii(void *arg0, u32 arg1, s32 arg2) {
    s32 temp_r3;
    f64 tmp;

    free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x1C));
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    if (arg1 != 0U) {
        temp_r3 = measure_string_len__20TWindowSubStatusDispFPv(arg1);
        M2C_FIELD(arg0, s32 *, 0x1C) = alloc_buffer__11TOBoss4RockFPv(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x1C), arg1, temp_r3 + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x18) = arg2;
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x15);
    M2C_FIELD(arg0, f32 *, 8) = lbl_805DD00C - (lbl_805DD010 * (f32) TWindowSubStatusDisp__sub_80144D68(arg1));
}
void TWindowSubStatusDisp__sub_8025B660(u8 *arg0, u8 *arg1) {
    Stack_8025B660 stack;
    if ((is_flag_4_set__17TWindowSubComCardFPv(arg0) != 0) && ((s32) M2C_FIELD(arg1, s32 *, 0x30) >= 0)) {
        stack.sp8 = M2C_FIELD(arg1, f32 *, 0x10) + M2C_FIELD(arg0, f32 *, 8);
        stack.spC = M2C_FIELD(arg1, f32 *, 0x14) + M2C_FIELD(arg0, f32 *, 0xC);
        TWindowSubStatusDisp__sub_802500F4((s32) arg1, 1, 1, lbl_805DD014 / (lbl_805DD018 + M2C_FIELD(arg1, f32 *, 0x38)), lbl_805DD01C);
        TWindowSubStatusDisp__sub_8024FD8C(&stack.sp8, M2C_FIELD(arg0, u8 **, 0x1C), M2C_FIELD(arg0, s32 *, 0x24), 1, lbl_805DD01C);
        if (!(M2C_FIELD(arg0, u16 *, 0) & 0x10)) {
            stack.sp8 += lbl_805DD020;
            TWindowSubStatusDisp__sub_8024FD8C(&stack.sp8, &lbl_805DD024, M2C_FIELD(arg0, s32 *, 0x24), 0, lbl_805DD01C);
        }
        stack.sp8 += lbl_805DD028;
        TWindowSubStatusDisp__sub_8024FD8C(&stack.sp8, M2C_FIELD(arg0, u8 **, 0x20), M2C_FIELD(arg0, s32 *, 0x24), 1, lbl_805DD01C);
    }
}

}
