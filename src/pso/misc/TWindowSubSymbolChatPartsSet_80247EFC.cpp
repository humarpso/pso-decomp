#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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

extern "C" {
void clear_visible_flag__20TWindowSubStatusDispFPv(void *);
void set_flag0_bit2__15TWindowHelpItemFPv(void *);
int get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int a0);
void TWindowSubSymbolChatPartsSet__sub_8025B050(void *);
void TWindowSubSymbolChatPartsSet__sub_8025B064(void *);
void set_sprite_uv_from_pixels(void *, f32, f32);
void TWindowSubSymbolChatPartsSet__sub_8025B0C4(void *, f32, f32);
extern UV_802480EC lbl_8044E80C[];
extern const f32 lbl_805DCB78;
extern const f32 lbl_805DCB80;
extern const f32 lbl_805DCB84;
extern const f32 lbl_805DCB88;
extern const f32 lbl_805DCB8C;
extern const f32 lbl_805DCB90;
void TWindowSubSymbolChatPartsSet__sub_802480EC(Part_802480EC *arg0, Part_802480EC *arg1, Part_802480EC *arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7);
}

extern "C" {

struct Ctl_80248324 { u8 pad[4]; s32 *tbl; };

struct RecoveredGlobal_80248494_lbl_804CE2E8 {
    M2C_UNK value;
    u8 remaining[0x4B4];
};

typedef char RecoveredGlobal_80248494_lbl_804CE2E8_size[sizeof(RecoveredGlobal_80248494_lbl_804CE2E8) == 0x4B8 ? 1 : -1];

M2C_UNK allow_rendering__7TObjectFv(void *);
M2C_UNK disallow_rendering__7TObjectFv(void *);
s32 TWindowSubSymbolChat__sub_80077464(void *);
s32 TWindowSubSymbolChat__sub_80077480(s32);
s32 get_data_ptr__20TWindowSubSymbolChatFPv(u32);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
u8 * draw_default_entry__9TWindowDDFi();
M2C_UNK draw_quest_message_frame(void *, void *);
int get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int a0);
void get_entry_offset_d__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1);
M2C_UNK TWindowSubSymbolChatPartsSet__sub_80248088(s32, void *, s32);
void TWindowSubSymbolChatPartsSet__sub_802482B8(s32 arg0, s32 arg1);
void get_parts_entry__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1);
void get_parts_entry__28TWindowSubSymbolChatPartsSetFii(s32 arg0, s32 arg1);
void fn_80248324(Ctl_80248324 *c, s32 arg1, s32 arg2);
int fn_80248374(void*);
void fn_802483C8(void *arg0);
void TWindowSubSymbolChat__sub_802483F0(int a0, void* a1);
void set_symbol_chat_parts__20TWindowSubSymbolChatFiPv(s32 arg0, void *arg1);
void TWindowSubSymbolChat__sub_80248494(s32 arg0, s32 arg1);
void TWindowSubSymbolChat__sub_802484C0(u8 *arg0);
void set_selection__20TWindowSubSymbolChatFPvUi(void *arg0, u32 arg1);
void set_from_key__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1);
void render__17TWindowChatSymbolFv(u8 *arg0);
M2C_UNK draw_visible_window_entries(void *, void *, void *, f32, f32, f32);
s32 init_window_layout_entries(void *, void *, void *);

extern int lbl_8044EA74[];
extern RecoveredGlobal_80248494_lbl_804CE2E8 lbl_804CE2E8;
extern const f32 lbl_805DCB78;
extern const f32 lbl_805DCB7C;
extern const float lbl_805DCB94;
extern const float lbl_805DCB98;
extern const f32 lbl_805DCB9C;

int get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int a0) {  return lbl_8044EA74[a0]; }

void TWindowSubSymbolChatPartsSet__sub_80247F10(u8 *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, f32 *, 8) = (f32) (lbl_805DCB78 + (f32) arg1);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) arg2;
}

void get_entry_offset_d__28TWindowSubSymbolChatPartsSetFPvi(void *arg0, s32 arg1) {
    get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(arg1 + 0xD));
}

void TWindowSubSymbolChatPartsSet__sub_802480EC(Part_802480EC *arg0, Part_802480EC *arg1, Part_802480EC *arg2, u16 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
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
        uv = &lbl_8044E80C[arg7];
        TWindowSubSymbolChatPartsSet__sub_8025B0C4(arg0, lbl_805DCB80, lbl_805DCB80);
        arg2->x = arg0->x - lbl_805DCB84;
        arg2->y = arg0->y;
        TWindowSubSymbolChatPartsSet__sub_8025B0C4(arg2, lbl_805DCB88, lbl_805DCB8C);
        set_sprite_uv_from_pixels(arg2, uv->u, uv->v);
        set_flag0_bit2__15TWindowHelpItemFPv(arg1);
    } else {
        TWindowSubSymbolChatPartsSet__sub_8025B0C4(arg0, lbl_805DCB90, lbl_805DCB90);
        arg1->x = arg0->x;
        arg1->y = arg0->y;
        set_flag0_bit2__15TWindowHelpItemFPv(arg2);
    }
    set_sprite_uv_from_pixels(arg0, u, v);
    if (arg5 != 0) {
        TWindowSubSymbolChatPartsSet__sub_8025B064(arg0);
    }
    if (arg6 != 0) {
        TWindowSubSymbolChatPartsSet__sub_8025B050(arg0);
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
    TWindowSubSymbolChatPartsSet__sub_802480EC((Part_802480EC *)(p[5]), (Part_802480EC *)(p[9]), (Part_802480EC *)(p[1]), (u16)((u8)arg1), (s32)((arg1 >> 8) & 7), (s32)((arg1 >> 11) & 1), (s32)((arg1 >> 12) & 1), (s32)(arg2));
}

