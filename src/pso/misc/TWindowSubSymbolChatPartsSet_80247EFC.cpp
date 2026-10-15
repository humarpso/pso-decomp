#include "types.h"

struct Part_802480EC {
    u8 pad0[8];
    f32 x;
    f32 y;
    u8 pad10[0x1C];
    s32 entry;
    u8 pad30[4];
    s32 kind;
};

struct UV_802480EC {
    f32 u;
    f32 v;
};

typedef struct Tbl_80248088 { u8 pad[0x34]; void *win[1]; } Tbl_80248088;

typedef struct Obj_80248088 { u8 pad[4]; Tbl_80248088 *tbl; } Obj_80248088;

typedef struct Part_80248088 { s8 id; u8 a; u8 b; u8 flags; } Part_80248088;

typedef struct Vec2_80247F68 {
    f32 x;
    f32 y;
} Vec2_80247F68;

typedef struct Win_80247F68 {
    u8 pad0[8];
    f32 x;
    f32 y;
    f32 w;
    f32 h;
} Win_80247F68;

struct V2_80248374 { f32 x; f32 y; };

struct Win_80248374 { u8 pad[0x2C]; int f2c; };

extern "C" {
void clear_visible_flag__20TWindowSubStatusDispFPv(void *);
void set_flag0_bit2__15TWindowHelpItemFPv(void *);
int get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int a0);
void swap_sprite_v_edges(void *);
void swap_sprite_u_edges(void *);
void set_sprite_uv_from_pixels(void *, f32, f32);
void set_sprite_dimensions(void *, f32, f32);
extern UV_802480EC TWindowSubSymbolChatPartsSet__part_uv_table[];
extern const f32 lbl_805DCB78;
extern const f32 lbl_805DCB80;
extern const f32 lbl_805DCB84;
extern const f32 lbl_805DCB88;
extern const f32 lbl_805DCB8C;
extern const f32 lbl_805DCB90;
void setup_part_sprites__28TWindowSubSymbolChatPartsSetFPvPvPvUsiiii(Part_802480EC *arg0, Part_802480EC *arg1, Part_802480EC *arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
void set_pos__28TWindowSubSymbolChatPartsSetFPvss(u8 *arg0, s16 arg1, s16 arg2);
void apply_part_to_window__28TWindowSubSymbolChatPartsSetFPvPvi(Obj_80248088 *arg0, Part_80248088 *arg1, s32 arg2);
void clear_visible_flag__20TWindowSubStatusDispFPv(void *);
void set_flag0_bit2__15TWindowHelpItemFPv(void *);
void swap_sprite_v_edges(void *);
void swap_sprite_u_edges(void *);
void set_sprite_uv_from_pixels(void *, f32, f32);
extern const Vec2_80247F68 lbl_8044E82C[];
extern const Vec2_80247F68 lbl_8044EA5C[];
extern const f32 lbl_805DCB7C;
void set_part_sprite__28TWindowSubSymbolChatPartsSetFPvsii(void *arg0, s16 id, s32 a, s32 b);
void set_sprite_uv_from_pixels(void *, f32, f32);
int get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int a0);
extern const V2_80248374 lbl_8044E7EC[];
int set_symbol_chat_face_sprite(void *arg0, u8 b);
}

