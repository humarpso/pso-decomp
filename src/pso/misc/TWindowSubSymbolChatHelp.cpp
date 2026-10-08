#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80284B84_lbl_804D2D10 {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80284B84___vt__24TWindowSubSymbolChatHelp {
    M2C_UNK value;
    u8 remaining[0x18];
};

struct RecoveredGlobal_80284A28_lbl_8050E208
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

typedef s32 M2C_UNK;
struct Quad_8028429C { f32 x, y, x2, y2, u0, v0, u1, v1; };

struct Win_8028429C { u8 pad[0x10]; f32 x; f32 y; u8 pad2[0x38 - 0x18]; f32 scale; };

struct Self_8028429C { u8 pad[0x60]; u8 flags; u8 pad61[3]; s8 *sel; };

struct UV_802844C8 { f32 u, v; };

struct Quad_802844C8 { f32 x, y, x2, y2, u0, v0, u1, v1; };

struct Win_802844C8 { u8 pad[0x10]; f32 x; f32 y; u8 pad2[0x38 - 0x18]; f32 scale; };

struct Self_802844C8 { u8 pad[0x68]; s32 *mode; };

struct UV_802845EC { f32 u, v; };

struct Quad_802845EC { f32 x, y, x2, y2, u0, v0, u1, v1; };

struct Win_802845EC { u8 pad[0x10]; f32 x; f32 y; u8 pad2[0x38 - 0x18]; f32 scale; };

extern "C" {
void draw_help_entries__24TWindowSubSymbolChatHelpFPvPv(void *arg0, void *arg1);
M2C_UNK draw_window_frame(void *, int);
s32 draw_default_entry__9TWindowDDFi();
extern M2C_UNK __vt__19TWindowMenuMainMenu[];
void render__24TWindowSubSymbolChatHelpFv(s32 arg0);
u8 * get_window_layout_position(s32);
M2C_UNK construct_base__9TWindowDDFPvPvsPv(void *, void *, int, int);
extern RecoveredGlobal_80284B84_lbl_804D2D10 lbl_804D2D10;
extern M2C_UNK __vt__24TWindowSubSymbolChatHelp[];
extern s32 lbl_805D3AB8;
u8 *TWindowSubSymbolChatHelp__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
extern s8 lbl_8050E208[];
void TWindowSubSymbolChatHelp__sub_80284A28(u8 *arg0);
int TWindowSubSymbolChatHelp__sub_80247EE8(int);
int get_parts_entry__28TWindowSubSymbolChatPartsSetFi(int);
void apply_context_transform_to_rect(void *, void *);
void draw_textured_quad_at_depth(void *, f32);
void set_constant_material_color(s32);
void draw_color_palette__24TWindowSubSymbolChatHelpFPvPv(Self_8028429C *arg0, Win_8028429C *arg1);
void apply_context_transform_to_rect(void *, void *);
void draw_textured_quad_at_depth(void *, f32);
void set_constant_material_color(s32);
extern UV_802844C8 lbl_8044FBA4[];
void TWindowSubSymbolChatHelp__sub_802844C8(Self_802844C8 *arg0, Win_802844C8 *arg1, s32 arg2, s32 arg3);
void apply_context_transform_to_rect(void *, void *);
void draw_textured_quad_at_depth(void *, f32);
void set_constant_material_color(s32);
extern UV_802845EC lbl_8044FB74[];
void TWindowSubSymbolChatHelp__sub_802845EC(s32 arg0, Win_802845EC *arg1, s32 arg2, s32 arg3);
}

