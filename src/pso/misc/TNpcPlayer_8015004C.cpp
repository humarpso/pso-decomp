#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_801515E0 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct Msg_80150DE8 { u8 hdr[2]; u16 type; f32 x; f32 z; };

struct Npc_80150DE8 { u8 pad[0x78]; void *owner; u8 pad7c[0xAC - 0x7C]; f32 x; f32 y; f32 z; };

struct Msg_80150E44 { u8 hdr[2]; u16 type; f32 x; f32 z; u32 flags; };

struct Obj_80150E44 { u8 pad[0x30]; u32 flags; };

struct Owner_80150E44 { u8 pad[0x94]; Obj_80150E44 *obj; };

struct Npc_80150E44 { u8 pad[0x78]; Owner_80150E44 *owner; u8 pad7c[0xAC - 0x7C]; f32 x; f32 y; f32 z; };

struct V3_80150050 { f32 x, y, z; };

struct Tgt_80150050 { u8 pad[0x38]; V3_80150050 pos; };

struct Mid_80150050 { u8 pad[0x94]; Tgt_80150050 *tgt; };

struct Npc_80150050 { u8 pad0[0x74]; Mid_80150050 *mid; u8 pad78[0x34]; V3_80150050 pos; u8 pad_b8[0x18]; V3_80150050 dst; };

struct Msg_80150A34 {
    u8 pad0[2];
    u16 type;
    s8 kind;
    u8 pad5;
    s8 e;
    s8 one;
    u8 sub[0x2C];
};
struct Owner_80150A34 { u8 pad[0x94]; u8 *actor; };
struct Npc_80150A34 { u8 pad[0x74]; void *p74; Owner_80150A34 *p78; u8 pad7C[4]; u32 flags; };

struct Npc_801518A4 {
    u8 pad0[0x44];
    f32 f44;
    f32 f48;
    u8 pad4C[0x58 - 0x4C];
    f32 f58;
    u8 a5C[0x74 - 0x5C];
    void *p74;
    u8 *p78;
    u8 pad7C[4];
    u32 flags;
};
struct Tgt_801518A4 { s32 a; s32 b; };

typedef s32 M2C_UNK;
struct Cand_80151708 { u32 id; s32 idx; f32 dist; };

struct View_80151708 { s32 count; Cand_80151708 c[10]; };

struct Pos_80151708 { u8 pad[0x38]; f32 x; f32 y; f32 z; };

struct Obj_80151708 { u8 pad[0x38]; f32 pos[0x300 / 4 - 0x38 / 4]; f32 f300; };

struct Owner_80151708 { u8 pad[0x94]; Obj_80151708 *obj; };

struct Npc_80151708 {
    u8 pad0[0x4C];
    f32 f4C;
    u8 pad50[0x5C - 0x50];
    u8 f5C[0x78 - 0x5C];
    Owner_80151708 *f78;
    u8 pad7C[4];
    u32 f80;
    u8 pad84[0xDC - 0x84];
    f32 dst[3];
};

