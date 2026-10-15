#include "types.h"
#include <stddef.h>

struct Rec_8025D3CC { u8 a; s8 len; };

struct Desc_8025DECC { f32 *pos; u32 *col; s32 a; s32 b; };

struct KbRec_8025D264 {
    u8 tag;
    s8 len;
    u8 kind;
    char str[1];
};

struct KbSoft_8025D264 {
    u8 pad0[0xa0];
    u8 *buf;
    u8 *cursor;
    s32 kind;
    u8 padac[4];
    s32 remain;
};

extern "C" {
s32 strnlen__19TWindowKeyBoardSoftFPvUi(void *, u32);
s32 strncpy(s32 *, u8 *, s32);
void append_text_entry__19TWindowKeyBoardSoftFPvPv(u8 *arg0, u8 *arg1);
void set_glyph_quad_extents(u8, void *);
s32 map_char_to_font_code(u16);
u8 get_font_char_advance(s32);
void apply_context_transform_to_rect(void *, void *);
s32 draw_tri_fan_2d__14TObjCMHairMenuFPviif(void *, int, int, f32);
extern u32 lbl_804CFA84[];
extern const f32 lbl_805DD048;
extern const f32 lbl_805DD058;
void draw_text_glyphs__20TWindowSubStatusDispFPvPvPv(void *arg0, void *arg1, void *arg2);
s32 measure_string_len__20TWindowSubStatusDispFPv(void *);
s32 strncpy(s32 *, u8 *, s32);
void insert_string__19TWindowKeyBoardSoftFPvPv(KbSoft_8025D264 *self, char *src);
}

