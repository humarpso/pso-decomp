#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80276D14_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

struct RecoveredGlobal_80277014_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

typedef s32 M2C_UNK;
struct Vec2_8027654C { f32 x; f32 y; };

struct Vec2_802766C8
{
  f32 x;
  f32 y;
};

extern "C" {
s32 draw_default_entry__9TWindowDDFi();
M2C_UNK draw_window_frame(void *, int);
M2C_UNK draw_visible_window_entries(void *, void *, int);
M2C_UNK draw_cursor__21TWindowSubCustomEquipFPvPv(void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(int, int);
void render__21TWindowSubCustomEquipFv(u8 *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern f32 TWindowSubCustomEquip__ring_scale;
extern u8 TWindowSubCustomEquip__bank_ring_init_done;
extern f32 lbl_805D6478;
extern u8 lbl_805D647C;
extern const f32 lbl_805DD578;
extern const f32 lbl_805DD584;
extern const f32 lbl_805DD588;
extern const f32 lbl_805DD58C;
extern const f32 lbl_805DD590;
extern const f32 lbl_805DD594;
extern const f32 lbl_805DD598;
extern const f32 lbl_805DD59C;
extern const f32 lbl_805DD5A0;
void place_bank_slot_on_ring__21TWindowSubCustomEquipFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 fn_8002AE08(int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, int, int, int);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 is_player_input_active(int);
extern RecoveredGlobal_80276D14_lbl_8050E208 controller_input_state;
void handle_cursor_input__21TWindowSubCustomEquipFPv(u8 *arg0);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, int);
s32 TWindowShortListCtrl__check_controller_button(int, int);
s32 initialize_subwindow__9TWindowDDFPv(void *);
s32 is_player_input_active(int);
s32 update_window_entry_list(void *, void *);
s32 is_selected__21TWindowSubCustomEquipFPv(void *);
void reset_selection__21TWindowSubCustomEquipFPv(void* p);
void update_rotate_anim__21TWindowSubCustomEquipFPv(void *arg0);
void handle_cancel__21TWindowSubCustomEquipFPv(void *arg0);
void handle_decide__21TWindowSubCustomEquipFPv(void *arg0);
void handle_cursor_input__21TWindowSubCustomEquipFPv(u8 *arg0);
s32 update_subwindow__20TWindowSubStatusDispFPv(int);
extern RecoveredGlobal_80276D14_lbl_8050E208 controller_input_state;
extern const f32 lbl_805DD5A4;
void run_task__21TWindowSubCustomEquipFv(u8 *arg0);
M2C_UNK copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
M2C_UNK set_help_text__15TWindowHelpItemFii(u8 *, s32);
extern const f32 lbl_805DD570;
extern const f32 lbl_805DD574;
int layout_selection_parts__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
s32 select_action_palette__10TObjPlayerFi(u8 *, s32);
u8 *get_player_by_client_id(s32);
s32 TWindowActionPalette__sub_801C1D7C(s32, s32, s32);
s32 get_slot_type__20TWindowActionPaletteFiii(s32, s32, s32);
s32 update_palette_slot__21TWindowSubCustomEquipFPviii(void *, s32, s32, s32);
s32 refresh_palette_slots__21TWindowSubCustomEquipFPv(void *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);
extern const Vec2_802766C8 lbl_8044F748[];
extern const f32 lbl_805DD578;
extern const f32 lbl_805DD57C;
extern const f32 lbl_805DD580;
void layout_entry_group__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
}

extern "C" {

void *__dt__21TWindowSubCustomEquipFv(void *arg0, s16 arg1);
s32 calc_equip_index__21TWindowSubCustomEquipFPv(void *arg0);
void handle_cancel__21TWindowSubCustomEquipFPv(void *arg0);
void handle_decide__21TWindowSubCustomEquipFPv(void *arg0);
void reset_selection__21TWindowSubCustomEquipFPv(void* p);
void set_relative_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1);
void update_rotate_anim__21TWindowSubCustomEquipFPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void __dl__7TObjectFPv(void *);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK set_entry_state__20TWindowSubStatusDispFPvc(s32, M2C_UNK);

extern const f32 lbl_805DD568;
extern const f32 lbl_805DD56C;

void set_relative_pos__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 8) - lbl_805DD568);
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 0xC) - lbl_805DD56C);
}

