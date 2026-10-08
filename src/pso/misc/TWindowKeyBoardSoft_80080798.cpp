#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct F_80080798 { u16 *buffer; u32 cursor; };
struct F_80080F68 { u16 *buffer; u32 cursor; };
struct Field_80080D1C { u16 *buffer; s32 cursor; u32 width; u32 linePixels; s32 scroll; u32 capacity; };

struct Field_80080C64 { u16 *buffer; u32 cursor; u32 width; u32 linePixels; s32 length; };

struct Field_80080ABC { u16 *buffer; u32 cursor; };

struct Field_80080CC0 { u16 *buffer; u32 cursor; u32 width; u32 linePixels; s32 length; };

struct Field_800809C0 { u16 *buffer; u32 cursor; };

struct Kb_800808FC {
    u16 *buffer;
    s32 cursor;
};

struct Field_80080D1C;
struct F_80080DFC { u16 *buffer; s32 cursor; u32 width; u32 linePixels; s32 scroll; u32 capacity; };

struct Kb_8008081C {
    u16 *buf;
    s32 cursor;
    u8 pad8[8];
    s32 len;
};

struct F_80080A08 { u16 *buffer; u32 cursor; };

struct F_80080B34 { u16 *buffer; u32 cursor; };

extern "C" {
u16 map_char_to_font_code(u16);
u8 get_font_char_advance(u16);
s32 measure_char_overflow__19TWindowKeyBoardSoftFPvUsPvPvPv(Field_80080D1C *f, u16 code, u32 *x, u32 *y, u32 *count);
void TWindowKeyBoardSoft__sub_80080C64(Field_80080C64 *f, s32 pos, s32 n);
extern u16 lbl_8048E020[];
s32 TWindowKeyBoardSoft__sub_80080ABC(Field_80080ABC *f);
void TWindowKeyBoardSoft__sub_80080CC0(Field_80080CC0 *f);
s32 TWindowKeyBoardSoft__sub_800809C0(Field_800809C0 *f);
s32 TWindowKeyBoardSoft__sub_80080ABC(Field_80080ABC *f);
void TWindowKeyBoardSoft__sub_80080CC0(Field_80080CC0 *f);
s32 TWindowKeyBoardSoft__sub_80080F68(F_80080F68 *arg0, u16 arg1);
void TWindowKeyBoardSoft__sub_800808FC(Kb_800808FC *kb, u16 ch);
s32 measure_char_overflow__19TWindowKeyBoardSoftFPvUsPvPvPv(Field_80080D1C *f, u16 code, u32 *x, u32 *y, u32 *count);
s32 check_text_overflow__19TWindowKeyBoardSoftFPvPv(F_80080DFC *arg0, u16 *arg1);
extern s32 lbl_805D5544;
void TWindowKeyBoardSoft__sub_8008081C(Kb_8008081C *kb, char *s);
extern u16 keyboard_soft_small_kana_sjis[];
s32 TWindowKeyBoardSoft__sub_80080A08(F_80080A08 *arg0);
extern u16 TWindowKeyBoardSoft__hiragana_sjis_table[];
s32 TWindowKeyBoardSoft__sub_80080B34(F_80080B34 *arg0);
}

