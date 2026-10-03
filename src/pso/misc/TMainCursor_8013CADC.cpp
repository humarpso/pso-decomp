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

typedef s32 M2C_UNK;
struct TLockOnCursor;
struct Item_8013D4A0 { u16 id; s16 idx; f32 size; };

struct Part_8013D4A0 { u8 pad0[0xC]; f32 fC; u8 pad10[8]; s32 flags; u8 pad1C[0x10]; };

struct Sub_8013D4A0 { u8 pad0[0x40]; u8 x40[0x5C]; u8 x9C[0x88]; };

struct Self_8013D4A0 { u8 pad0[0x5C]; Sub_8013D4A0 subs[3]; u8 pad3C8[0x124]; u8 x4EC[0xC]; u8 x4F8[0x10]; u16 x508; s16 x50A; };

struct Ent_8013D4A0 { u8 pad0[0xA4]; Part_8013D4A0 *parts; };

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
M2C_UNK offset_point_toward_camera(void *, void *, f32);
M2C_UNK set_position_vec3__10TObjPlayerFPvPv(int, void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(void *);
M2C_UNK draw_chunk_object();
extern u8 lbl_8048E5A0[];
extern RecoveredGlobal_8013D7E0_lbl_804A7164 lbl_804A7164;
extern u8 *lbl_805D4DF0;
extern const f32 TMainCursor__data_805DB0C0;
s32 TLobby__sub_800822E8(s32, s32);
s32 TObjPlayer__sub_801B5990(s32, s32);
s32 TObjPlayer__sub_801B5AC4(s32, s32);
s32 TObjPlayer__sub_801B5AF8(s32, s32);
s32 try_camera_action__10TObjPlayerFii(s32, u16);
s32 check_mode_action__10TObjPlayerFii(s32, u16);
s32 reset_key_machine_state__10TObjPlayerFv();
extern u8 lbl_804A7150[];
s32 get_action_cursor_priority__11TMainCursorFPvii(void *arg0, s32 arg1, s32 arg2);
void *TObjPlayer__sub_80116620(void *, s32);
void refresh_target_marker__11TMainCursorFPv(void *);
void *TMainCursor__ct(void *, s32, u16, s16, s32, s32, u16, f32);
void set_target_index__11TMainCursorFPvs(void *, u16);
u16 get_id__11TMainCursorFPv(s32);
void *get_list__11TMainCursorFPv(void *);
void get_action_palette__11TMainCursorFPv(void *, u8);
void update_action_palette__11TMainCursorFPv(void *, u8);
void set_target_id__11TMainCursorFPvs(void *, s16);
u8 get_active__11TMainCursorFPv(void *);
u8 TMainCursor__sub_8013E900(void *);
u16 get_target_id__11TMainCursorFPv(void *);
void TMainCursor__sub_8013E9C0(void *, s32);
void TMainCursor__sub_8013EA00(void *, s32);
s32 render_part__13TLockOnCursorFPv(void *);
s32 update_cursor_pos__13TLockOnCursorFPv(void *);
void set_flag_8_bit0__13TLockOnCursorFPv(void *);
void update_ring__13TLockOnCursorFPv(void *);
void is_bit1_set__13TLockOnCursorFPv(void *);
s32 is_inactive__13TLockOnCursorFPv(TLockOnCursor*);
void update_ring_sub__13TLockOnCursorFPv(void *);
s32 TLockOnCursor__sub_8013EB2C(void *);
void set_cursor_id__11TMainCursorFPvs(void *, u16);
void set_field2__11TMainCursorFPvs(void *, s16);
void set_size__11TMainCursorFPvf(void *, f32);
s32 get_record_at__11TMainCursorFPvi(s32, M2C_UNK);
s32 TMainCursor__sub_8013F168(s32);
u8 fn_8013F264(void *);
s32 test_button__11TMainCursorFPviUs(void *, s16, u16);
void TMainCursor__sub_80154230(void *, s16, u16);
Ent_8013D4A0 *find_entity_by_id(u16);
void *__nw__7TObjectFUl(u32);
extern s32 tl_loc_end;
void TMainCursor__sub_8013D4A0(Self_8013D4A0 *arg0, s32 arg1);
}