extern "C" {

struct KbSoft_8025CFA8 {
    u8 pad0[0xA8];
    s32 sel;
    s32 count;
};

struct KbSoft_8025D47C {
    u8 pad0[0x9c];
    u8 *base;
    u8 *buf;
    u8 *cursor;
    s32 kind;
    u8 padac[4];
    s32 remain;
};

struct KbSoft_8025D7FC {
    u8 pad0[0x60];
    u16 flags;
    u8 pad62[0xa8 - 0x62];
    s32 sel;
    s32 count;
};

struct KbSoft_8025D8C8 {
    u8 pad0[0x60];
    u16 flags;
    u8 pad62[0xa8 - 0x62];
    s32 sel;
    s32 count;
};

struct Stack_8025E6DC {
    f32 sp8;
    f32 spC;
    f32 sp10;
    f32 sp14;
};

struct Box_8025E350 {
    u8 pad0[0x10];
    f32 x;
    f32 y;
    f32 w;
    f32 h;
    u8 pad20[0x38 - 0x20];
    f32 z;
};

struct Quad_8025E350 {
    f32 x;
    f32 y;
    f32 x2;
    f32 y2;
    f32 uv[4];
};

void init_keyboard_text_buffer(void *, u32, u32);
void set_glyph_quad_extents(u8, void *);
s32 map_char_to_font_code(u16);
u8 calc_gauge_scale__20TWindowSubStatusDispFPvPvi(s32, void *, s32);
s32 end_render_forward__20TWindowSubStatusDispFPv();
s32 reset_gauge__20TWindowSubStatusDispFPv(int);
s32 strnlen__19TWindowKeyBoardSoftFPvUi(void *, u32);
void apply_context_transform_to_rect(void *, void *);
void init_keyboard_text_field(u8 *arg0, u32 arg1, u32 arg2);
s32 fn_8025CE00(void *, u8 *);
s32 TWindowKeyBoardSoft__sub_8025CF50(void *, int, int);
void TWindowKeyBoardSoft__sub_8025CFA8(void *, s32 *);
int TWindowKeyBoardSoft__sub_8025D1C8(void*, void*);
void update_input__19TWindowKeyBoardSoftFPvPv(void* p, void* a1);
s32 TWindowKeyBoardSoft__sub_8025D378(void *, void *);
void write_name_and_text__19TWindowKeyBoardSoftFPvPvPv(KbSoft_8025D47C *self, char *name, char *text);
s32 TWindowKeyBoardSoft__sub_8025D544(void *, s32 *, s8 *);
void set_kanji_mode__19TWindowKeyBoardSoftFPv(void *arg0);
void set_kana_mode__19TWindowKeyBoardSoftFPv(void *arg0);
void process_input__19TWindowKeyBoardSoftFPv(u8 *arg0);
void TWindowKeyBoardSoft__sub_8025D7FC(KbSoft_8025D7FC *self);
void TWindowKeyBoardSoft__sub_8025D8C8(KbSoft_8025D8C8 *self);
void select_next__19TWindowKeyBoardSoftFPv(void *arg0);
void update__19TWindowKeyBoardSoftFPv(void *arg0);
void convert_input_text__19TWindowKeyBoardSoftFPv(void *arg0);
s32 TWindowKeyBoardSoft__sub_8025DBDC(void *, s32);
s32 fn_8025DE10(void *, void *);
s32 TWindowSubStatusDisp__sub_8025E148(void *, void *, void *, int, int);
void draw_wrapped_text__20TWindowSubStatusDispFPvPvPv(void *arg0, void *arg1, void *arg2);
s32 TWindowSubStatusDisp__sub_8025E530(void *, void *, void *, int, int, int);
void TWindowSubStatusDisp__sub_8025E6DC(u8 *arg0, u8 *arg1);
s32 strncpy(s32 *, u8 *, s32);
void draw_textured_quad_at_depth(void *, f32);
s32 dispatch_request_0x28__19TWindowKeyBoardSoftFii(void *, s32 *);
s32 dispatch_request_0x27__19TWindowKeyBoardSoftFii(void *, s32 *);
s32 dispatch_request_0x26__19TWindowKeyBoardSoftFii(void *, s32 *);
int strcmp(const char *, const char *);
extern u16 soft_keyboard_conversion_exclusions[];
s32 dispatch_request_0x25__19TWindowKeyBoardSoftFii(void *, s32 *);
s32 dispatch_request_0x23__19TWindowKeyBoardSoftFii(void *, void *);
s32 dispatch_request_0x22__19TWindowKeyBoardSoftFii(void *, void *);
s32 TWindowKeyBoardSoft__sub_803E67D4(void *, void *);
s32 TWindowKeyBoardSoft__sub_803E6868(void *, void *);
s32 dispatch_request_0x14__19TWindowKeyBoardSoftFii(void *, void *);
s32 dispatch_request_0x13__19TWindowKeyBoardSoftFiii(u8 *, s32 *, s8 *);

extern const f32 lbl_805DD038;
extern const f32 lbl_805DD03C;
extern const f32 lbl_805DD040;
extern const f32 lbl_805DD044;
extern const f32 lbl_805DD048;
extern const f32 lbl_805DD05C;
extern const f32 lbl_805DD060;

void init_keyboard_text_field(u8 *arg0, u32 arg1, u32 arg2) {
    if (arg2 == 0) {
        *(f32 *)((s8 *)arg0 + 0x38) = (f32) lbl_805DD038;
        *(f32 *)((s8 *)arg0 + 0x3C) = (f32) lbl_805DD03C;
    } else {
        *(f32 *)((s8 *)arg0 + 0x38) = (f32) (lbl_805DD040 + (lbl_805DD044 + (f32) arg1));
        *(f32 *)((s8 *)arg0 + 0x3C) = (f32) (lbl_805DD048 + (f32) (arg2 * 0x14));
    }
    *(f32 *)((s8 *)arg0 + 0x48) = (f32) *(f32 *)((s8 *)arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x4C) = (f32) *(f32 *)((s8 *)arg0 + 0x3C);
    init_keyboard_text_buffer(arg0 + 0x6C, arg1, arg2);
    *(u8 **)((s8 *)arg0 + 0x68) = (unsigned char *) ((void *) (arg0 + 0x6C));
    *(s16 *)((s8 *)arg0 + 0x60) = 0;
}

#define self ((KbSoft_8025CFA8 *)arg0)
void TWindowKeyBoardSoft__sub_8025CFA8(void *arg0, s32 *arg1) {
#define text ((char *)arg1)
    char out[0x100];
    char tmp[0x100];
    char *p;
    u16 ch;
    s32 c;
    s32 c2;
    u16 *t;

    p = text;
    while (*p != 0) {
        ch = *p++;
        if ((ch & 0xE0) == 0x80 || (ch & 0xE0) == 0xE0) {
            ch <<= 8;
            ch |= *p++ & 0xFF;
        }
        if ((s32)(u16)ch == 0x5C) {
            return;
        }
        if ((u16)ch >= 0xA0 && (u16)ch <= 0xFF) {
            return;
        }
    }
    dispatch_request_0x25__19TWindowKeyBoardSoftFii(out, (s32 *)tmp);
    if (strcmp(text, out) != 0) {
        self->sel++;
        self->count++;
        TWindowKeyBoardSoft__sub_803E6868(out, tmp);
        return;
    }
    dispatch_request_0x26__19TWindowKeyBoardSoftFii(out, (s32 *)tmp);
    if (strcmp(text, out) != 0) {
        self->sel++;
        self->count++;
        TWindowKeyBoardSoft__sub_803E6868(out, tmp);
        return;
    }
    dispatch_request_0x28__19TWindowKeyBoardSoftFii(out, (s32 *)tmp);
    if (strcmp(text, out) != 0) {
        self->sel++;
        self->count++;
        TWindowKeyBoardSoft__sub_803E6868(out, tmp);
        return;
    }
    p = text;
    while (*p != 0) {
        ch = *p++;
        if ((ch & 0xE0) == 0x80 && (ch & 0xE0) == 0x80) {
            ch <<= 8;
            ch |= *p++ & 0xFF;
            for (t = soft_keyboard_conversion_exclusions; *t != 0; t++) {
                if ((u16)ch == *t) {
                    return;
                }
            }
        }
    }
    dispatch_request_0x27__19TWindowKeyBoardSoftFii(out, (s32 *)tmp);
    if (strcmp(text, out) != 0) {
        self->sel++;
        self->count++;
        TWindowKeyBoardSoft__sub_803E6868(out, tmp);
    }
}
#undef self
#undef text

#pragma push
#pragma opt_propagation off
void insert_string__19TWindowKeyBoardSoftFPvPv(KbSoft_8025D264 *self, char *src) {
    s32 n;
    u8 *p = self->buf;
    s8 len = measure_string_len__20TWindowSubStatusDispFPv(src);
    KbRec_8025D264 *rec;
    u8 *dst;
    s8 total;
    s8 *q;
    u8 saved = p[0];
    total = 0;
    p[0] = len;
    while ((s8)p[0] != 0) {
        s8 step = p[1] + 3;
        p += step;
        total += step;
    }
    n = len + 3;
    dst = p + n;
    do {
        *dst-- = *p--;
    } while (total-- != 0);
    q = (s8 *)self->buf;
    q[0] = saved;
    q[1] = len;
    q[2] = self->kind;
    q += 3;
    strncpy((s32 *)q, (u8 *)src, len);
    self->remain -= n;
    if (self->cursor > self->buf) {
        self->cursor += n;
    }
}
#pragma pop

void update_input__19TWindowKeyBoardSoftFPvPv(void* p, void* a1) { TWindowKeyBoardSoft__sub_8025D1C8(p, *(void**)((char*)p + 0xa0)); insert_string__19TWindowKeyBoardSoftFPvPv((KbSoft_8025D264 *)(p), (char *)(a1)); }

void append_text_entry__19TWindowKeyBoardSoftFPvPv(u8 *arg0, u8 *arg1) {
    Rec_8025D3CC *rec;
    s32 idx;
    s32 n;
    u8 *p;
    rec = *(Rec_8025D3CC **)(arg0 + 0xA0);
    idx = rec->len;
    p = (u8 *)(idx + (s32)rec);
    n = ((s32 (*)(void *, u32, s32))strnlen__19TWindowKeyBoardSoftFPvUi)(arg1, 0x100, (s32)rec);
    p[3] = idx;
    p[4] = n;
    p[5] = 1;
    p += 6;
    strncpy((s32 *)p, arg1, n);
    p += n;
    *p++ = 0;
    *(s32 *)(arg0 + 0xB0) = 0x94 - (p - *(u8 **)(arg0 + 0x9C));
    if (*(s32 *)(arg0 + 0xB0) < 0) {
        *(u16 *)(arg0 + 0x60) |= 0x10;
    }
    *(u32 *)(arg0 + 0xA4) = *(u32 *)(arg0 + 0xA0);
}

void write_name_and_text__19TWindowKeyBoardSoftFPvPvPv(KbSoft_8025D47C *self, char *name, char *text) {
    u8 *p = self->buf;
    s32 n1 = strnlen__19TWindowKeyBoardSoftFPvUi(name, 0x100);
    s32 n2;
    p[1] = n1;
    p[2] = self->kind;
    p += 3;
    strncpy((s32 *)p, (u8 *)name, n1);
    p += n1;
    n1 = (s8)n1;
    n2 = strnlen__19TWindowKeyBoardSoftFPvUi(text, 0x100);
    p[0] = n1;
    p[1] = n2;
    p[2] = 1;
    p += 3;
    strncpy((s32 *)p, (u8 *)text, n2);
    p += n2;
    *p++ = 0;
    self->remain = 0x94 - (p - self->base);
    self->cursor = self->buf;
}

void set_kanji_mode__19TWindowKeyBoardSoftFPv(void *arg0) {
    s8 sp8[0x200];

    if (!(*(u16 *)((s8 *)arg0 + 0x60) & 0x10)) {
        dispatch_request_0x26__19TWindowKeyBoardSoftFii(sp8, (s32 *)(sp8 + 0x100));
        *(s32 *)((s8 *)arg0 + 0xA8) = 0xF0;
        update_input__19TWindowKeyBoardSoftFPvPv((void*)(arg0), (void*)(sp8));
    }
}

void set_kana_mode__19TWindowKeyBoardSoftFPv(void *arg0) {
    s8 sp8[0x200];

    if (!(*(u16 *)((s8 *)arg0 + 0x60) & 0x10)) {
        dispatch_request_0x25__19TWindowKeyBoardSoftFii(sp8, (s32 *)(sp8 + 0x100));
        *(s32 *)((s8 *)arg0 + 0xA8) = 0xF1;
        update_input__19TWindowKeyBoardSoftFPvPv((void*)(arg0), (void*)(sp8));
    }
}

void process_input__19TWindowKeyBoardSoftFPv(u8 *arg0) {
    u8 sp108[0x100];
    u8 sp8[0x100];
    s32 temp_r3;
    u8 *temp_r5;

    if (!(*(u16 *)((s8 *)arg0 + 0x60) & 0x10)) {
        temp_r3 = dispatch_request_0x23__19TWindowKeyBoardSoftFii((void *) (sp8), (void *) (sp108));
        if (temp_r3 != 0) {
            *(s32 *)((s8 *)arg0 + 0xAC) = temp_r3;
            *(u8 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA0)) + 2) = (u8) *(s32 *)((s8 *)arg0 + 0xA8);
            temp_r5 = (unsigned char *) (*(void **)((s8 *)arg0 + 0xA0));
            *(void **)((s8 *)arg0 + 0xA0) = (void *) (temp_r5 - ((s8) *(u8 *)((s8 *)temp_r5 + 0) + 3));
            *(s32 *)((s8 *)arg0 + 0xA8) = (s32) *(u8 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA0)) + 2);
            TWindowKeyBoardSoft__sub_8025CF50((void *) (arg0), (int) (*(s32 *)((s8 *)arg0 + 0xA8)), (int) (temp_r5));
        }
    }
}