extern "C" {

void *__dt__24TWindowSubSymbolChatHelpFv(void *arg0, s16 arg1);
void draw_help_entries__24TWindowSubSymbolChatHelpFPvPv(void *arg0, void *arg1);
void handle_toggle_input__24TWindowSubSymbolChatHelpFPv(void *arg0);
void run_task__24TWindowSubSymbolChatHelpFv(void* p);
s32 TWindowShortListCtrl__check_controller_button(void *, M2C_UNK);
M2C_UNK begin_screen_draw(M2C_UNK);
M2C_UNK set_draw_texture_and_color(M2C_UNK, M2C_UNK);
void __dl__7TObjectFPv(void *);
M2C_UNK begin_render__20TWindowSubStatusDispFv();
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
int initialize_subwindow__9TWindowDDFPv(void*);
M2C_UNK set_global_param__8TObjFishFi(s32);

extern s32 lbl_805D63F0;

#pragma push
#pragma fp_contract on
void draw_color_palette__24TWindowSubSymbolChatHelpFPvPv(Self_8028429C *arg0, Win_8028429C *arg1) {
    Quad_8028429C q;
    f32 scale;
    s32 i;
    s32 t;
    scale = (-1.0f) / ((0.1794f) + arg1->scale);
    q.u0 = (0.9375f);
    q.v0 = (0.15234375f);
    q.u1 = (0.9921875f);
    q.v1 = (0.20703125f);
    for (i = 0; i < 8; i++) {
        if (arg0->flags & 2) {
            t = get_parts_entry__28TWindowSubSymbolChatPartsSetFi(i);
        } else {
            t = TWindowSubSymbolChatHelp__sub_80247EE8(i);
        }
        set_constant_material_color(t);
        q.x = (112.0f + arg1->x) + 12.0f * (f32)i;
        q.y = 50.0f + arg1->y;
        q.x2 = 14.0f + q.x;
        q.y2 = 14.0f + q.y;
        apply_context_transform_to_rect(arg1, &q);
        draw_textured_quad_at_depth(&q, scale);
    }
    if (arg0->flags & 2) {
        set_constant_material_color(-1);
    } else {
        set_constant_material_color(0xFF808080);
    }
    q.x = 12.0f * (f32)*arg0->sel + (112.0f + arg1->x);
    q.y = 50.0f + arg1->y;
    q.x2 = 14.0f + q.x;
    q.y2 = 14.0f + q.y;
    q.u0 = (0.87109375f);
    q.v0 = (0.15234375f);
    q.u1 = (0.92578125f);
    q.v1 = (0.20703125f);
    apply_context_transform_to_rect(arg1, &q);
    draw_textured_quad_at_depth(&q, scale);
}
#pragma pop

#pragma push
#pragma fp_contract on
void TWindowSubSymbolChatHelp__sub_802844C8(Self_802844C8 *arg0, Win_802844C8 *arg1, s32 arg2, s32 arg3) {
    Quad_802844C8 q;
    UV_802844C8 *uv;
    f32 scale;
    s32 idx;
    idx = arg2;
    if (arg2 == 2 && *arg0->mode == 1) {
        idx = 6;
    }
    uv = &lbl_8044FBA4[idx];
    scale = (-1.0f) / ((0.1794f) + arg1->scale);
    set_constant_material_color(arg3);
    q.x = (16.0f) + arg1->x;
    q.y = (16.0f) * (f32)arg2 + arg1->y;
    q.x2 = 231.0f + q.x;
    q.y2 = (16.0f) + q.y;
    q.u0 = uv->u / 256.0f;
    q.v0 = uv->v / 256.0f;
    q.u1 = (231.0f + uv->u) / 256.0f;
    q.v1 = ((16.0f) + uv->v) / 256.0f;
    apply_context_transform_to_rect(arg1, &q);
    draw_textured_quad_at_depth(&q, scale);
}
#pragma pop

#pragma push
#pragma fp_contract on
void TWindowSubSymbolChatHelp__sub_802845EC(s32 arg0, Win_802845EC *arg1, s32 arg2, s32 arg3) {
    Quad_802845EC q;
    UV_802845EC *uv;
    f32 scale;
    uv = &lbl_8044FB74[arg2];
    scale = (-1.0f) / ((0.1794f) + arg1->scale);
    set_constant_material_color(arg3);
    q.x = arg1->x;
    q.y = (16.0f) * (f32)arg2 + arg1->y;
    q.x2 = (16.0f) + q.x;
    q.y2 = (16.0f) + q.y;
    q.u0 = uv->u / 256.0f;
    q.v0 = uv->v / 256.0f;
    q.u1 = ((16.0f) + uv->u) / 256.0f;
    q.v1 = ((16.0f) + uv->v) / 256.0f;
    apply_context_transform_to_rect(arg1, &q);
    draw_textured_quad_at_depth(&q, scale);
}
#pragma pop

void draw_help_entries__24TWindowSubSymbolChatHelpFPvPv(void *arg0, void *arg1) {
    if ((s32) M2C_FIELD(arg1, s32 *, 0x30) >= 0) {
        begin_screen_draw(1);
        set_global_param__8TObjFishFi(lbl_805D63F0);
        set_draw_texture_and_color(2, -1);
        TWindowSubSymbolChatHelp__sub_802845EC((s32)(arg0), (Win_802845EC *)(arg1), (s32)(0), (s32)(-1));
        TWindowSubSymbolChatHelp__sub_802845EC((s32)(arg0), (Win_802845EC *)(arg1), (s32)(1), (s32)(-1));
        if (M2C_FIELD(arg0, u8 *, 0x60) & 1) {
            TWindowSubSymbolChatHelp__sub_802845EC((s32)(arg0), (Win_802845EC *)(arg1), (s32)(2), (s32)(-1));
        } else {
            TWindowSubSymbolChatHelp__sub_802845EC((s32)(arg0), (Win_802845EC *)(arg1), (s32)(2), (s32)(0xFF808080));
        }
        if (M2C_FIELD(arg0, u8 *, 0x60) & 2) {
            TWindowSubSymbolChatHelp__sub_802845EC((s32)(arg0), (Win_802845EC *)(arg1), (s32)(3), (s32)(-1));
        } else {
            TWindowSubSymbolChatHelp__sub_802845EC((s32)(arg0), (Win_802845EC *)(arg1), (s32)(3), (s32)(0xFF808080));
        }
        if (M2C_FIELD(arg0, u8 *, 0x60) & 4) {
            TWindowSubSymbolChatHelp__sub_802845EC((s32)(arg0), (Win_802845EC *)(arg1), (s32)(4), (s32)(-1));
            TWindowSubSymbolChatHelp__sub_802845EC((s32)(arg0), (Win_802845EC *)(arg1), (s32)(5), (s32)(-1));
        } else {
            TWindowSubSymbolChatHelp__sub_802845EC((s32)(arg0), (Win_802845EC *)(arg1), (s32)(4), (s32)(0xFF808080));
            TWindowSubSymbolChatHelp__sub_802845EC((s32)(arg0), (Win_802845EC *)(arg1), (s32)(5), (s32)(0xFF808080));
        }
        draw_color_palette__24TWindowSubSymbolChatHelpFPvPv((Self_8028429C *)(arg0), (Win_8028429C *)(arg1));
        get_player__20TWindowSubStatusDispFv();
        begin_screen_draw(1);
        begin_render__20TWindowSubStatusDispFv();
        set_draw_texture_and_color(1, -1);
        TWindowSubSymbolChatHelp__sub_802844C8((Self_802844C8 *)(arg0), (Win_802844C8 *)(arg1), (s32)(0), (s32)(-1));
        TWindowSubSymbolChatHelp__sub_802844C8((Self_802844C8 *)(arg0), (Win_802844C8 *)(arg1), (s32)(1), (s32)(-1));
        if (M2C_FIELD(arg0, u8 *, 0x60) & 1) {
            TWindowSubSymbolChatHelp__sub_802844C8((Self_802844C8 *)(arg0), (Win_802844C8 *)(arg1), (s32)(2), (s32)(-1));
        } else {
            TWindowSubSymbolChatHelp__sub_802844C8((Self_802844C8 *)(arg0), (Win_802844C8 *)(arg1), (s32)(2), (s32)(0xFF808080));
        }
        if (M2C_FIELD(arg0, u8 *, 0x60) & 2) {
            TWindowSubSymbolChatHelp__sub_802844C8((Self_802844C8 *)(arg0), (Win_802844C8 *)(arg1), (s32)(3), (s32)(-1));
        } else {
            TWindowSubSymbolChatHelp__sub_802844C8((Self_802844C8 *)(arg0), (Win_802844C8 *)(arg1), (s32)(3), (s32)(0xFF808080));
        }
        if (M2C_FIELD(arg0, u8 *, 0x60) & 4) {
            TWindowSubSymbolChatHelp__sub_802844C8((Self_802844C8 *)(arg0), (Win_802844C8 *)(arg1), (s32)(4), (s32)(-1));
            TWindowSubSymbolChatHelp__sub_802844C8((Self_802844C8 *)(arg0), (Win_802844C8 *)(arg1), (s32)(5), (s32)(-1));
        } else {
            TWindowSubSymbolChatHelp__sub_802844C8((Self_802844C8 *)(arg0), (Win_802844C8 *)(arg1), (s32)(4), (s32)(0xFF808080));
            TWindowSubSymbolChatHelp__sub_802844C8((Self_802844C8 *)(arg0), (Win_802844C8 *)(arg1), (s32)(5), (s32)(0xFF808080));
        }
        get_player__20TWindowSubStatusDispFv();
    }
}

extern s8 lbl_8050E208[];

void handle_toggle_input__24TWindowSubSymbolChatHelpFPv(void *arg0) {
    s32 *temp_r3;
    s32 *temp_r3_2;
    void *temp_r31;

    if (M2C_FIELD(arg0, u8 *, 0x60) & 4) {
        temp_r31 = lbl_8050E208 + 0x20;
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 0x10000) != 0) {
            temp_r3 = M2C_FIELD(arg0, s32 **, 0x6C);
            if ((s32) *temp_r3 != 0) {
                *temp_r3 = 0;
            } else {
                *temp_r3 = 1;
            }
        }
        if (TWindowShortListCtrl__check_controller_button(temp_r31, 0x20000) != 0) {
            temp_r3_2 = M2C_FIELD(arg0, s32 **, 0x70);
            if ((s32) *temp_r3_2 != 0) {
                *temp_r3_2 = 0;
                return;
            }
            *temp_r3_2 = 1;
        }
    }
}

}
extern "C" {

typedef struct RecoveredGlobal_80284A28_lbl_8050E208 RecoveredGlobal_80284A28_lbl_8050E208;
void TWindowSubSymbolChatHelp__sub_80284A28(u8 *arg0) {
  u8 *temp_r4;
  u8 *temp_r4_2;
  int new_var;
  u8 temp_r3;
  new_var = (int) 0x200;
  if (((*((u8 *) (((s8 *) arg0) + 0x60))) & 2) && (TWindowShortListCtrl__check_controller_button((void *)((void *) (((u8 *) (&(*(RecoveredGlobal_80284A28_lbl_8050E208 *)&lbl_8050E208).value)) + 0x20)), (M2C_UNK)(new_var)) != 0))
  {
    temp_r4 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x64)));
    *temp_r4 += 1;
    temp_r4_2 = (u8 *) (*((u8 **) (((s8 *) arg0) + 0x64)));
    ;
    if (((s8) (*temp_r4_2)) >= 8)
    {
      *temp_r4_2 = (*temp_r4_2) - 8;
    }
  }
}

