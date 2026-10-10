#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Quad_802710C4 { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

extern "C" {

u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
f32 TWindowSubComCard__sub_80244784(void *);
M2C_UNK TWindowSubComCard__sub_802452DC(int);
M2C_UNK TWindowSubComCard__sub_80245320(void *, void *);
M2C_UNK TWindowSubComCard__sub_802454E4(int);
s32 TWindowSubComCard__sub_80245558(void *, void *, void *);
s32 apply_context_transform_to_rect(void *, void *);
void draw_photon_blast_gauge_ring(s32, void *, const f32 *, f32, f32);
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK begin_screen_draw(int);
M2C_UNK get_player__20TWindowSubStatusDispFv();
M2C_UNK draw_textured_quad_at_depth(void *, f32);
M2C_UNK set_draw_texture_and_color(int, int);
extern const f32 lbl_8044F650[];
extern const f32 lbl_805DD434;
extern void *lbl_805D63F0;

s16 obj_getS16_2BA(void *);
s16 get_field_2b8__14TItemProShieldFPv(void *);
s32 get_sub_value__8TItemMagFi(void *);
u8 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
void update_status_entry__20TWindowSubStatusDispFi(void *);
s32 update_hp_gauge__20TWindowSubStatusDispFi(void *);
u8 *get_player_by_client_id();
M2C_UNK get_width__11TWindowCtrlFPv();
M2C_UNK draw_right_aligned_number(void *);
M2C_UNK set_status_entry_target(void *, s32);
s32 update_hp_entry__20TWindowSubStatusDispFPv(void *);
extern const f32 lbl_805DD430;
void update_hp_tp_values__20TWindowSubStatusDispFPv(u8 *arg0);

s32 draw_default_entry__9TWindowDDFi(void *, f32, f32);
M2C_UNK draw_visible_window_entries(void *, void *, int);

extern const f32 lbl_805DD470;
extern const f32 lbl_805DD474;
void render__13TWindowStatusFv(u8 *arg0);

void *TWindowStatus__ct(void *arg0);
void *__dt__13TWindowStatusFv(void *arg0, s16 arg1);
void run_task__13TWindowStatusFv(s32 arg0);
M2C_UNK update_status_icons__14TWindowComCardFPvPv(s32, s32);
void TWindowSimpleStatus__ct(void *);
s32 get_window_layout_position(M2C_UNK);
M2C_UNK update_window_entry_list(s32, s32);

void __dl__7TObjectFPv(void *);
void __dt__19TWindowSimpleStatusFv(void *, int);
M2C_UNK update_lockon_window(s32);
M2C_UNK initialize_subwindow__9TWindowDDFPv(s32);
M2C_UNK update_fade__17TWindowSubComCardFPv(s32);
M2C_UNK update_status_help_item(s32);

void update_hp_tp_values__20TWindowSubStatusDispFPv(u8 *arg0) {
    u8 *pl;
    u8 *e;
    u8 *a;
    u8 *b;
    u8 *c;
    u8 *d;
    s32 v;
    get_width__11TWindowCtrlFPv();
    pl = get_player_by_client_id();
    if (pl != NULL) {
        a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 7);
        b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 9);
        c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 6);
        d = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 8);
        M2C_FIELD(b, s32 *, 0x20) = get_field_2b8__14TItemProShieldFPv(pl);
        M2C_FIELD(a, s32 *, 0x20) = M2C_FIELD(pl, s16 *, 0x32C);
        v = update_hp_entry__20TWindowSubStatusDispFPv(arg0);
        M2C_FIELD(a, s32 *, 0x1C) = v;
        M2C_FIELD(c, s32 *, 0x24) = v;
        M2C_FIELD(b, s32 *, 0x1C) = v;
        M2C_FIELD(d, s32 *, 0x24) = v;
        draw_right_aligned_number(b);
        draw_right_aligned_number(a);
        M2C_FIELD(a, f32 *, 8) = M2C_FIELD(b, f32 *, 8) - M2C_FIELD(b, f32 *, 0x10) - lbl_805DD430;
        M2C_FIELD(d, f32 *, 8) = M2C_FIELD(a, f32 *, 8);
        a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xB);
        b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xD);
        c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xA);
        d = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xC);
        M2C_FIELD(b, s32 *, 0x20) = obj_getS16_2BA(pl);
        M2C_FIELD(a, s32 *, 0x20) = M2C_FIELD(pl, s16 *, 0x32E);
        v = update_hp_gauge__20TWindowSubStatusDispFi(arg0);
        M2C_FIELD(a, s32 *, 0x1C) = v;
        M2C_FIELD(c, s32 *, 0x24) = v;
        M2C_FIELD(b, s32 *, 0x1C) = v;
        M2C_FIELD(d, s32 *, 0x24) = v;
        draw_right_aligned_number(b);
        draw_right_aligned_number(a);
        M2C_FIELD(a, f32 *, 8) = M2C_FIELD(b, f32 *, 8) - M2C_FIELD(b, f32 *, 0x10) - lbl_805DD430;
        M2C_FIELD(d, f32 *, 8) = M2C_FIELD(a, f32 *, 8);
        update_status_entry__20TWindowSubStatusDispFi(arg0);
        e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE);
        set_status_entry_target(e, get_sub_value__8TItemMagFi(pl));
    }
}