void TWindowKeyBoardSoft__sub_8025D7FC(KbSoft_8025D7FC *self) {
    char text[0x100];
    char name[0x100];
    s32 n;
    s32 i;
    if (self->flags & 0x10) {
        return;
    }
    n = dispatch_request_0x22__19TWindowKeyBoardSoftFii(name, text);
    if (n == 0) {
        return;
    }
    i = 1;
    TWindowKeyBoardSoft__sub_8025CFA8(self, (s32 *)name);
    while (TWindowKeyBoardSoft__sub_8025D544(self, (s32 *)name, (s8 *)text) == 0) {
        TWindowKeyBoardSoft__sub_803E6868(name, text);
        i++;
        if (i > n) {
            TWindowKeyBoardSoft__sub_803E67D4(name, text);
            ((s32 (*)(void *, int))TWindowKeyBoardSoft__sub_8025CF50)(self, self->sel);
            append_text_entry__19TWindowKeyBoardSoftFPvPv((u8 *)(self), (u8 *)(text));
            return;
        }
    }
    self->sel = i;
    self->count = n;
    write_name_and_text__19TWindowKeyBoardSoftFPvPvPv((KbSoft_8025D47C *)(self), (char *)((s32 *)name), (char *)((s8 *)text));
}

void TWindowKeyBoardSoft__sub_8025D8C8(KbSoft_8025D8C8 *self) {
    char text[0x100];
    char name[0x100];
    s32 n;
    s32 i;
    if (self->flags & 0x10) {
        return;
    }
    n = ((s32)TWindowKeyBoardSoft__sub_803E67D4(name, text));
    if (n == 0) {
        return;
    }
    i = 1;
    TWindowKeyBoardSoft__sub_8025CFA8(self, (s32 *)name);
    while (TWindowKeyBoardSoft__sub_8025D544(self, (s32 *)name, (s8 *)text) == 0) {
        TWindowKeyBoardSoft__sub_803E6868(name, text);
        i++;
        if (i > n) {
            dispatch_request_0x22__19TWindowKeyBoardSoftFii(name, text);
            ((s32 (*)(void *, int))TWindowKeyBoardSoft__sub_8025CF50)(self, self->sel);
            append_text_entry__19TWindowKeyBoardSoftFPvPv((u8 *)(self), (u8 *)(text));
            return;
        }
    }
    self->sel = i;
    self->count = n;
    write_name_and_text__19TWindowKeyBoardSoftFPvPvPv((KbSoft_8025D47C *)(self), (char *)((s32 *)name), (char *)((s8 *)text));
}

