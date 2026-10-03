#include <stddef.h>
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_802A3138 {
    f32 sp8;
    f32 spC;
    M2C_UNK sp10;
    f32 sp14;
};

struct RecoveredFields_802A3138_arg0 {
    u8 unknown_0[0x20];
    s32 field_20;
    u8 unknown_24[0x18];
    f32 field_3C;
    f32 field_40;
    f32 field_44;
};

extern "C" {
s32 copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
s32 draw_ui_sprite_shaded(f32, f32, f32, void *, void *, void *);
extern const f32 lbl_805DDF18;
extern const f32 lbl_805DDF1C;
void draw_class_illustration__17TChCrTagPlGraphicFPv(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
typedef char RecoveredFields_802A3138_arg0_20_offset[offsetof(RecoveredFields_802A3138_arg0, field_20) == 0x20 ? 1 : -1];
typedef char RecoveredFields_802A3138_arg0_3C_offset[offsetof(RecoveredFields_802A3138_arg0, field_3C) == 0x3C ? 1 : -1];
typedef char RecoveredFields_802A3138_arg0_40_offset[offsetof(RecoveredFields_802A3138_arg0, field_40) == 0x40 ? 1 : -1];
typedef char RecoveredFields_802A3138_arg0_44_offset[offsetof(RecoveredFields_802A3138_arg0, field_44) == 0x44 ? 1 : -1];
void draw_class_illustration__17TChCrTagPlGraphicFPv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_802A3138, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802A3138, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_802A3138, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_802A3138, sp14) == 0xC) ? 1 : -1];
    Stack_802A3138 stack;
    f32 temp_f0;
    f32 temp_f31;
    s32 temp_r31;
    if (!(((RecoveredFields_802A3138_arg0 *)arg0)->field_3C <= lbl_805DDF18)) {
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (&stack.sp10), (void *) (arg0 + 0x48));
        temp_f0 = ((RecoveredFields_802A3138_arg0 *)arg0)->field_44;
        stack.spC = temp_f0;
        stack.sp8 = temp_f0;
        temp_f31 = ((RecoveredFields_802A3138_arg0 *)arg0)->field_3C;
        temp_r31 = (((RecoveredFields_802A3138_arg0 *)arg0)->field_20 * 2) + 0x66;
        draw_ui_sprite_shaded((f32) (((RecoveredFields_802A3138_arg0 *)arg0)->field_40), (f32) (temp_f31), (f32) (temp_f31), (void *) (temp_r31), (void *) (&stack.sp10), (void *) (&stack.sp8));
        stack.sp14 += lbl_805DDF1C * ((RecoveredFields_802A3138_arg0 *)arg0)->field_44;
        draw_ui_sprite_shaded((f32) (((RecoveredFields_802A3138_arg0 *)arg0)->field_40), (f32) (temp_f31), (f32) (temp_f31), (void *) (temp_r31 + 1), (void *) (&stack.sp10), (void *) (&stack.sp8));
    }
}
#pragma pop

}