extern "C" {
s32 TNpcPlayer__sub_801528DC(void *);
u16 get_npc_state__10TNpcPlayerFPv(void *);
void TNpcPlayer__sub_80152C48(void *);
void TNpcPlayer__sub_80152D04(void *);
void set_state__10TNpcPlayerFPvs(void *, s16);
void set_type__10TNpcPlayerFPvs(void *, u16);
s32 try_camera_action__10TObjPlayerFii(void *, s32);
s8 fn_801D9870(void *, s16);
void TNpcPlayer__sub_80150A34(Npc_80150A34 *self, s32 kind);
u8 *find_active_entity_by_id(int);
Tgt_801518A4 *TNpcPlayer__sub_80152A30(void *);
s32 TNpcPlayer__sub_801518A4(Npc_801518A4 *arg0);
Tgt_801518A4 *TNpcPlayer__sub_80152A30(void *);
M2C_UNK increment_partner_counter(void *, M2C_UNK);
M2C_UNK npc_counter_reset_if_reached(void *, M2C_UNK, M2C_UNK);
s32 get_condition__10TNpcPlayerFPv(s32);
M2C_UNK request_chatter__10TNpcPlayerFPvUi(void *, M2C_UNK);
s32 TNpcPlayer__sub_8014F728(void *, u32);
u8 *find_active_entity_by_id(int);
void TNpcPlayer__sub_80152A34(void *, u32, s32);
f32 horizontal_distance_squared(void *, void *, int);
extern const f32 TNpcPlayer__data_805DB1F4;
s32 TNpcPlayer__sub_80151708(Npc_80151708 *self);
}

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(int, f32, f32, f32);
M2C_UNK request_chatter__10TNpcPlayerFPvUi(void *, M2C_UNK);
M2C_UNK partner_probe_obstacles(void *);
s32 partner_view_update_hp_change(void *);
M2C_UNK partner_view_update_conditions(s32);
M2C_UNK try_update_target_flag__10TNpcPlayerFPvi(void *, void *, f32);
s32 check_and_set_reached__10TNpcPlayerFPv(s32, f32);
M2C_UNK partner_view_check_moved(s32);
u16 get_npc_type__10TNpcPlayerFPv(void *);
s32 get_condition__10TNpcPlayerFPv(s32);
s32 get_action_state__10TNpcPlayerFPv(void *);
extern const f64 lbl_8043FFD8;
void partner_observe_surroundings(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f32 TBoss6Kakusan__sub_803D8BD8(void *, int, f32, f32);
M2C_UNK TNpcPlayer__sub_803D97B4(void *);
extern const f32 TNpcPlayer__data_805DB1F0;
s32 TNpcPlayer__sub_801515E0(u8 *arg0);
f32 horizontal_distance_squared(void *, void *, int);
extern const f32 lbl_805DB1FC;
extern const f32 lbl_805DB238;
s32 TNpcPlayer__sub_801500F4(u8 *arg0, void * _w1, int _w2);
void reset_move_state__10TNpcPlayerFPv(void *m);
u16 get_npc_type__10TNpcPlayerFPv(void *);
void reset_model__10TNpcPlayerFPv(void *m);
void TNpcPlayer__sub_80150DE8(Npc_80150DE8 *self);
void TNpcPlayer__sub_80152E74(void *m);
u16 get_npc_type__10TNpcPlayerFPv(void *);
void sync_from_lobby__10TNpcPlayerFPv(void *m);
void TNpcPlayer__sub_80150E44(Npc_80150E44 *self);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
extern V3_80150050 lbl_8043FFAC;
void TNpcPlayer__sub_80150050(Npc_80150050 *arg0);
}

