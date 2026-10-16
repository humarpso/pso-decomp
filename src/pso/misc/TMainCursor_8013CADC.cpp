#include "types.h"
#include "pso/misc/TLockOnCursor.h"
#include "pso/misc/TMainCursor.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TPlyPhotonChair.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_8013D7E0_lbl_804A7164 {
    s32 value;
    u8 remaining[0x5C];
};

struct TLockOnCursor;
struct Item_8013D4A0 { u16 id; s16 idx; f32 size; };

struct Part_8013D4A0 { u8 pad0[0xC]; f32 fC; u8 pad10[8]; s32 flags; u8 pad1C[0x10]; };

struct Sub_8013D4A0 { u8 pad0[0x40]; u8 x40[0x5C]; u8 x9C[0x88]; };

struct Self_8013D4A0 { u8 pad0[0x5C]; Sub_8013D4A0 subs[3]; u8 pad3C8[0x124]; u8 x4EC[0xC]; u8 x4F8[0x10]; u16 x508; s16 x50A; };

struct Ent_8013D4A0 { u8 pad0[0xA4]; Part_8013D4A0 *parts; };

struct Cursor_8013CDE4 {
    u8 pad0[0x1C];
    f32 pos[3];
    f32 f28;
    f32 f2c;
    f32 f30;
    s32 f34;
    s32 f38;
    f32 f3c;
    u8 f40[0x9C - 0x40];
    u8 f9c[0x124 - 0x9C];
};

struct Main_8013CDE4 { u8 pad0[0x5C]; Cursor_8013CDE4 cursors[4]; };

struct Tech_8013CDE4 { u8 pad0[8]; f32 f8; f32 fc; u8 pad10[0x18 - 0x10]; s32 f18; s32 f1c; u8 pad20[2]; s8 f22; };

struct Weapon_8013CDE4 { f32 f0; f32 f4; s32 f8; s32 fc; s32 f10; };