extern "C" {

struct Ctl_80248324 { u8 pad[4]; s32 *tbl; };

struct RecoveredGlobal_80248494_lbl_804CE2E8 {
    s32 value;
    u8 remaining[0x4B4];
};

typedef char RecoveredGlobal_80248494_lbl_804CE2E8_size[sizeof(RecoveredGlobal_80248494_lbl_804CE2E8) == 0x4B8 ? 1 : -1];

s32 allow_rendering__7TObjectFv(void *);
s32 disallow_rendering__7TObjectFv(void *);
s32 is_symbol_chat_preset_in_use(void *);
s32 get_symbol_chat_preset(s32);
s32 get_data_ptr__20TWindowSubSymbolChatFPv(u32);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
u8 * draw_default_entry__9TWindowDDFi();
s32 draw_quest_message_frame(void *, void *);
int get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int a0);
void get_entry_offset_d__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1);
void TWindowSubSymbolChatPartsSet__sub_802482B8(s32 arg0, s32 arg1);
void get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1);
void get_parts_entry__28TWindowSubSymbolChatPartsSetFii(s32 arg0, s32 arg1);
void fn_80248324(Ctl_80248324 *c, s32 arg1, s32 arg2);
void fn_802483C8(void *arg0, u8 _w1);
void TWindowSubSymbolChat__sub_802483F0(int a0, void* a1);
void set_symbol_chat_parts__20TWindowSubSymbolChatFiPv(s32 arg0, void *arg1);
void init_layout_entries__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1);
void update_visibility__20TWindowSubSymbolChatFPv(u8 *arg0);
void set_selection__20TWindowSubSymbolChatFPvUi(void *arg0, u32 arg1);
void set_from_key__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1);
void render__17TWindowChatSymbolFv(u8 *arg0);
s32 draw_visible_window_entries(void *, void *, void *, f32, f32, f32);
s32 init_window_layout_entries(void *, void *, void *);

extern int symbol_chat_parts_color_table[];
extern RecoveredGlobal_80248494_lbl_804CE2E8 lbl_804CE2E8;
extern const f32 lbl_805DCB78;
extern const f32 lbl_805DCB7C;
extern const float lbl_805DCB94;
extern const float lbl_805DCB98;
extern const f32 lbl_805DCB9C;

int get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int a0) {  return symbol_chat_parts_color_table[a0]; }

void set_pos__28TWindowSubSymbolChatPartsSetFPvss(u8 *arg0, s16 arg1, s16 arg2) {
    *(f32 *)((s8 *)arg0 + 8) = (f32) (lbl_805DCB78 + (f32) arg1);
    *(f32 *)((s8 *)arg0 + 0xC) = (f32) arg2;
}

#pragma push
#pragma fp_contract on
#define o ((Win_80247F68 *)arg0)
void set_part_sprite__28TWindowSubSymbolChatPartsSetFPvsii(void *arg0, s16 id, s32 a, s32 b) {
    const Vec2_80247F68 *e;
    const Vec2_80247F68 *size;
    f32 h;
    f32 w;
    f32 k;
    if (id == -1) {
        set_flag0_bit2__15TWindowHelpItemFPv(o);
        return;
    }
    clear_visible_flag__20TWindowSubStatusDispFPv(o);
    if (id < 0x30) {
        size = &lbl_8044EA5C[0];
    } else if (id < 0x3C) {
        size = &lbl_8044EA5C[1];
    } else {
        size = &lbl_8044EA5C[2];
    }
    k = lbl_805DCB7C;
    w = size->x;
    h = size->y;
    o->x -= k * w;
    o->y -= k * h;
    o->w = w;
    o->h = h;
    e = &lbl_8044E82C[id];
    set_sprite_uv_from_pixels(o, e->x, e->y);
    if (a != 0) {
        swap_sprite_u_edges(o);
    }
    if (b != 0) {
        swap_sprite_v_edges(o);
    }
}
#undef o
#pragma pop

void get_entry_offset_d__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1) {
    get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(arg1 + 0xD));
}

void apply_part_to_window__28TWindowSubSymbolChatPartsSetFPvPvi(Obj_80248088 *arg0, Part_80248088 *arg1, s32 arg2) {
    void *w;
    u8 f;
    w = arg0->tbl->win[arg2];
    set_pos__28TWindowSubSymbolChatPartsSetFPvss((u8 *)(w), (s16)(arg1->a), (s16)(arg1->b));
    f = arg1->flags;
    set_part_sprite__28TWindowSubSymbolChatPartsSetFPvsii((void *)(w), (s16)(arg1->id), (s32)(f & 1), (s32)((f >> 1) & 1));
}

