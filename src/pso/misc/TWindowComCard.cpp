#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80249BA8_lbl_804CE8D0 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80249BA8___vt__14TWindowComCard {
    M2C_UNK value;
    u8 remaining[0x18];
};

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK draw_window_frame(void *, int);
M2C_UNK draw_visible_window_entries(void *, void *, int);
extern M2C_UNK __vt__14TWindowMessage[];
void render__14TWindowComCardFv(s32 arg0);
extern u8 *text_language_group_table;
s32 get_class_name_text(s32 arg0);
s32 TWindowSubComCard__sub_8007B070(s32);
s32 get_keyboard_mode__17TWindowSubComCardFv(void);
M2C_UNK clear_and_init__17TWindowSubComCardFPvPv(int, void *);
void *__nw__7TObjectFUl(int);
extern s32 local_client_id;
s32 create_com_card_window__17TWindowSubComCardFi(s32 arg0);
void *__nw__7TObjectFUl(int);
u8 *create_for_card__14TWindowComCardFiii(s32 arg0, s32 arg1, s32 arg2);
u8 * construct_base__9TWindowDDFPvPvsPv(void *, s32, s16, s32);
M2C_UNK update_com_card_display(s32, s32);
extern s32 lbl_805D38C0;
u8 *TWindowComCard__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TWindowComCard__sub_80249920(s32 arg0, s32 arg1, s32 arg2);
u8 TWindowComCard__sub_80249C18(void* p);
u8 TWindowComCard__sub_80249C20(void* p);
void *__dt__14TWindowComCardFv(void *arg0, s16 arg1);
void * create__14TWindowComCardFPvPv(void *arg0, void *arg1);
void* get_kbd_ptr__14TWindowComCardFPv(void* p);
void run_task__14TWindowComCardFv(void* p);
void set_display_value__14TWindowComCardFiii(s32 arg0, s32 arg1, s32 arg2);
void *get_card_entry__17TWindowSubComCardFi(void *);
int update_window_entry_list(void*, void*);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK update_com_card_display(s32, s32);
int initialize_subwindow__9TWindowDDFPv(void*);
int update_fade__17TWindowSubComCardFPv(void*);

extern "C" u8 lbl_8044EB28[];
extern "C" u8 lbl_8044EB30[];
extern "C" u8 lbl_8044EB38[];
extern "C" u8 lbl_8044EB40[];
extern "C" u8 lbl_8044EB48[];
extern "C" u8 lbl_805D63F0[];
extern "C" u8 lbl_805DCBC8[];
extern "C" void render_shadows__7TObjectFv();
void TWindowComCard__sub_80249E24(u8 *arg0);
void *TWindowComCard__sub_80249E80(void *arg0, s16 arg1);
void update_status_disp__14TWindowComCardFi(s32 arg0);
extern void *lbl_804CE820[44];
extern void *lbl_804CE918[14];
void *lbl_804CE820[44] = {
    (void *)0x6, (void *)0x1, (void *)0x3, (void *)0x0,
    (void *)0x0, (void *)0x3f000000, (void *)0xffffffff, (void *)0x40,
    (void *)0x0, (void *)0x3, (void *)0x43460000, (void *)0x41a00000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x40, (void *)0x0,
    (void *)0x3, (void *)0x0, (void *)0x42200000, (void *)0x3f000000,
    (void *)0xffffffff, (void *)0x40, (void *)0x0, (void *)0x3,
    (void *)0x0, (void *)0x42700000, (void *)0x3f000000, (void *)0xffffffff,
    (void *)0x40, (void *)0x0, (void *)0x3, (void *)0x0,
    (void *)0x42a00000, (void *)0x3f000000, (void *)0xffffffff, (void *)0x40,
    (void *)0x0, (void *)0x3, (void *)0x0, (void *)0x42c80000,
    (void *)0x3f000000, (void *)0xffffffff, (void *)0x0, (void *)0x0,
};
void *TWindowComCard__window_desc[5] = {
    (void *)0x434e0000, (void *)0x43340000, (void *)0x4743b400, (void *)&lbl_804CE820,
    (void *)0x23,
};
void *com_card_status_text_table[6] = {
    (void *)&lbl_8044EB28, (void *)&lbl_8044EB30, (void *)&lbl_8044EB38, (void *)&lbl_805DCBC8,
    (void *)&lbl_8044EB40, (void *)&lbl_8044EB48,
};
void *__vt__14TWindowComCard[7] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__14TWindowComCardFv, (void *)&run_task__14TWindowComCardFv,
    (void *)&render__14TWindowComCardFv, (void *)&render_shadows__7TObjectFv, (void *)0x0,
};
void *lbl_804CE918[14] = {
    (void *)0x1, (void *)0x1, (void *)0x6, (void *)0x0,
    (void *)0x0, (void *)0x42000000, (void *)0x41e00000, (void *)0x0,
    (void *)0x0, (void *)0x3f000000, (void *)0xffffffff, (void *)&lbl_805D63F0,
    (void *)0x1, (void *)0x4,
};
void *TWindowComCard__window_desc_b[5] = {
    (void *)0x42000000, (void *)0x41e00000, (void *)0x4788d100, (void *)&lbl_804CE918,
    (void *)0x82b,
};
void *lbl_804CE964[6] = {
    (void *)0x0, (void *)0x0, (void *)&TWindowComCard__sub_80249E80, (void *)&TWindowComCard__sub_80249E24,
    (void *)&update_status_disp__14TWindowComCardFi, (void *)&render_shadows__7TObjectFv,
};
#define TWindowComCard__window_desc (*(RecoveredGlobal_80249BA8_lbl_804CE8D0 *)TWindowComCard__window_desc)
#define __vt__14TWindowComCard ((M2C_UNK *)__vt__14TWindowComCard)
#define TWindowComCard__window_desc_b ((s32 *)TWindowComCard__window_desc_b)
#define lbl_804CE964 ((M2C_UNK *)lbl_804CE964)

