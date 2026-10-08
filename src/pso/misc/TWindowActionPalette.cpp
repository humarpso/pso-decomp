#include "pso/misc/TWindowActionPalette.h"
#include <stddef.h>

typedef char palette_children_offset[offsetof(TWindowActionPalette, children) == 0x24 ? 1 : -1];
typedef char palette_resources_offset[offsetof(TWindowActionPalette, resources) == 0x60 ? 1 : -1];
typedef char palette_state_offset[offsetof(TWindowActionPalette, state) == 0x6C ? 1 : -1];
typedef char palette_scale_offset[offsetof(TWindowActionPalette, scale) == 0x70 ? 1 : -1];
typedef char palette_size[sizeof(TWindowActionPalette) == 0x78 ? 1 : -1];

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct TWindowActionPalette;

typedef struct Pal_80244108 {
    s32 f0;
    u8 pad4[0x14];
    u32 *vt;
    u8 pad1c[4];
    s16 slot;
    u8 pad22[0x36];
    f32 f58;
    u8 pad5c[4];
    u8 arr[0xC];
    s8 f6c;
    u8 pad6d[3];
    f32 f70;
    f32 f74;
} Pal_80244108;

struct Rect_80243B6C { f32 x0, y0, x1, y1, u0, v0, u1, v1; };

struct Ctx_80243B6C { f32 x; f32 y; u8 pad8[0x34 - 0x8]; s32 tex; };

struct Obj_80243968 { u8 pad[0x20]; s16 id; u8 pad22[0x3e]; u32 cur[3]; };

struct Ent_80243968 { u8 pad[0x2c]; s32 color; };