extern "C" {

void append_text__19TWindowKeyBoardSoftFPvPv(F_80080798 *arg0, u8 *arg1);
s32 TWindowKeyBoardSoft__sub_80080F68(F_80080F68 *arg0, u16 arg1);
void delete_char__19TWindowKeyBoardSoftFPv(u8 *arg0);
void delete_chars__19TWindowKeyBoardSoftFPvii(u8 *arg0, s32 arg1, s32 arg2);
void reset_state__19TWindowKeyBoardSoftFPv(void *arg0);
void clear_flag4_bit4__22TQuestVmDownLoadServerFPv(void* p);

void append_text__19TWindowKeyBoardSoftFPvPv(F_80080798 *arg0, u8 *arg1) {
    u8 c;

    if (arg1 == NULL) {
        return;
    }
    while ((s8)*arg1 != 0) {
        c = *arg1++;
        if (TWindowKeyBoardSoft__sub_80080F68((F_80080F68 *)arg0, (s32)c) != 0) {
            break;
        }
        TWindowKeyBoardSoft__sub_80080CC0((Field_80080CC0 *)arg0);
        arg0->buffer[arg0->cursor] = c;
        arg0->cursor++;
    }
}

void TWindowKeyBoardSoft__sub_8008081C(Kb_8008081C *kb, char *s) {
    u16 *dst;
    s32 jp;
    s32 c;
    dst = kb->buf;
    kb->len = 0;
    kb->cursor = kb->len;
    if (s == NULL) {
        return;
    }
    jp = lbl_805D5544 == 0 ? 1 : 0;
    if (*s == 9) {
        s += 2;
        switch (s[-1]) {
        case 'J':
            if (jp == 0) {
                return;
            }
            break;
        case 'E':
            if (jp == 1) {
                return;
            }
            break;
        }
    }
    while (*s != 0) {
        c = *(u8 *)s++;
        if (jp != 0) {
            if ((c & 0xE0) == 0x80 || (c & 0xE0) == 0xE0) {
                c = ((u8)c << 8) | *(u8 *)s++;
            }
        }
        *dst++ = c;
        kb->len++;
    }
    *dst = 0;
    kb->cursor = kb->len;
}

void TWindowKeyBoardSoft__sub_800808FC(Kb_800808FC *kb, u16 ch) {
    switch (ch) {
    case 0x814A:
        if (TWindowKeyBoardSoft__sub_80080B34((F_80080B34 *)(kb)) != 0) {
            return;
        }
        break;
    case 0x814B:
        if (TWindowKeyBoardSoft__sub_80080ABC((Field_80080ABC *)kb) != 0) {
            return;
        }
        break;
    case 0xFF20:
        TWindowKeyBoardSoft__sub_80080A08((F_80080A08 *)(kb));
        return;
    }
    if (TWindowKeyBoardSoft__sub_80080F68((F_80080F68 *)kb, ch) == 0) {
        TWindowKeyBoardSoft__sub_80080CC0((Field_80080CC0 *)kb);
        kb->buffer[kb->cursor] = ch;
        kb->cursor++;
    }
}

s32 TWindowKeyBoardSoft__sub_800809C0(Field_800809C0 *f) {
    u16 *p;
    if (f->buffer == NULL) {
        return 1;
    }
    p = f->buffer;
    while ((s32)*p != 0) {
        if ((s32)*p++ != 0x20) {
            return 0;
        }
    }
    return 1;
}

s32 TWindowKeyBoardSoft__sub_80080A08(F_80080A08 *arg0) {
    u16 *p;
    u16 c;
    s32 i;
    if (arg0->cursor == 0) {
        return 0;
    }
    p = arg0->buffer + arg0->cursor;
    c = p[-1];
    if (c >= 0x8340) {
        c -= 0xA1;
    }
    for (i = 0; i < 10; i++) {
        if (c == keyboard_soft_small_kana_sjis[i]) {
            p[-1]--;
            return 1;
        }
    }
    if (c == 0x82A9) {
        p[-1] = 0x8395;
        return 1;
    }
    if (c == 0x82AF) {
        p[-1] = 0x8396;
        return 1;
    }
    return 0;
}

s32 TWindowKeyBoardSoft__sub_80080ABC(Field_80080ABC *f) {
    u16 *last;
    u16 c;
    s32 i;
    if (f->cursor == 0) {
        return 0;
    }
    last = &f->buffer[f->cursor];
    c = last[-1];
    if (c >= 0x8340) {
        c -= 0xA1;
    }
    for (i = 0; i < 5; i++) {
        if (c == lbl_8048E020[i]) {
            last[-1] += 2;
            return 1;
        }
    }
    return 0;
}

s32 TWindowKeyBoardSoft__sub_80080B34(F_80080B34 *arg0) {
    u16 *p;
    u16 c;
    s32 i;
    if (arg0->cursor == 0) {
        return 0;
    }
    p = arg0->buffer + arg0->cursor;
    c = p[-1];
    if (c >= 0x8340) {
        c -= 0xA1;
    }
    for (i = 0; i < 20; i++) {
        if (c == TWindowKeyBoardSoft__hiragana_sjis_table[i]) {
            p[-1]++;
            return 1;
        }
    }
    if (c == 0x82A4) {
        p[-1] = 0x8394;
        return 1;
    }
    return 0;
}

void delete_chars__19TWindowKeyBoardSoftFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    u16 *var_r4;
    u16 *var_r6;
    u16 temp_r0;

    var_r6 = (unsigned short *) (M2C_FIELD(arg0, s32 *, 0) + (arg1 * 2));
    if ((s32) *var_r6 != 0) {
        var_r4 = var_r6 + arg2;
        do {
            *var_r6 = *var_r4;
            var_r6 += 1;
            temp_r0 = *var_r4;
            var_r4 += 1;
        } while ((s32) temp_r0 != 0);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - arg2);
    }
}