void setup_part_sprites__28TWindowSubSymbolChatPartsSetFPvPvPvUsiiii(Part_802480EC *arg0, Part_802480EC *arg1, Part_802480EC *arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    f32 u;
    f32 v;
    UV_802480EC *uv;
    if (arg3 == 0xFF) {
        set_flag0_bit2__15TWindowHelpItemFPv(arg2);
        set_flag0_bit2__15TWindowHelpItemFPv(arg0);
        set_flag0_bit2__15TWindowHelpItemFPv(arg1);
        return;
    }
    clear_visible_flag__20TWindowSubStatusDispFPv(arg2);
    clear_visible_flag__20TWindowSubStatusDispFPv(arg0);
    clear_visible_flag__20TWindowSubStatusDispFPv(arg1);
    u = lbl_805DCB78 * (f32)(arg3 & 7);
    v = lbl_805DCB78 * (f32)((arg3 >> 3) & 7);
    arg0->kind = ((arg3 >> 6) & 3) + 7;
    arg0->entry = get_parts_entry__28TWindowSubSymbolChatPartsSetFi(arg4);
    if (arg3 <= 0x12) {
        uv = &TWindowSubSymbolChatPartsSet__part_uv_table[arg7];
        set_sprite_dimensions(arg0, lbl_805DCB80, lbl_805DCB80);
        arg2->x = arg0->x - lbl_805DCB84;
        arg2->y = arg0->y;
        set_sprite_dimensions(arg2, lbl_805DCB88, lbl_805DCB8C);
        set_sprite_uv_from_pixels(arg2, uv->u, uv->v);
        set_flag0_bit2__15TWindowHelpItemFPv(arg1);
    } else {
        set_sprite_dimensions(arg0, lbl_805DCB90, lbl_805DCB90);
        arg1->x = arg0->x;
        arg1->y = arg0->y;
        set_flag0_bit2__15TWindowHelpItemFPv(arg2);
    }
    set_sprite_uv_from_pixels(arg0, u, v);
    if (arg5 != 0) {
        swap_sprite_u_edges(arg0);
    }
    if (arg6 != 0) {
        swap_sprite_v_edges(arg0);
    }
}

void TWindowSubSymbolChatPartsSet__sub_802482B8(s32 arg0, s32 arg1) {
    get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(arg1 + 0x1));
}

void get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1) {
    get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(arg1 + 9));
}

void get_parts_entry__28TWindowSubSymbolChatPartsSetFii(s32 arg0, s32 arg1) {
    get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(arg1 + 5));
}

void fn_80248324(Ctl_80248324 *c, s32 arg1, s32 arg2) {
    s32 *p = c->tbl + arg2;
    setup_part_sprites__28TWindowSubSymbolChatPartsSetFPvPvPvUsiiii((Part_802480EC *)(p[5]), (Part_802480EC *)(p[9]), (Part_802480EC *)(p[1]), (u16)((u8)arg1), (s32)((arg1 >> 8) & 7), (s32)((arg1 >> 11) & 1), (s32)((arg1 >> 12) & 1), (s32)(arg2));
}

#define w ((Win_80248374 *)arg0)
int set_symbol_chat_face_sprite(void *arg0, u8 b) {
    const V2_80248374 *e;
    e = &lbl_8044E7EC[b & 3];
    set_sprite_uv_from_pixels(w, e->x, e->y);
    return w->f2c = get_parts_entry__28TWindowSubSymbolChatPartsSetFi((b >> 2) & 7);
}
#undef w

void fn_802483C8(void *arg0, u8 _w1) {
    set_symbol_chat_face_sprite((void *)((void*)(*(s32 *)((s8 *)(*(void **)((s8 *)arg0 + 0x4)) + 0x0))), _w1);
}