extern "C" {
void* get_array_entry__20TWindowSubStatusDispFPvi(TWindowActionPalette*,int);
void set_sprite_uv_from_pixels(void*,float,float);
extern float lbl_8044E604[][2];
void set_bank_panel_art__20TWindowActionPaletteFPvi(TWindowActionPalette* self,unsigned short state);
s32 is_split_screen();
s32 fn_8002AE08(s32);
s32 get_sub_value__8TItemMagFi(int);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, s32);
u16 select_action_palette_and_apply__10TObjPlayerFiiii(int, int, int, int);
s32 refresh_effect__10TObjPlayerFi(int);
s32 get_player_by_client_id(int);
s32 handle_input_forward__20TWindowActionPaletteFPv(void *);
u16 get_entry_by_index__20TWindowActionPaletteFPvi(int, int);
s32 get_slot_type_for_index__20TWindowActionPaletteFPvi(int, int);
u16 get_current_target_id__10TObjPlayerFv();
void* get_array_entry__20TWindowSubStatusDispFPvi(TWindowActionPalette*,int);
s32 set_help_text__15TWindowHelpItemFii(void *, int);
void set_bank_panel_art__20TWindowActionPaletteFPvi(TWindowActionPalette* self,unsigned short state);
void update_slot_sprites__20TWindowActionPaletteFv(void *, int, int, u16);
u8 get_enabled__11TMainCursorFPv(void *);
u8 get_type__11TMainCursorFPv(void *);
s32 is_action_channel_available__10TObjPlayerFii(s32, s32);
void update_palette_item_count_label(void *, void *, int, u16, s32);
void draw_action_palette_icon(void *, int, u16);
extern const u8 lbl_805DCA10[4];
extern const u8 lbl_805DCA14[4];
extern const u8 lbl_805DCA18[4];
s32 update_fade__17TWindowSubComCardFPv(void *);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 is_player_input_active(int);
s32 update_window_entry_list(void *, void *);
s32 TObjPlayer__sub_80354D5C(int);
extern u8 lbl_8050E208[];
void run_task__20TWindowActionPaletteFv(u8 *arg0);
s32 get_camera_id__11TCameraCtrlFv(void);
void set_slot__20TWindowActionPaletteFPvUc(void *, u8);
void set_mode__20TWindowActionPaletteFPvUc(void *, u8);
void construct_base__9TWindowDDFPvPvsPv(void *, void *, s32, s32);
s32 get_window_layout_position(s32);
void *__construct_array(void *, void *, void *, u32, u32);
void free_if_valid__14TPlyDispConfigFis(void *, s16);
s32 init_gc_tag(void *);
extern u8 twindow_action_palette_layout[];
extern u32 __vt__20TWindowActionPalette[6];
extern s32 lbl_805D3870;
extern const f32 lbl_805DCA2C;
extern const f32 lbl_805DCA48;
extern const f32 lbl_805DCAA0;
extern const f32 lbl_805DCAA4;
Pal_80244108 *TWindowActionPalette__ct(Pal_80244108 *self, s16 slot);
s32 is_split_screen();
f32 TWindowSubComCard__sub_80244784(void *);
s32 TWindowSubComCard__sub_802452DC(int);
s32 TWindowSubComCard__sub_80245320(void *, void *);
s32 TWindowSubComCard__sub_802454E4(int);
s32 TWindowSubComCard__sub_80245558(void *, void *, void *);
s32 apply_context_transform_to_rect(void *, void *);
s32 set_global_param__8TObjFishFi(void *);
s32 begin_screen_draw(int);
s32 get_player__20TWindowSubStatusDispFv();
s32 draw_textured_quad_at_depth(void *, f32);
s32 set_draw_texture_and_color(int, int);
extern s32 lbl_805D63F0;
extern const f32 lbl_805DCA24;
extern const f32 lbl_805DCA34;
extern const f32 lbl_805DCA48;
extern const f32 lbl_805DCA4C;
extern const f32 lbl_805DCA50;
extern const f32 lbl_805DCA54;
extern const f32 lbl_805DCA58;
extern const f32 lbl_805DCA5C;
extern const f32 lbl_805DCA60;
extern const f32 lbl_805DCA64;
extern const f32 lbl_805DCA68;
extern const f32 lbl_805DCA6C;
extern const f32 lbl_805DCA70;
extern const f32 lbl_805DCA74;
extern const f32 lbl_805DCA78;
extern const f32 lbl_805DCA7C;
extern const f32 lbl_805DCA80;
extern const f32 lbl_805DCA84;
extern const f32 lbl_805DCA88;
extern const f32 lbl_805DCA8C;
extern const f32 lbl_805DCA90;
extern const f32 lbl_805DCA94;
extern const f32 lbl_805DCA98;
extern const f32 lbl_805DCA9C;
void draw_frame__20TWindowActionPaletteFv(void *self, int arg1);
s32 get_player_by_client_id(int);
void* get_array_entry__20TWindowSubStatusDispFPvi(TWindowActionPalette*,int);
s32 TObjPlayer__sub_80354C7C(s32);
s32 set_flag0_bit2__15TWindowHelpItemFPv(void *);
u8 get_enabled__11TMainCursorFPv(void *);
u8 get_type__11TMainCursorFPv(void *);
void draw_action_palette_icon(void *, int, u16);
void set_slot__20TWindowActionPaletteFPvUc(void *, u8);
void set_mode__20TWindowActionPaletteFPvUc(void *, u8);
void update_slot_icon__20TWindowActionPaletteFPviii(void *arg0, int idx, int mode, int slot);
}

extern "C" {
s32 setup_window_draw_context(void *, void *);
void draw_visible_window_entries(void *, void *, int);
u8 *destroy_window_base__9TWindowDDFPvs(void *, s16);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
void free_if_valid__14TPlyDispConfigFis(void *, s16);
extern u32 __vt__20TWindowActionPalette[6];
}

void TWindowActionPalette::render() {
    s32 context = setup_window_draw_context(this, &scale);
    draw_visible_window_entries(this, &children, context);
    draw_frame__20TWindowActionPaletteFv((void *)(this), (int)(context));
}