void TWindowComCard__sub_80249920(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp = arg2 + (arg1 * 0x90);
    if (temp != 0) {
        update_com_card_display(arg0 + 0x24, temp);
    }
}

void set_display_value__14TWindowComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp = arg2 + (arg1 << 8);
    if (temp != 0) {
        update_com_card_display(arg0 + 0x24, temp);
    }
}

u8 *create_for_card__14TWindowComCardFiii(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r30;
    s32 var_r31;
    s32 var_r4;
    s32 var_r5;
    u8 *temp_r3;
    u8 *var_r0;
    u8 *var_r3;
    var_r30 = arg0;
    if (arg1 < 0) {
        var_r3 = (u8 *)(NULL);
        return NULL;
    }
    var_r3 = (u8 *)((void *)0x60);
    var_r31 = arg2 + (arg1 * 0x90);
    temp_r3 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x60))));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r4 = var_r30;
        var_r5 = var_r31;
        var_r0 = (u8 *)(((u8 *)TWindowComCard__ct((u8 *)((void *)(temp_r3)), (s32)((void *)(var_r4)), (s32)((void *)(var_r5)))));
    }
    var_r3 = (u8 *)(var_r0);
    return var_r3;
}

void * create__14TWindowComCardFPvPv(void *arg0, void *arg1) {
    void *x0;
    void *o;
    x0 = get_card_entry__17TWindowSubComCardFi(arg1);
    if (x0 == NULL) {
        return NULL;
    }
    o = __nw__7TObjectFUl(0x60);
    if (o != NULL) {
        o = TWindowComCard__ct((u8 *)(o), (s32)(arg0), (s32)(x0));
    }
    return o;
}

}
extern "C" {

s32 create_com_card_window__17TWindowSubComCardFi(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r0;
    temp_r3 = get_keyboard_mode__17TWindowSubComCardFv();
    if (temp_r3 == 0) {
        return 0;
    }
    if (TWindowSubComCard__sub_8007B070(temp_r3) != 0) {
        clear_and_init__17TWindowSubComCardFPvPv((int) (temp_r3), (void *) (local_client_id));
    }
    temp_r3_2 = ((s32)__nw__7TObjectFUl((int) (0x60)));
    var_r0 = temp_r3_2;
    if (var_r0 != 0) {
        var_r0 = ((s32)TWindowComCard__ct((u8 *)((void *)(temp_r3_2)), (s32)((void *)(arg0)), (s32)((void *)(temp_r3))));
    }
    return var_r0;
}

void render__14TWindowComCardFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
}

void run_task__14TWindowComCardFv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); update_window_entry_list(p, (char*)p + 0x24); }

