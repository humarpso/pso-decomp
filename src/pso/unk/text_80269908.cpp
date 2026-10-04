#include "types.h"

#pragma fp_contract on
extern "C" {

s32 get_shared_text_buffer(void);
u32 calc_text_width(const char *);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void text_builder_append(const char *);
void text_builder_reset(void);
s32 append_message_window_line(void *, s32, u32, s32);
extern char lbl_805DD22C[4];
extern const f32 lbl_805DD230;
extern const f32 lbl_805DD234;

s32 TWindowOptionCtrl__sub_80269908(u8 *arg0, const char *arg1, const char *arg2, u32 arg3) {
    const char *sep;
    f32 x;
    s32 r;
    u8 *e;

    sep = " : ";
    text_builder_reset();
    text_builder_append(arg1);
    text_builder_append(sep);
    text_builder_append(arg2);
    e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, *(s32 *)(arg0 + 0x88));
    r = append_message_window_line(arg0, get_shared_text_buffer(), arg3 | 2, -1);
    if (r != 0) {
        x = lbl_805DD230 * (*(f32 *)(arg0 + 0x38) - lbl_805DD234);
        x -= (f32)calc_text_width(arg1);
        x -= lbl_805DD230 * (f32)calc_text_width(sep);
        *(f32 *)(e + 8) = x;
    }
    return r;
}

}