int layout_selection_parts__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1) {
    Vec2_8027654C pos;
    u8 *p;
    u8 *a;
    u8 *b;
    u8 *c;
    u8 *d;
    if (M2C_FIELD(arg0, s8 *, 0x64) == 0) {
        a = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x11);
        b = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x10);
        c = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 8);
        d = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 7);
        p = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 9);
    } else {
        a = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 8);
        b = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 7);
        c = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x11);
        d = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0x10);
        p = (u8 *)get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
    }
    pos.x = lbl_805DD570 + M2C_FIELD(p, f32 *, 8);
    pos.y = lbl_805DD574 + M2C_FIELD(p, f32 *, 0xC);
    set_help_text__15TWindowHelpItemFii(b, M2C_FIELD(arg0, s16 *, 0x20));
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(a + 8, &pos);
    copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(b + 8, &pos);
    M2C_FIELD(a, f32 *, 0x18) = M2C_FIELD(p, f32 *, 0x18);
    M2C_FIELD(b, f32 *, 0x18) = M2C_FIELD(p, f32 *, 0x18);
    M2C_FIELD(a, s32 *, 0x2C) = M2C_FIELD(p, s32 *, 0x2C);
    M2C_FIELD(a, u16 *, 0) &= ~2;
    M2C_FIELD(b, u16 *, 0) &= ~2;
    M2C_FIELD(c, u16 *, 0) |= 2;
    M2C_FIELD(d, u16 *, 0) |= 2;
}

typedef struct Vec2_802766C8 Vec2_802766C8;
void layout_entry_group__21TWindowSubCustomEquipFPvPv(void *arg0, void *arg1) {
  u8 *base;
  u8 *e1;
  u8 *e2;
  u32 i;
  s32 idx;
  s32 v;
  base = (u8 *) get_array_entry__20TWindowSubStatusDispFPvi(arg0, (s32) arg1);
  for (i = 0; i < 3; i++)
  {
    idx = ((s32) arg1) + i;
    e1 = (u8 *) get_array_entry__20TWindowSubStatusDispFPvi(arg0, idx + 1);
    e2 = (u8 *) get_array_entry__20TWindowSubStatusDispFPvi(arg0, idx + 4);
    *((f32 *) (((s8 *) e1) + 8)) = (*((f32 *) (((s8 *) base) + 8))) + lbl_8044F748[i].x;
    *((f32 *) (((s8 *) e1) + 0xC)) = (*((f32 *) (((s8 *) base) + 0xC))) + lbl_8044F748[i].y;
    *((f32 *) (((s8 *) e1) + 0x18)) = lbl_805DD578 + (*((f32 *) (((s8 *) base) + 0x18)));
    *((f32 *) (((s8 *) e2) + 0x18)) = lbl_805DD57C + (*((f32 *) (((s8 *) base) + 0x18)));
    *((s32 *) (((s8 *) e2) + 0x1C)) = *((s32 *) (((s8 *) base) + 0x2C));
    v = lbl_805DD580 * (((unsigned char) ((*((u32 *) (((s8 *) base) + 0x2C))) & 0xFF)) * ((*((u32 *) (((s8 *) e1) + 0x2C))) & 0xFF));
    *((u32 *) (((s8 *) e1) + 0x2C)) = (v & 0xFF) | ((((v & 0xFF) << 16) | 0xFF000000) | ((v & 0xFF) << 8));
  }
}

void reset_selection__21TWindowSubCustomEquipFPv(void* p) { layout_entry_group__21TWindowSubCustomEquipFPvPv((void *)(p), (void *)((void*)9)); layout_entry_group__21TWindowSubCustomEquipFPvPv((void *)(p), (void *)((void*)0)); layout_selection_parts__21TWindowSubCustomEquipFPvPv((void *)(p), (void *)((void*)9)); }