void fn_802483C8(void *arg0) {
    fn_80248374((void*)(M2C_FIELD(M2C_FIELD(arg0, void **, 0x4), s32 *, 0x0)));
}

void TWindowSubSymbolChat__sub_802483F0(int a0, void* a1) { *(float*)((char*)a1 + 0x0) = lbl_805DCB94; *(float*)((char*)a1 + 0x4) = lbl_805DCB98; }

void set_symbol_chat_parts__20TWindowSubSymbolChatFiPv(s32 arg0, void *arg1) {
    s32 i;
    s32 j;
    s32 off;

    ((M2C_UNK (*)(s32, u8))fn_802483C8)(arg0, (u8) M2C_FIELD(arg1, s32 *, 0));
    for (i = 0; i < 4; i += 1) {
        ((M2C_UNK (*)(s32, u16, s32))fn_80248324)(arg0, ((u16 *)arg1)[i + 2], i);
    }
    j = 0;
    off = 0;
    do {
        TWindowSubSymbolChatPartsSet__sub_80248088(arg0, (s8 *)arg1 + off + 0xC, j);
        off += 4;
        j += 1;
    } while (j < 0xC);
}

void TWindowSubSymbolChat__sub_80248494(s32 arg0, s32 arg1) {
    init_window_layout_entries((void *) (arg0), (void *) (&lbl_804CE2E8.value), (void *) (arg1));
}

void TWindowSubSymbolChat__sub_802484C0(u8 *arg0) {
    if (((s32) M2C_FIELD(arg0, s32 *, 0x64) == 0) && (((u32) M2C_FIELD(arg0, u32 *, 0x60) == 0U) || (TWindowSubSymbolChat__sub_80077464((void *) M2C_FIELD(arg0, u32 *, 0x60)) == 0))) {
        disallow_rendering__7TObjectFv(arg0);
        return;
    }
    allow_rendering__7TObjectFv(arg0);
    set_symbol_chat_parts__20TWindowSubSymbolChatFiPv((s32)(arg0 + 0x24), (void *)(get_data_ptr__20TWindowSubSymbolChatFPv(M2C_FIELD(arg0, u32 *, 0x60))));
}

void set_selection__20TWindowSubSymbolChatFPvUi(void *arg0, u32 arg1) {
    if ((u32) M2C_FIELD(arg0, u32 *, 0x60) != arg1) {
        M2C_FIELD(arg0, u32 *, 0x60) = arg1;
        TWindowSubSymbolChat__sub_802484C0((u8 *)(arg0));
    }
}

void set_from_key__20TWindowSubSymbolChatFii(s32 arg0, s32 arg1) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)TWindowSubSymbolChat__sub_80077480(arg1);
    set_selection__20TWindowSubSymbolChatFPvUi((void *)(arg0), (u32)((s32)tmp));
}

#pragma push
#pragma fp_contract on
void render__17TWindowChatSymbolFv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    u8 *temp_r3;

    temp_r3 = draw_default_entry__9TWindowDDFi();
    if ((s32) M2C_FIELD(temp_r3, s32 *, 0x30) < 0) {
        M2C_FIELD(temp_r3, f32 *, 0x28) = (f32) ((f32) M2C_FIELD(arg0, s32 *, 0x5C) / lbl_805DCB9C);
        M2C_FIELD(temp_r3, f32 *, 0x2C) = (f32) M2C_FIELD(temp_r3, f32 *, 0x28);
    }
    draw_quest_message_frame(arg0, temp_r3);
    M2C_FIELD(temp_r3, f32 *, 0x10) = (f32) ((lbl_805DCB7C * (M2C_FIELD(arg0, f32 *, 0x48) - lbl_805DCB94)) + M2C_FIELD(temp_r3, f32 *, 0x10));
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x4C);
    temp_f1 = temp_f2 - lbl_805DCB98;
    M2C_FIELD(temp_r3, f32 *, 0x14) = (f32) ((lbl_805DCB7C * temp_f1) + M2C_FIELD(temp_r3, f32 *, 0x14));
    draw_visible_window_entries(arg0, arg0 + 0x24, temp_r3, temp_f1, temp_f2, lbl_805DCB7C);
}
extern int fold_flush_0;
#pragma pop

}
