#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void open__17TWindowOptionCtrlFPv(void *arg0);
void *get_selected_entry__17TWindowSubComCardFPv(void *);

extern const f32 lbl_805DD154;
extern const f32 lbl_805DD158;

void open__17TWindowOptionCtrlFPv(void *arg0) {
    u16 temp_r4;
    void *temp_r3;
    f32 temp_f1;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x70);
    if (!(temp_r4 & 0x20)) {
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (temp_r4 | 0x20);
        temp_r3 = get_selected_entry__17TWindowSubComCardFPv(arg0);
        temp_f1 = lbl_805DD154;
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (temp_f1 + M2C_FIELD(temp_r3, f32 *, 0x14));
        if (M2C_FIELD(arg0, s32 *, 0x2C) & 0x40) {
            M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DD158);
        }
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

}
