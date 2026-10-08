#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8025A95C_lbl_804CFA10 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8025A594_lbl_804CF9F8 {
    M2C_UNK value;
    u8 remaining[0x14];
};

typedef struct Item_8025A354 {
    u16 flags;
    u8 pad2[6];
    f32 x;
    f32 y;
    s32 value10;
    u8 pad14[4];
    char *label;
    s32 cur;
    s32 next;
} Item_8025A354;

typedef struct Win_8025A354 {
    u8 pad0[0x10];
    f32 x;
    f32 y;
    u8 pad18[0x18];
    s32 f30;
    u8 pad34[4];
    f32 f38;
} Win_8025A354;

typedef struct Vec2_8025A354 { f32 x, y; } Vec2_8025A354;

struct Msg_8025A9C0 {
    u16 flags;
    u8 pad2[0x10 - 2];
    f32 width;
    f32 height;
    u8 pad18[0x20 - 0x18];
    s8 *text;
};

struct UV_8025A650 { f32 u; f32 v; };

struct Quad_8025A650 { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

struct Item_8025A650 { u8 p0[8]; f32 x; f32 y; s32 count; };

struct Ctx_8025A650 { u8 p0[0x10]; f32 x; f32 y; u8 p18[0x18]; s32 f30; u8 p34[4]; f32 z; };

extern "C" {
extern const f32 lbl_805DCF90;
f32 get_item_star_row_width(u8 *arg0);
s32 copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
s32 TWindowSubStatusDisp__sub_80256BDC(void *, void *);
extern M2C_UNK lbl_804CFA10[];
u8 *TWindowHelpItem__sub_8025A95C(u8 *arg0, s32 arg1, s32 arg2);
s32 copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
s32 TWindowSubStatusDisp__sub_80256BDC(void *, void *);
extern M2C_UNK lbl_804CF9F8[];
u8 *TWindowHelpItem__sub_8025A594(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
s32 strnlen__19TWindowKeyBoardSoftFPvUi(void *, int);
M2C_UNK strncpy(s32, u32, s32);
extern const f32 lbl_805DCFAC;
void set_text_entry_string(u8 *arg0, u32 arg1, s32 arg2);
void set_text_draw_params(void *, s32, s32, f32, f32);
int TWindowHelpItem__sub_8025A600(void* p);
void draw_window_text(void *, void *, s32, s32, f32);
extern char lbl_8044F020[];
extern const f32 lbl_805DCF70;
extern const f32 lbl_805DCF74;
extern const f32 lbl_805DCF78;
extern const f32 lbl_805DCF7C;
extern char lbl_805DCF80[4];
extern const f32 lbl_805DCF84;
extern const f32 lbl_805DCF88;
void render_summary_row__15TWindowHelpItemFv(Item_8025A354 *self, Win_8025A354 *w);
u8 get_small_font_glyph_width(u8);
s32 TWindowSubStatusDisp__sub_800FC248(u8);
s8 *parse_text_control_codes(s8 *, s32 *, s32);
u8 get_font_char_advance(u16);
u16 map_char_to_font_code(u16);
extern s32 lbl_805D5544;
extern const f32 lbl_805DCFAC;
extern const f32 lbl_805DCFB0;
extern const f32 lbl_805DCFB4;
extern const f32 lbl_805DCFB8;
extern const f32 lbl_805DCFBC;
extern const f32 lbl_805DCFC0;
extern const f32 lbl_805DCFC4;
void measure_message_text_width(Msg_8025A9C0 *msg, f32 maxw);
s32 get_shared_text_buffer();
u32 calc_text_width(void *);
void text_builder_reset();
void TWindowSubStatusDisp__sub_80228F5C(s32);
void text_builder_append(void *);
void draw_window_text(void *, void *, s32, s32, f32);
extern u8 lbl_805DCF68[4];
extern const f32 lbl_805DCF6C;
void draw_number_value__15TWindowHelpItemFv(void *entry, f32 *pos, s32 value, s32 color, s32 percent);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
s32 try_open__19TWindowKeyBoardSoftFii(void *, void *);
void set_global_param__8TObjFishFi(s32);
void begin_screen_draw(int);
void get_player__20TWindowSubStatusDispFv(void);
void draw_textured_quad_at_depth(void *, f32);
void set_draw_texture_and_color(int, int);
extern const UV_8025A650 lbl_8044F028[];
extern s32 lbl_805D63F0;
void render_item_rarity_stars(Item_8025A650 *item, Ctx_8025A650 *ctx);
}

extern "C" {

int TWindowHelpItem__sub_8025A600(void* p);
void TWindowHelpItem__sub_8025A900(void);
void *TWindowHelpItem__sub_8025A904(void *arg0, s16 arg1);
void *destroy__15TWindowHelpItemFPvs(void *arg0, s16 arg1);
void reset_float_field__15TWindowHelpItemFPv(void *arg0);
void set_compare_color__15TWindowHelpItemFPvi(void *arg0, s32 arg1);
void set_flag4_and_field1c__15TWindowHelpItemFPvi(void *arg0, s32 arg1);
void set_flag8_and_field20__15TWindowHelpItemFPvi(void *arg0, s32 arg1);
void set_flag_0x10__15TWindowHelpItemFPvi(u16 *arg0, s32 arg1);
void set_help_text__15TWindowHelpItemFPvUi(void *arg0, u32 arg1);
void tick_display_timer__15TWindowHelpItemFPv(void *arg0);
void update_visible_flags__15TWindowHelpItemFPv(u16 *arg0);
M2C_UNK __dl__FPv(void *);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
M2C_UNK destroy__20TWindowSubStatusDispFPvs(void *, s16);
M2C_UNK free__11TOBoss4RockFUi(s32);
s32 measure_string_len__20TWindowSubStatusDispFPv(u32);
M2C_UNK strncpy(s32, u32, s32);

void update_visible_flags__15TWindowHelpItemFPv(u16 *arg0) {
    s32 temp_r3;
    u16 temp_r0;

    temp_r0 = *arg0;
    temp_r3 = temp_r0 & 4;
    if ((temp_r3 != 0) || (temp_r0 & 8)) {
        if (temp_r3 == 0) {
            set_flag4_and_field1c__15TWindowHelpItemFPvi((void *)(arg0), (s32)(0));
        }
        if (!(*arg0 & 8)) {
            set_flag8_and_field20__15TWindowHelpItemFPvi((void *)(arg0), (s32)(0));
        }
    }
}

void draw_number_value__15TWindowHelpItemFv(void *entry, f32 *pos, s32 value, s32 color, s32 percent) {
    f32 xy[2];
    text_builder_reset();
    TWindowSubStatusDisp__sub_80228F5C(value);
    if (percent) {
        text_builder_append(lbl_805DCF68);
    }
    xy[0] = pos[0] - (f32)calc_text_width((void *)get_shared_text_buffer());
    xy[1] = pos[1];
    draw_window_text(xy, (void *)get_shared_text_buffer(), color, 0, lbl_805DCF6C);
}

void set_flag_0x10__15TWindowHelpItemFPvi(u16 *arg0, s32 arg1) {
    if (arg1 != 0) {
        *arg0 |= 0x10;
        return;
    }
    *arg0 &= 0xFFFFFFEF;
}

void set_flag8_and_field20__15TWindowHelpItemFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 8);
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}

void set_compare_color__15TWindowHelpItemFPvi(void *arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_r0 == arg1) {
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
        return;
    }
    if (temp_r0 > arg1) {
        M2C_FIELD(arg0, s32 *, 0x10) = 0xFF77E8FF;
    } else {
        M2C_FIELD(arg0, s32 *, 0x10) = 0xFFDD8C41;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = 0x1E;
    set_flag4_and_field1c__15TWindowHelpItemFPvi((void *)(arg0), (s32)(arg1));
}

void set_flag4_and_field1c__15TWindowHelpItemFPvi(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 4);
    M2C_FIELD(arg0, s32 *, 0x1C) = arg1;
}