s32 refresh_palette_slots__21TWindowSubCustomEquipFPv(void *arg0) {
    u8 *player;
    s32 pal;
    player = get_player_by_client_id(M2C_FIELD(arg0, s16 *, 0x20));
    if (player == NULL || (pal = select_action_palette__10TObjPlayerFi(player, 0)) == 0) {
        return;
    }
    update_palette_slot__21TWindowSubCustomEquipFPviii(arg0, 0,
        get_slot_type__20TWindowActionPaletteFiii(pal, M2C_FIELD(arg0, s8 *, 0x64), 2),
        TWindowActionPalette__sub_801C1D7C(pal, M2C_FIELD(arg0, s8 *, 0x64), 2));
    update_palette_slot__21TWindowSubCustomEquipFPviii(arg0, 1,
        get_slot_type__20TWindowActionPaletteFiii(pal, M2C_FIELD(arg0, s8 *, 0x64), 1),
        TWindowActionPalette__sub_801C1D7C(pal, M2C_FIELD(arg0, s8 *, 0x64), 1));
    update_palette_slot__21TWindowSubCustomEquipFPviii(arg0, 2,
        get_slot_type__20TWindowActionPaletteFiii(pal, M2C_FIELD(arg0, s8 *, 0x64), 3),
        TWindowActionPalette__sub_801C1D7C(pal, M2C_FIELD(arg0, s8 *, 0x64), 3));
    update_palette_slot__21TWindowSubCustomEquipFPviii(arg0, 3,
        get_slot_type__20TWindowActionPaletteFiii(pal, M2C_FIELD(arg0, s8 *, 0x65), 2),
        TWindowActionPalette__sub_801C1D7C(pal, M2C_FIELD(arg0, s8 *, 0x65), 2));
    update_palette_slot__21TWindowSubCustomEquipFPviii(arg0, 4,
        get_slot_type__20TWindowActionPaletteFiii(pal, M2C_FIELD(arg0, s8 *, 0x65), 1),
        TWindowActionPalette__sub_801C1D7C(pal, M2C_FIELD(arg0, s8 *, 0x65), 1));
    update_palette_slot__21TWindowSubCustomEquipFPviii(arg0, 5,
        get_slot_type__20TWindowActionPaletteFiii(pal, M2C_FIELD(arg0, s8 *, 0x65), 3),
        TWindowActionPalette__sub_801C1D7C(pal, M2C_FIELD(arg0, s8 *, 0x65), 3));
}

#pragma push
#pragma fp_contract on
void place_bank_slot_on_ring__21TWindowSubCustomEquipFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    f32 temp_f30;
    f32 temp_f31;
    s32 temp_r4;
    u8 *temp_r3;
    if ((s8) TWindowSubCustomEquip__bank_ring_init_done == 0) {
        TWindowSubCustomEquip__bank_ring_init_done = 1;
        TWindowSubCustomEquip__ring_scale = lbl_805DD584;
    }
    if ((s8) lbl_805D647C == 0) {
        lbl_805D647C = 1;
        lbl_805D6478 = lbl_805DD588;
    }
    temp_f30 = sin_table_lookup(arg1);
    temp_f31 = cos_table_lookup(arg1);
    temp_r3 = (u8 *)(get_array_entry__20TWindowSubStatusDispFPvi(arg0, arg2));
    M2C_FIELD(temp_r3, f32 *, 8) = (f32) ((TWindowSubCustomEquip__ring_scale * temp_f31) + lbl_805DD58C);
    M2C_FIELD(temp_r3, f32 *, 0xC) = (f32) ((lbl_805D6478 * temp_f30) + lbl_805DD590);
    if ((arg1 - 0x7200) & 0x8000) {
        temp_f1 = (lbl_805DD598 * cos_table_lookup(arg1 + 0xFFFF4E00)) + lbl_805DD594;
        M2C_FIELD(temp_r3, f32 *, 0x18) = (f32) lbl_805DD578;
        temp_r4 = (s32) (lbl_805DD59C * temp_f1);
        M2C_FIELD(temp_r3, s32 *, 0x2C) = (s32) ((u8) temp_r4 | (((temp_r4 << 0x10) & 0xFF0000) | 0xFF000000 | ((temp_r4 << 8) & 0xFF00)));
        return;
    }
    M2C_FIELD(temp_r3, f32 *, 0x18) = (f32) lbl_805DD5A0;
    M2C_FIELD(temp_r3, s32 *, 0x2C) = -1;
}
#pragma pop