void select_next__19TWindowKeyBoardSoftFPv(void *arg0) {
    struct { u8 _pad[0x100]; } sp108;
    struct { u8 _pad[0x100]; } sp8;

    if (!(*(u16 *)((s8 *)arg0 + 0x60) & 0x10)) {
        do {
            TWindowKeyBoardSoft__sub_803E6868(&sp8, &sp108);
            *(s32 *)((s8 *)arg0 + 0xA8) = (s32) (*(s32 *)((s8 *)arg0 + 0xA8) + 1);
            if ((s32) *(s32 *)((s8 *)arg0 + 0xA8) > (s32) *(s32 *)((s8 *)arg0 + 0xAC)) {
                *(s32 *)((s8 *)arg0 + 0xA8) = 1;
            }
        } while (TWindowKeyBoardSoft__sub_8025D378(arg0, &sp8) == 0);
        update_input__19TWindowKeyBoardSoftFPvPv((void*)(arg0), (void*)(&sp8));
    }
}

void update__19TWindowKeyBoardSoftFPv(void *arg0) {
    u8 sp108[0x100];
    u8 sp8[0x100];

    if (!(*(u16 *)((s8 *)arg0 + 0x60) & 0x10)) {
        do {
            dispatch_request_0x14__19TWindowKeyBoardSoftFii(sp8, sp108);
            *(s32 *)((s8 *)arg0 + 0xA8) = (s32) (*(s32 *)((s8 *)arg0 + 0xA8) - 1);
            if ((s32) *(s32 *)((s8 *)arg0 + 0xA8) <= 0) {
                *(s32 *)((s8 *)arg0 + 0xA8) = (s32) *(s32 *)((s8 *)arg0 + 0xAC);
            }
        } while (TWindowKeyBoardSoft__sub_8025D378(arg0, sp8) == 0);
        update_input__19TWindowKeyBoardSoftFPvPv((void*)(arg0), (void*)(sp8));
    }
}

