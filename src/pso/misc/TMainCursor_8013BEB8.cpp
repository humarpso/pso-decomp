#include "types.h"
#include "pso/misc/TMainCursor_8013BEB8.h"
#include "pso/object/TObjMotion.h"
#include "pso/misc/TMainCursor.h"
#include "pso/TObject.h"
#include "pso/boss/TObjBoss2Tunnel.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TCameraCtrl.h"
#include "pso/misc/TLockOnCursor.h"

typedef struct Vec_8013BF0C { f32 x, y, z; } Vec_8013BF0C;

typedef struct Vec_8013C0A0 { f32 x, y, z; } Vec_8013C0A0;

struct Vec_8013BF0C;
struct Vec_8013C0A0;
struct Coll_8013C288 { u8 pad0[0xC]; f32 radius; u8 pad10[0x18 - 0x10]; u32 flags; u8 pos[0x2C - 0x1C]; };

struct Best_8013C288 { s32 index; u8 pad4[2]; u16 id; u8 pad8[4]; f32 dist; };

extern "C" {
u8 * csnVector(s32, s32, s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
f32 vec3_dot(void *, void *);
extern const f32 TMainCursor__data_805DB0C0;
extern const f32 TMainCursor__data_805DB0CC;
extern const f32 lbl_805DB0E0;
s32 target_in_vertical_cone(Vec_8013BF0C *p, Vec_8013BF0C *q, s32 yaw, f32 range, f32 dist);
extern Vec_8013C0A0 lbl_8050BEE0;
s32 target_in_xz_cone(Vec_8013C0A0 *p, Vec_8013C0A0 *q, Vec_8013C0A0 *r, s32 yaw, f32 range, f32 dist);
s32 obj_testFlags30__13TUnk_804AF8A0FUl(void *, s32);
s32 obj_getField1c(void *);
s32 set_cursor_id__11TMainCursorFs(s32, int);
s32 set_size__11TMainCursorFf(f32);
s32 TMainCursor__sub_8013F13C(void *);
f32 TMainCursor__sub_8013F14C(s32);
s32 get_record_at__11TMainCursorFPvi(void *, int);
s32 TMainCursor__sub_8013F168(void *);
f32 horizontal_distance_squared(void *, void *);
s32 set_flag_bit__11TMainCursorFlUs(void *, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 try_add_target_candidate__11TMainCursorFPvPvPvPv(u8 *cursor, u8 *player, u8 *target, Best_8013C288 *best);
struct Ent_8013C678 { u32 id; f32 key; };
void *fn_8004438C(void *p);
s32 quick_sort_partition__11TMainCursorFiPvii(s32 self, Ent_8013C678 *a, s32 lo, s32 hi);
s32 is_channel_active__11TMainCursorFv(void *self);
int matches_type_and_enabled__11TMainCursorFiUcUc(void*, void* a1 = 0, void* a2 = 0);
u8 TMainCursor__sub_8013E900(s32);
void TMainCursor__sub_8013F170(void *p, s32 v);
void fn_80044330(void *p);
u8 get_active__11TMainCursorFv(s32);

s32 try_move__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (is_channel_active__11TMainCursorFv((void *)arg0) != 0) {
        return matches_type_and_enabled__11TMainCursorFiUcUc((void*)arg0, (void*)arg1, (void*)arg2);
    }
    return 0;
}

#pragma push
#pragma fp_contract on
s32 target_in_vertical_cone(Vec_8013BF0C *p, Vec_8013BF0C *q, s32 yaw, f32 range, f32 dist) {
    Vec_8013BF0C a;
    Vec_8013BF0C b;
    f32 x;
    f32 y;
    f32 z;
    if (lbl_805DB0E0 < range && range < TMainCursor__data_805DB0CC) {
        if (TMainCursor__data_805DB0C0 == dist) {
            a.x = q->x - p->x;
            a.y = TMainCursor__data_805DB0C0;
            a.z = q->z - p->z;
            b.x = a.x;
            b.y = q->y - p->y;
            b.z = a.z;
            ((TObjBoss2Tunnel *)(&a))->update_scale();
            ((TObjBoss2Tunnel *)(&b))->update_scale();
            if (vec3_dot(&a, &b) < range) {
                return 0;
            }
        } else {
            x = dist * sin_table_lookup(yaw + 0x8000) + p->x;
            y = p->y;
            z = dist * cos_table_lookup(yaw + 0x8000) + p->z;
            a.x = q->x - x;
            a.y = TMainCursor__data_805DB0C0;
            a.z = q->z - z;
            b.x = a.x;
            b.y = q->y - y;
            b.z = a.z;
            ((TObjBoss2Tunnel *)(&a))->update_scale();
            ((TObjBoss2Tunnel *)(&b))->update_scale();
            if (vec3_dot(&a, &b) < range) {
                return 0;
            }
        }
    }
    return 1;
}
#pragma pop

#pragma push
#pragma fp_contract on
s32 target_in_xz_cone(Vec_8013C0A0 *p, Vec_8013C0A0 *q, Vec_8013C0A0 *r, s32 yaw, f32 range, f32 dist) {
    Vec_8013C0A0 a;
    Vec_8013C0A0 b;
    f32 x;
    f32 z;
    if (lbl_805DB0E0 < range && range < TMainCursor__data_805DB0CC) {
        a.x = sin_table_lookup(yaw);
        a.y = TMainCursor__data_805DB0C0;
        a.z = cos_table_lookup(yaw);
        if (TMainCursor__data_805DB0C0 == dist) {
            b.x = q->x - p->x;
            b.y = TMainCursor__data_805DB0C0;
            b.z = q->z - p->z;
            ((TObjBoss2Tunnel *)(&b))->update_scale();
            if (vec3_dot(&a, &b) < range) {
                return 0;
            }
        } else {
            x = dist * sin_table_lookup(yaw + 0x8000) + p->x;
            z = dist * cos_table_lookup(yaw + 0x8000) + p->z;
            b.x = q->x - x;
            b.y = TMainCursor__data_805DB0C0;
            b.z = q->z - z;
            ((TObjBoss2Tunnel *)(&b))->update_scale();
            if (vec3_dot(&a, &b) < range) {
                return 0;
            }
            lbl_8050BEE0.x = q->x - r->x;
            lbl_8050BEE0.y = TMainCursor__data_805DB0C0;
            lbl_8050BEE0.z = q->z - r->z;
            ((TObjBoss2Tunnel *)(&lbl_8050BEE0))->update_scale();
            if (vec3_dot(&a, &lbl_8050BEE0) < TMainCursor__data_805DB0C0) {
                return 0;
            }
        }
    }
    return 1;
}
#pragma pop

void init_target_vector__11TMainCursorFiii(s32 arg0, s32 arg1, s32 arg2) {
    csnVector(arg2, arg1, 0x28A0);
}

s32 try_add_target_candidate__11TMainCursorFPvPvPvPv(u8 *cursor, u8 *player, u8 *target, Best_8013C288 *best) {
    f32 dist;
    s32 slot;
    s32 found;
    s32 i;
    Coll_8013C288 *c;
    s32 yaw;
    s32 stat;
    s32 j;
    slot = 0;
    found = 0;
    if (target == NULL) {
        return 0;
    }
    if ((u16)obj_getField1c(target) == (u16)obj_getField1c(player)) {
        return 0;
    }
    if (is_technique_ready__8TTecCtrlFv() == 0) {
        if (((TUnk_804B9870 *)target)->get_stat_by_key_state() != (stat = ((TUnk_804B9870 *)player)->get_stat_by_key_state()) && (*(u32 *)(player + 0x30) & 0x60000000) == 0x20000000 && stat != -1) {
            return 0;
        }
    }
    if (obj_testFlags30__13TUnk_804AF8A0FUl(target, 0xA00) != 0) {
        return 0;
    }
    if (player == NULL || ((TObject *)player)->all_parents_unqueued_for_destruction() == 0) {
        return 0;
    }
    if (obj_testFlags30__13TUnk_804AF8A0FUl(player, ((TMainCursor *)cursor)->get_actor_include_mask()) == 0 ||
        obj_testFlags30__13TUnk_804AF8A0FUl(player, ((TMainCursor *)cursor)->get_actor_exclude_mask()) != 0) {
        return 0;
    }
    yaw = *(s32 *)(target + 0x60);
    for (i = 0; i < *(s32 *)(player + 0xA8); i++) {
        c = &(*(Coll_8013C288 **)(player + 0xA4))[i];
        if (c == NULL) {
            continue;
        }
        c->flags &= ~0x10000000;
        set_flag_bit__11TMainCursorFlUs(player, i, obj_getField1c(target));
        if (!(c->flags & 1)) {
            continue;
        }
        if (!(c->flags & ((TMainCursor *)cursor)->get_body_include_mask())) {
            continue;
        }
        if (c->flags & ((TMainCursor *)cursor)->get_body_exclude_mask()) {
            continue;
        }
        dist = horizontal_distance_squared(cursor + 0x1C, c->pos);
        if (!(c->flags & 0x22000) && best->dist > dist) {
            best->dist = dist;
            best->id = obj_getField1c(player);
            best->index = i;
        }
        {
            f32 r = *(f32 *)(cursor + 0x28) + c->radius;
            if (dist > r * r) {
                continue;
            }
        }
        if (is_technique_ready__8TTecCtrlFv() != 0 && (c->flags & 0xA000) &&
            ((u32 (*)(u8 *, void *, s32))init_target_vector__11TMainCursorFiii)(cursor, c->pos, *(s32 *)(target + 0xA4) + 0x1C) != 0) {
            continue;
        }
        if (target_in_xz_cone((Vec_8013C0A0 *)(cursor + 0x1C), (Vec_8013C0A0 *)c->pos, (Vec_8013C0A0 *)(target + 0x38), yaw,
                              *(f32 *)(cursor + 0x2C), *(f32 *)(cursor + 0x3C)) == 0) {
            continue;
        }
        if (target_in_vertical_cone((Vec_8013BF0C *)(cursor + 0x1C), (Vec_8013BF0C *)c->pos, yaw, *(f32 *)(cursor + 0x30),
                                      *(f32 *)(cursor + 0x3C)) == 0) {
            continue;
        }
        if (*(f32 *)(cursor + 0x18) < dist) {
            *(f32 *)(cursor + 0x18) = dist;
        }
        if (TMainCursor__sub_8013F168(cursor + 0x40) >= 10) {
            for (j = 0; j <= TMainCursor__sub_8013F168(cursor + 0x40); j++) {
                if (*(f32 *)(cursor + 0x18) == TMainCursor__sub_8013F14C(get_record_at__11TMainCursorFPvi(cursor + 0x40, j))) {
                    *(f32 *)(cursor + 0x18) = dist;
                    slot = j;
                    break;
                }
            }
        } else {
            slot = TMainCursor__sub_8013F168(cursor + 0x40);
            TMainCursor__sub_8013F13C(cursor + 0x40);
        }
        ((void (*)(s32, f32))set_size__11TMainCursorFf)(get_record_at__11TMainCursorFPvi(cursor + 0x40, slot), dist);
        ((TMainCursor *)(get_record_at__11TMainCursorFPvi(cursor + 0x40, slot)))->set_field2(i);
        set_cursor_id__11TMainCursorFs(get_record_at__11TMainCursorFPvi(cursor + 0x40, slot), obj_getField1c(player));
        found = 1;
    }
    return found;
}

void TMainCursor::reset_cursor_parts() {
    u8 *arg0 = (u8 *)this;
    s32 var_r30;

    TMainCursor__sub_8013F170(((u8 *)&this->m_40), 0);
    var_r30 = 0;
    *(f32 *)((s8 *)arg0 + 0x18) = (f32) TMainCursor__data_805DB0C0;
    do {
        get_record_at__11TMainCursorFPvi((u8 *)&this->m_40, var_r30);
        set_size__11TMainCursorFf(TMainCursor__data_805DB0C0);
        set_cursor_id__11TMainCursorFs(get_record_at__11TMainCursorFPvi((u8 *)&this->m_40, var_r30), 0xFFFF);
        var_r30 += 1;
    } while (var_r30 < 0xA);
}

s32 quick_sort_partition__11TMainCursorFiPvii(s32 self, Ent_8013C678 *a, s32 lo, s32 hi) {
    Ent_8013C678 tmp;
    f32 pivot;
    s32 i;
    s32 j;

    fn_8004438C(&tmp);
    j = hi;
    i = lo - 1;
    pivot = a[hi].key;
    for (;;) {
        while (a[++i].key < pivot) {
        }
        while (i < --j && pivot < a[j].key) {
        }
        if (i >= j) {
            break;
        }
        TMainCursor::store_sorted_record((void*)self, &a[i], &tmp);
        TMainCursor::store_sorted_record((void*)self, &a[j], &a[i]);
        TMainCursor::store_sorted_record((void*)self, &tmp, &a[j]);
    }
    TMainCursor::store_sorted_record((void*)self, &a[i], &tmp);
    TMainCursor::store_sorted_record((void*)self, &a[hi], &a[i]);
    TMainCursor::store_sorted_record((void*)self, &tmp, &a[hi]);
    return i;
}

void TMainCursor::quick_sort(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r3;

    if (arg2 < arg3) {
        temp_r3 = ((s32 (*)(void))quick_sort_partition__11TMainCursorFiPvii)();
        TMainCursor::quick_sort(arg0, arg1, arg2, temp_r3 - 1);
        TMainCursor::quick_sort(arg0, arg1, temp_r3 + 1, arg3);
    }
}

void TMainCursor::reset_slots() {
    s32 arg0 = (s32)this;
    s32 i;
    s32 base;

    base = arg0 + 0x5C;
    i = 0;
    do {
        fn_80044330((void *)(base + 0x40));
        ((TMainCursor *)(base + 0x9C))->reset_slot();
        i += 1;
        base += 0x124;
    } while (i < 4);
}

void TMainCursor::init_slots() { { int i; for (i = 0; i < 4; i++) { init_slot((s32)((void*)i)); } } }

s32 TMainCursor::find_by_pos(s16 arg1, s16 arg2) {
    s32 arg0 = (s32)this;
    s32 i;
    s32 ptr;

    i = 0;
    ptr = arg0 + 0x5C;
loop_1:
    if ((arg1 == (s32) TMainCursor__sub_8013E900(ptr)) && (arg2 == (s32) get_active__11TMainCursorFv(ptr)) && (((TMainCursor *)ptr)->get_selected_entry() != 0)) {
        return ptr;
    }
    i += 1;
    ptr += 0x124;
    if (i >= 4) {
        return 0;
    }
    goto loop_1;
}

}

extern "C" {
TObjPlayer *get_player_by_client_id(u32 id);
s32 check_flag_100__10TObjPlayerFPv(void *player);
s32 reset_key_machine_state__10TObjPlayerFv();
s32 is_key_machine_ready__10TObjPlayerFv();
s16 TObjPlayer__sub_801B5AF8(TObjPlayer *player, s32 index);
void setup_action_channel__11TMainCursorFiPviii(TMainCursor *self, TObjPlayer *player, s32 slot, s32 kind, s32 id);
s32 TMainCursor__sub_8013E2A0(void *list);
s16 TMainCursor__sub_8013E298(void *entry);
s16 TMainCursor__sub_8013E920(void *entry);
void TMainCursor__sub_8013E928(void *entry, s16 v);
void TMainCursor__sub_8013E930(void *entry, s8 v);
}

struct ActionCursor_8013C924 {
    u8 pad0[0x24];
    TMainCursor actions;
    u8 pad8C[0x520 - 0x24 - sizeof(TMainCursor)];
    TMainCursor channel;
};

s32 TMainCursor::bind_action_channels() {
    ActionCursor_8013C924 *self = (ActionCursor_8013C924 *)this;
    s32 i;
    s32 player;
    u8 type;
    s32 slot;
    s32 count;
    u8 enabled;
    u8 *entry;

    if (is_cursor_clear() == 0) {
        return;
    }
    if (TCameraCtrl::get_mode() != 0) {
        return;
    }
    player = (s32)get_player_by_client_id(((TLockOnCursor *)this)->get_target_id());
    if (player == 0) {
        return;
    }
    if (check_flag_100__10TObjPlayerFPv((void *)player) != 0 && is_channel_active__11TMainCursorFv(&self->channel) != 0) {
        type = self->channel.get_type();
        enabled = self->channel.get_enabled();
        if (reset_key_machine_state__10TObjPlayerFv() == 0) {
            if (is_key_machine_ready__10TObjPlayerFv() == 0) {
                return;
            }
            if (type != 4) {
                return;
            }
            if (enabled != 10) {
                return;
            }
        }
        setup_action_channel__11TMainCursorFiPviii(this, (TObjPlayer *)player, 0, type, enabled);
        return;
    }
    count = TMainCursor__sub_8013E2A0(&self->actions);
    entry = (u8 *)self->actions.get_index();
    for (i = 0; i < count; i++) {
        TMainCursor__sub_8013E930(entry, get_action_cursor_priority(this, player, i));
        TMainCursor__sub_8013E928(entry, i);
        entry += 4;
    }
    self->actions.sort_actions_by_priority();
    entry = (u8 *)self->actions.get_index();
    slot = 0;
    for (i = 0; i < count; i++) {
        if (TMainCursor__sub_8013E298(entry) != 0) {
            setup_action_channel__11TMainCursorFiPviii(this, (TObjPlayer *)player, slot, TObjPlayer__sub_801B5AF8((TObjPlayer *)player, TMainCursor__sub_8013E920(entry)), (s16)((TObjPlayer *)player)->get_action_palette_entry(TMainCursor__sub_8013E920(entry)));
            slot++;
        }
        entry += 4;
    }
}