extern "C" {
s32 check_visible__11TMainCursorFv(void *, int, void *, void *);
u16 get_target_id__11TMainCursorFv(void *);
s32 TLockOnCursor__sub_8013EB34();
u32 get_player_by_client_id(void *);
s32 offset_point_toward_camera(void *, void *, f32);
s32 translate_matrix_vec3(int, void *);
s32 rotate_matrix_y(int, int);
s32 translate_matrix(int, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 draw_chunk_object();
extern u8 shared_effect_texture_list[];
extern RecoveredGlobal_8013D7E0_lbl_804A7164 target_cursor_color_table;
extern u8 *camera_ctrl_instance;
extern const f32 TMainCursor__data_805DB0C0;
s32 test_action_mask__10TObjPlayerFl(s32, s32);
s32 is_effect_channel_active__10TObjPlayerFii(s32, s32);
s32 get_action_palette_entry__10TObjPlayerFii(s32, s32);
s32 TObjPlayer__sub_801B5AF8(s32, s32);
s32 try_camera_action__10TObjPlayerFii(s32, u16);
s32 reset_key_machine_state__10TObjPlayerFv();
extern u8 cursor_action_priority_table[];
void *TObjPlayer__sub_80116620(void *, s32);
void refresh_target_marker__11TMainCursorFPv(void *);
void *TMainCursor__ct(void *, s32, u16, s16, s32, s32, u16, f32);
void set_target_index__11TMainCursorFs(void *, u16);
void get_action_palette__11TMainCursorFv(void *, u8);
void update_action_palette__11TMainCursorFv(void *, u8);
void set_target_id__11TMainCursorFPvs(void *, s16);
u8 get_active__11TMainCursorFv(void *);
u8 TMainCursor__sub_8013E900(void *);
u16 get_target_id__11TMainCursorFv(void *);
void TMainCursor__sub_8013E9C0(void *, s32);
void TMainCursor__sub_8013EA00(void *, s32);
s32 update_cursor_pos__13TLockOnCursorFv(void *);
s32 TLockOnCursor__sub_8013EB2C(void *);
void set_cursor_id__11TMainCursorFs(void *, u16);
s32 get_record_at__11TMainCursorFPvi(s32, s32);
s32 TMainCursor__sub_8013F168(s32);
u8 fn_8013F264(void *);
s32 test_button__11TMainCursorFPviUs(void *, s16, u16);
void TMainCursor__sub_80154230(void *, s16, u16);
Ent_8013D4A0 *find_entity_by_id(u16);
void *__nw__7TObjectFUl(u32);
extern s32 tl_loc_end;
void publish_target_list__11TMainCursorFPvi(Self_8013D4A0 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, const void *);
s32 obj_isState3_324(void *);
s32 obj_getField1c(void *);
void *get_item_field_6__10TObjPlayerFPv(void *);
s32 get_type__10TObjPlayerFPv(s32);
s32 fn_80044330(void *);
Weapon_8013CDE4 *get_weapon_range_record(void *, s32);
s32 check_type_and_enabled__11TMainCursorFPvPv(Cursor_8013CDE4 *, u8, u8);
s32 TMainCursor__sub_8013E9A0(Cursor_8013CDE4 *);
void TMainCursor__sub_8013E9C0(void *, s32);
s32 TMainCursor__sub_8013E9E0(Cursor_8013CDE4 *, u8);
Tech_8013CDE4 *get_photon_blast_entry__10TObjPlayerFi(s16);
s32 get_cast_technique_level(void *, s32);
Tech_8013CDE4 *calc_technique_parameters(s16, u8, s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern f32 lbl_8050BF60[3];
extern const f32 TMainCursor__data_805DB0C0;
extern const f32 interaction_cursor_radius;
extern const f32 ryuker_cursor_forward_offset;
void setup_action_channel__11TMainCursorFiPviii(s32 self, u8 *player, s32 slot, s32 kind, s32 id);
}

extern "C" {

s32 TMainCursor__sub_8013E970(s32, u16, s32, s32);
s32 get_record_at__11TMainCursorFPvi(s32, s32);
s32 TMainCursor__sub_8013F168(s32);
s32 TObjPlayer__sub_801B066C(s32);
s32 get_selected_entry__11TMainCursorFv(s32, s32);
s32 get_type__10TObjPlayerFPv(s32);
s32 is_technique_ready__8TTecCtrlFv();

void TMainCursor::set_cursor_pos(u16 arg1, s32 arg2) {
    s32 arg0 = (s32)this;
    u32 eq = (u32) __cntlzw((u32) ((u16) ((TMainCursor *)(arg0 + 0x4F8))->get_id() - (u16) arg1)) >> 5;
    TMainCursor__sub_8013E970(arg0 + 0x508, arg1, arg2, eq + 1);
}

s32 TMainCursor::get_action_cursor_priority(void *arg0, s32 arg1, s32 arg2) {
    u16 kind;
    u16 sub;
    kind = TObjPlayer__sub_801B5AF8(arg1, arg2);
    sub = get_action_palette_entry__10TObjPlayerFii(arg1, arg2);
    switch (kind) {
    case 1:
        if (is_effect_channel_active__10TObjPlayerFii(arg1, 0) != 0) {
            return 1;
        }
        break;
    case 2:
        if (((TObjPlayer *)arg1)->check_mode_action(sub) != 0) {
            return 2;
        }
        break;
    case 3:
        if (try_camera_action__10TObjPlayerFii(arg1, sub) != 0) {
            return cursor_action_priority_table[sub];
        }
        break;
    case 4:
        if (is_effect_channel_active__10TObjPlayerFii(arg1, arg2) != 0 && reset_key_machine_state__10TObjPlayerFv() != 0 && test_action_mask__10TObjPlayerFl(arg1, 0x43001E) != 0 && ((s32)sub == 0xA || (s32)sub == 9)) {
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

void TMainCursor::set_cursor_color(s32 arg0, s32 arg1, s32 arg2) {
    if (get_type__10TObjPlayerFPv(arg1 + 0x828) != 0) {
        ((TMainCursor *)arg2)->set_color(0xA000);
        ((TMainCursor *)arg2)->set_color_mode(0x70000000);
        return;
    }
    ((TMainCursor *)arg2)->set_color(0x8000);
    ((TMainCursor *)arg2)->set_color_mode(0x60000000);
}

void TMainCursor::set_display_flags(s32 arg0, s32 arg1, s32 arg2) {
    ((TMainCursor *)arg2)->set_color(0x2000);
    ((TMainCursor *)arg2)->set_color_mode(0x10000000);
    ((TMainCursor *)arg2)->set_flags(0xE0000800);
    if (is_technique_ready__8TTecCtrlFv() == 0) {
        ((TMainCursor *)arg2)->set_field_0c(0x30000);
        return;
    }
    if (TObjPlayer__sub_801B066C(arg1) == 1) {
        ((TMainCursor *)arg2)->set_field_0c(0x40030000);
        return;
    }
    ((TMainCursor *)arg2)->set_field_0c(0x40030000);
}

void TMainCursor::setup_flags(s32 arg0, s32 arg1, s32 arg2) {
    ((TMainCursor *)arg2)->set_color(0x2000);
    ((TMainCursor *)arg2)->set_field_0c(0x3C000);
    ((TMainCursor *)arg2)->set_color_mode(0x800);
    ((TMainCursor *)arg2)->set_flags(0xE0000000);
}

#pragma push
#pragma fp_contract on
#define C_8013CDE4 ((s32)cur)
#define TECH_8013CDE4(t)                                          \
    cur->f3c = (t)->fc;                                           \
    cur->f28 = (t)->f8 + cur->f3c;                                \
    cur->f34 = (t)->f18;                                          \
    cur->f2c = cos_table_lookup(cur->f34);              \
    cur->f38 = (t)->f1c;                                          \
    cur->f30 = cos_table_lookup(cur->f38);
void setup_action_channel__11TMainCursorFiPviii(s32 self, u8 *player, s32 slot, s32 kind, s32 id) {
    Cursor_8013CDE4 *cur;
    Tech_8013CDE4 *tech;
    Weapon_8013CDE4 *wpn;
    s16 sid;
    if (player == NULL) {
        return;
    }
    cur = &((Main_8013CDE4 *)self)->cursors[slot];
    if (check_type_and_enabled__11TMainCursorFPvPv(cur, kind, id) == 0) {
        fn_80044330(cur->f40);
        ((TMainCursor *)(cur->f9c))->reset_slot();
    }
    TMainCursor__sub_8013E9E0(cur, kind);
    ((void (*)(void *, u8))TMainCursor__sub_8013E9C0)(cur, id);
    switch ((s16)kind) {
    case 1:
        if (obj_isState3_324(player) == 0) {
            TMainCursor__sub_8013E9A0(cur);
            ((TMainCursor *)C_8013CDE4)->set_color(0x20000);
            ((TMainCursor *)C_8013CDE4)->set_field_0c(0x8000);
            ((TMainCursor *)C_8013CDE4)->set_color_mode(0xC0000000);
            ((TMainCursor *)C_8013CDE4)->set_flags(0x30040800);
            ((TMainCursor *)cur)->set_type(1);
            VecCopy__FP3VecPC3Vec(cur->pos, player + 0x2FC);
            cur->f3c = TMainCursor__data_805DB0C0;
            cur->f28 = interaction_cursor_radius;
            cur->f34 = 0x8000;
            cur->f38 = 0x8000;
            cur->f2c = cos_table_lookup(cur->f34);
            cur->f30 = cos_table_lookup(cur->f38);
        }
        break;
    case 4:
        switch ((s16)id) {
        case 10:
            tech = calc_technique_parameters(0xF, 0xE, obj_getField1c(player));
            TMainCursor__sub_8013E9A0(cur);
            TECH_8013CDE4(tech)
            ((TMainCursor *)cur)->set_type(tech->f22);
            VecCopy__FP3VecPC3Vec(cur->pos, player + 0x2FC);
            TMainCursor::set_display_flags(self, (s32)player, C_8013CDE4);
            break;
        case 9:
            tech = calc_technique_parameters(0x11, 0xE, obj_getField1c(player));
            TMainCursor__sub_8013E9A0(cur);
            TECH_8013CDE4(tech)
            ((TMainCursor *)cur)->set_type(tech->f22);
            VecCopy__FP3VecPC3Vec(cur->pos, player + 0x2FC);
            TMainCursor::setup_flags(self, (s32)player, C_8013CDE4);
            break;
        }
        break;
    case 2:
        wpn = get_weapon_range_record(get_item_field_6__10TObjPlayerFPv(player), id);
        TMainCursor__sub_8013E9A0(cur);
        TMainCursor::set_cursor_color(self, (s32)player, C_8013CDE4);
        ((TMainCursor *)C_8013CDE4)->set_field_0c(0);
        ((TMainCursor *)C_8013CDE4)->set_flags(0x40800);
        VecCopy__FP3VecPC3Vec(cur->pos, player + 0x2FC);
        cur->f3c = wpn->f4;
        cur->f28 = wpn->f0 + cur->f3c;
        cur->f34 = wpn->f8;
        cur->f38 = wpn->fc;
        cur->f2c = cos_table_lookup(cur->f34);
        cur->f30 = cos_table_lookup(cur->f38);
        ((TMainCursor *)cur)->set_type(wpn->f10);
        break;
    case 3: {
        s32 f1c = obj_getField1c(player);
        u8 lvl = get_cast_technique_level(player + 0x428, id);
        sid = id;
        tech = calc_technique_parameters(sid, lvl, f1c);
        TMainCursor__sub_8013E9A0(cur);
        TECH_8013CDE4(tech)
        ((TMainCursor *)cur)->set_type(tech->f22);
        switch (sid) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 18:
            TMainCursor::set_cursor_color(self, (s32)player, C_8013CDE4);
            ((TMainCursor *)C_8013CDE4)->set_field_0c(0);
            ((TMainCursor *)C_8013CDE4)->set_flags(0x40800);
            VecCopy__FP3VecPC3Vec(cur->pos, player + 0x2FC);
            break;
        case 14:
            ((TMainCursor *)C_8013CDE4)->set_color(0x8000);
            ((TMainCursor *)C_8013CDE4)->set_field_0c(0);
            ((TMainCursor *)C_8013CDE4)->set_color_mode(0x60000000);
            ((TMainCursor *)C_8013CDE4)->set_flags(0x40800);
            lbl_8050BF60[0] = ryuker_cursor_forward_offset * sin_table_lookup(*(s32 *)(player + 0x60)) + *(f32 *)(player + 0x2FC);
            lbl_8050BF60[1] = *(f32 *)(player + 0x300);
            lbl_8050BF60[2] = ryuker_cursor_forward_offset * cos_table_lookup(*(s32 *)(player + 0x60)) + *(f32 *)(player + 0x304);
            VecCopy__FP3VecPC3Vec(cur->pos, lbl_8050BF60);
            break;
        case 10:
        case 13:
        case 15:
        case 16:
            VecCopy__FP3VecPC3Vec(cur->pos, player + 0x2FC);
            TMainCursor::set_display_flags(self, (s32)player, C_8013CDE4);
            break;
        case 11:
        case 12:
            if (get_type__10TObjPlayerFPv((s32)(player + 0x828)) != 0) {
                ((TMainCursor *)C_8013CDE4)->set_color(0xA000);
                ((TMainCursor *)C_8013CDE4)->set_color_mode(0x30000000);
            } else {
                ((TMainCursor *)C_8013CDE4)->set_color(0x8000);
                ((TMainCursor *)C_8013CDE4)->set_color_mode(0x20000000);
            }
            ((TMainCursor *)C_8013CDE4)->set_field_0c(0x30000);
            ((TMainCursor *)C_8013CDE4)->set_flags(0xC0040800);
            VecCopy__FP3VecPC3Vec(cur->pos, player + 0x2FC);
            break;
        case 17:
            VecCopy__FP3VecPC3Vec(cur->pos, player + 0x2FC);
            TMainCursor::setup_flags(self, (s32)player, C_8013CDE4);
            break;
        }
        break;
    }
    case 5: {
        s16 pid = id;
        tech = get_photon_blast_entry__10TObjPlayerFi(pid);
        TMainCursor__sub_8013E9A0(cur);
        if (get_type__10TObjPlayerFPv((s32)(player + 0x828)) == 0) {
            ((TMainCursor *)C_8013CDE4)->set_color(0x8000);
            ((TMainCursor *)C_8013CDE4)->set_color_mode(0x20000000);
        } else {
            ((TMainCursor *)C_8013CDE4)->set_color(0xA000);
            ((TMainCursor *)C_8013CDE4)->set_color_mode(0x30000000);
        }
        ((TMainCursor *)C_8013CDE4)->set_field_0c(0);
        ((TMainCursor *)C_8013CDE4)->set_flags(0xD0040800);
        TECH_8013CDE4(tech)
        switch (pid) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            VecCopy__FP3VecPC3Vec(cur->pos, player + 0x2FC);
            ((TMainCursor *)cur)->set_type(0xA);
            break;
        }
        break;
    }
    }
}
#pragma pop

void TMainCursor::sort_list(s32 arg0, s32 arg1) {
    s32 temp_r30;
    s32 temp_r31;
    s32 temp_r4;

    temp_r4 = arg1 * 0x124;
    temp_r30 = arg0 + temp_r4 + 0x5C;
    if (get_selected_entry__11TMainCursorFv(temp_r30, temp_r4) != 0) {
        temp_r31 = TMainCursor__sub_8013F168(temp_r30 + 0x40);
        TMainCursor::quick_sort(temp_r30, get_record_at__11TMainCursorFPvi(temp_r30 + 0x40, 0), 0, temp_r31 - 1);
    }
}
void publish_target_list__11TMainCursorFPvi(Self_8013D4A0 *arg0, s32 arg1) {
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
    item = (Item_8013D4A0 *)((s32 (*)(void *, s32))get_record_at__11TMainCursorFPvi)(sub->x40, 0);
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
                if (((TMainCursor *)(arg0->x4F8))->get_id() == 0xFFFF) {
                    mode = 2;
                } else {
                    mode = 1;
                }
            } else if (TLockOnCursor__sub_8013EB2C(sub) > 1) {
                mode = 1;
            }
        } else if (((TMainCursor *)(arg0->x4F8))->get_id() == 0xFFFF) {
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
        set_cursor_id__11TMainCursorFs(cur, item->id);
        ((TMainCursor *)cur)->set_size(item->size);
        ((TMainCursor *)cur)->set_field2(item->idx);
        ((TLockOnCursor *)cur)->update_ring_sub();
        if (((TLockOnCursor *)arg0)->is_inactive() == 0 || test_button__11TMainCursorFPviUs(ent, item->idx, get_target_id__11TMainCursorFv(arg0)) != 0 || (part->flags & 0x08000000)) {
            ((TLockOnCursor *)cur)->is_bit1_set();
        }
        if (mode == 1) {
            ((TLockOnCursor *)cur)->update_ring();
        } else {
            ((TLockOnCursor *)cur)->set_flag_8_bit0();
            if (test_button__11TMainCursorFPviUs(ent, item->idx, get_target_id__11TMainCursorFv(arg0)) == 0) {
                list = ((TMainCursor *)(arg0->x4EC))->get_list();
                set_target_index__11TMainCursorFs(list, item->id);
                update_action_palette__11TMainCursorFv(list, TMainCursor__sub_8013E900(sub));
                get_action_palette__11TMainCursorFv(list, get_active__11TMainCursorFv(sub));
                set_target_id__11TMainCursorFPvs(list, item->idx);
                if (update_cursor_pos__13TLockOnCursorFv(arg0->x4EC) == 0 && ((TLockOnCursor *)cur)->render_part() == 0) {
                    cur = __nw__7TObjectFUl(0x68);
                    if (cur != NULL) {
                        cur = TMainCursor__ct(cur, tl_loc_end, item->id, item->idx, TMainCursor__sub_8013E900(sub), get_active__11TMainCursorFv(sub), get_target_id__11TMainCursorFv(arg0), part->fC);
                    }
                    if (cur != NULL) {
                        refresh_target_marker__11TMainCursorFPv(cur);
                    }
                }
            }
        }
        part->flags |= 0x10000000;
        TMainCursor__sub_80154230(ent, item->idx, get_target_id__11TMainCursorFv(arg0));
        count++;
    }
    TMainCursor__sub_8013EA00(sub->x9C, count);
    set_cursor_id__11TMainCursorFs(TObjPlayer__sub_80116620(sub->x9C, count), 0xFFFF);
}

}

typedef char RecoveredGlobal_8013D7E0_lbl_804A7164_size[sizeof(RecoveredGlobal_8013D7E0_lbl_804A7164) == 0x60 ? 1 : -1];
void TLockOnCursor::renderSecondaryCursor(u8 *arg1, s32 arg2, s32 arg3) {
    const s32 arg0 = (s32)this;
    f32 sp8[3];
    f32 temp_f31;
    s32 temp_r3_2;
    u32 temp_r3;
    if (is_inactive() != 0) {
        temp_r3 = get_player_by_client_id((void *) (get_target_id__11TMainCursorFv((void *) (this))));
        if (temp_r3 != 0U) {
            temp_r3_2 = check_visible__11TMainCursorFv((void *) (temp_r3 + 0x500), (int) (temp_r3), (void *) (arg2), (void *) (arg3));
            if (temp_r3_2 != -1) {
                TObjFish::set_global_param((s32)((void *) (&shared_effect_texture_list)));
                temp_f31 = *(f32 *)((s8 *)arg1 + 0xC);
                push_matrix();
                offset_point_toward_camera((void *) (arg1 + 0x1C), (void *) (&sp8), (f32) (temp_f31));
                translate_matrix_vec3((int) (0), (void *) (&sp8));
                rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)camera_ctrl_instance + 0x194)));
                TParticleCtrl::begin_effect_render();
                push_matrix();
                translate_matrix((int) (0), (f32) (TMainCursor__data_805DB0C0), (f32) (temp_f31), (f32) (TMainCursor__data_805DB0C0));
                TPlyPhotonChair::update_parts2((void *) (arg0 + 0x48));
                TPlyPhotonChair::play_sound_with_arg((void *) (arg0 + 0x48), (void *) ((u8 *)&target_cursor_color_table.value + 0x50));
                TMainCursor::get_cursor_state();
                draw_chunk_object();
                TPlyPhotonChair::play_sound_with_arg((void *) (arg0 + 0x48), (void *) ((u8 *)&target_cursor_color_table.value + (temp_r3_2 * 0x10)));
                TLockOnCursor__sub_8013EB34();
                draw_chunk_object();
                TPlyPhotonChair::update_parts((void *) (arg0 + 0x48));
                pop_matrix();
                TParticleCtrl::end_effect_render();
                pop_matrix();
            }
        }
    }
}
