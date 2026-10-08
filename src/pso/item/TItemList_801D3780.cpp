#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_801D401C_lbl_804C4498 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_801D401C_lbl_804C4498_size[sizeof(RecoveredGlobal_801D401C_lbl_804C4498) == 0x18 ? 1 : -1];

struct RecoveredGlobal_801D39C8_lbl_804C4468 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_801D3BD4_lbl_804C4480 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Vec_801D3E20 { f32 x, y, z; };

struct Body_801D3E20 { void *colliders; s32 count; Vec_801D3E20 position; s32 facing; };

struct Actor_801D3E20 {
    u8 pad[0x30];
    u32 flags;
    u8 pad34[4];
    Vec_801D3E20 pos;
    u8 pad44[0x1c];
    s32 facing;
    u8 pad64[0x40];
    void *colliders;
    s32 count;
};

struct Search_801D3F3C {
    u8 pad[0x1d];
    s8 ring;
    s8 sample;
    s8 count;
    u8 pad20[8];
    u32 heading;
    s32 step;
    u32 angle;
    f32 radius;
};

typedef s32 M2C_UNK;

struct Req_801D3780 {
    u32 status;
    s32 source;
    u8 item[0xc];
    s32 id;
    s32 extra;
};

struct Shape_801D3C38 {
    u8 pad0[0xC];
    f32 radius;
    u8 pad10[4];
    s32 f14;
    s32 mask;
};

struct Ground_801D3C38 { u8 pad0[4]; Vec_801D3E20 *pos; };

struct Search_801D3C38 {
    u8 pad[0x1d];
    s8 ring;
    s8 sample;
    s8 count;
    u8 pad20[0xC];
    s32 step;
    s32 angle;
    f32 radius;
    Vec_801D3E20 origin;
    Vec_801D3E20 candidate;
    s32 online;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *);