void render__24TWindowSubSymbolChatHelpFv(s32 arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_help_entries__24TWindowSubSymbolChatHelpFPvPv((void *)((void *) (arg0)), (void *)((int) (temp_r3)));
}

void run_task__24TWindowSubSymbolChatHelpFv(void* p) { TWindowSubSymbolChatHelp__sub_80284A28((u8 *)(p)); handle_toggle_input__24TWindowSubSymbolChatHelpFPv((void *)(p)); initialize_subwindow__9TWindowDDFPv(p); }

extern M2C_UNK __vt__24TWindowSubSymbolChatHelp[];

void *__dt__24TWindowSubSymbolChatHelpFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__24TWindowSubSymbolChatHelp;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80284B84_lbl_804D2D10_size[sizeof(RecoveredGlobal_80284B84_lbl_804D2D10) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80284B84___vt__24TWindowSubSymbolChatHelp_size[sizeof(RecoveredGlobal_80284B84___vt__24TWindowSubSymbolChatHelp) == 0x1C ? 1 : -1];
u8 *TWindowSubSymbolChatHelp__ct(u8 *arg0, s32 arg1, s32 arg2) {
    construct_base__9TWindowDDFPvPvsPv((void *) (arg0), (void *) (&lbl_804D2D10.value), (int) (4), (int) (get_window_layout_position(0x7E)));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80284B84___vt__24TWindowSubSymbolChatHelp *)&__vt__24TWindowSubSymbolChatHelp).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3AB8;
    M2C_FIELD(arg0, s8 *, 0x60) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
    M2C_FIELD(arg0, s32 *, 0x68) = arg2;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    return arg0;
}

}