extern "C" {

void set_cursor_color__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void set_cursor_pos__11TMainCursorFiUsi(s32 arg0, u16 arg1, s32 arg2);
void set_display_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void setup_flags__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2);
void sort_list__11TMainCursorFii(s32 arg0, s32 arg1);
M2C_UNK TMainCursor__sub_8013E970(s32, u16, s32, s32);
s32 get_record_at__11TMainCursorFPvi(s32, M2C_UNK);
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

s32 get_action_cursor_priority__11TMainCursorFPvii(void *arg0, s32 arg1, s32 arg2) {
    u16 kind;
    u16 sub;
    kind = TObjPlayer__sub_801B5AF8(arg1, arg2);
    sub = TObjPlayer__sub_801B5AC4(arg1, arg2);
    switch (kind) {
    case 1:
        if (TObjPlayer__sub_801B5990(arg1, 0) != 0) {
            return 1;
        }
        break;
    case 2:
        if (check_mode_action__10TObjPlayerFii(arg1, sub) != 0) {
            return 2;
        }
        break;
    case 3:
        if (try_camera_action__10TObjPlayerFii(arg1, sub) != 0) {
            return lbl_804A7150[sub];
        }
        break;
    case 4:
        if (TObjPlayer__sub_801B5990(arg1, arg2) != 0 && reset_key_machine_state__10TObjPlayerFv() != 0 && TLobby__sub_800822E8(arg1, 0x43001E) != 0 && ((s32)sub == 0xA || (s32)sub == 9)) {
            return 0xF;
        }
        break;
    case 5:
        return (s8)(sub + 3);
    default:
        return 0;
    }
    return 0;
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
        quick_sort__11TMainCursorFiiii(temp_r30, get_record_at__11TMainCursorFPvi(temp_r30 + 0x40, 0), 0, temp_r31 - 1);
    }
}
void TMainCursor__sub_8013D4A0(Self_8013D4A0 *arg0, s32 arg1) {
    s32 count;
    s32 i;
    Sub_8013D4A0 *sub;
    Item_8013D4A0 *item;
    s32 n;
    Ent_8013D4A0 *ent;
    Part_8013D4A0 *part;
    s32 mode;
    void *cur;
    void *list;
    sub = &arg0->subs[arg1];
    count = 0;
    item = (Item_8013D4A0 *)((s32 (*)(void *, M2C_UNK))get_record_at__11TMainCursorFPvi)(sub->x40, 0);
    n = ((s32 (*)(void *))TMainCursor__sub_8013F168)(sub->x40);
    for (i = 0; i < n; i++, item++) {
        if (item->id == 0xFFFF) {
            continue;
        }
        ent = find_entity_by_id(item->id);
        if (ent == NULL) {
            continue;
        }
        part = &ent->parts[item->idx];
        if (part == NULL) {
            continue;
        }
        if (count >= TLockOnCursor__sub_8013EB2C(sub)) {
            break;
        }
        mode = 0;
        if (arg0->x508 != 0xFFFF) {
            if (arg0->x508 == item->id && arg0->x50A == item->idx) {
                if (((u16 (*)(void *))get_id__11TMainCursorFPv)(arg0->x4F8) == 0xFFFF) {
                    mode = 2;
                } else {
                    mode = 1;
                }
            } else if (TLockOnCursor__sub_8013EB2C(sub) > 1) {
                mode = 1;
            }
        } else if (((u16 (*)(void *))get_id__11TMainCursorFPv)(arg0->x4F8) == 0xFFFF) {
            mode = 2;
        } else {
            mode = 1;
        }
        if (mode == 0) {
            continue;
        }
        if (TMainCursor__sub_8013E900(sub) == 1) {
            if (mode == 1) {
                continue;
            }
            TMainCursor__sub_8013E9C0(sub, fn_8013F264(ent));
        }
        cur = TObjPlayer__sub_80116620(sub->x9C, count);
        set_cursor_id__11TMainCursorFPvs(cur, item->id);
        set_size__11TMainCursorFPvf(cur, item->size);
        set_field2__11TMainCursorFPvs(cur, item->idx);
        update_ring_sub__13TLockOnCursorFPv(cur);
        if (is_inactive__13TLockOnCursorFPv((TLockOnCursor*)((TLockOnCursor *)arg0)) == 0 || test_button__11TMainCursorFPviUs(ent, item->idx, get_target_id__11TMainCursorFPv(arg0)) != 0 || (part->flags & 0x08000000)) {
            is_bit1_set__13TLockOnCursorFPv(cur);
        }
        if (mode == 1) {
            update_ring__13TLockOnCursorFPv(cur);
        } else {
            set_flag_8_bit0__13TLockOnCursorFPv(cur);
            if (test_button__11TMainCursorFPviUs(ent, item->idx, get_target_id__11TMainCursorFPv(arg0)) == 0) {
                list = get_list__11TMainCursorFPv(arg0->x4EC);
                set_target_index__11TMainCursorFPvs(list, item->id);
                update_action_palette__11TMainCursorFPv(list, TMainCursor__sub_8013E900(sub));
                get_action_palette__11TMainCursorFPv(list, get_active__11TMainCursorFPv(sub));
                set_target_id__11TMainCursorFPvs(list, item->idx);
                if (update_cursor_pos__13TLockOnCursorFPv(arg0->x4EC) == 0 && render_part__13TLockOnCursorFPv(cur) == 0) {
                    cur = __nw__7TObjectFUl(0x68);
                    if (cur != NULL) {
                        cur = TMainCursor__ct(cur, tl_loc_end, item->id, item->idx, TMainCursor__sub_8013E900(sub), get_active__11TMainCursorFPv(sub), get_target_id__11TMainCursorFPv(arg0), part->fC);
                    }
                    if (cur != NULL) {
                        refresh_target_marker__11TMainCursorFPv(cur);
                    }
                }
            }
        }
        part->flags |= 0x10000000;
        TMainCursor__sub_80154230(ent, item->idx, get_target_id__11TMainCursorFPv(arg0));
        count++;
    }
    TMainCursor__sub_8013EA00(sub->x9C, count);
    set_cursor_id__11TMainCursorFPvs(TObjPlayer__sub_80116620(sub->x9C, count), 0xFFFF);
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
                offset_point_toward_camera((void *) (arg1 + 0x1C), (void *) (&sp8), (f32) (temp_f31));
                set_position_vec3__10TObjPlayerFPvPv((int) (0), (void *) (&sp8));
                rotate_matrix_y((int) (0), (int) (M2C_FIELD(lbl_805D4DF0, s32 *, 0x194)));
                begin_effect_render__13TParticleCtrlFv();
                TObjPlayer__sub_803D9B2C();
                translate_matrix((int) (0), (f32) (TMainCursor__data_805DB0C0), (f32) (temp_f31), (f32) (TMainCursor__data_805DB0C0));
                update_parts2__15TPlyPhotonChairFPv((void *) (arg0 + 0x48));
                play_sound_with_arg__15TPlyPhotonChairFPvPv((void *) (arg0 + 0x48), (void *) ((u8 *)&lbl_804A7164.value + 0x50));
                get_cursor_state__11TMainCursorFv();
                draw_chunk_object();
                play_sound_with_arg__15TPlyPhotonChairFPvPv((void *) (arg0 + 0x48), (void *) ((u8 *)&lbl_804A7164.value + (temp_r3_2 * 0x10)));
                TLockOnCursor__sub_8013EB34();
                draw_chunk_object();
                update_parts__15TPlyPhotonChairFPv((void *) (arg0 + 0x48));
                pop_matrix();
                end_effect_render__13TParticleCtrlFv();
                pop_matrix();
            }
        }
    }
}
