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

extern "C" {
void* get_array_entry__20TWindowSubStatusDispFPvi(TWindowActionPalette*,int);
void TWindowHelpItem__sub_8025B08C(void*,float,float);
extern float lbl_8044E604[][2];
void set_bank_panel_art__20TWindowActionPaletteFPvi(TWindowActionPalette* self,unsigned short state);
s32 is_split_screen();
s32 fn_8002AE08(s32);
s32 get_sub_value__8TItemMagFi(int);
s32 is_on_current_screen__11TCameraCtrlFPv(void *, s32);
u16 TObjPlayer__sub_801B5A88(int, int, int, int);
s32 refresh_effect__10TObjPlayerFi(int);
s32 get_player_by_client_id(int);
s32 TWindowActionPalette__sub_801C1C00(void *);
u16 TWindowActionPalette__sub_801C1DB8(int, int);
s32 TWindowActionPalette__sub_801C1E1C(int, int);
u16 get_current_target_id__10TObjPlayerFv();
void* get_array_entry__20TWindowSubStatusDispFPvi(TWindowActionPalette*,int);
s32 set_help_text__15TWindowHelpItemFii(void *, int);
void set_bank_panel_art__20TWindowActionPaletteFPvi(TWindowActionPalette* self,unsigned short state);
s32 TWindowActionPalette__sub_80243968(void *, int, int, int);
s32 update_slot_sprites__20TWindowActionPaletteFv(void *, int, int, u16);
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
void TWindowDD__sub_802466E0(void *, void *, s32, s32);
s32 get_window_layout_position(s32);
void *__construct_array(void *, void *, void *, u32, u32);
void free_if_valid__14TPlyDispConfigFis(void *, s16);
s32 init_gc_tag(void *);
extern u8 lbl_804CDF9C[];
extern u32 __vt__20TWindowActionPalette[6];
extern s32 lbl_805D3870;
extern const f32 lbl_805DCA2C;
extern const f32 lbl_805DCA48;
extern const f32 lbl_805DCAA0;
extern const f32 lbl_805DCAA4;
Pal_80244108 *TWindowActionPalette__ct(Pal_80244108 *self, s16 slot);
}

extern "C" {
void draw_frame__20TWindowActionPaletteFv(void *, int);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
void TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
u8 *destroy_window_base__9TWindowDDFPvs(void *, s16);
void __dl__7TObjectFPv(void *);
void __destroy_arr(void *, void *, int, int);
void free_if_valid__14TPlyDispConfigFis(void *, s16);
extern u32 __vt__20TWindowActionPalette[6];
}

void TWindowActionPalette::render() {
    s32 context = TWindowSubComCard__sub_80244C0C(this, &scale);
    TWindowSubStatusDisp__sub_80257BC0(this, &children, context);
    draw_frame__20TWindowActionPaletteFv(this, context);
}

void set_bank_panel_art__20TWindowActionPaletteFPvi(TWindowActionPalette* self,unsigned short state) {
    void* sprite=get_array_entry__20TWindowSubStatusDispFPvi(self,1);
    TWindowHelpItem__sub_8025B08C(sprite,lbl_8044E604[state][0],lbl_8044E604[state][1]);
}

#define SELF ((TWindowActionPalette *)arg0)
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
    v = TObjPlayer__sub_801B5A88(player, 0, 0, 0);
    if (v == 0) {
        v = TWindowActionPalette__sub_801C1DB8(effect, 1);
        update_slot_sprites__20TWindowActionPaletteFv(arg0, 0, TWindowActionPalette__sub_801C1E1C(effect, 1), v);
    } else {
        update_slot_sprites__20TWindowActionPaletteFv(arg0, 0, 7, v);
    }
    if (TObjPlayer__sub_80354D5C((u16)M2C_FIELD(arg0, s16 *, 0x20)) != 0 && TWindowActionPalette__sub_801C1C00((void *)(player + 0x500)) != 0) {
        TWindowActionPalette__sub_80243968(arg0, 1, 7, 7);
    } else {
        v = TWindowActionPalette__sub_801C1DB8(effect, 2);
        update_slot_sprites__20TWindowActionPaletteFv(arg0, 1, TWindowActionPalette__sub_801C1E1C(effect, 2), v);
    }
    v = TWindowActionPalette__sub_801C1DB8(effect, 3);
    update_slot_sprites__20TWindowActionPaletteFv(arg0, 2, TWindowActionPalette__sub_801C1E1C(effect, 3), v);
    target = get_current_target_id__10TObjPlayerFv();
    if (target == 0xFFFF || target == M2C_FIELD(arg0, s16 *, 0x20) || get_sub_value__8TItemMagFi(player) <= 0) {
        if (TWindowActionPalette__sub_801C1C00((void *)(player + 0x500)) != 0) {
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
    TWindowDD__sub_802466E0(self, lbl_804CDF9C, slot, get_window_layout_position(0x1F));
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