void __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK lbl_804C4498[];
extern const f32 lbl_805DC3D4;
u8 *TItemList__sub_801D401C(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s8 arg4);
u8 *TItemList__sub_801D401C(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s8 arg4);
s32 check_player_action_allowed(void);
s32 fn_801D4270(s32);
s32 load_character_from_card__23TAdSinglePlyChrSelectGCFv(void);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK remove_list_entry_by_id(int);
M2C_UNK TItemList__sub_801D5884(void *, int);
u8 *TItemList__sub_801D58E4(void *);
extern M2C_UNK lbl_804C4468[];
u8 *TItemList__sub_801D39C8(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, s8 arg5);
u8 *TItemList__sub_801D401C(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s8 arg4);
M2C_UNK TItemList__sub_801D5884(void *, int);
extern M2C_UNK lbl_804C4480[];
u8 *ct_init_placement_ring__9TItemListFPvPviPvPvc(u8 *arg0, u8 *arg1, s32 arg2, u8 *arg3, u8 *arg4, s8 arg5);
s32 get_lobby_flag__6TLobbyFv(void);
s32 get_enemy_count__9TObjEneDDFv(void);
s32 get_game_mode__6TLobbyFv(void);
Actor_801D3E20 *get_player_data__10TObjPlayerFi(s32 i);
f32 horizontal_distance_squared(void *, void *);
void VecCopy__FP3VecPC3Vec(void *, void *);
void *refresh_actor_body_spheres(Body_801D3E20, Body_801D3E20);
extern const f32 lbl_805DC3D0;
void *find_placement_obstruction(void *self, Body_801D3E20 *s);
extern const f32 lbl_805DC3C8;
s32 reset_placement_search_ring(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
void lookup_entry_by_count__9TItemListFPvi(void *, int);
void TItemList__sub_801D59A0(void *, int);
void TItemList__sub_801D5A70(void *);
void update_placement_search(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
void assign_id_and_init__5TItemFPvii(void *, s32, void *);
s32 get_item_type_or_default__9TItemListFPv(void *);
void send_code_45_1__10TObjPlayerFi(void *);
void send_6x2A_drop_item__10TObjPlayerFv(void *, s32, void *, s32);
void send_6x29_delete_item__10TObjPlayerFPvii(void *, s32, s32);
void *get_player_by_client_id(u16);
void *get_ptr_0x44__9TItemListFPv(void *);
void lookup_entry_by_count__9TItemListFPvi(void *, int);
s32 TItemList__sub_801D58DC(void *);
u8 *TItemList__sub_801D58E4(void *);
void TItemList__sub_801D591C(void *);
void TItemList__sub_801D59A0(void *, int);
void run_item_drop_search_task(u8 *arg0);
void VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
s8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv();
Ground_801D3C38 *csnVecterUnder(Vec_801D3E20 *, s32);
M2C_UNK disconnect_protocol__6TLobbyFv();
void *find_placement_obstruction(void *self, Body_801D3E20 *s);
s32 reset_placement_search_ring(void *arg0);
s32 check_player_action_allowed(void);
s32 TAdPlayerLoadGC__sub_801E1B50(s32);
s32 probe_card_slot__15TAdPlayerLoadGCFi(s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern Shape_801D3C38 lbl_804C43E8;
extern Body_801D3E20 lbl_804C4414;
extern const f32 lbl_805DC3C8;
extern const f32 lbl_805DC3CC;
s32 step_placement_search(Search_801D3C38 *s);
}

extern "C" {

void * TItemList__sub_801D3B00(void *arg0, void *arg1, void *arg2, s8 arg3);
void *TItemList__sub_801D3B64(void *arg0, s16 arg1);
void *TItemList__sub_801D3FC4(void *arg0, s16 arg1);
void * create_node__9TItemListFPvPvPvPv(void *arg0, void *arg1, void *arg2, s8 arg3);
void *destroy__9TItemListFPvs(void *arg0, s16 arg1);
M2C_UNK decrement_placement_search_pending(void *, s32);
M2C_UNK clear_placement_search_slot(void *, s32);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);

extern void *tl_07;

void run_item_drop_search_task(u8 *arg0) {
    Req_801D3780 *r;
    void *player;
    switch (step_placement_search((Search_801D3C38 *)(arg0))) {
    case 0:
        return;
    case 1:
        TItemList__sub_801D59A0(arg0, *(s32 *)(arg0 + 0x54));
        TItemList__sub_801D591C(arg0);
        r = (Req_801D3780 *)TItemList__sub_801D58E4(arg0);
        player = get_player_by_client_id(TItemList__sub_801D58DC(arg0));
        if (player != NULL) {
            if (r->id == -1) {
                if (r->source == -1) {
                    assign_id_and_init__5TItemFPvii(r->item, TItemList__sub_801D58DC(arg0), get_ptr_0x44__9TItemListFPv(arg0));
                    send_6x29_delete_item__10TObjPlayerFPvii(player, r->source, r->extra);
                    send_code_45_1__10TObjPlayerFi(player);
                } else {
                    assign_id_and_init__5TItemFPvii(r->item, TItemList__sub_801D58DC(arg0), get_ptr_0x44__9TItemListFPv(arg0));
                    send_6x29_delete_item__10TObjPlayerFPvii(player, r->source, get_item_type_or_default__9TItemListFPv(r->item));
                    send_code_45_1__10TObjPlayerFi(player);
                }
            } else {
                send_6x2A_drop_item__10TObjPlayerFv(player, r->source, get_ptr_0x44__9TItemListFPv(arg0), get_item_type_or_default__9TItemListFPv(r->item));
                send_code_45_1__10TObjPlayerFi(player);
            }
        }
        break;
    case 2:
        lookup_entry_by_count__9TItemListFPvi(arg0, *(s32 *)(arg0 + 0x54));
        break;
    }
    queue_destruction__7TObjectFv(arg0);
}

void * create_node__9TItemListFPvPvPvPv(void *arg0, void *arg1, void *arg2, s8 arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = TItemList__sub_801D39C8((u8 *)(o), (s32)(tl_07), (s32)(arg0), (u8 *)(arg1), (s32)(arg2), arg3);
    }
    return o;
}

extern M2C_UNK lbl_804C4468[];

void *destroy__9TItemListFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4468;
        clear_placement_search_slot(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        decrement_placement_search_pending(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D3FC4((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern void *tl_07;

typedef char RecoveredGlobal_801D39C8_lbl_804C4468_size[sizeof(RecoveredGlobal_801D39C8_lbl_804C4468) == 0x18 ? 1 : -1];
u8 *TItemList__sub_801D39C8(u8 *arg0, s32 arg1, s32 arg2, u8 *arg3, s32 arg4, s8 arg5) {
    u8 *temp_r3;
    TItemList__sub_801D401C((u8 *)(arg0), (u8 *)(arg1), (u8 *)(arg3), (u8 *)(arg4), arg5);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801D39C8_lbl_804C4468 *)&lbl_804C4468).value;
    M2C_FIELD(arg0, s32 *, 0x54) = arg2;
    TItemList__sub_801D5884((void *) (arg0), (int) (1));
    reset_placement_search_ring((void *)((void *) (arg0)));
    if (check_player_action_allowed() != 0) {
        temp_r3 = (u8 *)(TItemList__sub_801D58E4(arg0));
        if (fn_801D4270(M2C_FIELD(temp_r3, s32 *, 4)) != 0) {
            remove_list_entry_by_id((int) (M2C_FIELD(temp_r3, s32 *, 4)));
            if (load_character_from_card__23TAdSinglePlyChrSelectGCFv() != 0) {
                queue_destruction__7TObjectFv((void *) (arg0));
                return arg0;
            }
            M2C_FIELD(arg0, s32 *, 0x50) = 1;
            goto block_5;
        }
    }
block_5:
    return arg0;
}

void update_placement_search(u8 *arg0) {
    switch (step_placement_search((Search_801D3C38 *)(arg0))) {
    case 0:
        return;
    case 1:
        TItemList__sub_801D59A0(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D5A70(arg0);
        break;
    case 2:
        lookup_entry_by_count__9TItemListFPvi(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        break;
    }
    queue_destruction__7TObjectFv(arg0);
}

void * TItemList__sub_801D3B00(void *arg0, void *arg1, void *arg2, s8 arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x58);
    if (o != NULL) {
        o = ct_init_placement_ring__9TItemListFPvPviPvPvc((u8 *)(o), (u8 *)(tl_07), (s32)(arg0), (u8 *)(arg1), (u8 *)(arg2), arg3);
    }
    return o;
}

extern M2C_UNK lbl_804C4480[];

void *TItemList__sub_801D3B64(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4480;
        clear_placement_search_slot(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        decrement_placement_search_pending(arg0, M2C_FIELD(arg0, s32 *, 0x54));
        TItemList__sub_801D3FC4((void *)(arg0), (s16)(0));
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804C4498[];

typedef char RecoveredGlobal_801D3BD4_lbl_804C4480_size[sizeof(RecoveredGlobal_801D3BD4_lbl_804C4480) == 0x18 ? 1 : -1];
u8 *ct_init_placement_ring__9TItemListFPvPviPvPvc(u8 *arg0, u8 *arg1, s32 arg2, u8 *arg3, u8 *arg4, s8 arg5) {
    TItemList__sub_801D401C((u8 *)(arg0), (u8 *)(arg1), (u8 *)(arg3), (u8 *)(arg4), arg5);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801D3BD4_lbl_804C4480 *)&lbl_804C4480).value;
    M2C_FIELD(arg0, s32 *, 0x54) = arg2;
    TItemList__sub_801D5884((void *)(arg0), (int)(0U));
    reset_placement_search_ring((void *)(arg0));
    return arg0;
}

#pragma push
#pragma fp_contract on
s32 step_placement_search(Search_801D3C38 *s) {
    Ground_801D3C38 *g;
    if (check_player_action_allowed() != 0 && s->online != 0 &&
        probe_card_slot__15TAdPlayerLoadGCFi(get_chr_select_state__23TAdSinglePlyChrSelectGCFv()) != 1) {
        disconnect_protocol__6TLobbyFv();
        queue_destruction__7TObjectFv(s);
        return 2;
    }
    if (s->ring > 5) {
        s->ring = 1;
        reset_placement_search_ring(s);
        return 2;
    }
    if (s->sample >= s->count) {
        s->ring++;
        reset_placement_search_ring(s);
    }
    s->candidate.x = s->radius * sin_table_lookup(s->angle) + s->origin.x;
    s->candidate.y = s->origin.y;
    s->candidate.z = s->radius * cos_table_lookup(s->angle) + s->origin.z;
    g = csnVecterUnder(&s->candidate, 0x41);
    if (g == NULL) {
        s->angle += s->step;
        s->sample++;
        return 0;
    }
    s->candidate.y = lbl_805DC3C8 + g->pos->y;
    lbl_804C43E8.radius = lbl_805DC3CC;
    lbl_804C43E8.f14 = 0;
    lbl_804C43E8.mask = 0x31F03;
    VecCopy__FP3VecPC3Vec(&lbl_804C4414.position, &s->candidate);
    if (find_placement_obstruction(s, &lbl_804C4414) != NULL) {
        s->angle += s->step;
        s->sample++;
        return 0;
    }
    if (check_player_action_allowed() != 0 && s->online != 0 &&
        TAdPlayerLoadGC__sub_801E1B50(get_chr_select_state__23TAdSinglePlyChrSelectGCFv()) != 0) {
        return 0;
    }
    return 1;
}
#pragma pop

void *find_placement_obstruction(void *self, Body_801D3E20 *s) {
    s32 end = get_lobby_flag__6TLobbyFv();
    s32 i;
    for (i = get_game_mode__6TLobbyFv() + get_enemy_count__9TObjEneDDFv(); i < end; i++) {
        Actor_801D3E20 *a = get_player_data__10TObjPlayerFi(i);
        if (a != 0 && a->colliders != 0 && !(a->flags & 0x800)) {
            if (lbl_805DC3D0 > horizontal_distance_squared(&s->position, &a->pos)) {
                Body_801D3E20 b;
                void *r;
                b.colliders = a->colliders;
                b.count = a->count;
                VecCopy__FP3VecPC3Vec(&b.position, &a->pos);
                b.facing = a->facing;
                r = refresh_actor_body_spheres(*s, b);
                if (r != 0) {
                    return r;
                }
            }
        }
    }
    return 0;
}

s32 reset_placement_search_ring(void *arg0) {
    Search_801D3F3C *s = (Search_801D3F3C *)arg0;
    s->sample = 0;
    if (s->ring == 0) {
        s->count = 1;
    } else {
        s->count = s->ring * 4;
    }
    s->step = 0x10000 / s->count;
    s->angle = s->heading;
    s->radius = lbl_805DC3C8 * s->ring;
}

void *TItemList__sub_801D3FC4(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804C4498;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv((void *)(arg0));
        }
    }
    return arg0;
}
u8 *TItemList__sub_801D401C(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, s8 arg4) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_801D401C_lbl_804C4498 *)&lbl_804C4498).value;
    if (arg2 == NULL) {
        M2C_FIELD(arg0, u16 *, 0x20) = 0xFFFFU;
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    } else {
        M2C_FIELD(arg0, u16 *, 0x20) = obj_getField1c(arg2);
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) get_stat_by_key_state__10TObjPlayerFPv(arg2);
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg2, s32 *, 0x60);
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg3);
    M2C_FIELD(arg0, s8 *, 0x1C) = arg4;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) lbl_805DC3D4;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) lbl_805DC3D4;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) lbl_805DC3D4;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    return arg0;
}

}
