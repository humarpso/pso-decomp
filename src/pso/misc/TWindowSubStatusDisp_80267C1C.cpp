#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80267D14 {
    f32 sp8;
    f32 spC;
};

extern "C" {
M2C_UNK clamp_list_scroll_offset(int, void *, void *);
extern const f32 lbl_805DD188;
extern f32 lbl_805DD18C;
extern f32 lbl_805DD190;
void TWindowSubStatusDisp__sub_80267D14(u8 *arg0);
}

extern "C" {

void draw_selected_list_entry(void *arg0, s32 arg1);
void init_scroll_pos__20TWindowSubStatusDispFPv(void *arg0);
M2C_UNK draw_selection_bar(s32, u16 *, s32);
u16 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
s32 get_status_flag__6TLobbyFPv(void *);

extern f32 lbl_805DD18C;
extern f32 lbl_805DD190;

void init_scroll_pos__20TWindowSubStatusDispFPv(void *arg0) {
    u16 temp_r4;
    void *temp;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x70);
    if (!(temp_r4 & 0x20)) {
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (temp_r4 | 0x20);
        temp = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s16)(M2C_FIELD(arg0, s16 *, 0x74)));
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DD18C + M2C_FIELD(temp, f32 *, 0x14));
        if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x40) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DD190);
        }
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

void TWindowSubStatusDisp__sub_80267D14(u8 *arg0) {
    Stack_80267D14 stack;
    f32 temp_f1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        stack.sp8 = lbl_805DD188;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C) - (*(const f32 *)&lbl_805DD18C);
        stack.spC = temp_f1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            stack.spC = temp_f1 - (*(const f32 *)&lbl_805DD190);
        }
        clamp_list_scroll_offset((int) (M2C_FIELD(arg0, u32 *, 0x84)), (void *) (arg0 + 0x68), (void *) (&stack.sp8));
    }
}

void draw_selected_list_entry(void *arg0, s32 arg1) {
    u16 *temp_r3;

    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x80)) {
        temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s16)(M2C_FIELD(arg0, s16 *, 0x74)));
        if (*temp_r3 & 1) {
            draw_selection_bar(arg1, temp_r3, get_status_flag__6TLobbyFPv(arg0));
        }
    }
}

}