void set_bank_panel_art__20TWindowActionPaletteFPvi(TWindowActionPalette* self,unsigned short state) {
    void* sprite=get_array_entry__20TWindowSubStatusDispFPvi(self,1);
    set_sprite_uv_from_pixels(sprite,lbl_8044E604[state][0],lbl_8044E604[state][1]);
}

extern "C" {

#define self ((Obj_80243968 *)arg0)
void update_slot_icon__20TWindowActionPaletteFPviii(void *arg0, int idx, int mode, int slot) {
    if (((u32 (*)(int))get_player_by_client_id)(self->id) != 0) {
        Ent_80243968 *ent = (Ent_80243968 *)((void *)get_array_entry__20TWindowSubStatusDispFPvi((TWindowActionPalette*)(self), (int)(4)));
        if (TObjPlayer__sub_80354C7C((u16)self->id) != 0) {
            ent->color = -1;
        } else {
            ent->color = 0xFF404040;
        }
        set_flag0_bit2__15TWindowHelpItemFPv(((void *)get_array_entry__20TWindowSubStatusDispFPvi((TWindowActionPalette*)(self), (int)(5))));
        void *cur = &self->cur[idx];
        if ((u16)mode != get_type__11TMainCursorFPv(cur) || get_enabled__11TMainCursorFPv(cur) != (u16)slot) {
            set_mode__20TWindowActionPaletteFPvUc(cur, mode);
            set_slot__20TWindowActionPaletteFPvUc(cur, slot);
            ((void (*)(void *, int, int))draw_action_palette_icon)(ent, mode, slot);
        }
    }
}
#undef self

void update_slot_sprites__20TWindowActionPaletteFv(void *arg0, int idx, int mode, u16 slot) {
    s32 player;
    u8 *help;
    u8 *cursor;

    player = get_player_by_client_id(*(s16 *)((u8 *)arg0 + 0x20));
    if (player != 0) {
        help = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi((TWindowActionPalette *)arg0, lbl_805DCA10[idx]);
        if (is_action_channel_available__10TObjPlayerFii(player, lbl_805DCA14[idx]) != 0) {
            *(s32 *)(help + 0x2C) = -1;
        } else {
            *(s32 *)(help + 0x2C) = 0xFF404040;
        }
        update_palette_item_count_label(get_array_entry__20TWindowSubStatusDispFPvi((TWindowActionPalette *)arg0, lbl_805DCA18[idx]), help, mode, slot, *(s16 *)((u8 *)arg0 + 0x20));
        cursor = (u8 *)arg0 + 0x60 + idx * 4;
        if ((u16)mode != get_type__11TMainCursorFPv(cursor) || get_enabled__11TMainCursorFPv(cursor) != slot) {
            set_mode__20TWindowActionPaletteFPvUc(cursor, mode);
            set_slot__20TWindowActionPaletteFPvUc(cursor, slot);
            draw_action_palette_icon(help, mode, slot);
        }
    }
}

}

#define SELF ((TWindowActionPalette *)arg0)