void update_rotate_anim__21TWindowSubCustomEquipFPv(void *arg0) {
    s32 temp_r3;
    s32 var_r4;

    var_r4 = 0xB200;
    if ((s8) M2C_FIELD(arg0, u8 *, 0x62) > 0) {
        var_r4 = 0x13200;
    }
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x68);
    if (var_r4 != temp_r3) {
        if ((s32) (u16) (var_r4 - temp_r3) < 0xC00) {
            M2C_FIELD(arg0, s32 *, 0x68) = var_r4;
        } else {
            M2C_FIELD(arg0, s32 *, 0x68) = (s32) (temp_r3 + 0xC00);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x68) & 0x8000) {
        M2C_FIELD(arg0, s8 *, 0x64) = 0;
        M2C_FIELD(arg0, s8 *, 0x65) = 1;
        place_bank_slot_on_ring__21TWindowSubCustomEquipFPvii((u8 *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x68)), (s32)(9));
        place_bank_slot_on_ring__21TWindowSubCustomEquipFPvii((u8 *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x68) + 0x8000), (s32)(0));
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x64) = 1;
    M2C_FIELD(arg0, s8 *, 0x65) = 0;
    place_bank_slot_on_ring__21TWindowSubCustomEquipFPvii((u8 *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x68) + 0x8000), (s32)(9));
    place_bank_slot_on_ring__21TWindowSubCustomEquipFPvii((u8 *)(arg0), (s32)(M2C_FIELD(arg0, s32 *, 0x68)), (s32)(0));
}

void handle_cancel__21TWindowSubCustomEquipFPv(void *arg0) {
    if (is_selected__21TWindowSubCustomEquipFPv((void *)(arg0)) == 0) {
        play_sound_effect(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 2);
    }
}

void handle_decide__21TWindowSubCustomEquipFPv(void *arg0) {
    play_sound_effect(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 1);
    set_entry_state__20TWindowSubStatusDispFPvc(M2C_FIELD(arg0, s32 *, 0x6C), 2);
}

extern M2C_UNK __vt__21TWindowSubCustomEquip[];

typedef char RecoveredGlobal_80276D14_lbl_8050E208_size[sizeof(RecoveredGlobal_80276D14_lbl_8050E208) == 0x1B0 ? 1 : -1];
void handle_cursor_input__21TWindowSubCustomEquipFPv(u8 *arg0) {
    s32 temp_r29;
    u8 temp_r3_2;
    u8 temp_r3_3;
    u8 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r3;
    temp_r29 = is_player_input_active((int) (M2C_FIELD(arg0, s16 *, 0x20)));
    temp_r31 = (u8 *)(((u8 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(0x10))));
    temp_r3 = (u8 *)(((u8 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (s32)(7))));
    temp_r4 = M2C_FIELD(arg0, u8 *, 0x63);
    if ((s8) temp_r4 > 0) {
        M2C_FIELD(arg0, u8 *, 0x63) = (u8) (temp_r4 - 1);
        M2C_FIELD(temp_r31, s32 *, 0x2C) = -1;
        M2C_FIELD(temp_r3, s32 *, 0x2C) = -1;
    } else {
        M2C_FIELD(temp_r31, s32 *, 0x2C) = 0xFF666666;
        M2C_FIELD(temp_r3, s32 *, 0x2C) = 0xFF666666;
    }
    temp_r31_2 = (u8 *)&controller_input_state.value + (temp_r29 * 0x50) + 0x20;
    if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31_2), (int) (0xF0), (int) (6), (int) (1)) != 0) || (TWindowShortListCtrl__check_controller_button((int) (temp_r31_2), (int) (fn_8002AE08((int) (M2C_FIELD(arg0, s16 *, 0x20))))) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0xF0), (int) (6), (int) (1)) != 0)) {
        play_sound_effect((M2C_UNK)((int) (0x54100)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
        if (TWindowShortListCtrl__check_controller_button((int) (temp_r31_2), (int) (fn_8002AE08((int) (M2C_FIELD(arg0, s16 *, 0x20))))) != 0) {
            M2C_FIELD(arg0, u8 *, 0x62) = (u8) (1 - M2C_FIELD(arg0, u8 *, 0x62));
            M2C_FIELD(arg0, u8 *, 0x63) = 3U;
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31_2), (int) (0x10), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x10), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) - 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31_2), (int) (0x20), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x20), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) + 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31_2), (int) (0x80), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x80), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) - 1);
        }
        if ((apply_choice__20TWindowChoiceSettingFiiii((void *) (temp_r31_2), (int) (0x40), (int) (6), (int) (1)) != 0) || (apply_choice__20TWindowChoiceSettingFiiii((void *) ((u8 *)&controller_input_state.value + 0x160), (int) (0x40), (int) (6), (int) (1)) != 0)) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) + 1);
        }
        temp_r3_2 = M2C_FIELD(arg0, u8 *, 0x61);
        if ((s8) temp_r3_2 < 0) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (temp_r3_2 + 3);
        }
        temp_r3_3 = M2C_FIELD(arg0, u8 *, 0x61);
        if ((s8) temp_r3_3 >= 3) {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (temp_r3_3 - 3);
        }
    }
}