void convert_input_text__19TWindowKeyBoardSoftFPv(void *arg0) {
    s8 sp108[0x100];
    s8 sp8[0x100];
    u16 *var_r3;
    int temp_r0;
    u8 *var_r4;

    if (!(*(u16 *)((s8 *)arg0 + 0x60) & 0x80)) {
        TWindowKeyBoardSoft__sub_8025DBDC(arg0, 1);
    }
    var_r3 = *(u16 **)((s8 *)arg0 + 0x84);
    var_r4 = *(u8 **)((s8 *)arg0 + 0x9C);
    while ((temp_r0 = *var_r3) != 0) {
        *var_r4 = (u8) (temp_r0 >> 8);
        if ((s8) *var_r4 != 0) {
            var_r4 += 1;
        }
        temp_r0 = *var_r3;
        var_r3 = (u16 *)((u8 *)var_r3 + 2);
        *var_r4 = (u8) temp_r0;
        var_r4 += 1;
    }
    *var_r4 = 0;
    *(u8 **)((s8 *)arg0 + 0xA0) = (u8 *) *(u8 **)((s8 *)arg0 + 0x9C);
    if (fn_8025CE00(arg0, *(u8 **)((s8 *)arg0 + 0x9C)) != 0) {
        *(u16 *)((s8 *)arg0 + 0x60) = (u16) (*(u16 *)((s8 *)arg0 + 0x60) | 0x10);
        *(s32 *)((s8 *)arg0 + 0xAC) = 1;
        *(s32 *)((s8 *)arg0 + 0xA8) = 1;
        strncpy((s32 *)sp8, *(u8 **)((s8 *)arg0 + 0x9C), 0x100);
        sp108[0] = 0;
    } else {
        *(u16 *)((s8 *)arg0 + 0x60) = (u16) (*(u16 *)((s8 *)arg0 + 0x60) & 0xFFFFFFEF);
        *(s32 *)((s8 *)arg0 + 0xAC) = dispatch_request_0x13__19TWindowKeyBoardSoftFiii(*(u8 **)((s8 *)arg0 + 0x9C), (s32 *)sp8, sp108);
        *(s32 *)((s8 *)arg0 + 0xA8) = 1;
        TWindowKeyBoardSoft__sub_8025CFA8(arg0, (s32 *)sp8);
    }
    *(s32 *)((s8 *)arg0 + 0xB0) = 0x94;
    if (TWindowKeyBoardSoft__sub_8025D544(arg0, (s32 *)sp8, sp108) != 0) {
        write_name_and_text__19TWindowKeyBoardSoftFPvPvPv((KbSoft_8025D47C *)(arg0), (char *)((s32 *)sp8), (char *)(sp108));
        *(u16 *)((s8 *)arg0 + 0x60) = (u16) (*(u16 *)((s8 *)arg0 + 0x60) | 4);
    }
}