#pragma push
#pragma fp_contract on
void draw_frame__20TWindowActionPaletteFv(void *self, int arg1) {
    Rect_80243B6C r1;
    Rect_80243B6C r2;
    Rect_80243B6C r4;
    Rect_80243B6C r3;
    Ctx_80243B6C *ctx = (Ctx_80243B6C *)arg1;
    f32 scale;
    f32 depth;
    scale = TWindowSubComCard__sub_80244784(self);
    depth = lbl_805DCA48 / M2C_FIELD(self, f32 *, 0x54);
    begin_screen_draw(1);
    set_global_param__8TObjFishFi((void *)lbl_805D63F0);
    set_draw_texture_and_color(2, ctx->tex);
    if (is_split_screen() == 0) {
        r1.x0 = lbl_805DCA4C - lbl_805DCA50 * scale;
        r1.y0 = lbl_805DCA54 - lbl_805DCA58 * scale;
        r1.x1 = lbl_805DCA50 + r1.x0;
        r1.y1 = lbl_805DCA5C + r1.y0;
        r1.u0 = lbl_805DCA24;
        r1.v0 = lbl_805DCA60;
        r1.u1 = lbl_805DCA64;
        r1.v1 = lbl_805DCA68;
        draw_textured_quad_at_depth(&r1, depth);
    }
    r2.x0 = lbl_805DCA6C + ctx->x;
    r2.y0 = ctx->y;
    r2.x1 = lbl_805DCA70 + r2.x0;
    r2.y1 = lbl_805DCA74 + r2.y0;
    r2.u0 = lbl_805DCA24;
    r2.v0 = lbl_805DCA78;
    r2.u1 = lbl_805DCA7C;
    r2.v1 = lbl_805DCA80;
    apply_context_transform_to_rect(ctx, &r2);
    draw_textured_quad_at_depth(&r2, depth);
    r3.x0 = lbl_805DCA84 + ctx->x;
    r3.y0 = lbl_805DCA88 + ctx->y;
    r3.x1 = lbl_805DCA70 + r3.x0;
    r3.y1 = lbl_805DCA74 + r3.y0;
    r3.u0 = lbl_805DCA8C;
    r3.v0 = lbl_805DCA78;
    r3.u1 = lbl_805DCA90;
    r3.v1 = lbl_805DCA80;
    apply_context_transform_to_rect(ctx, &r3);
    draw_textured_quad_at_depth(&r3, depth);
    r4.x0 = ctx->x;
    r4.y0 = ctx->y;
    r4.x1 = lbl_805DCA34 + r4.x0;
    r4.y1 = lbl_805DCA94 + r4.y0;
    r4.v0 = r4.u0 = lbl_805DCA24;
    r4.u1 = lbl_805DCA98;
    r4.v1 = lbl_805DCA9C;
    apply_context_transform_to_rect(ctx, &r4);
    draw_textured_quad_at_depth(&r4, depth);
    get_player__20TWindowSubStatusDispFv();
    if (TWindowSubComCard__sub_80245558(ctx, (u8 *)ctx + 0x10, (u8 *)ctx + 0x18) != 0) {
        TWindowSubComCard__sub_802454E4(2);
        TWindowSubComCard__sub_80245320(&r4, ctx);
        TWindowSubComCard__sub_802452DC(2);
    }
}
#pragma pop