extern "C" {

void init_state__10TNpcPlayerFPv(void *arg0);
void render__10TNpcPlayerFv(void);
void update_condition_flags__10TNpcPlayerFPv(u8 *arg0);
M2C_UNK request_chatter__10TNpcPlayerFPvUi(void *, M2C_UNK);
M2C_UNK partner_view_update_conditions(s32);
M2C_UNK partner_view_check_moved(s32);
M2C_UNK reset_partner_counter(void *, M2C_UNK);
M2C_UNK increment_partner_counter(void *, M2C_UNK);
s16 get_partner_counter(void *, M2C_UNK);
M2C_UNK npc_counter_reset_if_reached(void *, M2C_UNK, M2C_UNK);
s32 check_and_set_reached__10TNpcPlayerFPv(s32, f32);
s32 get_condition__10TNpcPlayerFPv(s32);
M2C_UNK reset_fields_8c__10TNpcPlayerFPv(s32);

void render__10TNpcPlayerFv(void) {  }

extern const f32 lbl_805DB240;

void TNpcPlayer__sub_80150050(Npc_80150050 *arg0) {
    Tgt_80150050 *t = arg0->mid->tgt;
    V3_80150050 off = lbl_8043FFAC;
    if (t != NULL) {
        arg0->dst.x = arg0->mid->tgt->pos.x + off.x;
        arg0->dst.y = arg0->mid->tgt->pos.y + off.y;
        arg0->dst.z = arg0->mid->tgt->pos.z + off.z;
        VecCopy__FP3VecPC3Vec(&arg0->pos, &arg0->mid->tgt->pos);
    }
}

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
s32 TNpcPlayer__sub_801500F4(u8 *arg0, void * _w1, int _w2) {
    f32 temp_f1;
    f32 var_f31;
    if (M2C_FIELD(arg0, s32 *, 0x80) & 0x10) {
        return 1;
    }
    var_f31 = lbl_805DB1FC + M2C_FIELD(arg0, f32 *, 0x40);
    if (var_f31 >= lbl_805DB238) {
        var_f31 = lbl_805DB238;
    }
    temp_f1 = horizontal_distance_squared((void *)((void *) ((u8 *)(arg0) + 0xDC)), (void *)((void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x94) + 0x38)), (int)(_w2));
    M2C_FIELD(arg0, f32 *, 0x88) = temp_f1;
    if (temp_f1 >= (var_f31 * var_f31)) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x80) = (s32) (M2C_FIELD(arg0, s32 *, 0x80) & 0xFFFFFEFF);
    return 0;
}
#pragma pop

#pragma push
#pragma fp_contract on
void partner_observe_surroundings(u8 *arg0) {
    f32 temp_f3;
    s32 temp_r3_2;
    s32 temp_r5;
    u8 *temp_r3;
    u8 *temp_r3_3;
    temp_r5 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x74), s32 *, 0x94);
    M2C_FIELD(arg0, f32 *, 0x58) = horizontal_distance_squared((void *) (temp_r5 + 0x38), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x94) + 0x38), (int) (temp_r5));
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) != 0) {
        try_update_target_flag__10TNpcPlayerFPvi((void *) (M2C_FIELD(arg0, u8 **, 0x78)), (void *) (get_npc_type__10TNpcPlayerFPv((void *) (M2C_FIELD(arg0, u8 **, 0x74)))), (f32) (M2C_FIELD(arg0, f32 *, 0x38)));
    } else {
        check_and_set_reached__10TNpcPlayerFPv((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78))), (f32) (M2C_FIELD(arg0, f32 *, 0x38)));
    }
    partner_view_update_conditions((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78))));
    temp_f3 = M2C_FIELD(arg0, f32 *, 0xDC);
    temp_r3 = (u8 *)(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94));
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), s32 *, 0x98) = (s32) (lbl_8043FFD8 * get_ad_end_text_start__10TObjPlayerFv((int) (temp_r3), (f32) (temp_f3 - M2C_FIELD(temp_r3, f32 *, 0x38)), (f32) (M2C_FIELD(arg0, f32 *, 0xE4) - M2C_FIELD(temp_r3, f32 *, 0x40)), (f32) (temp_f3)));
    partner_probe_obstacles((void *) (M2C_FIELD(arg0, u8 **, 0x78)));
    if (partner_view_update_hp_change((void *) (M2C_FIELD(arg0, u8 **, 0x78))) != 0) {
        if (get_condition__10TNpcPlayerFPv((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78)))) & 0x40) {
            request_chatter__10TNpcPlayerFPvUi((void *)((void *) (arg0)), (M2C_UNK)((int) (0xE)));
        } else if (get_condition__10TNpcPlayerFPv((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78)))) & 0x80) {
            request_chatter__10TNpcPlayerFPvUi((void *)((void *) (arg0)), (M2C_UNK)((int) (0xF)));
        } else if (get_condition__10TNpcPlayerFPv((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78)))) & 0x200) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) != 8U) {
                temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x80);
                if (temp_r3_2 & 0x10000) {
                    M2C_FIELD(arg0, s32 *, 0x80) = (s32) (temp_r3_2 & 0xFFFEFFFF);
                } else {
                    request_chatter__10TNpcPlayerFPvUi((void *)((void *) (arg0)), (M2C_UNK)((int) (0x11)));
                }
            }
        } else {
            request_chatter__10TNpcPlayerFPvUi((void *)((void *) (arg0)), (M2C_UNK)((int) (0x10)));
        }
    }
    if (((s32)partner_view_check_moved((s32)((void *) (M2C_FIELD(arg0, u8 **, 0x78))))) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x7C) == 1U) {
            if (get_action_state__10TNpcPlayerFPv((void *) (M2C_FIELD(arg0, u8 **, 0x78))) & 0x80) {
                M2C_FIELD(arg0, u8 *, 0x8C) = 0U;
                M2C_FIELD(arg0, u8 *, 0x8D) = 0U;
                return;
            }
            M2C_FIELD(arg0, u8 *, 0x8D) = (u8) (M2C_FIELD(arg0, u8 *, 0x8D) + 1);
            if ((s8) M2C_FIELD(arg0, u8 *, 0x8D) > 0x1E) {
                M2C_FIELD(arg0, u8 *, 0x8D) = 0x1EU;
            }
            M2C_FIELD(arg0, u8 *, 0x8C) = (u8) (M2C_FIELD(arg0, u8 *, 0x8C) + 1);
        }
    } else {
        temp_r3_3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x78));
        VecCopy__FP3VecPC3Vec((void *) (temp_r3_3 + 0x9C), (void *) (M2C_FIELD(temp_r3_3, u8 **, 0x94) + 0x44));
        M2C_FIELD(arg0, u8 *, 0x8C) = 0U;
        M2C_FIELD(arg0, u8 *, 0x8D) = 0U;
    }
}
#pragma pop