void TWindowSubSymbolChat__sub_802483F0(int a0, void* a1) { *(float*)((char*)a1 + 0x0) = lbl_805DCB94; *(float*)((char*)a1 + 0x4) = lbl_805DCB98; }

void set_symbol_chat_parts__20TWindowSubSymbolChatFiPv(s32 arg0, void *arg1) {
    s32 i;
    s32 j;
    s32 off;

    ((s32 (*)(s32, u8))fn_802483C8)(arg0, (u8) *(s32 *)((s8 *)arg1 + 0));
    for (i = 0; i < 4; i += 1) {
        ((s32 (*)(s32, u16, s32))fn_80248324)(arg0, ((u16 *)arg1)[i + 2], i);
    }
    j = 0;
    off = 0;
    do {
        apply_part_to_window__28TWindowSubSymbolChatPartsSetFPvPvi((Obj_80248088 *)(arg0), (Part_80248088 *)((s8 *)arg1 + off + 0xC), (s32)(j));
        off += 4;
        j += 1;
    } while (j < 0xC);
}

void init_layout_entries__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1) {
    init_window_layout_entries((void *) (arg0), (void *) (&lbl_804CE2E8.value), (void *) (arg1));
}

void update_visibility__20TWindowSubSymbolChatFPv(u8 *arg0) {
    if (((s32) *(s32 *)((s8 *)arg0 + 0x64) == 0) && (((u32) *(u32 *)((s8 *)arg0 + 0x60) == 0U) || (is_symbol_chat_preset_in_use((void *) *(u32 *)((s8 *)arg0 + 0x60)) == 0))) {
        disallow_rendering__7TObjectFv(arg0);
        return;
    }
    allow_rendering__7TObjectFv(arg0);
    set_symbol_chat_parts__20TWindowSubSymbolChatFiPv((s32)(arg0 + 0x24), (void *)(get_data_ptr__20TWindowSubSymbolChatFPv(*(u32 *)((s8 *)arg0 + 0x60))));
}

void set_selection__20TWindowSubSymbolChatFPvUi(void *arg0, u32 arg1) {
    if ((u32) *(u32 *)((s8 *)arg0 + 0x60) != arg1) {
        *(u32 *)((s8 *)arg0 + 0x60) = arg1;
        update_visibility__20TWindowSubSymbolChatFPv((u8 *)(arg0));
    }
}

void set_from_key__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1) {
    s8 *tmp = (s8 *)get_symbol_chat_preset(arg1);
    set_selection__20TWindowSubSymbolChatFPvUi((void *)(arg0), (u32)((s32)tmp));
}

#pragma push
#pragma fp_contract on
void render__17TWindowChatSymbolFv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    u8 *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    if ((s32) *(s32 *)((s8 *)temp_r3 + 0x30) < 0) {
        *(f32 *)((s8 *)temp_r3 + 0x28) = (f32) ((f32) *(s32 *)((s8 *)arg0 + 0x5C) / lbl_805DCB9C);
        *(f32 *)((s8 *)temp_r3 + 0x2C) = (f32) *(f32 *)((s8 *)temp_r3 + 0x28);
    }
    draw_quest_message_frame(arg0, temp_r3);
    *(f32 *)((s8 *)temp_r3 + 0x10) = (f32) ((lbl_805DCB7C * (*(f32 *)((s8 *)arg0 + 0x48) - lbl_805DCB94)) + *(f32 *)((s8 *)temp_r3 + 0x10));
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x4C);
    temp_f1 = temp_f2 - lbl_805DCB98;
    *(f32 *)((s8 *)temp_r3 + 0x14) = (f32) ((lbl_805DCB7C * temp_f1) + *(f32 *)((s8 *)temp_r3 + 0x14));
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3, temp_f1, temp_f2, lbl_805DCB7C);
}
extern int fold_flush_0;
#pragma pop

}