void draw_text_glyphs__20TWindowSubStatusDispFPvPvPv(void *arg0, void *arg1, void *arg2) {
    Quad_8025E350 q;
    f32 pos[8];
    Desc_8025DECC d;
    u32 col[4];
    f32 depth;
    u8 adv;
    u8 n;
    u16 ch;
    char *p;
    s32 ci;
    p = *(char **)((u8 *)arg0 + 0x9C);
    if (p == NULL) {
        return;
    }
    depth = lbl_805DD058 + ((Box_8025E350 *)arg1)->z;
    d.pos = pos;
    d.col = col;
    d.a = 0;
    d.b = 4;
    while (*p != 0) {
        ci = (p == *(char **)((u8 *)arg0 + 0xA0)) ? 1 : 2;
        n = p[1];
        p += 3;
        while (n-- != 0) {
            ch = *p++;
            if ((ch & 0xE0) == 0x80 || (ch & 0xE0) == 0xE0) {
                ch <<= 8;
                n--;
                ch |= *p++ & 0xFF;
            }
            adv = get_font_char_advance(map_char_to_font_code(ch));
            if (((f32 *)arg2)[0] + (f32)adv > ((Box_8025E350 *)arg1)->x + ((Box_8025E350 *)arg1)->w) {
                ((f32 *)arg2)[0] = ((Box_8025E350 *)arg1)->x;
                ((f32 *)arg2)[1] += lbl_805DD048;
            }
            if ((s32)ch == 0x20) {
                ((f32 *)arg2)[0] += (f32)(s32)adv;
            } else {
                q.x = ((f32 *)arg2)[0];
                q.y = ((f32 *)arg2)[1];
                set_glyph_quad_extents(adv, &q);
                apply_context_transform_to_rect(arg1, &q);
                d.col[0] = lbl_804CFA84[ci];
                d.col[1] = d.col[0];
                d.col[2] = d.col[0];
                d.col[3] = d.col[0];
                pos[0] = q.x;
                pos[1] = q.y;
                pos[2] = q.x2;
                pos[3] = q.y;
                pos[4] = q.x2;
                pos[5] = q.y2;
                pos[6] = q.x;
                pos[7] = q.y2;
                draw_tri_fan_2d__14TObjCMHairMenuFPviif(&d, 4, 6, depth);
                ((f32 *)arg2)[0] += (f32)(s32)adv;
            }
        }
    }
}

