#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80266EB8 {
    f32 sp8;
    f32 spC;
};

extern "C" {
M2C_UNK clamp_list_scroll_offset(int, void *, void *);
extern const f32 lbl_805DD188;
extern const f32 lbl_805DD18C;
extern const f32 lbl_805DD190;
void TWindowSubStatusDisp__sub_80266EB8(u8 *arg0);
}

extern "C" {

void select_cursor_entry__6TLobbyFPv(void *arg0);
M2C_UNK get_cursor_pos__14TWindowSubItemFPv();
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void select_cursor_entry__6TLobbyFPv(void *arg0) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    get_cursor_pos__14TWindowSubItemFPv();
}
void TWindowSubStatusDisp__sub_80266EB8(u8 *arg0) {
    Stack_80266EB8 stack;
    f32 temp_f1;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x84) != 0U) {
        stack.sp8 = lbl_805DD188;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x4C) - lbl_805DD18C;
        stack.spC = temp_f1;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x80) != 0U) {
            stack.spC = temp_f1 - lbl_805DD190;
        }
        clamp_list_scroll_offset((int) (M2C_FIELD(arg0, u32 *, 0x84)), (void *) (arg0 + 0x68), (void *) (&stack.sp8));
    }
}

}