void update_condition_flags__10TNpcPlayerFPv(u8 *arg0) {
    partner_view_check_moved(M2C_FIELD(arg0, s32 *, 0x74));
    partner_view_update_conditions(M2C_FIELD(arg0, s32 *, 0x74));
    if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74)) & 2) {
        if (get_partner_counter(arg0 + 0x5C, 0xA) == 0) {
            request_chatter__10TNpcPlayerFPvUi(arg0, 9);
        }
        increment_partner_counter(arg0 + 0x5C, 0xA);
    } else {
        reset_partner_counter(arg0 + 0x5C, 0xA);
    }
    if (check_and_set_reached__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74), lbl_805DB240) != 0) {
        if (get_condition__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74)) & 8) {
            if (get_partner_counter(arg0 + 0x5C, 9) == 0) {
                request_chatter__10TNpcPlayerFPvUi(arg0, 0xC);
            }
            increment_partner_counter(arg0 + 0x5C, 8);
            npc_counter_reset_if_reached(arg0 + 0x5C, 9, 0x2BC);
            return;
        }
        reset_partner_counter(arg0 + 0x5C, 9);
    }
}

void init_state__10TNpcPlayerFPv(void *arg0) {
    s32 temp_r0;

    reset_fields_8c__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x74));
    reset_fields_8c__10TNpcPlayerFPv(M2C_FIELD(arg0, s32 *, 0x78));
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
    switch (temp_r0) {
    case 0:
        TNpcPlayer__sub_80150050((Npc_80150050 *)(arg0));
        M2C_FIELD(arg0, s32 *, 0x28) = 1;
    case 1:
        return;
    }
}
void TNpcPlayer__sub_80150A34(Npc_80150A34 *self, s32 kind) {
    Msg_80150A34 m;
    u8 *actor;

    TNpcPlayer__sub_80152D04(&m);
    actor = self->p78->actor;
    if (kind == 15 || kind == 16) {
        request_chatter__10TNpcPlayerFPvUi(self, 0x16);
    } else if (kind == 0 || kind == 3 || kind == 6) {
        request_chatter__10TNpcPlayerFPvUi(self, 0x17);
    } else {
        request_chatter__10TNpcPlayerFPvUi(self, 2);
    }
    if (try_camera_action__10TObjPlayerFii(actor, kind) != 0) {
        m.type = get_npc_type__10TNpcPlayerFPv(self->p78);
        m.kind = kind;
        m.one = 1;
        if (kind == 15 || kind == 16) {
            if (kind == 15) {
                self->flags |= 0x10000;
            }
            m.e = fn_801D9870(actor + 0x428, kind);
            set_type__10TNpcPlayerFPvs(m.sub, ((s32 (*)(void *))get_npc_type__10TNpcPlayerFPv)(self->p74));
            set_state__10TNpcPlayerFPvs(m.sub, 0);
        } else {
            m.e = fn_801D9870(actor + 0x428, kind);
            set_type__10TNpcPlayerFPvs(m.sub, ((s32 (*)(void *))get_npc_state__10TNpcPlayerFPv)(self->p78));
            set_state__10TNpcPlayerFPvs(m.sub, TNpcPlayer__sub_801528DC(self->p78));
        }
        TNpcPlayer__sub_80152C48(&m);
    }
}