void render__21TWindowSubCustomEquipFv(u8 *arg0) {
    s32 temp_r3;
    temp_r3 = draw_default_entry__9TWindowDDFi();
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    draw_visible_window_entries((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    draw_cursor__21TWindowSubCustomEquipFPvPv((void *) (arg0), (int) (temp_r3));
    forward_render__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x6C)), (int) (temp_r3));
}

typedef char RecoveredGlobal_80277014_lbl_8050E208_size[sizeof(RecoveredGlobal_80277014_lbl_8050E208) == 0x1B0 ? 1 : -1];
void run_task__21TWindowSubCustomEquipFv(u8 *arg0) {
    s32 temp_r30;
    u8 *temp_r30_2;
    temp_r30 = is_player_input_active((int) ((s32) M2C_FIELD(arg0, s16 *, 0x20)));
    if (is_selected__21TWindowSubCustomEquipFPv((void *)((void *) (arg0))) == 0) {
        handle_cursor_input__21TWindowSubCustomEquipFPv((u8 *)((void *) (arg0)));
        temp_r30_2 = (u8 *)&(*(RecoveredGlobal_80277014_lbl_8050E208 *)&controller_input_state).value + (temp_r30 * 0x50) + 0x20;
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r30_2), (int) (4)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&(*(RecoveredGlobal_80277014_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (4)) != 0)) {
            handle_decide__21TWindowSubCustomEquipFPv((void *) (arg0));
        }
        if ((TWindowShortListCtrl__check_controller_button((int) (temp_r30_2), (int) (2)) != 0) || (test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) ((u8 *)&(*(RecoveredGlobal_80277014_lbl_8050E208 *)&controller_input_state).value + 0x160), (int) (2)) != 0)) {
            handle_cancel__21TWindowSubCustomEquipFPv((void *) (arg0));
        }
    }
    update_rotate_anim__21TWindowSubCustomEquipFPv((void *) (arg0));
    reset_selection__21TWindowSubCustomEquipFPv((void*)((void *) (arg0)));
    refresh_palette_slots__21TWindowSubCustomEquipFPv((void *)((void *) (arg0)));
    if ((f32) M2C_FIELD(arg0, s32 *, 0x5C) >= lbl_805DD5A4) {
        update_subwindow__20TWindowSubStatusDispFPv((int) (M2C_FIELD(arg0, s32 *, 0x6C)));
    }
    initialize_subwindow__9TWindowDDFPv((void *) (arg0));
    update_window_entry_list((void *) (arg0), (void *) (arg0 + 0x24));
    M2C_FIELD(arg0, s16 *, 0x66) = (s16) (M2C_FIELD(arg0, s16 *, 0x66) + 1);
}

void *__dt__21TWindowSubCustomEquipFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TWindowSubCustomEquip;
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x6C), 1);
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

s32 calc_equip_index__21TWindowSubCustomEquipFPv(void *arg0) {
    return M2C_FIELD(arg0, s32 *, 0x78) + (((s8) M2C_FIELD(arg0, u8 *, 0x70) + ((s8) M2C_FIELD(arg0, u8 *, 0x71) * 3)) * 4);
}

}