void run_task__20TWindowActionPaletteFv(u8 *arg0) {
    s32 player;
    s32 effect;
    s32 slot;
    u16 v;
    u16 target;
    u8 cnt;
    u8 *help;
    player = get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20));
    if (player == 0 || (effect = refresh_effect__10TObjPlayerFi(player)) == 0) {
        return;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x2C) & 2)) {
        M2C_FIELD(arg0, s32 *, 0x5C) = 0x01000000;
    }
    slot = is_player_input_active(M2C_FIELD(arg0, s16 *, 0x20));
    if (is_on_current_screen__11TCameraCtrlFPv(lbl_8050E208 + slot * 0x50 + 0x20, fn_8002AE08(M2C_FIELD(arg0, s16 *, 0x20))) != 0) {
        M2C_FIELD(arg0, u8 *, 0x6C) = 3;
    }
    help = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(SELF, 0);
    set_help_text__15TWindowHelpItemFii(help, M2C_FIELD(arg0, s16 *, 0x20));
    cnt = M2C_FIELD(arg0, u8 *, 0x6C);
    if ((s8)cnt > 0) {
        M2C_FIELD(arg0, u8 *, 0x6C) = cnt - 1;
        M2C_FIELD(help, s32 *, 0x2C) = -1;
    } else {
        M2C_FIELD(help, s32 *, 0x2C) = 0xFF666666;
    }
    v = select_action_palette_and_apply__10TObjPlayerFiiii(player, 0, 0, 0);
    if (v == 0) {
        v = get_entry_by_index__20TWindowActionPaletteFPvi(effect, 1);
        update_slot_sprites__20TWindowActionPaletteFv(arg0, 0, get_slot_type_for_index__20TWindowActionPaletteFPvi(effect, 1), v);
    } else {
        update_slot_sprites__20TWindowActionPaletteFv(arg0, 0, 7, v);
    }
    if (TObjPlayer__sub_80354D5C((u16)M2C_FIELD(arg0, s16 *, 0x20)) != 0 && handle_input_forward__20TWindowActionPaletteFPv((void *)(player + 0x500)) != 0) {
        update_slot_icon__20TWindowActionPaletteFPviii((void *)(arg0), (int)(1), (int)(7), (int)(7));
    } else {
        v = get_entry_by_index__20TWindowActionPaletteFPvi(effect, 2);
        update_slot_sprites__20TWindowActionPaletteFv(arg0, 1, get_slot_type_for_index__20TWindowActionPaletteFPvi(effect, 2), v);
    }
    v = get_entry_by_index__20TWindowActionPaletteFPvi(effect, 3);
    update_slot_sprites__20TWindowActionPaletteFv(arg0, 2, get_slot_type_for_index__20TWindowActionPaletteFPvi(effect, 3), v);
    target = get_current_target_id__10TObjPlayerFv();
    if (target == 0xFFFF || target == M2C_FIELD(arg0, s16 *, 0x20) || get_sub_value__8TItemMagFi(player) <= 0) {
        if (handle_input_forward__20TWindowActionPaletteFPv((void *)(player + 0x500)) != 0) {
            if (is_split_screen() != 0) {
                set_bank_panel_art__20TWindowActionPaletteFPvi(SELF, 3);
            } else {
                set_bank_panel_art__20TWindowActionPaletteFPvi(SELF, 0);
            }
        } else {
            set_bank_panel_art__20TWindowActionPaletteFPvi(SELF, 1);
        }
    } else {
        set_bank_panel_art__20TWindowActionPaletteFPvi(SELF, 2);
    }
    initialize_subwindow__9TWindowDDFPv(arg0);
    update_fade__17TWindowSubComCardFPv(arg0);
    update_window_entry_list(arg0, arg0 + 0x24);
}

extern "C" u8 *__dt__20TWindowActionPaletteFv(u8 *self, s16 delete_flag) {
    if (self != NULL) {
        *(u32 **)(self + 0x18) = __vt__20TWindowActionPalette;
        __destroy_arr(self + 0x60,
                               (void *)free_if_valid__14TPlyDispConfigFis, 4, 3);
        destroy_window_base__9TWindowDDFPvs(self, 0);
        if (delete_flag > 0) {
            __dl__7TObjectFPv(self);
        }
    }
    return self;
}
Pal_80244108 *TWindowActionPalette__ct(Pal_80244108 *self, s16 slot) {
    u32 i;
    construct_base__9TWindowDDFPvPvsPv(self, twindow_action_palette_layout, slot, get_window_layout_position(0x1F));
    self->vt = __vt__20TWindowActionPalette;
    __construct_array(self->arr, (void *)init_gc_tag, (void *)free_if_valid__14TPlyDispConfigFis, 4, 3);
    self->f0 = lbl_805D3870;
    if (get_camera_id__11TCameraCtrlFv() > 2) {
        self->f70 = lbl_805DCA2C;
        self->f74 = lbl_805DCA2C;
    } else if (get_camera_id__11TCameraCtrlFv() == 2) {
        self->f70 = lbl_805DCAA0;
        self->f74 = lbl_805DCAA0;
    } else {
        self->f70 = lbl_805DCAA4;
        self->f74 = lbl_805DCAA4;
    }
    self->f58 = lbl_805DCA48;
    self->f6c = 0;
    self->slot = slot;
    for (i = 0; i < 3; i++) {
        set_mode__20TWindowActionPaletteFPvUc(self->arr, 0);
        set_slot__20TWindowActionPaletteFPvUc(self->arr, 0);
    }
    return self;
}