void TNpcPlayer__sub_80150DE8(Npc_80150DE8 *self) {
    Msg_80150DE8 m;
    reset_move_state__10TNpcPlayerFPv(&m);
    if (self->owner != 0) {
        m.type = get_npc_type__10TNpcPlayerFPv(self->owner);
        m.x = self->x;
        m.z = self->z;
        reset_model__10TNpcPlayerFPv(&m);
    }
}

void TNpcPlayer__sub_80150E44(Npc_80150E44 *self) {
    Msg_80150E44 m;
    TNpcPlayer__sub_80152E74(&m);
    if (self->owner != 0) {
        m.type = get_npc_type__10TNpcPlayerFPv(self->owner);
        m.x = self->x;
        m.z = self->z;
        m.flags = 0;
        if (self->owner->obj->flags & 0x100000) {
            m.flags |= 8;
        }
        sync_from_lobby__10TNpcPlayerFPv(&m);
    }
}

#pragma push
#pragma fp_contract on
s32 TNpcPlayer__sub_801515E0(u8 *arg0) {
    Stack_801515E0 stack;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    u8 *temp_r4;
    if ((s32) M2C_FIELD(arg0, s32 *, 0x84) != 0) {
        if (M2C_FIELD(arg0, s32 *, 0x34) & 0x80) {
            temp_f0 = M2C_FIELD(arg0, f32 *, 0x54);
            if (M2C_FIELD(arg0, f32 *, 0x88) <= (temp_f0 * temp_f0)) {
                temp_r4 = (u8 *)(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94));
                stack.sp8 = M2C_FIELD(arg0, f32 *, 0xDC) - M2C_FIELD(temp_r4, f32 *, 0x38);
                temp_f2 = M2C_FIELD(arg0, f32 *, 0xE4);
                temp_f1 = temp_f2 - M2C_FIELD(temp_r4, f32 *, 0x40);
                stack.spC = TNpcPlayer__data_805DB1F0;
                stack.sp10 = temp_f1;
                if (TNpcPlayer__data_805DB1F0 != TBoss6Kakusan__sub_803D8BD8((void *) (&stack.sp8), (int) (temp_r4), (f32) (temp_f1), (f32) (temp_f2))) {
                    TNpcPlayer__sub_803D97B4((void *) (&stack.sp8));
                }
                M2C_FIELD(arg0, f32 *, 0xDC) = (f32) -((M2C_FIELD(arg0, f32 *, 0x54) * stack.sp8) - M2C_FIELD(arg0, f32 *, 0xDC));
                M2C_FIELD(arg0, f32 *, 0xE4) = (f32) -((M2C_FIELD(arg0, f32 *, 0x54) * stack.sp10) - M2C_FIELD(arg0, f32 *, 0xE4));
                M2C_FIELD(arg0, f32 *, 0xE0) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x78), void **, 0x94), f32 *, 0x300);
            } else {
                VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xDC), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x74), s32 *, 0x94) + 0x2FC));
            }
        } else {
            VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xDC), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x74), s32 *, 0x94) + 0x2FC));
        }
    } else {
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xDC), (void *) (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x74), s32 *, 0x94) + 0x2FC));
    }
    return 1;
}
#pragma pop