void set_help_text__15TWindowHelpItemFPvUi(void *arg0, u32 arg1) {
    s32 temp_r3;

    free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x18));
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    if (arg1 != 0U) {
        temp_r3 = measure_string_len__20TWindowSubStatusDispFPv(arg1);
        M2C_FIELD(arg0, s32 *, 0x18) = alloc_buffer__11TOBoss4RockFPv(temp_r3 + 1);
        strncpy(M2C_FIELD(arg0, s32 *, 0x18), arg1, temp_r3 + 1);
    }
}

void render_summary_row__15TWindowHelpItemFv(Item_8025A354 *self, Win_8025A354 *w) {
    Vec2_8025A354 pos;
    s32 color;
    if (w->f30 < 0) {
        return;
    }
    if (!(self->flags & 4) && !(self->flags & 8)) {
        return;
    }
    pos.x = w->x + self->x;
    pos.y = w->y + self->y;
    set_text_draw_params(w, 1, 0, lbl_805DCF70 / (lbl_805DCF74 + w->f38), lbl_805DCF78);
    draw_window_text(&pos, self->label, -1, 1, lbl_805DCF78);
    pos.x += lbl_805DCF7C;
    draw_window_text(&pos, lbl_805DCF80, -1, 0, lbl_805DCF78);
    pos.x += lbl_805DCF84;
    if (self->flags & 4) {
        draw_number_value__15TWindowHelpItemFv((void *)(self), (f32 *)(&pos), (s32)(self->cur), (s32)(self->value10), (s32)(TWindowHelpItem__sub_8025A600((void*)(self))));
    }
    if (self->flags & 8) {
        draw_window_text(&pos, lbl_8044F020, -1, 0, lbl_805DCF78);
        pos.x += lbl_805DCF88;
        if (!(self->flags & 0x10)) {
            color = 0xFF909090;
        } else if (self->cur == self->next) {
            color = -1;
        } else if (self->cur > self->next) {
            color = 0xFF77E8FF;
        } else {
            color = 0xFFDD8C41;
        }
        draw_number_value__15TWindowHelpItemFv((void *)(self), (f32 *)(&pos), (s32)(self->next), (s32)(color), (s32)(TWindowHelpItem__sub_8025A600((void*)(self))));
    }
}

