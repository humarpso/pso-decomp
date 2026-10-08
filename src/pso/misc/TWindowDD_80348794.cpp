#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK append_string__9TWindowDDFiiPv(s32, s32, void *);
M2C_UNK TWindowDD__sub_80348B70();
void TWindowDD__sub_8034886C(s32 arg0, s32 arg1, void *arg2);
s32 can_append_chars__9TWindowDDFiPv(int, void *);
void append_char__9TWindowDDFciPv(s8 arg0, s32 arg1, s32 *arg2);
s32 count_chars_since_newline__9TWindowDDFPvPv(u8 *buf, s32 *len);
}

extern "C" {

void maybe_scroll__9TWindowDDFPvPv(void* p, void* a1);

void maybe_scroll__9TWindowDDFPvPv(void* p, void* a1) { if (count_chars_since_newline__9TWindowDDFPvPv((u8 *)(p), (s32 *)(a1)) > 15) { append_char__9TWindowDDFciPv((s8)((void*)10), (s32)(p), (s32 *)(a1)); } }

s32 count_chars_since_newline__9TWindowDDFPvPv(u8 *buf, s32 *len) {
    s32 n = 0;
    s32 i;
    for (i = *len - 1; i >= 0; i--) {
        if (buf[i] == '\n') {
            break;
        }
        n++;
    }
    return n;
}

void append_char__9TWindowDDFciPv(s8 arg0, s32 arg1, s32 *arg2) {
    s32 temp_r3;
    if (can_append_chars__9TWindowDDFiPv((int) (1), (void *) (arg2)) != 0) {
        temp_r3 = M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(arg2, s32 *, 0) = temp_r3 + 1;
        M2C_FIELD((arg1 + temp_r3), s8 *, 0) = arg0;
    }
}

void TWindowDD__sub_8034886C(s32 arg0, s32 arg1, void *arg2) {
    append_string__9TWindowDDFiiPv(TWindowDD__sub_80348B70(), arg1, arg2);
}

}