void *__dt__14TWindowComCardFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__14TWindowComCard;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80249BA8_lbl_804CE8D0_size[sizeof(RecoveredGlobal_80249BA8_lbl_804CE8D0) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80249BA8___vt__14TWindowComCard_size[sizeof(RecoveredGlobal_80249BA8___vt__14TWindowComCard) == 0x1C ? 1 : -1];
u8 *TWindowComCard__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_base__9TWindowDDFPvPvsPv(arg0, (s32) &TWindowComCard__window_desc.value, 4, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = (M2C_UNK *)__vt__14TWindowComCard;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D38C0;
    update_com_card_display((s32)(arg0 + 0x24), (s32)(arg2));
    return arg0;
}

void* get_kbd_ptr__14TWindowComCardFPv(void* p) { return (char*)p + 0x20; }
u8 TWindowComCard__sub_80249C18(void* p) { return *(u8*)((char*)p + 0x8e); }
u8 TWindowComCard__sub_80249C20(void* p) { return *(u8*)((char*)p + 0x8d); }
s32 get_class_name_text(s32 arg0) {
    return M2C_FIELD(M2C_FIELD(text_language_group_table, s32 *, 0x1C), M2C_UNK *, (arg0 * 4));
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 get_status_effect_icon_index(u32 arg0);
}

extern "C" {

void set_help_mode__14TWindowComCardFPvi(void *arg0, s32 arg1);
void* get_card_name_ptr__14TWindowComCardFPv(void* p);
M2C_UNK set_sprite_uv_from_pixels(void *, f32, f32);

extern u8 com_card_help_panel_rect_table[];

void set_help_mode__14TWindowComCardFPvi(void *arg0, s32 arg1) {
    void *temp_r4;

    if (arg1 == 0xE) {
        M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) | 2);
        return;
    }
    M2C_FIELD(arg0, u16 *, 0) = (u16) (M2C_FIELD(arg0, u16 *, 0) & 0xFFFFFFFD);
    if (arg1 < 0xA) {
        M2C_FIELD(arg0, s32 *, 0x34) = 1;
    } else {
        M2C_FIELD(arg0, s32 *, 0x34) = 2;
    }
    temp_r4 = com_card_help_panel_rect_table + (arg1 * 8);
    set_sprite_uv_from_pixels(arg0, M2C_FIELD(temp_r4, f32 *, 0), M2C_FIELD(temp_r4, f32 *, 4));
}

void* get_card_name_ptr__14TWindowComCardFPv(void* p) { return (char*)p + 0xa; }
s32 get_status_effect_icon_index(u32 arg0) {
    switch (arg0) {
    case 3:
        return 1;
    case 9:
        return 6;
    case 10:
        return 8;
    case 11:
        return 7;
    case 12:
        return 9;
    case 15:
        return 3;
    case 16:
        return 4;
    case 17:
        return 5;
    case 18:
        return 0;
    case 2:
        return 2;
    default:
        return 0xE;
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void set_selected_index__14TWindowComCardFPvi(void *arg0, s32 arg1);
M2C_UNK get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);

void set_selected_index__14TWindowComCardFPvi(void *arg0, s32 arg1) {
    M2C_UNK temp;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x70) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x70) = arg1;
        temp = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
        ((M2C_UNK (*)(M2C_UNK, s32))set_help_mode__14TWindowComCardFPvi)(temp, M2C_FIELD(arg0, s32 *, 0x70));
    }
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowComCard__sub_80249D7C(u8 *arg0, s32 arg1);

extern const f32 lbl_805DCBD0;

#pragma push
#pragma fp_contract on
void TWindowComCard__sub_80249D7C(u8 *arg0, s32 arg1) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x6C) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x6C) = arg1;
        M2C_FIELD(arg0, f32 *, 0x30) = (f32) ((lbl_805DCBD0 * (f32) M2C_FIELD(arg0, s32 *, 0x6C)) + (M2C_FIELD(M2C_FIELD(arg0, void **, 0x60), f32 *, 0x40) + M2C_FIELD(arg0, f32 *, 0x64)));
        M2C_FIELD(arg0, s32 *, 0x50) = 0xF;
    }
}
#pragma pop

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
typedef struct Parent_80249ED8 {
    u8 pad0[0x40];
    f32 x;
    f32 y;
} Parent_80249ED8;

typedef struct Vec2_80249ED8 {
    f32 x;
    f32 y;
} Vec2_80249ED8;

typedef struct Win_80249ED8 {
    u8 pad0[0x18];
    s32 *vtbl;
    u8 pad1C[0x30 - 0x1C];
    f32 x;
    f32 y;
    u8 pad38[0x60 - 0x38];
    Parent_80249ED8 *parent;
    Vec2_80249ED8 ofs;
    s32 col;
    s32 mode;
} Win_80249ED8;