void draw_background__13TWindowStatusFv(u8 *arg0, u8 *arg1) {
    Quad_802710C4 q;
    f32 w;
    f32 s;

    {
        u8 *e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE);
        draw_photon_blast_gauge_ring((s32)arg0, arg1, lbl_8044F650, M2C_FIELD(e, s32 *, 0x20), lbl_805DD434);
    }
    begin_screen_draw(1);
    set_global_param__8TObjFishFi(lbl_805D63F0);
    set_draw_texture_and_color(0xB, M2C_FIELD(arg1, s32 *, 0x34));
    { f32 r = TWindowSubComCard__sub_80244784(arg0);
    s = -1.0f / (0.0598f + M2C_FIELD(arg0, f32 *, 0x54));
    q.x0 = -(69.0f * (w = 1.0f - r)); }
    q.y0 = -(80.0f * w);
    q.x1 = 69.0f + q.x0;
    q.y1 = 80.0f + q.y0;
    q.u0 = 0.4609375f;
    q.v0 = 0.3125f;
    q.u1 = 0.73046875f;
    q.v1 = 0.625f;
    draw_textured_quad_at_depth(&q, s);
    q.x0 = M2C_FIELD(arg1, f32 *, 0);
    q.y0 = M2C_FIELD(arg1, f32 *, 4);
    q.x1 = 228.0f + q.x0;
    q.y1 = 76.0f + q.y0;
    q.u0 = 0.0f;
    q.v0 = 0.0f;
    q.u1 = 0.890625f;
    q.v1 = 0.296875f;
    apply_context_transform_to_rect(arg1, &q);
    draw_textured_quad_at_depth(&q, s);
    get_player__20TWindowSubStatusDispFv();
    if (TWindowSubComCard__sub_80245558(arg1, arg1 + 0x10, arg1 + 0x18) != 0) {
        TWindowSubComCard__sub_802454E4(0xB);
        TWindowSubComCard__sub_80245320(&q, arg1);
        TWindowSubComCard__sub_802452DC(0xB);
    }
}

#pragma fp_contract on
void render__13TWindowStatusFv(u8 *arg0) {
  f32 temp_f1;
  u8 *new_var;
  s32 temp_r31;
  f32 new_var2;
  s32 temp_r3;
  temp_r31 = (s32)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0xE);
  ((M2C_UNK (*)(void))draw_right_aligned_number)();
  new_var2 = (f32) lbl_805DD474;
  new_var = arg0;
  temp_f1 = *((f32 *) (((s8 *) temp_r31) + 0x10));
  *((f32 *) (((s8 *) temp_r31) + 8)) = (f32) ((lbl_805DD474 * temp_f1) + lbl_805DD470);
  temp_r3 = draw_default_entry__9TWindowDDFi((void *) arg0, (f32) temp_f1, new_var2);
  draw_background__13TWindowStatusFv(arg0, (u8 *)temp_r3);
  draw_visible_window_entries((void *) new_var, (void *) (arg0 + 0x24), (int) temp_r3);
}

void run_task__13TWindowStatusFv(s32 arg0) {
    ((M2C_UNK (*)(void))update_hp_tp_values__20TWindowSubStatusDispFPv)();
    update_lockon_window(arg0);
    update_status_help_item(arg0);
    update_status_icons__14TWindowComCardFPvPv(arg0, get_window_layout_position(0x1D));
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    update_window_entry_list(arg0, arg0 + 0x24);
}

extern M2C_UNK __vt__13TWindowStatus[];

void *__dt__13TWindowStatusFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowStatus;
        __dt__19TWindowSimpleStatusFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__13TWindowStatus[];
extern void *lbl_805D39F8;

void *TWindowStatus__ct(void *arg0) {
    TWindowSimpleStatus__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TWindowStatus;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D39F8;
    return arg0;
}

}