s32 TNpcPlayer__sub_80151708(Npc_80151708 *self) {
    s32 i;
    View_80151708 *view;
    Pos_80151708 *tgt;
    view = (View_80151708 *)TNpcPlayer__sub_80152A30(self->f78);
    if (view->count >= 3) {
        self->f80 |= 0x2000;
        increment_partner_counter(self->f5C, 6);
        if (npc_counter_reset_if_reached(self->f5C, 6, 100) != 0) {
            if (get_condition__10TNpcPlayerFPv((s32)self->f78) & 8) {
                request_chatter__10TNpcPlayerFPvUi(self, 1);
            } else {
                request_chatter__10TNpcPlayerFPvUi(self, 0);
            }
        }
    } else {
        self->f80 &= ~0x2000;
    }
    if (view->count != 0) {
        for (i = 0; i < view->count; i++) {
            if (TNpcPlayer__sub_8014F728(self->f78, view->c[i].id) != 0) {
                tgt = (Pos_80151708 *)find_active_entity_by_id((u16)view->c[0].id);
                TNpcPlayer__sub_80152A34(self->f78, view->c[i].id, view->c[i].idx);
                self->dst[0] = tgt->x;
                self->dst[1] = self->f78->obj->f300;
                self->dst[2] = tgt->z;
                if (((f32 (*)(void *, void *))horizontal_distance_squared)(self->dst, self->f78->obj->pos) < (TNpcPlayer__data_805DB1F4 + self->f4C) * (TNpcPlayer__data_805DB1F4 + self->f4C)) {
                    self->f80 |= 0x1000;
                }
                self->f80 &= ~0x40;
                return 1;
            }
        }
        request_chatter__10TNpcPlayerFPvUi(self, 8);
        self->f80 |= 0x40;
    }
    return 0;
}

s32 TNpcPlayer__sub_801518A4(Npc_801518A4 *arg0) {
    Tgt_801518A4 *t;
    u8 *o;
    f32 r2;

    t = TNpcPlayer__sub_80152A30(arg0->p78);
    r2 = arg0->f44 * arg0->f44;
    if (get_action_state__10TNpcPlayerFPv(arg0->p74) & 2) {
        arg0->flags &= ~0x100;
        return 0;
    }
    if (get_condition__10TNpcPlayerFPv((s32)arg0->p78) & 8) {
        arg0->flags |= 0x100;
        return 1;
    }
    if (arg0->f58 >= r2) {
        arg0->flags |= 0x100;
        if (t->a != 0) {
            increment_partner_counter(arg0->a5C, 5);
            if (npc_counter_reset_if_reached(arg0->a5C, 5, 3) != 0) {
                o = find_active_entity_by_id((u16)t->b);
                arg0->flags &= ~0x8000;
                if (o != 0) {
                    if (((f32 (*)(void *, void *))horizontal_distance_squared)(o + 0x38, *(u8 **)(arg0->p78 + 0x94) + 0x38) < arg0->f48 * arg0->f48) {
                        arg0->flags |= 0x8080;
                    }
                }
            }
        }
        return 1;
    }
    if (arg0->flags & 0x100) {
        return 1;
    }
    arg0->flags &= ~0x100;
    return 0;
}

}
