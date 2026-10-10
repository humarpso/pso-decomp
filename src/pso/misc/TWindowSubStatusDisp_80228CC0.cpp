#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
extern char *text_builder_write_cursor;
extern char text_builder_buffer[];
void append_comma__20TWindowSubStatusDispFv(void);
extern char *text_builder_write_cursor;
extern char text_builder_buffer[];
void append_text_space(void);
extern char *text_builder_write_cursor;
void append_padded_number(s32 v, u8 n);
void append_padded_number(s32 v, u8 n);
M2C_UNK text_builder_append(void *);
extern M2C_UNK lbl_8044CB60[];
extern M2C_UNK lbl_805DC790;
extern M2C_UNK lbl_805DC794;
void append_play_time__20TWindowSubStatusDispFUi(u32 arg0);
}

extern "C" {

void append_play_time__20TWindowSubStatusDispFUi(u32 arg0) {
    u32 h = arg0 / 3600U;
    u32 rem = arg0 % 3600U;
    if (h > 99U) {
        text_builder_append(lbl_8044CB60);
        return;
    }
    append_padded_number(h, 2);
    text_builder_append(&lbl_805DC790);
    u32 m = rem / 60U;
    rem = rem % 60U;
    append_padded_number(m, 2);
    text_builder_append(&lbl_805DC794);
    append_padded_number(rem, 2);
}

void append_comma__20TWindowSubStatusDispFv(void) {
    if (text_builder_write_cursor != text_builder_buffer) {
        *text_builder_write_cursor++ = 0x2c;
        *text_builder_write_cursor = 0;
    }
}
void append_text_space(void) {
    if (text_builder_write_cursor != text_builder_buffer) {
        *text_builder_write_cursor++ = 0x20;
        *text_builder_write_cursor = 0;
    }
}
void append_padded_number(s32 v, u8 n) {
    char buf[16];
    u32 i;
    if (v == 0) {
        for (i = 0; i < n; i++) {
            *text_builder_write_cursor++ = '0';
        }
        *text_builder_write_cursor = 0;
        return;
    }
    if (v < 0) {
        v *= -1;
        *text_builder_write_cursor++ = '-';
    }
    for (i = 0; i < n; i++) {
        buf[i] = v % 10;
        v /= 10;
    }
    for (i = 0; i < n; i++) {
        *text_builder_write_cursor++ = buf[n - i - 1] + '0';
    }
    *text_builder_write_cursor = 0;
}

}