void delete_char__19TWindowKeyBoardSoftFPv(u8 *arg0) {
    u16 *var_r4;
    u16 *var_r5;
    u16 temp_r0;

    var_r5 = (unsigned short *) (M2C_FIELD(arg0, s32 *, 0) + (M2C_FIELD(arg0, s32 *, 4) * 2));
    if ((s32) *var_r5 != 0) {
        var_r4 = var_r5 + 1;
        do {
            *var_r5 = *var_r4;
            var_r5 += 1;
            temp_r0 = *var_r4;
            var_r4 += 1;
        } while ((s32) temp_r0 != 0);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(arg0, s32 *, 0x10) - 1);
    }
}

void TWindowKeyBoardSoft__sub_80080C64(Field_80080C64 *f, s32 pos, s32 n) {
    u32 len;
    u16 *p;
    u16 *q;
    p = &f->buffer[pos];
    len = 0;
    while ((s32)*p != 0) {
        p++;
        len++;
    }
    q = p + n;
    do {
        *q-- = *p--;
    } while (len-- != 0);
    f->length += n;
}

void TWindowKeyBoardSoft__sub_80080CC0(Field_80080CC0 *f) {
    u32 len;
    u16 *p;
    u16 *q;
    p = &f->buffer[f->cursor];
    len = 0;
    while ((s32)*p != 0) {
        p++;
        len++;
    }
    q = p + 1;
    do {
        *q-- = *p--;
    } while (len-- != 0);
    f->length++;
}

s32 measure_char_overflow__19TWindowKeyBoardSoftFPvUsPvPvPv(Field_80080D1C *f, u16 code, u32 *x, u32 *y, u32 *count) {
    u8 w;
    code = map_char_to_font_code(code);
    (*count)++;
    if (code & 0xFF00) {
        (*count)++;
    }
    if (*count > f->capacity) {
        return 1;
    }
    if (f->linePixels == 0) {
        return 0;
    }
    w = get_font_char_advance(code);
    *x += w;
    if (*x <= f->width) {
        return 0;
    }
    *y += 0x14;
    *x = w;
    return (*y >= f->linePixels) ? 1 : 0;
}

s32 check_text_overflow__19TWindowKeyBoardSoftFPvPv(F_80080DFC *arg0, u16 *arg1) {
    u32 x;
    u32 y;
    u32 count;
    u16 *p;
    s32 n;
    s32 c;
    count = 0;
    y = 0;
    x = 0;
    p = arg0->buffer;
    n = arg0->cursor;
    while (n > 0) {
        if (measure_char_overflow__19TWindowKeyBoardSoftFPvUsPvPvPv((Field_80080D1C *)arg0, *p, &x, &y, &count) != 0) {
            *p = 0;
            *arg1 = 0;
            arg0->cursor -= n;
            arg0->scroll -= n;
            return 1;
        }
        p++;
        n--;
    }
    for (p = arg1; (c = *p) != 0; p++) {
        if (measure_char_overflow__19TWindowKeyBoardSoftFPvUsPvPvPv((Field_80080D1C *)arg0, c, &x, &y, &count) != 0) {
            *p = 0;
            arg0->buffer[arg0->cursor] = 0;
            arg0->scroll = arg0->cursor;
            return 1;
        }
    }
    p = &arg0->buffer[arg0->cursor];
    n = arg0->scroll - arg0->cursor;
    while (n > 0) {
        if (measure_char_overflow__19TWindowKeyBoardSoftFPvUsPvPvPv((Field_80080D1C *)arg0, *p, &x, &y, &count) != 0) {
            *p = 0;
            arg0->scroll -= n;
            return 1;
        }
        p++;
        n--;
    }
    return 0;
}

s32 TWindowKeyBoardSoft__sub_80080F68(F_80080F68 *arg0, u16 arg1) {
    u32 n;
    u32 x;
    u32 y;
    u32 count;
    u16 *p;
    u16 c;

    x = y = count = n = 0;
    p = arg0->buffer;
    while ((s32)*p != 0 || n == arg0->cursor) {
        if (n == arg0->cursor) {
            c = arg1;
        } else {
            c = *p++;
        }
        n++;
        if (measure_char_overflow__19TWindowKeyBoardSoftFPvUsPvPvPv((Field_80080D1C *)arg0, c, &x, &y, &count) != 0) {
            return 1;
        }
    }
    return 0;
}

void reset_state__19TWindowKeyBoardSoftFPv(void *arg0) {
    s16 *temp_r3;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    temp_r3 = M2C_FIELD(arg0, s16 **, 0);
    if (temp_r3 != NULL) {
        *temp_r3 = 0;
    }
}

}
