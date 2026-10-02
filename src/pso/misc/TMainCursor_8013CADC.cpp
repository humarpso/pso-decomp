#include "types.h"
#include "pso/misc/TLockOnCursor.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8013D7E0_lbl_804A7164 {
    M2C_UNK value;
    u8 remaining[0x5C];
};

extern "C" {
s32 check_visible__11TMainCursorFPv(void *, int, void *, void *);
M2C_UNK get_cursor_state__11TMainCursorFv();
u16 get_target_id__11TMainCursorFPv(void *);
s32 is_inactive__13TLockOnCursorFPv(TLockOnCursor*);
M2C_UNK TLockOnCursor__sub_8013EB34();
M2C_UNK play_sound_with_arg__15TPlyPhotonChairFPvPv(void *, void *);
M2C_UNK update_parts__15TPlyPhotonChairFPv(void *);
M2C_UNK update_parts2__15TPlyPhotonChairFPv(void *);
u32 get_player_by_client_id(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
M2C_UNK fn_8023601C(void *, void *, f32);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK TObjFish__sub_803E46BC();
extern u8 lbl_8048E5A0[];
extern RecoveredGlobal_8013D7E0_lbl_804A7164 lbl_804A7164;
extern u8 *lbl_805D4DF0;
extern const f32 TMainCursor__data_805DB0C0;
}

extern "C" {

void set_cursor_color__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void set_cursor_pos__11TMainCursorFiUsi(s32 arg0, u16 arg1, s32 arg2);
void set_display_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void setup_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void sort_list__11TMainCursorFii(s32 arg0, s32 arg1);
M2C_UNK TMainCursor__sub_8013E970(s32, u16, s32, s32);
s32 TMainCursor__sub_8013F154(s32, M2C_UNK);
s32 TMainCursor__sub_8013F168(s32);
s32 TObjPlayer__sub_801B066C(s32);
u16 get_id__11TMainCursorFPv(s32);
s32 get_selected_entry__11TMainCursorFPv(s32, s32);
s32 get_type__10TObjPlayerFPv(s32);
s32 is_technique_ready__8TTecCtrlFv();
M2C_UNK quick_sort__11TMainCursorFiiii(s32, s32, M2C_UNK, s32);
M2C_UNK set_color__11TMainCursorFPvi(s32, M2C_UNK);
M2C_UNK set_color_mode__11TMainCursorFPvi(s32, M2C_UNK);
M2C_UNK set_field_0c__11TMainCursorFPvi(s32, M2C_UNK);
M2C_UNK set_flags__11TMainCursorFPvi(s32, M2C_UNK);

void set_cursor_pos__11TMainCursorFiUsi(s32 arg0, u16 arg1, s32 arg2) {
    u32 eq = (u32) __cntlzw((u32) ((u16) get_id__11TMainCursorFPv(arg0 + 0x4F8) - (u16) arg1)) >> 5;
    TMainCursor__sub_8013E970(arg0 + 0x508, arg1, arg2, eq + 1);
}

void set_cursor_color__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (get_type__10TObjPlayerFPv(arg1 + 0x828) != 0) {
        set_color__11TMainCursorFPvi(arg2, 0xA000);
        set_color_mode__11TMainCursorFPvi(arg2, 0x70000000);
        return;
    }
    set_color__11TMainCursorFPvi(arg2, 0x8000);
    set_color_mode__11TMainCursorFPvi(arg2, 0x60000000);
}

void set_display_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    set_color__11TMainCursorFPvi(arg2, 0x2000);
    set_color_mode__11TMainCursorFPvi(arg2, 0x10000000);
    set_flags__11TMainCursorFPvi(arg2, 0xE0000800);
    if (is_technique_ready__8TTecCtrlFv() == 0) {
        set_field_0c__11TMainCursorFPvi(arg2, 0x30000);
        return;
    }
    if (TObjPlayer__sub_801B066C(arg1) == 1) {
        set_field_0c__11TMainCursorFPvi(arg2, 0x40030000);
        return;
    }
    set_field_0c__11TMainCursorFPvi(arg2, 0x40030000);
}

void setup_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    set_color__11TMainCursorFPvi(arg2, 0x2000);
    set_field_0c__11TMainCursorFPvi(arg2, 0x3C000);
    set_color_mode__11TMainCursorFPvi(arg2, 0x800);
    set_flags__11TMainCursorFPvi(arg2, 0xE0000000);
}

void sort_list__11TMainCursorFii(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r4;

    temp_r4 = arg1 * 0x124;
    temp_r30 = arg0 + temp_r4 + 0x5C;
    if (get_selected_entry__11TMainCursorFPv(temp_r30, temp_r4) != 0) {
        temp_r31 = TMainCursor__sub_8013F168(temp_r30 + 0x40);
        quick_sort__11TMainCursorFiiii(temp_r30, TMainCursor__sub_8013F154(temp_r30 + 0x40, 0), 0, temp_r31 - 1);
    }
}
}

typedef char RecoveredGlobal_8013D7E0_lbl_804A7164_size[sizeof(RecoveredGlobal_8013D7E0_lbl_804A7164) == 0x60 ? 1 : -1];
void TLockOnCursor::renderSecondaryCursor(u8 *arg1, s32 arg2, s32 arg3) {
    const s32 arg0 = (s32)this;
    f32 sp8[3];
    f32 temp_f31;
    s32 temp_r3_2;
    u32 temp_r3;
    if (is_inactive__13TLockOnCursorFPv(this) != 0) {
        temp_r3 = get_player_by_client_id((void *) (get_target_id__11TMainCursorFPv((void *) (this))));
        if (temp_r3 != 0U) {
            temp_r3_2 = check_visible__11TMainCursorFPv((void *) (temp_r3 + 0x500), (int) (temp_r3), (void *) (arg2), (void *) (arg3));
            if (temp_r3_2 != -1) {
                set_global_param__8TObjFishFi((void *) (&lbl_8048E5A0));
                temp_f31 = M2C_FIELD(arg1, f32 *, 0xC);
                TObjPlayer__sub_803D9B2C();
                fn_8023601C((void *) (arg1 + 0x1C), (void *) (&sp8), (f32) (temp_f31));
                set_position_vec3__10TObjPlayerFPvPv((int) (0), (void *) (&sp8));
                rotate_matrix_y((int) (0), (int) (M2C_FIELD(lbl_805D4DF0, s32 *, 0x194)));
                begin_effect_render__13TParticleCtrlFv();
                TObjPlayer__sub_803D9B2C();
                translate_matrix((int) (0), (f32) (TMainCursor__data_805DB0C0), (f32) (temp_f31), (f32) (TMainCursor__data_805DB0C0));
                update_parts2__15TPlyPhotonChairFPv((void *) (arg0 + 0x48));
                play_sound_with_arg__15TPlyPhotonChairFPvPv((void *) (arg0 + 0x48), (void *) ((u8 *)&lbl_804A7164.value + 0x50));
                get_cursor_state__11TMainCursorFv();
                TObjFish__sub_803E46BC();
                play_sound_with_arg__15TPlyPhotonChairFPvPv((void *) (arg0 + 0x48), (void *) ((u8 *)&lbl_804A7164.value + (temp_r3_2 * 0x10)));
                TLockOnCursor__sub_8013EB34();
                TObjFish__sub_803E46BC();
                update_parts__15TPlyPhotonChairFPv((void *) (arg0 + 0x48));
                pop_matrix();
                end_effect_render__13TParticleCtrlFv();
                pop_matrix();
            }
        }
    }
}