void save_position__17TWindowSubComCardFPv(void *p);
s32 get_zero_vec2();
extern const f32 lbl_805DCBD0;
void TWindowComCard__sub_80249E24(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
extern struct Obj054_80249DE4 *TWindowCtrl__data_805D63F8;
extern u16 lbl_805D63FC;
void close_request_window__19TWindowTradeRequestFv(void);
}

extern "C" {

struct Obj054_80249DE4 { char pad[0x38]; u32 field38; };

void *TWindowComCard__sub_80249E80(void *arg0, s16 arg1);
void request_active_window_close(void);
void update_status_disp__14TWindowComCardFi(s32 arg0);
void __dl__7TObjectFPv(void *);
void destroy_window_base__9TWindowDDFPvs(void *, int);
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK set_flag1e_bit8__11TWindowCtrlFPv(void*);

void update_status_disp__14TWindowComCardFi(s32 arg0) {
    M2C_UNK8 *tmp = (M2C_UNK8 *)draw_default_entry__9TWindowDDFi();
    ((M2C_UNK (*)(s32, s32, s32))draw_visible_window_entries)(arg0, arg0 + 0x24, (s32)tmp);
}

void TWindowComCard__sub_80249E24(u8 *arg0) {
    f32 temp_f1;
    u8 *temp_r4;
    temp_r4 = (unsigned char *) (M2C_FIELD(arg0, void **, 0x60));
    temp_f1 = M2C_FIELD(temp_r4, f32 *, 0x44);
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) (temp_f1 + M2C_FIELD(arg0, f32 *, 0x68));
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    ((M2C_UNK (*)(void *, int, f32))initialize_subwindow__9TWindowDDFPv)((void *)(arg0), (int) (temp_r4), (f32) (temp_f1));
    ((M2C_UNK (*)(void *))update_fade__17TWindowSubComCardFPv)((void *) (arg0));
    ((M2C_UNK (*)(void *, void *))update_window_entry_list)((void *) (arg0), (void *) (arg0 + 0x24));
}

void *TWindowComCard__sub_80249E80(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE964;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma fp_contract on
Win_80249ED8 *TWindowComCard__sub_80249ED8(Win_80249ED8 *o, Parent_80249ED8 *parent, Vec2_80249ED8 *ofs, s32 col, s32 mode, s32 arg5) {
    ((void (*)(void *, void *, s16, s32))construct_base__9TWindowDDFPvPvsPv)(o, TWindowComCard__window_desc_b, arg5, get_zero_vec2());
    o->vtbl = (s32 *)lbl_804CE964;
    o->parent = parent;
    o->ofs.x = ofs->x;
    o->ofs.y = ofs->y;
    o->col = col;
    o->mode = mode;
    o->x = lbl_805DCBD0 * (f32)o->col + (o->parent->x + o->ofs.x);
    o->y = o->parent->y + o->ofs.y;
    save_position__17TWindowSubComCardFPv(o);
    ((M2C_UNK (*)(M2C_UNK, s32))set_help_mode__14TWindowComCardFPvi)((M2C_UNK)((void * (*)(void *, s32))get_array_entry__20TWindowSubStatusDispFPvi)(o, 0), mode);
    return o;
}
#pragma pop

extern struct Obj054_80249DE4 *TWindowCtrl__data_805D63F8;

void close_request_window__19TWindowTradeRequestFv(void) {
    u8 *temp_r3;
    lbl_805D63FC &= 0xFFFFFFF7;
    if ((void *) (*(u8 * *)&TWindowCtrl__data_805D63F8) != NULL) {
        temp_r3 = (u8 *)(M2C_FIELD((*(u8 * *)&TWindowCtrl__data_805D63F8), u8 **, 0x40));
        if (temp_r3 != NULL) {
            queue_destruction__7TObjectFv(temp_r3);
            M2C_FIELD((*(u8 * *)&TWindowCtrl__data_805D63F8), u8 **, 0x40) = NULL;
        }
    }
}

void request_active_window_close(void) {
    if ((TWindowCtrl__data_805D63F8 != NULL) && (TWindowCtrl__data_805D63F8->field38 != 0U)) {
        set_flag1e_bit8__11TWindowCtrlFPv((void*)TWindowCtrl__data_805D63F8->field38);
    }
}

}
