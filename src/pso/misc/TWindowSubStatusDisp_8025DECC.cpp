#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8025E6DC {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

extern "C" {
s32 end_render_forward__20TWindowSubStatusDispFPv();
s32 reset_gauge__20TWindowSubStatusDispFPv(int);
s32 fn_8025DE10(void *, void *);
s32 TWindowSubStatusDisp__sub_8025DECC(void *, void *, void *);
s32 TWindowSubStatusDisp__sub_8025E148(void *, void *, void *, int, int);
s32 TWindowSubStatusDisp__sub_8025E350(void *, void *, void *);
s32 TWindowSubStatusDisp__sub_8025E530(void *, void *, void *, int, int, int);
void TWindowSubStatusDisp__sub_8025E6DC(u8 *arg0, u8 *arg1);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void TWindowSubStatusDisp__sub_8025E6DC(u8 *arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_8025E6DC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8025E6DC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8025E6DC, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8025E6DC, sp14) == 0xC) ? 1 : -1];
    Stack_8025E6DC stack;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_r31;
    u16 temp_r3;
    u16 temp_r3_2;
    var_r31 = 1;
    if (!(M2C_FIELD(arg0, u16 *, 0x62) & 2) || ((s32) M2C_FIELD(arg1, s32 *, 0x30) >= 0)) {
        stack.sp10 = M2C_FIELD(arg1, f32 *, 0x10);
        stack.sp14 = M2C_FIELD(arg1, f32 *, 0x14);
        TWindowSubStatusDisp__sub_8025E530((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10), (int) (M2C_FIELD(arg0, s32 *, 0x6C)), (int) (M2C_FIELD(arg0, s32 *, 0x70)), (int) (0));
        temp_r3 = M2C_FIELD(arg0, u16 *, 0x60);
        if (temp_r3 & 2) {
            if (temp_r3 & 4) {
                TWindowSubStatusDisp__sub_8025DECC((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10));
                var_r31 = 0;
            } else {
                TWindowSubStatusDisp__sub_8025E148((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10), (int) (M2C_FIELD(arg0, s32 *, 0x84)), (int) (M2C_FIELD(arg0, s32 *, 0x94)));
            }
        }
        reset_gauge__20TWindowSubStatusDispFPv((int) (0));
        stack.sp10 = M2C_FIELD(arg1, f32 *, 0x10);
        stack.sp14 = M2C_FIELD(arg1, f32 *, 0x14);
        TWindowSubStatusDisp__sub_8025E530((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10), (int) (M2C_FIELD(arg0, s32 *, 0x6C)), (int) (M2C_FIELD(arg0, s32 *, 0x70)), (int) (1));
        temp_r3_2 = M2C_FIELD(arg0, u16 *, 0x60);
        if (temp_r3_2 & 2) {
            if (temp_r3_2 & 4) {
                TWindowSubStatusDisp__sub_8025E350((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10));
            } else {
                TWindowSubStatusDisp__sub_8025E530((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10), (int) (M2C_FIELD(arg0, s32 *, 0x84)), (int) (M2C_FIELD(arg0, s32 *, 0x88)), (int) (1));
                stack.sp8 = stack.sp10;
                stack.spC = stack.sp14;
                temp_r3_3 = M2C_FIELD(arg0, s32 *, 0x88);
                temp_r7 = M2C_FIELD(arg0, s32 *, 0x94) - temp_r3_3;
                if (temp_r7 != 0) {
                    TWindowSubStatusDisp__sub_8025E530((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10), (int) (M2C_FIELD(arg0, s32 *, 0x84) + (temp_r3_3 * 2)), (int) (temp_r7), (int) (1));
                }
            }
        } else {
            stack.sp8 = stack.sp10;
            stack.spC = stack.sp14;
        }
        temp_r3_4 = M2C_FIELD(arg0, s32 *, 0x70);
        temp_r7_2 = M2C_FIELD(arg0, s32 *, 0x7C) - temp_r3_4;
        if (temp_r7_2 != 0) {
            TWindowSubStatusDisp__sub_8025E530((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10), (int) (M2C_FIELD(arg0, s32 *, 0x6C) + (temp_r3_4 * 2)), (int) (temp_r7_2), (int) (1));
        }
        end_render_forward__20TWindowSubStatusDispFPv();
        if ((var_r31 != 0) && !(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
            fn_8025DE10((void *) (arg1), (void *) (&stack.sp8));
        }
    }
}
#pragma pop

}
