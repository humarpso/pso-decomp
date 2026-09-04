#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_transition_flag__17TWindowSubComCardFPv(void *arg0);
void set_scroll_target__17TWindowSubComCardFPvff(void *arg0, f32 farg0, f32 farg1);
void set_selected_index__17TWindowSubComCardFPvs(void *arg0, s16 arg1);
M2C_UNK TWindowSubComCard__sub_80265484(void *);
M2C_UNK TWindowSubComCard__sub_8026556C(void *);
M2C_UNK TWindowSubComCard__sub_80265E60();
M2C_UNK save_position__17TWindowSubComCardFPv(void *);

void set_selected_index__17TWindowSubComCardFPvs(void *arg0, s16 arg1) {
    if ((arg1 >= 0) && (arg1 < (s16) M2C_FIELD(arg0, s16 *, 0x76))) {
        M2C_FIELD(arg0, s16 *, 0x78) = arg1;
    }
}

extern const f32 lbl_805DD154;

void set_scroll_target__17TWindowSubComCardFPvff(void *arg0, f32 farg0, f32 farg1) {
    TWindowSubComCard__sub_80265E60();
    if (M2C_FIELD(arg0, f32 *, 0x3C) > farg1) {
        TWindowSubComCard__sub_8026556C(arg0);
    }
    M2C_FIELD(arg0, f32 *, 0x3C) = farg1;
    M2C_FIELD(arg0, f32 *, 0x7C) = (f32) (farg1 - lbl_805DD154);
    save_position__17TWindowSubComCardFPv(arg0);
    TWindowSubComCard__sub_80265484(arg0);
}

extern const f32 lbl_805DD154;

void clear_transition_flag__17TWindowSubComCardFPv(void *arg0) {
    u16 temp_r4;

    temp_r4 = M2C_FIELD(arg0, u16 *, 0x70);
    if (temp_r4 & 0x20) {
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (temp_r4 & 0xFFFFFFDF);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (lbl_805DD154 + M2C_FIELD(arg0, f32 *, 0x7C));
        M2C_FIELD(arg0, s32 *, 0x50) = 3;
    }
}

}