void draw_wrapped_text__20TWindowSubStatusDispFPvPvPv(void *arg0, void *arg1, void *arg2) {
    Quad_8025E350 q;
    f32 scale;
    u8 n;
    char *p;
    u16 ch;
    u8 adv;

    p = *(char **)((u8 *)arg0 + 0x9C);
    if (p == NULL) {
        return;
    }
    scale = lbl_805DD05C / (lbl_805DD060 + ((Box_8025E350 *)arg1)->z);
    while (*p != 0) {
        n = p[1];
        p += 3;
        while (n-- != 0) {
            ch = *p++;
            if ((ch & 0xE0) == 0x80 || (ch & 0xE0) == 0xE0) {
                ch <<= 8;
                n--;
                ch |= *p++ & 0xFF;
            }
            adv = calc_gauge_scale__20TWindowSubStatusDispFPvPvi(map_char_to_font_code(ch), &q, -1);
            if (((f32 *)arg2)[0] + (f32)adv > ((Box_8025E350 *)arg1)->x + ((Box_8025E350 *)arg1)->w) {
                ((f32 *)arg2)[0] = ((Box_8025E350 *)arg1)->x;
                ((f32 *)arg2)[1] += lbl_805DD048;
            }
            if ((s32)ch == 0x20) {
                ((f32 *)arg2)[0] += (f32)(s32)adv;
            } else {
                q.x = ((f32 *)arg2)[0];
                q.y = ((f32 *)arg2)[1];
                set_glyph_quad_extents(adv, &q);
                apply_context_transform_to_rect(((Box_8025E350 *)arg1), &q);
                draw_textured_quad_at_depth(&q, scale);
                ((f32 *)arg2)[0] += (f32)(s32)adv;
            }
        }
    }
}