void tick_display_timer__15TWindowHelpItemFPv(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 0x14);
    if (temp_r4 > 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) (temp_r4 - 1);
        if ((s32) M2C_FIELD(arg0, s32 *, 0x14) <= 0) {
            M2C_FIELD(arg0, s32 *, 0x10) = -1;
        }
    }
}

extern M2C_UNK lbl_804CF9F8[];

void *destroy__15TWindowHelpItemFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF9F8;
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 0x18));
        destroy__20TWindowSubStatusDispFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_8025A594_lbl_804CF9F8_size[sizeof(RecoveredGlobal_8025A594_lbl_804CF9F8) == 0x18 ? 1 : -1];
u8 *TWindowHelpItem__sub_8025A594(u8 *arg0, s32 arg1, s32 arg2) {
    TWindowSubStatusDisp__sub_80256BDC((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 4) = &(*(RecoveredGlobal_8025A594_lbl_804CF9F8 *)&lbl_804CF9F8).value;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 8), (void *) (arg1 + 4));
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    return arg0;
}

int TWindowHelpItem__sub_8025A600(void* p) { return *(u16*)((char*)p + 0x0) & 0x20; }

f32 get_item_star_row_width(u8 *arg0) {
    s32 var_r0;
    var_r0 = M2C_FIELD(arg0, s32 *, 0x10);
    if (var_r0 < 0xA) {
        var_r0 = 0xA;
    }
    return lbl_805DCF90 * (f32) var_r0;
}

void render_item_rarity_stars(Item_8025A650 *item, Ctx_8025A650 *ctx) {
    Quad_8025A650 q;
    f32 depth2;
    f32 x;
    f32 y;
    s32 i;
    s32 n;
    const UV_8025A650 *uv;
    f32 depth;
    if (ctx->f30 < 0) {
        return;
    }
    init_xyz_limits__10TObjPlayerFv();
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    set_draw_texture_and_color(1, -1);
    x = ctx->x + item->x;
    y = ctx->y + item->y;
    depth = -1.0f / (0.1196f + ctx->z);
    for (i = 0; i < item->count; i++) {
        if (i < 9) {
            uv = &lbl_8044F028[1];
        } else {
            uv = &lbl_8044F028[2];
        }
        q.x0 = x;
        q.y0 = y;
        q.x1 = 16.0f + x;
        q.y1 = 16.0f + y;
        q.u0 = uv->u / 256.0f;
        q.v0 = uv->v / 256.0f;
        q.u1 = (16.0f + uv->u) / 256.0f;
        q.v1 = (16.0f + uv->v) / 256.0f;
        if (try_open__19TWindowKeyBoardSoftFii(ctx, &q) != 0) {
            draw_textured_quad_at_depth(&q, depth);
        }
        x += 17.0f;
    }
    uv = lbl_8044F028;
    x = ctx->x + item->x;
    y = ctx->y + item->y;
    depth2 = -1.0f / (0.0897f + ctx->z);
    n = item->count;
    if (n < 10) {
        n = 10;
    }
    for (i = 0; i < n; i++) {
        q.x0 = x;
        q.y0 = y;
        q.x1 = 16.0f + x;
        q.y1 = 16.0f + y;
        q.u0 = uv->u / 256.0f;
        q.v0 = uv->v / 256.0f;
        q.u1 = (16.0f + uv->u) / 256.0f;
        q.v1 = (16.0f + uv->v) / 256.0f;
        if (try_open__19TWindowKeyBoardSoftFii(ctx, &q) != 0) {
            draw_textured_quad_at_depth(&q, depth2);
        }
        x += 17.0f;
    }
    get_player__20TWindowSubStatusDispFv();
    reset_transform_state__10TObjPlayerFv();
}

void TWindowHelpItem__sub_8025A900(void) {  }

extern M2C_UNK lbl_804CFA10[];

