#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void draw_selected_list_entry(void *arg0, s32 arg1);
void init_scroll_pos__20TWindowSubStatusDispFPv(void *arg0);
M2C_UNK TWindowSubComCard__sub_8024503C(s32, u16 *, s32);
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

void draw_selected_list_entry(void *arg0, s32 arg1) {
    u16 *temp_r3;

    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x80)) {
        temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s16)(M2C_FIELD(arg0, s16 *, 0x74)));
        if (*temp_r3 & 1) {
            TWindowSubComCard__sub_8024503C(arg1, temp_r3, get_status_flag__6TLobbyFPv(arg0));
        }
    }
}

}