#pragma push
#pragma opt_common_subs off
void TWindowSubStatusDisp__sub_8025E6DC(u8 *arg0, u8 *arg1) {
    typedef char sp8_offset[(offsetof(Stack_8025E6DC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8025E6DC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8025E6DC, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_8025E6DC, sp14) == 0xC) ? 1 : -1];
    Stack_8025E6DC stack;
    s32 temp_r3_3;
    s32 temp_r3_4;
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_r31;
    u16 temp_r3;
    u16 temp_r3_2;
    var_r31 = 1;
    if (!(*(u16 *)((s8 *)arg0 + 0x62) & 2) || ((s32) *(s32 *)((s8 *)arg1 + 0x30) >= 0)) {
        stack.sp10 = *(f32 *)((s8 *)arg1 + 0x10);
        stack.sp14 = *(f32 *)((s8 *)arg1 + 0x14);
        TWindowSubStatusDisp__sub_8025E530((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10), (int) (*(s32 *)((s8 *)arg0 + 0x6C)), (int) (*(s32 *)((s8 *)arg0 + 0x70)), (int) (0));
        temp_r3 = *(u16 *)((s8 *)arg0 + 0x60);
        if (temp_r3 & 2) {
            if (temp_r3 & 4) {
                draw_text_glyphs__20TWindowSubStatusDispFPvPvPv((void *)((void *) (arg0)), (void *)((void *) (arg1)), (void *)((void *) (&stack.sp10)));
                var_r31 = 0;
            } else {
                TWindowSubStatusDisp__sub_8025E148((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10), (int) (*(s32 *)((s8 *)arg0 + 0x84)), (int) (*(s32 *)((s8 *)arg0 + 0x94)));
            }
        }
        reset_gauge__20TWindowSubStatusDispFPv((int) (0));
        stack.sp10 = *(f32 *)((s8 *)arg1 + 0x10);
        stack.sp14 = *(f32 *)((s8 *)arg1 + 0x14);
        TWindowSubStatusDisp__sub_8025E530((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10), (int) (*(s32 *)((s8 *)arg0 + 0x6C)), (int) (*(s32 *)((s8 *)arg0 + 0x70)), (int) (1));
        temp_r3_2 = *(u16 *)((s8 *)arg0 + 0x60);
        if (temp_r3_2 & 2) {
            if (temp_r3_2 & 4) {
                ((s32 (*)(void *, void *, void *))draw_wrapped_text__20TWindowSubStatusDispFPvPvPv)((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10));
            } else {
                TWindowSubStatusDisp__sub_8025E530((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10), (int) (*(s32 *)((s8 *)arg0 + 0x84)), (int) (*(s32 *)((s8 *)arg0 + 0x88)), (int) (1));
                stack.sp8 = stack.sp10;
                stack.spC = stack.sp14;
                temp_r3_3 = *(s32 *)((s8 *)arg0 + 0x88);
                temp_r7 = *(s32 *)((s8 *)arg0 + 0x94) - temp_r3_3;
                if (temp_r7 != 0) {
                    TWindowSubStatusDisp__sub_8025E530((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10), (int) (*(s32 *)((s8 *)arg0 + 0x84) + (temp_r3_3 * 2)), (int) (temp_r7), (int) (1));
                }
            }
        } else {
            stack.sp8 = stack.sp10;
            stack.spC = stack.sp14;
        }
        temp_r3_4 = *(s32 *)((s8 *)arg0 + 0x70);
        temp_r7_2 = *(s32 *)((s8 *)arg0 + 0x7C) - temp_r3_4;
        if (temp_r7_2 != 0) {
            TWindowSubStatusDisp__sub_8025E530((void *) (arg0), (void *) (arg1), (void *) (&stack.sp10), (int) (*(s32 *)((s8 *)arg0 + 0x6C) + (temp_r3_4 * 2)), (int) (temp_r7_2), (int) (1));
        }
        end_render_forward__20TWindowSubStatusDispFPv();
        if ((var_r31 != 0) && !(*(s32 *)((s8 *)arg0 + 0x2C) & 2)) {
            fn_8025DE10((void *) (arg1), (void *) (&stack.sp8));
        }
    }
}
extern int fold_flush_0;
#pragma pop

}