void *TWindowHelpItem__sub_8025A904(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CFA10;
        destroy__20TWindowSubStatusDispFPvs((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

extern f32 lbl_805DCFA8;

typedef char RecoveredGlobal_8025A95C_lbl_804CFA10_size[sizeof(RecoveredGlobal_8025A95C_lbl_804CFA10) == 0x18 ? 1 : -1];
u8 *TWindowHelpItem__sub_8025A95C(u8 *arg0, s32 arg1, s32 arg2) {
    TWindowSubStatusDisp__sub_80256BDC((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 4) = &(*(RecoveredGlobal_8025A95C_lbl_804CFA10 *)&lbl_804CFA10).value;
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv((void *) (arg0 + 8), (void *) (arg1 + 4));
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return arg0;
}

void reset_float_field__15TWindowHelpItemFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DCFA8;
}

#pragma push
#pragma fp_contract on
void measure_message_text_width(Msg_8025A9C0 *msg, f32 maxw) {
    s32 sjis;
    f32 adv;
    f32 lineh;
    f32 maxx;
    f32 y;
    f32 x;
    f32 limit;
    s8 *p;
    s32 small;
    s32 c;
    s8 ch;
    u8 w;
    if (msg->text == NULL || *msg->text == 0) {
        msg->width = lbl_805DCFAC;
        msg->height = lbl_805DCFAC;
        return;
    }
    if (msg->flags & 0x40) {
        limit = lbl_805DCFB0;
    } else {
        limit = maxw;
    }
    sjis = (u32)__cntlzw(lbl_805D5544) >> 5;
    small = (msg->flags >> 2) & 1;
    if (small) {
        lineh = lbl_805DCFB8;
        adv = lbl_805DCFB4;
        y = lineh;
    } else {
        adv = lbl_805DCFBC;
        lineh = lbl_805DCFC0;
        y = adv;
    }
    maxx = lbl_805DCFAC;
    p = msg->text;
    x = maxx;
    while (*p != 0) {
        p = parse_text_control_codes(p, &sjis, 0);
        ch = *p;
        if (ch == 0) {
            continue;
        }
        c = ch & 0xFF;
        p++;
        if (c == 0xA) {
            if (msg->flags & 0x80) {
                x += adv * lbl_805DCFC4;
            } else {
                if (x > maxx) {
                    maxx = x;
                }
                y += lineh;
                x = lbl_805DCFAC;
            }
        } else if (c == 0x20) {
            x += adv * lbl_805DCFC4;
        } else {
            if (sjis != 0 && ((c & 0xE0) == 0x80 || (c & 0xE0) == 0xE0)) {
                c = ((c << 8) & 0xFF00) | *(u8 *)p;
                p++;
            }
            if (small) {
                w = get_small_font_glyph_width(TWindowSubStatusDisp__sub_800FC248(c));
            } else {
                w = get_font_char_advance(((u16 (*)(s32))map_char_to_font_code)(c));
            }
            if (x + (f32)w > limit) {
                if (x > maxx) {
                    maxx = x;
                }
                x = lbl_805DCFAC;
                y += lineh;
            }
            x += (f32)w;
        }
    }
    if (x <= lbl_805DCFAC) {
        y -= lineh;
    }
    if (x > maxx) {
        maxx = x;
    }
    if (maxx > maxw) {
        maxx = maxw;
    }
    msg->width = maxx;
    msg->height = y;
}
#pragma pop

#pragma push
#pragma opt_common_subs off
void set_text_entry_string(u8 *arg0, u32 arg1, s32 arg2) {
    s32 temp_r3_2;
    u16 temp_r3;
    if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
        temp_r3 = M2C_FIELD(arg0, u16 *, 0);
        if (temp_r3 & 0x20) {
            M2C_FIELD(arg0, u16 *, 0) = (u16) (temp_r3 & 0xFFFFFFDF);
            free__11TOBoss4RockFUi((s32)((int) (M2C_FIELD(arg0, u32 *, 0x20))));
        }
    }
    if ((arg1 != 0U) && (arg2 & 0x20)) {
        temp_r3_2 = strnlen__19TWindowKeyBoardSoftFPvUi((void *) (arg1), (int) (0x400));
        M2C_FIELD(arg0, u32 *, 0x20) = ((u32)alloc_buffer__11TOBoss4RockFPv((s32)((void *) (temp_r3_2 + 1))));
        strncpy((s32)((int) (M2C_FIELD(arg0, u32 *, 0x20))), (u32)((void *) (arg1)), (s32)((int) (temp_r3_2)));
        M2C_FIELD((temp_r3_2 + M2C_FIELD(arg0, u32 *, 0x20)), s8 *, 0) = 0;
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 0x20);
    } else {
        M2C_FIELD(arg0, u32 *, 0x20) = arg1;
    }
    if (M2C_FIELD(arg0, f32 *, 0x28) > lbl_805DCFAC) {
        M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DCFAC;
    }
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) & ~0x2D1);
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | (arg2 & 0x2C1));
}
#pragma pop

}
